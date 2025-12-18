#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEnvironmentBlendMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent::OpenXRFeature_LoaderEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent::OpenXRFeature_LoaderEvent() {}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent::SubsystemCreate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent::SubsystemDestroy{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent::SubsystemStart{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent::SubsystemStop{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::OpenXRFeature_NativeEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::OpenXRFeature_NativeEvent() {}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrSetupConfigValues{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrSystemIdChanged{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrInstanceChanged{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrSessionChanged{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrBeginSession{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrSessionStateChanged{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrChangedSpaceApp{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrEndSession{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrDestroySession{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrDestroyInstance{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrIdle{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrReady{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrSynchronized{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrVisible{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrFocused{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrStopping{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrExiting{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrLossPending{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrInstanceLossPending{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrRestartRequested{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrRequestRestartLoop{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent::XrRequestGetSystemLoop{ static_cast<int32_t>(0x15) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags::OpenXRFeature_StatFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags::OpenXRFeature_StatFlags() {}
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags::StatOptionNone{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags::ClearOnUpdate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags::All{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_failedInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ac68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_failedInitialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_failedInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ac70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_failedInitialization",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_requiredFeatureFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x682ac78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_requiredFeatureFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_requiredFeatureFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x682acc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_requiredFeatureFailed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x681c88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x682ad18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_enabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_xrGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ae8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_xrGetInstanceProcAddr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682af10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ab60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSystemChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnAppSpaceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionStateChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t, int32_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionExiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionLossPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceLossPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnFormFactorChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnViewConfigurationTypeChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnvironmentBlendModeChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(
    ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnabledChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682af60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.PathToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x682af64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "PathToString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.StringToPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x682b074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StringToPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x682b138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x682b1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentAppSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x682b21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "GetCurrentAppSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetViewConfigurationTypeForRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetViewConfigurationTypeForRenderPass",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetEnvironmentBlendMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "GetEnvironmentBlendMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b42c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveLoaderEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x68208d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveLoaderEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveNativeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6823434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveNativeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x681ffd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x682016c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "HookGetInstanceProcAddr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x682b5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(
    ::UnityEngine::XR::InputDevice, ::UnityEngine::XR::InputFeatureUsage)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x682b658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputDevice>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputFeatureUsage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::XR::InputDevice, ::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x682b6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputDevice>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.RegisterStatsDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::RegisterStatsDescriptor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "RegisterStatsDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetStatAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, float_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetStatAsFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetStatAsUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsUInt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x682b87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetStatAsUInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_PathToStringPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::ByRef<::System::IntPtr>)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x682afe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_PathToStringPtr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_StringToPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x682b094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_StringToPath", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::ByRef<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x682b158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetCurrentInteractionProfile", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetFormFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x682b434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetFormFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewConfigurationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x682b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                 "Internal_GetViewConfigurationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewTypeFromRenderIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x682b2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetViewTypeFromRenderIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetXRSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetXRSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x682b904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetXRSession",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x682b4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetSessionState", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x682b3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetEnvironmentBlendMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x682b344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetEnvironmentBlendMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetAppSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x682b23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetAppSpace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetProcAddressPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x682ae94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetProcAddressPtr",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetProcAddressPtrAndLoadStage1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x682b580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetProcAddressPtrAndLoadStage1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.runtime_RegisterStatsDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_RegisterStatsDescriptor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x682b74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "runtime_RegisterStatsDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.runtime_SetStatAsFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, float_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsFloat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x682b7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "runtime_SetStatAsFloat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.runtime_SetStatAsUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsUInt)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x682b880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "runtime_SetStatAsUInt", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682ac60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_m_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enabled;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_m_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enabled;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_m_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enabled = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get__failedInitialization_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedInitialization_k__BackingField;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get__failedInitialization_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedInitialization_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set__failedInitialization_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedInitialization_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_nameUi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameUi;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_nameUi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameUi;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_nameUi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameUi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_featureIdInternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___featureIdInternal;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_featureIdInternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___featureIdInternal;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_featureIdInternal(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___featureIdInternal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_openxrExtensionStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openxrExtensionStrings;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_openxrExtensionStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openxrExtensionStrings;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_openxrExtensionStrings(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___openxrExtensionStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_company() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___company;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_company() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___company;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_company(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___company)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_required() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___required;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_required() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___required;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_required(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___required = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_internalFieldsUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalFieldsUpdated;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_get_internalFieldsUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalFieldsUpdated;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__cordl_internal_set_internalFieldsUpdated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalFieldsUpdated = value;
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::setStaticF__requiredFeatureFailed_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<requiredFeatureFailed>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::getStaticF__requiredFeatureFailed_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<requiredFeatureFailed>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get>();
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_failedInitialization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_failedInitialization",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_requiredFeatureFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_requiredFeatureFailed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_enabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_xrGetInstanceProcAddr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr(::System::IntPtr func) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange(uint64_t xrSystem) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSystem);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange(uint64_t xrSpace) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSpace);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldState, newState);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange(int32_t xrFormFactor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrFormFactor);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange(int32_t xrViewConfigurationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrViewConfigurationType);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrEnvironmentBlendMode);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString(uint64_t path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "PathToString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StringToPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, str);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(uint64_t userPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(::StringW userPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "GetCurrentAppSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetViewConfigurationTypeForRenderPass",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPassIndex);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetEnvironmentBlendMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "GetEnvironmentBlendMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, false>(nullptr, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "CreateSubsystem",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StartSubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StopSubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "DestroySubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* loader,
                                                                                 ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveLoaderEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loader, e);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveNativeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, payload);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "HookGetInstanceProcAddr", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::InputSystem::InputAction* inputAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, inputAction);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputDevice>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputFeatureUsage>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, device, usage);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::XR::InputDevice device, ::StringW usageName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputDevice>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, device, usageName);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::RegisterStatsDescriptor(::StringW statName, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags statFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "RegisterStatsDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, statName, statFlags);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsFloat(uint64_t statId, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetStatAsFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statId, value);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsUInt(uint64_t statId, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetStatAsUInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statId, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr(uint64_t pathId, ::ByRef<::System::IntPtr> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_PathToStringPtr", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathId, path);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath(::StringW str, ::ByRef<uint64_t> pathId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_StringToPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, pathId);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile(uint64_t pathId, ::ByRef<uint64_t> interactionProfile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetCurrentInteractionProfile",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathId, interactionProfile);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Internal_GetFormFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetViewConfigurationType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetViewTypeFromRenderIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPassIndex);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetXRSession(::ByRef<uint64_t> xrSession) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetXRSession",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState(::ByRef<int32_t> oldState, ::ByRef<int32_t> newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Internal_GetSessionState", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oldState, newState);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Internal_GetEnvironmentBlendMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetEnvironmentBlendMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace(::ByRef<uint64_t> appSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetAppSpace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, appSpace);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr(bool loaderDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetProcAddressPtr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, loaderDefault);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1(::System::IntPtr func) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetProcAddressPtrAndLoadStage1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, func);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_RegisterStatsDescriptor(::StringW statName, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags statFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "runtime_RegisterStatsDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, statName, statFlags);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsFloat(uint64_t statId, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "runtime_SetStatAsFloat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statId, value);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsUInt(uint64_t statId, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "runtime_SetStatAsUInt", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statId, value);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* UnityEngine::XR::OpenXR::Features::OpenXRFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OpenXRFeature() {}
