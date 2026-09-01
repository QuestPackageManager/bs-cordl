#pragma once
// IWYU pragma private; include "UnityEngine\XR\OpenXR\Features\OpenXRFeature.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fb5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_failedInitialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_failedInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fb5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "set_failedInitialization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_requiredFeatureFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x69fb5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_requiredFeatureFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_requiredFeatureFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x69fb638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "set_requiredFeatureFailed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x69ed200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x69fb68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.get_xrGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fb800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_xrGetInstanceProcAddr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::System::IntPtr)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fb884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSubsystemDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fb4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSystemChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnAppSpaceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t, int32_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionExiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnSessionLossPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnInstanceLossPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnFormFactorChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnViewConfigurationTypeChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(int32_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnvironmentBlendModeChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnabledChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fb8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.PathToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69fb8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "PathToString", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.StringToPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69fb9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "StringToPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69fbaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetCurrentInteractionProfile", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x69fbb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetCurrentInteractionProfile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetCurrentAppSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x69fbb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetCurrentAppSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetViewConfigurationTypeForRenderPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fbc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetViewConfigurationTypeForRenderPass", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fbcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                             { "SetEnvironmentBlendMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fbd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetEnvironmentBlendMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fbd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fbda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fbda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveLoaderEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::OpenXR::OpenXRLoaderBase*, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x69f1248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
            { "ReceiveLoaderEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.ReceiveNativeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent, uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x69f3da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                { "ReceiveNativeEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x69f0948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x69f0ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "HookGetInstanceProcAddr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::InputSystem::InputAction*)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69fbf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::XR::InputDevice, ::UnityEngine::XR::InputFeatureUsage)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x69fbfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                             { "GetAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.GetAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)(::UnityEngine::XR::InputDevice, ::StringW)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69fc04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                           { "GetAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.RegisterStatsDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::RegisterStatsDescriptor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fc0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                { "RegisterStatsDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetStatAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, float_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsFloat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fc160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "SetStatAsFloat", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.SetStatAsUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, uint32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsUInt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69fc1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "SetStatAsUInt", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_PathToStringPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69fb95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                             { "Internal_PathToStringPtr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_StringToPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x69fba08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                           { "Internal_StringToPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::by_ref<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69fbacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                             { "Internal_GetCurrentInteractionProfile", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetFormFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69fbda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetFormFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewConfigurationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69fbe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetViewConfigurationType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetViewTypeFromRenderIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69fbc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetViewTypeFromRenderIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetXRSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetXRSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69fc278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetXRSession", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetSessionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69fbe70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                             { "Internal_GetSessionState", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode (*)()>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x69fbd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetEnvironmentBlendMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetEnvironmentBlendMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69fbcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                             { "Internal_SetEnvironmentBlendMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetAppSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint64_t>)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69fbbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetAppSpace", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_GetProcAddressPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(bool)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69fb808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetProcAddressPtr", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.Internal_SetProcAddressPtrAndLoadStage1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69fbef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                           { "Internal_SetProcAddressPtrAndLoadStage1", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.runtime_RegisterStatsDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags)>(
    &::UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_RegisterStatsDescriptor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x69fc0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                         { "runtime_RegisterStatsDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.runtime_SetStatAsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, float_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsFloat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x69fc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                           { "runtime_SetStatAsFloat", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature.runtime_SetStatAsUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, uint32_t)>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsUInt)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69fc1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                           { "runtime_SetStatAsUInt", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OpenXRFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OpenXRFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fb5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ".ctor", {}, {} })));
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
  this->___nameUi = value;
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
  this->___version = value;
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
  this->___featureIdInternal = value;
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
  this->___openxrExtensionStrings = value;
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
  this->___company = value;
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
  ::cordl_internals::setStaticField<bool, "<requiredFeatureFailed>k__BackingField", ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::getStaticF__requiredFeatureFailed_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<requiredFeatureFailed>k__BackingField", ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>();
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_failedInitialization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_failedInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_failedInitialization(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "set_failedInitialization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_requiredFeatureFailed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_requiredFeatureFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_requiredFeatureFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "set_requiredFeatureFailed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::OpenXRFeature::get_xrGetInstanceProcAddr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "get_xrGetInstanceProcAddr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr(::System::IntPtr func) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, func);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemCreate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStart() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemStop() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSubsystemDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSystemChange(uint64_t xrSystem) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSystem);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionCreate(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnAppSpaceChange(uint64_t xrSpace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSpace);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionBegin(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionEnd(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionExiting(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionDestroy(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceDestroy(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnSessionLossPending(uint64_t xrSession) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnInstanceLossPending(uint64_t xrInstance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnFormFactorChange(int32_t xrFormFactor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrFormFactor);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnViewConfigurationTypeChange(int32_t xrViewConfigurationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrViewConfigurationType);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnvironmentBlendModeChange(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrEnvironmentBlendMode);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnabledChange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::OpenXRFeature::PathToString(uint64_t path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "PathToString", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::StringToPath(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "StringToPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, str);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(uint64_t userPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetCurrentInteractionProfile", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, userPath);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentInteractionProfile(::StringW userPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetCurrentInteractionProfile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, userPath);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetCurrentAppSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetCurrentAppSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetViewConfigurationTypeForRenderPass(int32_t renderPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetViewConfigurationTypeForRenderPass", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, renderPassIndex);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "SetEnvironmentBlendMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetEnvironmentBlendMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetEnvironmentBlendMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>(nullptr, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "CreateSubsystem",
                                                             { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<TDescriptor>*>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDescriptor>(), ::i2c::class_of<TSubsystem>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptors, id);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "StartSubsystem", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "StopSubsystem", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "DestroySubsystem", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveLoaderEvent(::UnityEngine::XR::OpenXR::OpenXRLoaderBase* loader,
                                                                                 ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
          { "ReceiveLoaderEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::OpenXRLoaderBase*>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_LoaderEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, loader, e);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent e, uint64_t payload) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                              { "ReceiveNativeEvent", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_NativeEvent>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e, payload);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::HookGetInstanceProcAddr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "HookGetInstanceProcAddr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::InputSystem::InputAction* inputAction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "GetAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, inputAction);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "GetAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputFeatureUsage>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, device, usage);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::GetAction(::UnityEngine::XR::InputDevice device, ::StringW usageName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                         { "GetAction", {}, { ::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, device, usageName);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::RegisterStatsDescriptor(::StringW statName, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags statFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                              { "RegisterStatsDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, statName, statFlags);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsFloat(uint64_t statId, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "SetStatAsFloat", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statId, value);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::SetStatAsUInt(uint64_t statId, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "SetStatAsUInt", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statId, value);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_PathToStringPtr(uint64_t pathId, ::by_ref<::System::IntPtr> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "Internal_PathToStringPtr", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pathId, path);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_StringToPath(::StringW str, ::by_ref<uint64_t> pathId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                         { "Internal_StringToPath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, pathId);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetCurrentInteractionProfile(uint64_t pathId, ::by_ref<uint64_t> interactionProfile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "Internal_GetCurrentInteractionProfile", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pathId, interactionProfile);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetFormFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetFormFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewConfigurationType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetViewConfigurationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetViewTypeFromRenderIndex(int32_t renderPassIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetViewTypeFromRenderIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, renderPassIndex);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetXRSession(::by_ref<uint64_t> xrSession) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetXRSession", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xrSession);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetSessionState(::by_ref<int32_t> oldState, ::by_ref<int32_t> newState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "Internal_GetSessionState", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, oldState, newState);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetEnvironmentBlendMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetEnvironmentBlendMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetEnvironmentBlendMode(::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode xrEnvironmentBlendMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                           { "Internal_SetEnvironmentBlendMode", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xrEnvironmentBlendMode);
}
inline bool UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetAppSpace(::by_ref<uint64_t> appSpace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetAppSpace", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, appSpace);
}
inline ::System::IntPtr UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_GetProcAddressPtr(bool loaderDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { "Internal_GetProcAddressPtr", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, loaderDefault);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::Internal_SetProcAddressPtrAndLoadStage1(::System::IntPtr func) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                         { "Internal_SetProcAddressPtrAndLoadStage1", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func);
}
inline uint64_t UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_RegisterStatsDescriptor(::StringW statName, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags statFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                       { "runtime_RegisterStatsDescriptor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature_StatFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, statName, statFlags);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsFloat(uint64_t statId, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                         { "runtime_SetStatAsFloat", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statId, value);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::runtime_SetStatAsUInt(uint64_t statId, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(),
                                                                                         { "runtime_SetStatAsUInt", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statId, value);
}
inline void UnityEngine::XR::OpenXR::Features::OpenXRFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRFeature* UnityEngine::XR::OpenXR::Features::OpenXRFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::OpenXRFeature::OpenXRFeature() {}
