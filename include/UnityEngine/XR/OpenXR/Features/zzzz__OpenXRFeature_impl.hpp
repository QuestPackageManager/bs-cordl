#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEnvironmentBlendMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent::__OpenXRFeature__LoaderEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent::__OpenXRFeature__LoaderEvent() {}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent::SubsystemCreate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent::SubsystemDestroy{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent::SubsystemStart{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent::SubsystemStop{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::__OpenXRFeature__NativeEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::__OpenXRFeature__NativeEvent() {}
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrSetupConfigValues{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrSystemIdChanged{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrInstanceChanged{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrSessionChanged{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrBeginSession{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrSessionStateChanged{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrChangedSpaceApp{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrEndSession{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrDestroySession{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrDestroyInstance{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrIdle{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrReady{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrSynchronized{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrVisible{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrFocused{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrStopping{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrExiting{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrLossPending{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrInstanceLossPending{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrRestartRequested{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent::XrRequestRestartLoop{ static_cast<int32_t>(0x14) };
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_failedInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b05b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_failedInitialization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_failedInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b05b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_failedInitialization",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_requiredFeatureFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b05b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_requiredFeatureFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_requiredFeatureFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b05bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_requiredFeatureFailed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2afbc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2b05c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_enabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_xrGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b05d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "get_xrGetInstanceProcAddr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(void*)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b05de0;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05de8;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05dec;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05df0;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05df4;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05df8;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e00;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e04;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e08;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e0c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e10;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e14;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e18;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e1c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e20;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e24;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e28;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e2c;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e30;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e34;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b05e38;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.PathToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b05e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "PathToString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.StringToPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b05f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StringToPath",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b06008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b060b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentAppSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b060f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "GetCurrentAppSpace", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetViewConfigurationTypeForRenderPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0619c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetViewConfigurationTypeForRenderPass",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0621c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetEnvironmentBlendMode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0629c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "GetEnvironmentBlendMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b06308;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x2b0630c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveLoaderEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2afe92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveLoaderEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveNativeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2b01350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveNativeEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2afdb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2afdcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "HookGetInstanceProcAddr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b064e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_PathToStringPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ByRef<void*>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b05eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_PathToStringPtr", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_StringToPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b05f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_StringToPath", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ByRef<uint64_t>)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b0602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetCurrentInteractionProfile", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetFormFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b06310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetFormFactor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewConfigurationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b06378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetViewConfigurationType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewTypeFromRenderIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b061a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetViewTypeFromRenderIndex",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetSessionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>, ByRef<int32_t>)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b063e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetSessionState", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b062a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               "Internal_GetEnvironmentBlendMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b06220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetEnvironmentBlendMode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetAppSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b06118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetAppSpace",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetProcAddressPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b05d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetProcAddressPtr",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetProcAddressPtrAndLoadStage1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b06464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetProcAddressPtrAndLoadStage1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b06538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_m_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enabled;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_m_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_enabled;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_m_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_enabled = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get__failedInitialization_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedInitialization_k__BackingField;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get__failedInitialization_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedInitialization_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set__failedInitialization_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedInitialization_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_nameUi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameUi;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_nameUi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameUi;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_nameUi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameUi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_featureIdInternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___featureIdInternal;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_featureIdInternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___featureIdInternal;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_featureIdInternal(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___featureIdInternal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_openxrExtensionStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openxrExtensionStrings;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_openxrExtensionStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openxrExtensionStrings;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_openxrExtensionStrings(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___openxrExtensionStrings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_company() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___company;
}
constexpr ::StringW const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_company() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___company;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_company(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___company)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr int32_t const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priority;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priority = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_required() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___required;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_required() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___required;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_required(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___required = value;
}
constexpr bool& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_internalFieldsUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalFieldsUpdated;
}
constexpr bool const& UnityEngine::XR::OpenXR::Features::OpenXRFeature::__get_internalFieldsUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalFieldsUpdated;
}
constexpr void UnityEngine::XR::OpenXR::Features::OpenXRFeature::__set_internalFieldsUpdated(bool value) {
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
                                                                             "get_failedInitialization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_failedInitialization",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_requiredFeatureFailed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_requiredFeatureFailed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_enabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "set_enabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void* UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "get_xrGetInstanceProcAddr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr(void* func) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "HookGetInstanceProcAddr",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnSubsystemCreate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnSubsystemStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnSubsystemStop", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnSubsystemDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate(uint64_t xrInstance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnInstanceCreate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange(uint64_t xrSystem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSystemChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSystem);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionCreate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange(uint64_t xrSpace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnAppSpaceChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSpace);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionStateChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldState, newState);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionBegin",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionEnd",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionExiting",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy(uint64_t xrInstance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnInstanceDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending(uint64_t xrSession) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnSessionLossPending",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending(uint64_t xrInstance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnInstanceLossPending",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange(int32_t xrFormFactor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnFormFactorChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrFormFactor);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange(int32_t xrViewConfigurationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnViewConfigurationTypeChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrViewConfigurationType);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "OnEnvironmentBlendModeChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrEnvironmentBlendMode);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnEnabledChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString(uint64_t path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "PathToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StringToPath",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, str);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(uint64_t userPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(::StringW userPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetCurrentInteractionProfile",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "GetCurrentAppSpace", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetViewConfigurationTypeForRenderPass",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPassIndex);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "SetEnvironmentBlendMode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "GetEnvironmentBlendMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, false>(nullptr, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "CreateSubsystem",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StartSubsystem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "StopSubsystem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "DestroySubsystem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* loader,
                                                                                 ::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveLoaderEvent", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__LoaderEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, loader, e);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent e, uint64_t payload) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "ReceiveNativeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Features::__OpenXRFeature__NativeEvent>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e, payload);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "HookGetInstanceProcAddr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::InputSystem::InputAction* inputAction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "GetAction", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, inputAction);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr(uint64_t pathId, ByRef<void*> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_PathToStringPtr", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathId, path);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath(::StringW str, ByRef<uint64_t> pathId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_StringToPath", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, pathId);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile(uint64_t pathId, ByRef<uint64_t> interactionProfile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetCurrentInteractionProfile", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathId, interactionProfile);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Internal_GetFormFactor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Internal_GetViewConfigurationType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetViewTypeFromRenderIndex",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, renderPassIndex);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState(ByRef<int32_t> oldState, ByRef<int32_t> newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetSessionState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, oldState, newState);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             "Internal_GetEnvironmentBlendMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetEnvironmentBlendMode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace(ByRef<uint64_t> appSpace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetAppSpace",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, appSpace);
}
inline void* UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr(bool loaderDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_GetProcAddressPtr",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, loaderDefault);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1(void* func) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(), "Internal_SetProcAddressPtrAndLoadStage1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, func);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* UnityEngine::XR::OpenXR::Features::OpenXRFeature::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>());
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OpenXRFeature() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
