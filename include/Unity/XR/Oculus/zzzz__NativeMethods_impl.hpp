#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/Oculus/zzzz__NativeMethods_def.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
#include "Unity/XR/Oculus/zzzz__NativeMethods_def.hpp"
#include "Unity/XR/Oculus/zzzz__SystemHeadset_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "phaseSync", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "subsampledLayout", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lateLatchingDebug", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings::__NativeMethods__UserDefinedSettings(uint16_t sharedDepthBuffer, uint16_t dashSupport, uint16_t stereoRenderingMode,
                                                                                                          uint16_t colorSpace, uint16_t lowOverheadMode, uint16_t optimizeBufferDiscards,
                                                                                                          uint16_t phaseSync, uint16_t symmetricProjection, uint16_t subsampledLayout,
                                                                                                          uint16_t lateLatching, uint16_t lateLatchingDebug, uint16_t enableTrackingOriginStageMode,
                                                                                                          uint16_t spaceWarp, uint16_t depthSubmission, uint16_t foveatedRenderingMethod) noexcept {
  this->sharedDepthBuffer = sharedDepthBuffer;
  this->dashSupport = dashSupport;
  this->stereoRenderingMode = stereoRenderingMode;
  this->colorSpace = colorSpace;
  this->lowOverheadMode = lowOverheadMode;
  this->optimizeBufferDiscards = optimizeBufferDiscards;
  this->phaseSync = phaseSync;
  this->symmetricProjection = symmetricProjection;
  this->subsampledLayout = subsampledLayout;
  this->lateLatching = lateLatching;
  this->lateLatchingDebug = lateLatchingDebug;
  this->enableTrackingOriginStageMode = enableTrackingOriginStageMode;
  this->spaceWarp = spaceWarp;
  this->depthSubmission = depthSubmission;
  this->foveatedRenderingMethod = foveatedRenderingMethod;
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings::__NativeMethods__UserDefinedSettings() {}
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetColorScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetColorScale)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x31a5790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetColorScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetColorOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetColorOffset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x31a5828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetColorOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetIsSupportedDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetIsSupportedDevice)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a58bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetIsSupportedDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.LoadOVRPlugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Unity::XR::Oculus::__NativeMethods__Internal::LoadOVRPlugin)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x31a592c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "LoadOVRPlugin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.UnloadOVRPlugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::UnloadOVRPlugin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x31a59bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "UnloadOVRPlugin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetUserDefinedSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings)>(
    &::Unity::XR::Oculus::__NativeMethods__Internal::SetUserDefinedSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x31a5a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetUserDefinedSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetHasUserAuthorizedEyeTrackingPermission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetHasUserAuthorizedEyeTrackingPermission)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a5aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetHasUserAuthorizedEyeTrackingPermission",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetCPULevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetCPULevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a5b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetCPULevel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetGPULevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetGPULevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a5ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetGPULevel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetOVRPVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetOVRPVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31a5c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetOVRPVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.EnablePerfMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::__NativeMethods__Internal::EnablePerfMetrics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a5ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "EnablePerfMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.EnableAppMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::__NativeMethods__Internal::EnableAppMetrics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a5d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "EnableAppMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetDeveloperModeStrict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetDeveloperModeStrict)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x31a5d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetDeveloperModeStrict",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetAppHasInputFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetAppHasInputFocus)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a5e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetAppHasInputFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetBoundaryConfigured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a5e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetBoundaryConfigured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetBoundaryDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::__Boundary__BoundaryType, ByRef<::UnityEngine::Vector3>)>(
    &::Unity::XR::Oculus::__NativeMethods__Internal::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x31a5efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetBoundaryDimensions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetBoundaryVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a5f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetBoundaryVisible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetBoundaryVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a5ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetBoundaryVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetAppShouldQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetAppShouldQuit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a6078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetAppShouldQuit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetDisplayAvailableFrequencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, ByRef<int32_t>)>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetDisplayAvailableFrequencies)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x31a60e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetDisplayAvailableFrequencies", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetDisplayFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetDisplayFrequency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x31a6174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetDisplayFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetDisplayFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float_t>)>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetDisplayFrequency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x31a61f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetDisplayFrequency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetSystemHeadsetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::SystemHeadset (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x31a627c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetSystemHeadsetType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetTiledMultiResSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetTiledMultiResSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a62e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetTiledMultiResSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetTiledMultiResLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a6354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetTiledMultiResLevel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetTiledMultiResLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x31a63d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetTiledMultiResLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.SetTiledMultiResDynamic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::__NativeMethods__Internal::SetTiledMultiResDynamic)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31a6438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetTiledMultiResDynamic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetEyeTrackedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a64b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                 "GetEyeTrackedFoveatedRenderingSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::__NativeMethods__Internal.GetShouldRestartSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::__NativeMethods__Internal::GetShouldRestartSession)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x31a6528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                               "GetShouldRestartSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetColorScale(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetColorScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetColorOffset(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetColorOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetIsSupportedDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetIsSupportedDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::LoadOVRPlugin(::StringW ovrpPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "LoadOVRPlugin",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ovrpPath);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::UnloadOVRPlugin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "UnloadOVRPlugin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetUserDefinedSettings(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetUserDefinedSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetHasUserAuthorizedEyeTrackingPermission(bool authorized) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetHasUserAuthorizedEyeTrackingPermission",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, authorized);
}
inline int32_t Unity::XR::Oculus::__NativeMethods__Internal::SetCPULevel(int32_t cpuLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetCPULevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cpuLevel);
}
inline int32_t Unity::XR::Oculus::__NativeMethods__Internal::SetGPULevel(int32_t gpuLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetGPULevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gpuLevel);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::GetOVRPVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetOVRPVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, version);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::EnablePerfMetrics(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "EnablePerfMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::EnableAppMetrics(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "EnableAppMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::SetDeveloperModeStrict(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetDeveloperModeStrict",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, active);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetAppHasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetAppHasInputFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetBoundaryConfigured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetBoundaryConfigured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetBoundaryDimensions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetBoundaryVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetBoundaryVisible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetBoundaryVisible(bool boundaryVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetBoundaryVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetAppShouldQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetAppShouldQuit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetDisplayAvailableFrequencies(void* ptr, ByRef<int32_t> numFrequencies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetDisplayAvailableFrequencies", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, numFrequencies);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::SetDisplayFrequency(float_t refreshRate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetDisplayFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetDisplayFrequency(ByRef<float_t> refreshRate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "GetDisplayFrequency",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline ::Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::__NativeMethods__Internal::GetSystemHeadsetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetSystemHeadsetType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetTiledMultiResSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetTiledMultiResSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetTiledMultiResLevel(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetTiledMultiResLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
inline int32_t Unity::XR::Oculus::__NativeMethods__Internal::GetTiledMultiResLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetTiledMultiResLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::__NativeMethods__Internal::SetTiledMultiResDynamic(bool isDynamic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(), "SetTiledMultiResDynamic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDynamic);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetEyeTrackedFoveatedRenderingSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                               "GetEyeTrackedFoveatedRenderingSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::__NativeMethods__Internal::GetShouldRestartSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::__NativeMethods__Internal*>::get(),
                                                                             "GetShouldRestartSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::__NativeMethods__Internal::__NativeMethods__Internal() {}
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetColorScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::NativeMethods::SetColorScale)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetColorScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetColorOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::Unity::XR::Oculus::NativeMethods::SetColorOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetColorOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetIsSupportedDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                               "GetIsSupportedDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.LoadOVRPlugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::Unity::XR::Oculus::NativeMethods::LoadOVRPlugin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a419c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "LoadOVRPlugin", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.UnloadOVRPlugin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a59b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "UnloadOVRPlugin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetUserDefinedSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings)>(
    &::Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x31a3d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetUserDefinedSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetHasUserAuthorizedEyeTrackingPermission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetHasUserAuthorizedEyeTrackingPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a3e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetHasUserAuthorizedEyeTrackingPermission",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetCPULevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::SetCPULevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a42e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetCPULevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetGPULevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::SetGPULevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a42fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetGPULevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetOVRPVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Unity::XR::Oculus::NativeMethods::GetOVRPVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a4618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetOVRPVersion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.EnablePerfMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::EnablePerfMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a5414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "EnablePerfMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.EnableAppMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::EnableAppMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a5788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "EnableAppMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetDeveloperModeStrict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a30b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetDeveloperModeStrict",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetHasInputFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetHasInputFocus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetHasInputFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetBoundaryConfigured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                               "GetBoundaryConfigured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetBoundaryDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::XR::Oculus::__Boundary__BoundaryType, ByRef<::UnityEngine::Vector3>)>(
    &::Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetBoundaryDimensions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetBoundaryVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetBoundaryVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetBoundaryVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a2f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetBoundaryVisible",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetAppShouldQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetAppShouldQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a6074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetAppShouldQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetDisplayAvailableFrequencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, ByRef<int32_t>)>(&::Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a44b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetDisplayAvailableFrequencies", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetDisplayFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&::Unity::XR::Oculus::NativeMethods::SetDisplayFrequency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a44c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetDisplayFrequency", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetDisplayFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float_t>)>(&::Unity::XR::Oculus::NativeMethods::GetDisplayFrequency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a44c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetDisplayFrequency", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetSystemHeadsetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::Oculus::SystemHeadset (*)()>(&::Unity::XR::Oculus::NativeMethods::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                               "GetSystemHeadsetType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetTiledMultiResSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetTiledMultiResSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                               "GetTiledMultiResSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetTiledMultiResLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Unity::XR::Oculus::NativeMethods::SetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetTiledMultiResLevel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetTiledMultiResLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::Unity::XR::Oculus::NativeMethods::GetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a2bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                               "GetTiledMultiResLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.SetTiledMultiResDynamic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::NativeMethods::SetTiledMultiResDynamic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31a2b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetTiledMultiResDynamic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetEyeTrackedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a3dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetEyeTrackedFoveatedRenderingSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::NativeMethods.GetShouldRestartSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::XR::Oculus::NativeMethods::GetShouldRestartSession)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a6524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                               "GetShouldRestartSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::NativeMethods::SetColorScale(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetColorScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline void Unity::XR::Oculus::NativeMethods::SetColorOffset(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetColorOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
inline bool Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetIsSupportedDevice",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::LoadOVRPlugin(::StringW ovrpPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "LoadOVRPlugin", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ovrpPath);
}
inline void Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "UnloadOVRPlugin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings settings) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetUserDefinedSettings", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
inline void Unity::XR::Oculus::NativeMethods::SetHasUserAuthorizedEyeTrackingPermission(bool authorized) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetHasUserAuthorizedEyeTrackingPermission",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, authorized);
}
inline int32_t Unity::XR::Oculus::NativeMethods::SetCPULevel(int32_t cpuLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetCPULevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cpuLevel);
}
inline int32_t Unity::XR::Oculus::NativeMethods::SetGPULevel(int32_t gpuLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetGPULevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gpuLevel);
}
inline void Unity::XR::Oculus::NativeMethods::GetOVRPVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> version) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetOVRPVersion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, version);
}
inline void Unity::XR::Oculus::NativeMethods::EnablePerfMetrics(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "EnablePerfMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline void Unity::XR::Oculus::NativeMethods::EnableAppMetrics(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "EnableAppMetrics",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
inline bool Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetDeveloperModeStrict",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, active);
}
inline bool Unity::XR::Oculus::NativeMethods::GetHasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetHasInputFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                             "GetBoundaryConfigured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetBoundaryDimensions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::XR::Oculus::__Boundary__BoundaryType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
inline bool Unity::XR::Oculus::NativeMethods::GetBoundaryVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetBoundaryVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetBoundaryVisible(bool boundaryVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetBoundaryVisible",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
inline bool Unity::XR::Oculus::NativeMethods::GetAppShouldQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetAppShouldQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies(void* ptr, ByRef<int32_t> numFrequencies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetDisplayAvailableFrequencies", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, numFrequencies);
}
inline bool Unity::XR::Oculus::NativeMethods::SetDisplayFrequency(float_t refreshRate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetDisplayFrequency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline bool Unity::XR::Oculus::NativeMethods::GetDisplayFrequency(ByRef<float_t> refreshRate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetDisplayFrequency", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
inline ::Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::NativeMethods::GetSystemHeadsetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetSystemHeadsetType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetTiledMultiResSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                             "GetTiledMultiResSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetTiledMultiResLevel(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetTiledMultiResLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
inline int32_t Unity::XR::Oculus::NativeMethods::GetTiledMultiResLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                             "GetTiledMultiResLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::NativeMethods::SetTiledMultiResDynamic(bool isDynamic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "SetTiledMultiResDynamic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDynamic);
}
inline bool Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(), "GetEyeTrackedFoveatedRenderingSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Unity::XR::Oculus::NativeMethods::GetShouldRestartSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::NativeMethods*>::get(),
                                                                             "GetShouldRestartSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::Oculus::NativeMethods::NativeMethods() {}
