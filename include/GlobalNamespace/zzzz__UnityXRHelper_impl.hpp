#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRController_def.hpp"
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::__UnityXRHelper__VRControllerManufacturerName(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::__UnityXRHelper__VRControllerManufacturerName() {}
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::HTC{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Oculus{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Valve{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Microsoft{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName::Unknown{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_inputFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_inputFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_inputFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_inputFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_inputFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_inputFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_inputFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_inputFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_vrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fa04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_vrFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_vrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225faa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_vrFocusWasCapturedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_vrFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_vrFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_vrFocusWasReleasedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_vrFocusWasReleasedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_hmdUnmountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_hmdUnmountedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_hmdUnmountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_hmdUnmountedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_hmdMountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_hmdMountedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fe48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_hmdMountedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_controllersDidChangeReferenceEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225fee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_controllersDidChangeReferenceEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_controllersDidChangeReferenceEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225ff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_controllersDidChangeReferenceEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.add_controllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::add_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x226001c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_controllersDidDisconnectEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.remove_controllersDidDisconnectEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::System::Action*)>(
    &::GlobalNamespace::UnityXRHelper::remove_controllersDidDisconnectEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22600b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_controllersDidDisconnectEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_hasInputFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_hasVrFocus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226015c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_hasVrFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.set_hasVrFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::set_hasVrFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2260164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "set_hasVrFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_isAlwaysWireless
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_isAlwaysWireless)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_isAlwaysWireless",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_vrPlatformSDK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRPlatformSDK (::GlobalNamespace::UnityXRHelper::*)()>(
    &::GlobalNamespace::UnityXRHelper::get_vrPlatformSDK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_vrPlatformSDK",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.get_loggerPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::get_loggerPrefix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2260180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_loggerPrefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.set_userPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::set_userPresence)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22601c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "set_userPresence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::Start)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2260240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnTrackingOriginUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRInputSubsystem*)>(
    &::GlobalNamespace::UnityXRHelper::OnTrackingOriginUpdated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2260714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnTrackingOriginUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnboundaryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRInputSubsystem*)>(
    &::GlobalNamespace::UnityXRHelper::OnboundaryChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x226074c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnboundaryChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2260768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnUserPresenceCanceled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(
    &::GlobalNamespace::UnityXRHelper::OnUserPresenceCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnUserPresenceCanceled", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnUserPresenceStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(
    &::GlobalNamespace::UnityXRHelper::OnUserPresenceStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226099c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnUserPresenceStarted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(bool)>(&::GlobalNamespace::UnityXRHelper::OnApplicationPause)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22609a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnApplicationPause",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnPauseGamePerformed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(
    &::GlobalNamespace::UnityXRHelper::OnPauseGamePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22609d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnPauseGamePerformed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.OnPauseGameCancelled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(
    &::GlobalNamespace::UnityXRHelper::OnPauseGameCancelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22609e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnPauseGameCancelled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleNewXRNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNodeState)>(
    &::GlobalNamespace::UnityXRHelper::HandleNewXRNode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22609ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "HandleNewXRNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.UpdateManufacturerOnNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x226067c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "UpdateManufacturerOnNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.HandleRemovedXRNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNodeState)>(
    &::GlobalNamespace::UnityXRHelper::HandleRemovedXRNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2260a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "HandleRemovedXRNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.ControllerFromNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UnityXRController* (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::ControllerFromNode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2260a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "ControllerFromNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, float_t, float_t, float_t)>(
    &::GlobalNamespace::UnityXRHelper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2260a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.StopHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::StopHaptics)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2260c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "StopHaptics", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.TryGetPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode, ByRef<::UnityEngine::Pose>)>(
    &::GlobalNamespace::UnityXRHelper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2260d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "TryGetPoseOffsetForNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetPoseOffsetForManufacturer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::UnityXRHelper::*)(
    ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName)>(&::GlobalNamespace::UnityXRHelper::GetPoseOffsetForManufacturer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2260e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetPoseOffsetForManufacturer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetNodePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)(
    ::UnityEngine::XR::XRNode, int32_t, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&::GlobalNamespace::UnityXRHelper::GetNodePose)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2260fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetNodePose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetAnyJoystickMaxAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::UnityXRHelper::*)()>(
    &::GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2261260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                                                                               "GetAnyJoystickMaxAxis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetTriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::GetTriggerValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2261264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetTriggerValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetThumbstickValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::UnityXRHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::UnityXRHelper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x226126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetThumbstickValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetMenuButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetMenuButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22612e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetMenuButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.GetMenuButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22612ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetMenuButtonDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::RefreshControllersReference)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2260730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                                                                               "RefreshControllersReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.ReadHeadPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(
    &::GlobalNamespace::UnityXRHelper::ReadHeadPose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22611c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "ReadHeadPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22612f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityXRHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnityXRHelper::*)()>(&::GlobalNamespace::UnityXRHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22612fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
constexpr GlobalNamespace::UnityXRHelper::operator ::GlobalNamespace::IVRPlatformHelper*() noexcept {
  return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::UnityXRHelper::i___GlobalNamespace__IVRPlatformHelper() noexcept {
  return static_cast<::GlobalNamespace::IVRPlatformHelper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
constexpr GlobalNamespace::UnityXRHelper::operator ::GlobalNamespace::IVerboseLogger*() noexcept {
  return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVerboseLogger"
constexpr ::GlobalNamespace::IVerboseLogger* GlobalNamespace::UnityXRHelper::i___GlobalNamespace__IVerboseLogger() noexcept {
  return static_cast<::GlobalNamespace::IVerboseLogger*>(static_cast<void*>(this));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasCapturedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasCapturedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasCapturedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasCapturedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputFocusWasCapturedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasReleasedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasReleasedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_inputFocusWasReleasedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputFocusWasReleasedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputFocusWasReleasedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasCapturedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasCapturedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasCapturedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasCapturedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrFocusWasCapturedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasReleasedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasReleasedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_vrFocusWasReleasedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrFocusWasReleasedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrFocusWasReleasedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdUnmountedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdUnmountedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdUnmountedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdUnmountedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_hmdUnmountedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hmdUnmountedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdMountedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdMountedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_hmdMountedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmdMountedEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_hmdMountedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hmdMountedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidChangeReferenceEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidChangeReferenceEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidChangeReferenceEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidChangeReferenceEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllersDidChangeReferenceEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidDisconnectEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidDisconnectEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get_controllersDidDisconnectEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersDidDisconnectEvent;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllersDidDisconnectEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__hasVrFocus_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus_k__BackingField;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__hasVrFocus_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasVrFocus_k__BackingField;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__hasVrFocus_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasVrFocus_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::UnityXRHelper::__cordl_internal_get__oculusOffsetPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusOffsetPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__oculusOffsetPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusOffsetPose;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__oculusOffsetPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusOffsetPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::UnityXRHelper::__cordl_internal_get__valveIndexOffsetPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valveIndexOffsetPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__valveIndexOffsetPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valveIndexOffsetPose;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__valveIndexOffsetPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valveIndexOffsetPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::UnityXRHelper::__cordl_internal_get__htcViveOffsetPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____htcViveOffsetPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__htcViveOffsetPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____htcViveOffsetPose;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__htcViveOffsetPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____htcViveOffsetPose = value;
}
constexpr ::GlobalNamespace::__UnityXRController__Configuration*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftControllerConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftControllerConfiguration;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftControllerConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftControllerConfiguration;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__leftControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftControllerConfiguration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityXRController__Configuration*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightControllerConfiguration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightControllerConfiguration;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const&
GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightControllerConfiguration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightControllerConfiguration;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__rightControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightControllerConfiguration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresenceActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresenceActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresenceActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresenceActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__userPresenceActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userPresenceActionReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headPositionActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headPositionActionReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headOrientationActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headOrientationActionReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameActionReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameActionReference;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameActionReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameActionReference;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseGameActionReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UnityXRController*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__leftController(::GlobalNamespace::UnityXRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UnityXRController*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__rightController(::GlobalNamespace::UnityXRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headPositionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPositionAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headPositionAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headPositionAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__headOrientationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headOrientationAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__headOrientationAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headOrientationAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresenceAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresenceAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresenceAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresenceAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__userPresenceAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userPresenceAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputAction*& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameAction;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__pauseGameAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseGameAction;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseGameAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__scrollingLastFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollingLastFrame;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__scrollingLastFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollingLastFrame;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__scrollingLastFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollingLastFrame = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__userPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userPresence;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__userPresence(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userPresence = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__isPausePressed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPausePressed;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__isPausePressed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPausePressed;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__isPausePressed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPausePressed = value;
}
constexpr bool& GlobalNamespace::UnityXRHelper::__cordl_internal_get__wasPausePressedThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasPausePressedThisFrame;
}
constexpr bool const& GlobalNamespace::UnityXRHelper::__cordl_internal_get__wasPausePressedThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasPausePressedThisFrame;
}
constexpr void GlobalNamespace::UnityXRHelper::__cordl_internal_set__wasPausePressedThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasPausePressedThisFrame = value;
}
inline void GlobalNamespace::UnityXRHelper::add_inputFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_inputFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_inputFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_inputFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_inputFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_inputFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_inputFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_inputFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_vrFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_vrFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_vrFocusWasCapturedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_vrFocusWasCapturedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_vrFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_vrFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_vrFocusWasReleasedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_vrFocusWasReleasedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_hmdUnmountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_hmdUnmountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_hmdUnmountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_hmdUnmountedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_hmdMountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_hmdMountedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_hmdMountedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_controllersDidChangeReferenceEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_controllersDidChangeReferenceEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_controllersDidChangeReferenceEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_controllersDidChangeReferenceEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::add_controllersDidDisconnectEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "add_controllersDidDisconnectEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::remove_controllersDidDisconnectEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "remove_controllersDidDisconnectEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRHelper::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_hasInputFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_hasVrFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::set_hasVrFocus(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "set_hasVrFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnityXRHelper::get_isAlwaysWireless() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_isAlwaysWireless",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRPlatformSDK GlobalNamespace::UnityXRHelper::get_vrPlatformSDK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_vrPlatformSDK",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRPlatformSDK, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnityXRHelper::get_loggerPrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "get_loggerPrefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::set_userPresence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "set_userPresence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnityXRHelper::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::OnTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnTrackingOriginUpdated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputSystem);
}
inline void GlobalNamespace::UnityXRHelper::OnboundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnboundaryChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRInputSubsystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputSystem);
}
inline void GlobalNamespace::UnityXRHelper::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::OnUserPresenceCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnUserPresenceCanceled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::OnUserPresenceStarted(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnUserPresenceStarted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnApplicationPause",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::UnityXRHelper::OnPauseGamePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnPauseGamePerformed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::OnPauseGameCancelled(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "OnPauseGameCancelled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void GlobalNamespace::UnityXRHelper::HandleNewXRNode(::UnityEngine::XR::XRNodeState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "HandleNewXRNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::UnityXRHelper::UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "UpdateManufacturerOnNode", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void GlobalNamespace::UnityXRHelper::HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "HandleRemovedXRNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNodeState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::GlobalNamespace::UnityXRController* GlobalNamespace::UnityXRHelper::ControllerFromNode(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "ControllerFromNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityXRController*, false>(this, ___internal_method, node);
}
inline void GlobalNamespace::UnityXRHelper::TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "TriggerHapticPulse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, duration, strength, frequency);
}
inline void GlobalNamespace::UnityXRHelper::StopHaptics(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "StopHaptics", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "TryGetPoseOffsetForNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, poseOffset);
}
inline ::UnityEngine::Pose GlobalNamespace::UnityXRHelper::GetPoseOffsetForManufacturer(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName manufacturerName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetPoseOffsetForManufacturer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, manufacturerName);
}
inline bool GlobalNamespace::UnityXRHelper::GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetNodePose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeType, idx, pos, rot);
}
inline ::UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetAnyJoystickMaxAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetAnyJoystickMaxAxis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::UnityXRHelper::GetTriggerValue(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetTriggerValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::UnityXRHelper::GetThumbstickValue(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetThumbstickValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, node);
}
inline bool GlobalNamespace::UnityXRHelper::GetMenuButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetMenuButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnityXRHelper::GetMenuButtonDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "GetMenuButtonDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::RefreshControllersReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(),
                                                                             "RefreshControllersReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnityXRHelper::ReadHeadPose(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "ReadHeadPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos, rot);
}
inline void GlobalNamespace::UnityXRHelper::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UnityXRHelper* GlobalNamespace::UnityXRHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UnityXRHelper*>());
}
inline void GlobalNamespace::UnityXRHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityXRHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityXRHelper::UnityXRHelper() {}
