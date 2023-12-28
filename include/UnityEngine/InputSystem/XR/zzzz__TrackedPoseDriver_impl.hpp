#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
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
  constexpr static std::size_t addrs = 0x2ac5d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_trackingType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_trackingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_trackingType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_updateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType (
    ::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_updateType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_updateType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_updateType", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ac5d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_positionInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac5d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionInput", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ac6100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_rotationInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputActionProperty)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac6114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationInput", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ac6478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ac5f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.BindRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ac62d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "BindRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ac6490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2ac5e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnbindRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2ac6180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UnbindRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac64a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionPerformed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnPositionCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ac6508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionCanceled", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationPerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac6560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationPerformed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnRotationCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ac65c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationCanceled", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac6610;

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
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ac6734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ac67e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac689c;

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
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ac6908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "UpdateCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ac6970;

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
  constexpr static std::size_t addrs = 0x2ac698c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.SetLocalTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ac69ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.HasStereoCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac667c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "HasStereoCamera", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.PerformUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ac6a78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_positionAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac6a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_positionAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_positionAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac6aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionAction", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.get_rotationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac6ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "get_rotationAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.set_rotationAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ac6af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationAction", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac6b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac6b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac6b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::TrackedPoseDriver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::TrackedPoseDriver::*)()>(
    &::UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ac6bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::InputSystem::XR::TrackedPoseDriver::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_TrackingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_TrackingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackingType;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_TrackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackingType = value;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_UpdateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_UpdateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateType;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_UpdateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateType = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionInput = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationInput;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationInput;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationInput = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPosition;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_CurrentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_CurrentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentRotation;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_CurrentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentRotation = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RotationBound = value;
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionBound;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionBound;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PositionBound = value;
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_PositionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PositionAction;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_PositionAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PositionAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_RotationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RotationAction;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_RotationAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RotationAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_HasMigratedActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasMigratedActions;
}
constexpr bool const& UnityEngine::InputSystem::XR::TrackedPoseDriver::__get_m_HasMigratedActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasMigratedActions;
}
constexpr void UnityEngine::InputSystem::XR::TrackedPoseDriver::__set_m_HasMigratedActions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasMigratedActions = value;
}
inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_trackingType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_trackingType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_trackingType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_trackingType", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__TrackingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType UnityEngine::InputSystem::XR::TrackedPoseDriver::get_updateType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_updateType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_updateType(::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_updateType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::__TrackedPoseDriver__UpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_positionInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionInput", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_rotationInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationInput(::UnityEngine::InputSystem::InputActionProperty value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationInput", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionProperty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::BindRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "BindRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnbindRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UnbindRotation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionPerformed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnPositionCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnPositionCanceled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationPerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationPerformed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnRotationCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "OnRotationCanceled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UpdateCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "UpdateCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::OnBeforeRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "OnBeforeRender", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "SetLocalTransform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPosition, newRotation);
}
inline bool UnityEngine::InputSystem::XR::TrackedPoseDriver::HasStereoCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "HasStereoCamera", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::PerformUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "PerformUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_positionAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_positionAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_positionAction(::UnityEngine::InputSystem::InputAction* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_positionAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::XR::TrackedPoseDriver::get_rotationAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                                                             "get_rotationAction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::set_rotationAction(::UnityEngine::InputSystem::InputAction* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "set_rotationAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* UnityEngine::InputSystem::XR::TrackedPoseDriver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>());
}
inline void UnityEngine::InputSystem::XR::TrackedPoseDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::TrackedPoseDriver*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::TrackedPoseDriver::TrackedPoseDriver() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
