#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRProfile_def.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTracker_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_6_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_XrApi::OVRManager_XrApi(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_XrApi::OVRManager_XrApi() {}
constexpr ::GlobalNamespace::OVRManager_XrApi GlobalNamespace::OVRManager_XrApi::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_XrApi GlobalNamespace::OVRManager_XrApi::CAPI{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_XrApi GlobalNamespace::OVRManager_XrApi::VRAPI{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_XrApi GlobalNamespace::OVRManager_XrApi::OpenXR{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin::OVRManager_TrackingOrigin(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin::OVRManager_TrackingOrigin() {}
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin GlobalNamespace::OVRManager_TrackingOrigin::EyeLevel{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin GlobalNamespace::OVRManager_TrackingOrigin::FloorLevel{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin GlobalNamespace::OVRManager_TrackingOrigin::Stage{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_EyeTextureFormat::OVRManager_EyeTextureFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_EyeTextureFormat::OVRManager_EyeTextureFormat() {}
constexpr ::GlobalNamespace::OVRManager_EyeTextureFormat GlobalNamespace::OVRManager_EyeTextureFormat::Default{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_EyeTextureFormat GlobalNamespace::OVRManager_EyeTextureFormat::R16G16B16A16_FP{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_EyeTextureFormat GlobalNamespace::OVRManager_EyeTextureFormat::R11G11B10_FP{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel::OVRManager_FoveatedRenderingLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel::OVRManager_FoveatedRenderingLevel() {}
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager_FoveatedRenderingLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager_FoveatedRenderingLevel::Low{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager_FoveatedRenderingLevel::Medium{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager_FoveatedRenderingLevel::High{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager_FoveatedRenderingLevel::HighTop{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::OVRManager_FixedFoveatedRenderingLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::OVRManager_FixedFoveatedRenderingLevel() {}
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::Low{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::Medium{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::High{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel::HighTop{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel::OVRManager_TiledMultiResLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel::OVRManager_TiledMultiResLevel() {}
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager_TiledMultiResLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager_TiledMultiResLevel::LMSLow{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager_TiledMultiResLevel::LMSMedium{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager_TiledMultiResLevel::LMSHigh{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager_TiledMultiResLevel::LMSHighTop{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType::OVRManager_SystemHeadsetType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType::OVRManager_SystemHeadsetType() {}
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Oculus_Quest{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Oculus_Quest_2{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Quest_Pro{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Quest_3{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_12{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_13{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_14{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_DK1{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_DK2{ static_cast<int32_t>(0x1001) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_CV1{ static_cast<int32_t>(0x1002) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_CB{ static_cast<int32_t>(0x1003) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_S{ static_cast<int32_t>(0x1004) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Oculus_Link_Quest{ static_cast<int32_t>(0x1005) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Oculus_Link_Quest_2{ static_cast<int32_t>(0x1006) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Link_Quest_Pro{ static_cast<int32_t>(0x1007) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Link_Quest_3{ static_cast<int32_t>(0x1008) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4105{ static_cast<int32_t>(0x1009) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4106{ static_cast<int32_t>(0x100a) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4107{ static_cast<int32_t>(0x100b) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_XRDevice::OVRManager_XRDevice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_XRDevice::OVRManager_XRDevice() {}
constexpr ::GlobalNamespace::OVRManager_XRDevice GlobalNamespace::OVRManager_XRDevice::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_XRDevice GlobalNamespace::OVRManager_XRDevice::Oculus{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_XRDevice GlobalNamespace::OVRManager_XRDevice::OpenVR{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_ColorSpace::OVRManager_ColorSpace(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_ColorSpace::OVRManager_ColorSpace() {}
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Unmanaged{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Rec_2020{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Rec_709{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Rift_CV1{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Rift_S{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Quest{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::P3{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager_ColorSpace::Adobe_RGB{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel::OVRManager_ProcessorPerformanceLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel::OVRManager_ProcessorPerformanceLevel() {}
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager_ProcessorPerformanceLevel::PowerSavings{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager_ProcessorPerformanceLevel::SustainedLow{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager_ProcessorPerformanceLevel::SustainedHigh{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager_ProcessorPerformanceLevel::Boost{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType::OVRManager_ControllerDrivenHandPosesType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType::OVRManager_ControllerDrivenHandPosesType() {}
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType GlobalNamespace::OVRManager_ControllerDrivenHandPosesType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType GlobalNamespace::OVRManager_ControllerDrivenHandPosesType::ConformingToController{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType GlobalNamespace::OVRManager_ControllerDrivenHandPosesType::Natural{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRManager_EventListener.OnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager_EventListener::*)(::GlobalNamespace::OVRPlugin_EventDataBuffer)>(
    &::GlobalNamespace::OVRManager_EventListener::OnEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_EventListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_EventListener*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRManager_EventListener::OnEvent(::GlobalNamespace::OVRPlugin_EventDataBuffer eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_EventListener*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_CompositionMethod::OVRManager_CompositionMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_CompositionMethod::OVRManager_CompositionMethod() {}
constexpr ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRManager_CompositionMethod::External{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRManager_CompositionMethod::Direct{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_CameraDevice::OVRManager_CameraDevice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_CameraDevice::OVRManager_CameraDevice() {}
constexpr ::GlobalNamespace::OVRManager_CameraDevice GlobalNamespace::OVRManager_CameraDevice::WebCamera0{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_CameraDevice GlobalNamespace::OVRManager_CameraDevice::WebCamera1{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_CameraDevice GlobalNamespace::OVRManager_CameraDevice::ZEDCamera{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_DepthQuality::OVRManager_DepthQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_DepthQuality::OVRManager_DepthQuality() {}
constexpr ::GlobalNamespace::OVRManager_DepthQuality GlobalNamespace::OVRManager_DepthQuality::Low{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_DepthQuality GlobalNamespace::OVRManager_DepthQuality::Medium{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_DepthQuality GlobalNamespace::OVRManager_DepthQuality::High{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType::OVRManager_VirtualGreenScreenType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType::OVRManager_VirtualGreenScreenType() {}
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType GlobalNamespace::OVRManager_VirtualGreenScreenType::Off{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType GlobalNamespace::OVRManager_VirtualGreenScreenType::OuterBoundary{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType GlobalNamespace::OVRManager_VirtualGreenScreenType::PlayArea{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode::OVRManager_MrcActivationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode::OVRManager_MrcActivationMode() {}
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode GlobalNamespace::OVRManager_MrcActivationMode::Automatic{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode GlobalNamespace::OVRManager_MrcActivationMode::Disabled{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_MrcCameraType::OVRManager_MrcCameraType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_MrcCameraType::OVRManager_MrcCameraType() {}
constexpr ::GlobalNamespace::OVRManager_MrcCameraType GlobalNamespace::OVRManager_MrcCameraType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_MrcCameraType GlobalNamespace::OVRManager_MrcCameraType::Foreground{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_MrcCameraType GlobalNamespace::OVRManager_MrcCameraType::Background{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3fd052c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(
    ::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_MrcCameraType)>(&::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3fd05cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_MrcCameraType, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3fd05e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(
    ::System::IAsyncResult*)>(&::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fd0674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::Invoke(::UnityEngine::GameObject* mainCameraGameObject,
                                                                                                            ::GlobalNamespace::OVRManager_MrcCameraType cameraType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, mainCameraGameObject, cameraType);
}
inline ::System::IAsyncResult* GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::BeginInvoke(::UnityEngine::GameObject* mainCameraGameObject,
                                                                                                     ::GlobalNamespace::OVRManager_MrcCameraType cameraType, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, mainCameraGameObject, cameraType, callback, object);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::OVRManager_InstantiateMrcCameraDelegate() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState::OVRManager_PassthroughInitializationState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState::OVRManager_PassthroughInitializationState() {}
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState GlobalNamespace::OVRManager_PassthroughInitializationState::Unspecified{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState GlobalNamespace::OVRManager_PassthroughInitializationState::Pending{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState GlobalNamespace::OVRManager_PassthroughInitializationState::Initialized{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OVRManager_PassthroughInitializationState GlobalNamespace::OVRManager_PassthroughInitializationState::Failed{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities.get_SupportsPassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)()>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fd0680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(),
                                                                               "get_SupportsPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities.get_SupportsColorPassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)()>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsColorPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fd0688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(),
                                                                               "get_SupportsColorPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities.get_MaxColorLutResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)()>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::get_MaxColorLutResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fd0690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(),
                                                                               "get_MaxColorLutResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)(bool, bool, uint32_t)>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3fd00e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_get__SupportsPassthrough_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportsPassthrough_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_get__SupportsPassthrough_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportsPassthrough_k__BackingField;
}
constexpr void GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_set__SupportsPassthrough_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SupportsPassthrough_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_get__SupportsColorPassthrough_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportsColorPassthrough_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_get__SupportsColorPassthrough_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportsColorPassthrough_k__BackingField;
}
constexpr void GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_set__SupportsColorPassthrough_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SupportsColorPassthrough_k__BackingField = value;
}
constexpr uint32_t& GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_get__MaxColorLutResolution_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxColorLutResolution_k__BackingField;
}
constexpr uint32_t const& GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_get__MaxColorLutResolution_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxColorLutResolution_k__BackingField;
}
constexpr void GlobalNamespace::OVRManager_PassthroughCapabilities::__cordl_internal_set__MaxColorLutResolution_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxColorLutResolution_k__BackingField = value;
}
inline bool GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsPassthrough() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(),
                                                                             "get_SupportsPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsColorPassthrough() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(),
                                                                             "get_SupportsColorPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::OVRManager_PassthroughCapabilities::get_MaxColorLutResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(),
                                                                             "get_MaxColorLutResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager_PassthroughCapabilities::_ctor(bool supportsPassthrough, bool supportsColorPassthrough, uint32_t maxColorLutResolution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager_PassthroughCapabilities*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, supportsPassthrough, supportsColorPassthrough, maxColorLutResolution);
}
inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GlobalNamespace::OVRManager_PassthroughCapabilities::New_ctor(bool supportsPassthrough, bool supportsColorPassthrough,
                                                                                                                            uint32_t maxColorLutResolution) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(supportsPassthrough, supportsColorPassthrough, maxColorLutResolution));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_PassthroughCapabilities::OVRManager_PassthroughCapabilities() {}
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager___c::*)()>(&::GlobalNamespace::OVRManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fd06f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c._InitOVRManager_b__418_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRManager___c::*)(float_t)>(
    &::GlobalNamespace::OVRManager___c::_InitOVRManager_b__418_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3fd06fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get(), "<InitOVRManager>b__418_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c._FindMainCamera_b__434_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager___c::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRManager___c::_FindMainCamera_b__434_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fd0718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get(), "<FindMainCamera>b__434_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRManager___c::setStaticF___9(::GlobalNamespace::OVRManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get>(
      std::forward<::GlobalNamespace::OVRManager___c*>(value));
}
inline ::GlobalNamespace::OVRManager___c* GlobalNamespace::OVRManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get>();
}
inline void GlobalNamespace::OVRManager___c::setStaticF___9__418_0(::System::Func_2<float_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, ::StringW>*, "<>9__418_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get>(
      std::forward<::System::Func_2<float_t, ::StringW>*>(value));
}
inline ::System::Func_2<float_t, ::StringW>* GlobalNamespace::OVRManager___c::getStaticF___9__418_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, ::StringW>*, "<>9__418_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get>();
}
inline void GlobalNamespace::OVRManager___c::setStaticF___9__434_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*, "<>9__434_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get>(
      std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* GlobalNamespace::OVRManager___c::getStaticF___9__434_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*, "<>9__434_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get>();
}
inline void GlobalNamespace::OVRManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRManager___c::_InitOVRManager_b__418_0(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get(), "<InitOVRManager>b__418_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, f);
}
inline int32_t GlobalNamespace::OVRManager___c::_FindMainCamera_b__434_0(::UnityEngine::Camera* c0, ::UnityEngine::Camera* c1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager___c*>::get(), "<FindMainCamera>b__434_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, c0, c1);
}
inline ::GlobalNamespace::OVRManager___c* GlobalNamespace::OVRManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager___c::OVRManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRManager> (*)()>(&::GlobalNamespace::OVRManager::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc3cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager*)>(&::GlobalNamespace::OVRManager::set_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3fc3d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_instance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRDisplay* (*)()>(&::GlobalNamespace::OVRManager::get_display)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc3d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_display",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDisplay*)>(&::GlobalNamespace::OVRManager::set_display)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3fc3dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_display", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDisplay*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tracker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTracker* (*)()>(&::GlobalNamespace::OVRManager::get_tracker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc3e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_tracker",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tracker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTracker*)>(&::GlobalNamespace::OVRManager::set_tracker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3fc3e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_tracker", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTracker*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_boundary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRBoundary* (*)()>(&::GlobalNamespace::OVRManager::get_boundary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc3ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_boundary",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_boundary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRBoundary*)>(&::GlobalNamespace::OVRManager::set_boundary)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3fc3f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_boundary", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoundary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_runtimeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRManager::get_runtimeSettings)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc3f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_runtimeSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_runtimeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRRuntimeSettings*)>(&::GlobalNamespace::OVRManager::set_runtimeSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3fc3fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_runtimeSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRRuntimeSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_profile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OVRProfile> (*)()>(&::GlobalNamespace::OVRManager::get_profile)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3fc4048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_profile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc421c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc42f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDLost", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc43d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDMounted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDMounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc44b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDMounted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDMounted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDMounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc458c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDMounted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDUnmounted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDUnmounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDUnmounted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDUnmounted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDUnmounted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDUnmounted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_VrFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc48fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_VrFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_VrFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc49d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_VrFocusLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_VrFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_VrFocusLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_InputFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_InputFocusAcquired",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_InputFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_InputFocusLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_InputFocusLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_InputFocusLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioOutChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_AudioOutChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_AudioOutChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioOutChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_AudioOutChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc4fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_AudioOutChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioInChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_AudioInChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc50b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_AudioInChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioInChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_AudioInChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc5194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_AudioInChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_TrackingAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc5270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_TrackingAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_TrackingAcquired)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_TrackingAcquired", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_TrackingLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc5428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_TrackingLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingLost
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_TrackingLost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc5504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_TrackingLost", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_DisplayRefreshRateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<float_t, float_t>*)>(&::GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc55e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_DisplayRefreshRateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_DisplayRefreshRateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<float_t, float_t>*)>(&::GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc56d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_DisplayRefreshRateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc57c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpatialAnchorCreateComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc58bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpatialAnchorCreateComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*)>(
        &::GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc59b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*)>(
        &::GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc5aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::OVRManager::add_SpaceQueryResults)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc5b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceQueryResults", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryResults)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc5c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceQueryResults", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::add_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc5d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc5e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::add_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc5f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceSaveComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::remove_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc605c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceSaveComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceEraseComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*)>(
    &::GlobalNamespace::OVRManager::add_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc6150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceEraseComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*)>(
    &::GlobalNamespace::OVRManager::remove_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc6244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_ShareSpacesComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::add_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc6338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_ShareSpacesComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_ShareSpacesComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::remove_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc642c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_ShareSpacesComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::add_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc6520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceListSaveComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::remove_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc6614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceListSaveComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SceneCaptureComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::add_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc6708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SceneCaptureComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SceneCaptureComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::remove_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3fc67fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SceneCaptureComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HSWDismissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HSWDismissed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc68f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HSWDismissed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HSWDismissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HSWDismissed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3fc69cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HSWDismissed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isHmdPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isHmdPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fc6aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isHmdPresent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isHmdPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_isHmdPresent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc6b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_isHmdPresent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioOutId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioOutId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc6be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_audioOutId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioInId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioInId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc6c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_audioInId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasVrFocus)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fc6c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_hasVrFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_hasVrFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_hasVrFocus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc6d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_hasVrFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc6dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_hasInputFocus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_chromatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_chromatic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc6e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_chromatic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_chromatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_chromatic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc6ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_chromatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_monoscopic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_monoscopic)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc6f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_monoscopic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_monoscopic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_monoscopic)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fc6fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_monoscopic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sharpenType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_LayerSharpenType (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_sharpenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_sharpenType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_sharpenType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRPlugin_LayerSharpenType)>(
    &::GlobalNamespace::OVRManager::set_sharpenType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc7068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_sharpenType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_LayerSharpenType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_colorGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_ColorSpace (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_colorGamut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc70d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_colorGamut",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_colorGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_ColorSpace)>(
    &::GlobalNamespace::OVRManager::set_colorGamut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc70d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_colorGamut", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_ColorSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_nativeColorGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_ColorSpace (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_nativeColorGamut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc7140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_nativeColorGamut",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsAdaptiveResSupportedByEngine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "IsAdaptiveResSupportedByEngine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc7198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_headPoseRelativeOffsetRotation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3fc71a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_headPoseRelativeOffsetRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc728c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_headPoseRelativeOffsetTranslation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetTranslation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3fc7298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_headPoseRelativeOffsetTranslation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeFovPremultipliedAlphaModeEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc73b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeFovPremultipliedAlphaModeEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeFovPremultipliedAlphaModeEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc7400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_eyeFovPremultipliedAlphaModeEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_enableMixedReality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_enableMixedReality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_enableMixedReality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc7460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_enableMixedReality",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc746c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc747c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc748c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc7494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_compositionMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_CompositionMethod (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc74a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_compositionMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_compositionMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_CompositionMethod)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc74a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.set_compositionMethod", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_CompositionMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc74b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc74bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc74c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc74d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_CameraDevice (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc74e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_CameraDevice)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc74e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_CameraDevice>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc74f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                    "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc74f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                    "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                    "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeyColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc7548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeyColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc7554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_useDynamicLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_useDynamicLighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc7598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_depthQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_DepthQuality (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_depthQuality",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_depthQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_DepthQuality)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_depthQuality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_DepthQuality>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                    "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_VirtualGreenScreenType (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_VirtualGreenScreenType)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_VirtualGreenScreenType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc75fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc760c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                    "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_mrcActivationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_MrcActivationMode (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_mrcActivationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_MrcActivationMode)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                 "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_MrcActivationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc7640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                    "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrApi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_XrApi (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_xrApi)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc7648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_xrApi",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc7698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_xrInstance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc76e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_xrSession",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_vsyncCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_vsyncCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_vsyncCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_vsyncCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(&::GlobalNamespace::OVRManager::set_vsyncCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc77c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_vsyncCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_batteryLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryTemperature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryTemperature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc78e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_batteryTemperature",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc796c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_batteryStatus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_volumeLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_volumeLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_volumeLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedCpuPerfLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel (*)()>(
    &::GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "get_suggestedCpuPerfLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedCpuPerfLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel)>(
    &::GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc7b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_suggestedCpuPerfLevel", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedGpuPerfLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel (*)()>(
    &::GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "get_suggestedGpuPerfLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedGpuPerfLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel)>(
    &::GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc7c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_suggestedGpuPerfLevel", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_cpuLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_cpuLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_cpuLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_cpuLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_cpuLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc7d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_cpuLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuLevel)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_gpuLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_gpuLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_gpuLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc7e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_gpuLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isPowerSavingActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isPowerSavingActive)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fc7ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isPowerSavingActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_EyeTextureFormat (*)()>(&::GlobalNamespace::OVRManager::get_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc7f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeTextureFormat",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTextureFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager_EyeTextureFormat)>(&::GlobalNamespace::OVRManager::set_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc7fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_eyeTextureFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_EyeTextureFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc8028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeTrackedFoveatedRenderingSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc8078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeTrackedFoveatedRenderingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3fc80c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_eyeTrackedFoveatedRenderingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRManager::OnPermissionGranted)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3fc82a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnPermissionGranted", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_foveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_FoveatedRenderingLevel (*)()>(
    &::GlobalNamespace::OVRManager::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc8374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "get_foveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_foveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager_FoveatedRenderingLevel)>(
    &::GlobalNamespace::OVRManager::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc83c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_foveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc841c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_fixedFoveatedRenderingSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel (*)()>(
    &::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc846c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_fixedFoveatedRenderingLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_fixedFoveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel)>(
    &::GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc84bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_fixedFoveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFoveatedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc8514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_useDynamicFoveatedRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFoveatedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc8564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_useDynamicFoveatedRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFixedFoveatedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc85bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_useDynamicFixedFoveatedRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFixedFoveatedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_useDynamicFixedFoveatedRendering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc8664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "get_tiledMultiResSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_TiledMultiResLevel (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc86b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_tiledMultiResLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tiledMultiResLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRManager_TiledMultiResLevel)>(&::GlobalNamespace::OVRManager::set_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc8704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_tiledMultiResLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TiledMultiResLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc875c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_gpuUtilSupported",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3fc87ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_gpuUtilLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_systemHeadsetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_SystemHeadsetType (*)()>(&::GlobalNamespace::OVRManager::get_systemHeadsetType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc885c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_systemHeadsetType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetColorScaleAndOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(
    &::GlobalNamespace::OVRManager::SetColorScaleAndOffset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fc88ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetColorScaleAndOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetOpenVRLocalPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVRManager::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3fc8964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetOpenVRLocalPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetOpenVRControllerOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::OVRManager::GetOpenVRControllerOffset)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3fc8a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetOpenVRControllerOffset", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetSpaceWarp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetSpaceWarp)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3fc8c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetSpaceWarp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetSpaceWarp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetSpaceWarp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc9558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetSpaceWarp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetDepthSubmission
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&::GlobalNamespace::OVRManager::SetDepthSubmission)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3fc95b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetDepthSubmission",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_trackingOriginType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_TrackingOrigin (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_trackingOriginType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3fc95cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_trackingOriginType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_trackingOriginType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_TrackingOrigin)>(
    &::GlobalNamespace::OVRManager::set_trackingOriginType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fc965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_trackingOriginType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TrackingOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_IsSimultaneousHandsAndControllersSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::get_IsSimultaneousHandsAndControllersSupported)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3fc96f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_IsSimultaneousHandsAndControllersSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isSupportedPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isSupportedPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3fc9718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isSupportedPlatform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isSupportedPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isSupportedPlatform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3fc9720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_isSupportedPlatform",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isUserPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isUserPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3fc972c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isUserPresent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isUserPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isUserPresent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fc9804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_isUserPresent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.RegisterEventListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_EventListener*)>(
    &::GlobalNamespace::OVRManager::RegisterEventListener)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "RegisterEventListener", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_EventListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.DeregisterEventListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_EventListener*)>(
    &::GlobalNamespace::OVRManager::DeregisterEventListener)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc98c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "DeregisterEventListener", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_EventListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_utilitiesVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_utilitiesVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3fc991c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_utilitiesVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_pluginVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_pluginVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc9974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_pluginVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sdkVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_sdkVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fc99c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_sdkVersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.MixedRealityEnabledFromCmd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fc9a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "MixedRealityEnabledFromCmd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseDirectCompositionFromCmd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseDirectCompositionFromCmd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fc9acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "UseDirectCompositionFromCmd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseExternalCompositionFromCmd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseExternalCompositionFromCmd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fc9b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "UseExternalCompositionFromCmd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.CreateMixedRealityCaptureConfigurationFileFromCmd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fc9c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "CreateMixedRealityCaptureConfigurationFileFromCmd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LoadMixedRealityCaptureConfigurationFileFromCmd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fc9cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "LoadMixedRealityCaptureConfigurationFileFromCmd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsUnityAlphaOrBetaVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3fc9dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "IsUnityAlphaOrBetaVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitOVRManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitOVRManager)> {
  constexpr static std::size_t size = 0xf8c;
  constexpr static std::size_t addrs = 0x3fc9e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "InitOVRManager",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitPermissionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitPermissionRequest)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3fcb5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "InitPermissionRequest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3fcb8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetCurrentXRDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::SetCurrentXRDevice)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3fcb938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetCurrentXRDevice",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3fcba88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "GetCurrentDisplaySubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystemDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRDisplaySubsystemDescriptor* (*)()>(
    &::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3fcbc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetCurrentDisplaySubsystemDescriptor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentInputSubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3fcbda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "GetCurrentInputSubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Initialize)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3fcb378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Update)> {
  constexpr static std::size_t size = 0x2020;
  constexpr static std::size_t addrs = 0x3fcbf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateHMDEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::UpdateHMDEvents)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0x3fce184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "UpdateHMDEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FindMainCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::GlobalNamespace::OVRManager::FindMainCamera)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x3fc8ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "FindMainCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3fcf33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::LateUpdate)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3fcf3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fcf5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3fcf630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3fcf6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnApplicationPause",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3fcf754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3fcf7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnApplicationQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ReturnToLauncher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::ReturnToLauncher)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3fcf844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "ReturnToLauncher",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PlatformUIConfirmQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::PlatformUIConfirmQuit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3fcf890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "PlatformUIConfirmQuit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticInitializeMixedRealityCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(
    &::GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x3fcae28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "StaticInitializeMixedRealityCapture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticUpdateMixedRealityCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_TrackingOrigin)>(
        &::GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x3fcec74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "StaticUpdateMixedRealityCapture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TrackingOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticShutdownMixedRealityCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(
    &::GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3fcdf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "StaticShutdownMixedRealityCapture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PassthroughInitializedOrPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRManager_PassthroughInitializationState)>(
    &::GlobalNamespace::OVRManager::PassthroughInitializedOrPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3fcfee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "PassthroughInitializedOrPending", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_PassthroughInitializationState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitializeInsightPassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::InitializeInsightPassthrough)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3fcb6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "InitializeInsightPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ShutdownInsightPassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::ShutdownInsightPassthrough)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3fce054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "ShutdownInsightPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateInsightPassthrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::UpdateInsightPassthrough)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3fcf138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "UpdateInsightPassthrough",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsMultimodalHandsControllersSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsMultimodalHandsControllersSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fcfef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "IsMultimodalHandsControllersSupported",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3fcff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "IsInsightPassthroughSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetPassthroughCapabilities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRManager_PassthroughCapabilities* (*)()>(
    &::GlobalNamespace::OVRManager::GetPassthroughCapabilities)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3fcff94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "GetPassthroughCapabilities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fd0128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "IsInsightPassthroughInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.HasInsightPassthroughInitFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fd0188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "HasInsightPassthroughInitFailed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitPending)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3fd01e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "IsInsightPassthroughInitPending",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsPassthroughRecommended
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsPassthroughRecommended)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3fd0248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                               "IsPassthroughRecommended", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3fd02b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>*& GlobalNamespace::OVRManager::__cordl_internal_get_disabledCameras() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledCameras;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* const& GlobalNamespace::OVRManager::__cordl_internal_get_disabledCameras() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledCameras;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_disabledCameras(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disabledCameras)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_prevTimeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevTimeScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_prevTimeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prevTimeScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_prevTimeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prevTimeScale = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_useRecommendedMSAALevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRecommendedMSAALevel;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_useRecommendedMSAALevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRecommendedMSAALevel;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_useRecommendedMSAALevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useRecommendedMSAALevel = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__monoscopic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoscopic;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__monoscopic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____monoscopic;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__monoscopic(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____monoscopic = value;
}
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType& GlobalNamespace::OVRManager::__cordl_internal_get__sharpenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharpenType;
}
constexpr ::GlobalNamespace::OVRPlugin_LayerSharpenType const& GlobalNamespace::OVRManager::__cordl_internal_get__sharpenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharpenType;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__sharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sharpenType = value;
}
constexpr ::GlobalNamespace::OVRManager_ColorSpace& GlobalNamespace::OVRManager::__cordl_internal_get__colorGamut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorGamut;
}
constexpr ::GlobalNamespace::OVRManager_ColorSpace const& GlobalNamespace::OVRManager::__cordl_internal_get__colorGamut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorGamut;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__colorGamut(::GlobalNamespace::OVRManager_ColorSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorGamut = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_enableDynamicResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableDynamicResolution;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_enableDynamicResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableDynamicResolution;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_enableDynamicResolution(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableDynamicResolution = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_minDynamicResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDynamicResolutionScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_minDynamicResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minDynamicResolutionScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_minDynamicResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minDynamicResolutionScale = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_maxDynamicResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDynamicResolutionScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_maxDynamicResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDynamicResolutionScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_maxDynamicResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDynamicResolutionScale = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_minRenderScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minRenderScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_minRenderScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minRenderScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_minRenderScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minRenderScale = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_maxRenderScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRenderScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_maxRenderScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRenderScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_maxRenderScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRenderScale = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRManager::__cordl_internal_get__headPoseRelativeOffsetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPoseRelativeOffsetRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRManager::__cordl_internal_get__headPoseRelativeOffsetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPoseRelativeOffsetRotation;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPoseRelativeOffsetRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRManager::__cordl_internal_get__headPoseRelativeOffsetTranslation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPoseRelativeOffsetTranslation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRManager::__cordl_internal_get__headPoseRelativeOffsetTranslation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPoseRelativeOffsetTranslation;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headPoseRelativeOffsetTranslation = value;
}
constexpr int32_t& GlobalNamespace::OVRManager::__cordl_internal_get_profilerTcpPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profilerTcpPort;
}
constexpr int32_t const& GlobalNamespace::OVRManager::__cordl_internal_get_profilerTcpPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___profilerTcpPort;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_profilerTcpPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___profilerTcpPort = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_expandMixedRealityCapturePropertySheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandMixedRealityCapturePropertySheet;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_expandMixedRealityCapturePropertySheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expandMixedRealityCapturePropertySheet;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_expandMixedRealityCapturePropertySheet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expandMixedRealityCapturePropertySheet = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_enableMixedReality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMixedReality;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_enableMixedReality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMixedReality;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_enableMixedReality(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableMixedReality = value;
}
constexpr ::GlobalNamespace::OVRManager_CompositionMethod& GlobalNamespace::OVRManager::__cordl_internal_get_compositionMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionMethod;
}
constexpr ::GlobalNamespace::OVRManager_CompositionMethod const& GlobalNamespace::OVRManager::__cordl_internal_get_compositionMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionMethod;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositionMethod = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OVRManager::__cordl_internal_get_extraHiddenLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraHiddenLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OVRManager::__cordl_internal_get_extraHiddenLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraHiddenLayers;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_extraHiddenLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraHiddenLayers = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::OVRManager::__cordl_internal_get_extraVisibleLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraVisibleLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::OVRManager::__cordl_internal_get_extraVisibleLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraVisibleLayers;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_extraVisibleLayers(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraVisibleLayers = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicCullingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicCullingMask;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicCullingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicCullingMask;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_dynamicCullingMask(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicCullingMask = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRManager::__cordl_internal_get_externalCompositionBackdropColorRift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorRift;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRManager::__cordl_internal_get_externalCompositionBackdropColorRift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorRift;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_externalCompositionBackdropColorRift(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalCompositionBackdropColorRift = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRManager::__cordl_internal_get_externalCompositionBackdropColorQuest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorQuest;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRManager::__cordl_internal_get_externalCompositionBackdropColorQuest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___externalCompositionBackdropColorQuest;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___externalCompositionBackdropColorQuest = value;
}
constexpr ::GlobalNamespace::OVRManager_CameraDevice& GlobalNamespace::OVRManager::__cordl_internal_get_capturingCameraDevice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capturingCameraDevice;
}
constexpr ::GlobalNamespace::OVRManager_CameraDevice const& GlobalNamespace::OVRManager::__cordl_internal_get_capturingCameraDevice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capturingCameraDevice;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capturingCameraDevice = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_flipCameraFrameHorizontally() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameHorizontally;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_flipCameraFrameHorizontally() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameHorizontally;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_flipCameraFrameHorizontally(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipCameraFrameHorizontally = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_flipCameraFrameVertically() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameVertically;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_flipCameraFrameVertically() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flipCameraFrameVertically;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_flipCameraFrameVertically(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flipCameraFrameVertically = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_handPoseStateLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPoseStateLatency;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_handPoseStateLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handPoseStateLatency;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_handPoseStateLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handPoseStateLatency = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_sandwichCompositionRenderLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionRenderLatency;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_sandwichCompositionRenderLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionRenderLatency;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_sandwichCompositionRenderLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sandwichCompositionRenderLatency = value;
}
constexpr int32_t& GlobalNamespace::OVRManager::__cordl_internal_get_sandwichCompositionBufferedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionBufferedFrames;
}
constexpr int32_t const& GlobalNamespace::OVRManager::__cordl_internal_get_sandwichCompositionBufferedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sandwichCompositionBufferedFrames;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_sandwichCompositionBufferedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sandwichCompositionBufferedFrames = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeyColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeyColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeyColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeyColor;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_chromaKeyColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeyColor = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeySimilarity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySimilarity;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeySimilarity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySimilarity;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_chromaKeySimilarity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeySimilarity = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeySmoothRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySmoothRange;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeySmoothRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySmoothRange;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_chromaKeySmoothRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeySmoothRange = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeySpillRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySpillRange;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_chromaKeySpillRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaKeySpillRange;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_chromaKeySpillRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaKeySpillRange = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_useDynamicLighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDynamicLighting;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_useDynamicLighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useDynamicLighting;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_useDynamicLighting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useDynamicLighting = value;
}
constexpr ::GlobalNamespace::OVRManager_DepthQuality& GlobalNamespace::OVRManager::__cordl_internal_get_depthQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthQuality;
}
constexpr ::GlobalNamespace::OVRManager_DepthQuality const& GlobalNamespace::OVRManager::__cordl_internal_get_depthQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthQuality;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthQuality = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicLightingSmoothFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingSmoothFactor;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicLightingSmoothFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingSmoothFactor;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_dynamicLightingSmoothFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicLightingSmoothFactor = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicLightingDepthVariationClampingValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingDepthVariationClampingValue;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicLightingDepthVariationClampingValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicLightingDepthVariationClampingValue;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_dynamicLightingDepthVariationClampingValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicLightingDepthVariationClampingValue = value;
}
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenType;
}
constexpr ::GlobalNamespace::OVRManager_VirtualGreenScreenType const& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenType;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenType = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenTopY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenTopY;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenTopY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenTopY;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_virtualGreenScreenTopY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenTopY = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenBottomY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenBottomY;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenBottomY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenBottomY;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_virtualGreenScreenBottomY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenBottomY = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenApplyDepthCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenApplyDepthCulling;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenApplyDepthCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenApplyDepthCulling;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_virtualGreenScreenApplyDepthCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenApplyDepthCulling = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenDepthTolerance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenDepthTolerance;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_virtualGreenScreenDepthTolerance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualGreenScreenDepthTolerance;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_virtualGreenScreenDepthTolerance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualGreenScreenDepthTolerance = value;
}
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode& GlobalNamespace::OVRManager::__cordl_internal_get_mrcActivationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcActivationMode;
}
constexpr ::GlobalNamespace::OVRManager_MrcActivationMode const& GlobalNamespace::OVRManager::__cordl_internal_get_mrcActivationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcActivationMode;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mrcActivationMode = value;
}
constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*& GlobalNamespace::OVRManager::__cordl_internal_get_instantiateMixedRealityCameraGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiateMixedRealityCameraGameObject;
}
constexpr ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* const& GlobalNamespace::OVRManager::__cordl_internal_get_instantiateMixedRealityCameraGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instantiateMixedRealityCameraGameObject;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___instantiateMixedRealityCameraGameObject)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_launchMultimodalHandsControllersOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchMultimodalHandsControllersOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_launchMultimodalHandsControllersOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchMultimodalHandsControllersOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_launchMultimodalHandsControllersOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launchMultimodalHandsControllersOnStartup = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_isInsightPassthroughEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInsightPassthroughEnabled;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_isInsightPassthroughEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInsightPassthroughEnabled;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_isInsightPassthroughEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInsightPassthroughEnabled = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_requestBodyTrackingPermissionOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestBodyTrackingPermissionOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_requestBodyTrackingPermissionOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestBodyTrackingPermissionOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_requestBodyTrackingPermissionOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestBodyTrackingPermissionOnStartup = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_requestFaceTrackingPermissionOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestFaceTrackingPermissionOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_requestFaceTrackingPermissionOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestFaceTrackingPermissionOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_requestFaceTrackingPermissionOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestFaceTrackingPermissionOnStartup = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_requestEyeTrackingPermissionOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestEyeTrackingPermissionOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_requestEyeTrackingPermissionOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestEyeTrackingPermissionOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_requestEyeTrackingPermissionOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestEyeTrackingPermissionOnStartup = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_requestScenePermissionOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestScenePermissionOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_requestScenePermissionOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestScenePermissionOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_requestScenePermissionOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestScenePermissionOnStartup = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__localDimming() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDimming;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__localDimming() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDimming;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__localDimming(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localDimming = value;
}
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin& GlobalNamespace::OVRManager::__cordl_internal_get__trackingOriginType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingOriginType;
}
constexpr ::GlobalNamespace::OVRManager_TrackingOrigin const& GlobalNamespace::OVRManager::__cordl_internal_get__trackingOriginType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackingOriginType;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__trackingOriginType(::GlobalNamespace::OVRManager_TrackingOrigin value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trackingOriginType = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_usePositionTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePositionTracking;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_usePositionTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePositionTracking;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_usePositionTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePositionTracking = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_useRotationTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRotationTracking;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_useRotationTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useRotationTracking;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_useRotationTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useRotationTracking = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_useIPDInPositionTracking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useIPDInPositionTracking;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_useIPDInPositionTracking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useIPDInPositionTracking;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_useIPDInPositionTracking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useIPDInPositionTracking = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_resetTrackerOnLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetTrackerOnLoad;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_resetTrackerOnLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resetTrackerOnLoad;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_resetTrackerOnLoad(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resetTrackerOnLoad = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_AllowRecenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllowRecenter;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_AllowRecenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllowRecenter;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_AllowRecenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AllowRecenter = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_LateControllerUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LateControllerUpdate;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_LateControllerUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LateControllerUpdate;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_LateControllerUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LateControllerUpdate = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_LateLatching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LateLatching;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_LateLatching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LateLatching;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_LateLatching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LateLatching = value;
}
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType& GlobalNamespace::OVRManager::__cordl_internal_get__readOnlyControllerDrivenHandPosesType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnlyControllerDrivenHandPosesType;
}
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const& GlobalNamespace::OVRManager::__cordl_internal_get__readOnlyControllerDrivenHandPosesType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnlyControllerDrivenHandPosesType;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__readOnlyControllerDrivenHandPosesType(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readOnlyControllerDrivenHandPosesType = value;
}
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType& GlobalNamespace::OVRManager::__cordl_internal_get_controllerDrivenHandPosesType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerDrivenHandPosesType;
}
constexpr ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType const& GlobalNamespace::OVRManager::__cordl_internal_get_controllerDrivenHandPosesType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerDrivenHandPosesType;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_controllerDrivenHandPosesType(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerDrivenHandPosesType = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__isSupportedPlatform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSupportedPlatform_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__isSupportedPlatform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isSupportedPlatform_k__BackingField;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__isSupportedPlatform_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isSupportedPlatform_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>*& GlobalNamespace::OVRManager::__cordl_internal_get_eventListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventListeners;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>* const& GlobalNamespace::OVRManager::__cordl_internal_get_eventListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventListeners;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_eventListeners(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRManager_EventListener*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventListeners)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRManager::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::OVRManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRManager>, "<instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityW<::GlobalNamespace::OVRManager>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRManager> GlobalNamespace::OVRManager::getStaticF__instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRManager>, "<instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__display_k__BackingField(::GlobalNamespace::OVRDisplay* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRDisplay*, "<display>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRDisplay*>(value));
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRManager::getStaticF__display_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRDisplay*, "<display>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__tracker_k__BackingField(::GlobalNamespace::OVRTracker* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTracker*, "<tracker>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRTracker*>(value));
}
inline ::GlobalNamespace::OVRTracker* GlobalNamespace::OVRManager::getStaticF__tracker_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTracker*, "<tracker>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__boundary_k__BackingField(::GlobalNamespace::OVRBoundary* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRBoundary*, "<boundary>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRBoundary*>(value));
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRManager::getStaticF__boundary_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRBoundary*, "<boundary>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__runtimeSettings_k__BackingField(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "<runtimeSettings>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRManager::getStaticF__runtimeSettings_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "<runtimeSettings>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__profile(::UnityW<::GlobalNamespace::OVRProfile> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRProfile>, "_profile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityW<::GlobalNamespace::OVRProfile>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRProfile> GlobalNamespace::OVRManager::getStaticF__profile() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRProfile>, "_profile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDMounted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDMounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDMounted() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDMounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDUnmounted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDUnmounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDUnmounted() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDUnmounted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_VrFocusAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "VrFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_VrFocusAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "VrFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_VrFocusLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "VrFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_VrFocusLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "VrFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_InputFocusAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "InputFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_InputFocusAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "InputFocusAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_InputFocusLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "InputFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_InputFocusLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "InputFocusLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_AudioOutChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "AudioOutChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_AudioOutChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "AudioOutChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_AudioInChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "AudioInChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_AudioInChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "AudioInChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_TrackingAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "TrackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_TrackingAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "TrackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_TrackingLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "TrackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_TrackingLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "TrackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<float_t, float_t>*, "DisplayRefreshRateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_2<float_t, float_t>*>(value));
}
inline ::System::Action_2<float_t, float_t>* GlobalNamespace::OVRManager::getStaticF_DisplayRefreshRateChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<float_t, float_t>*, "DisplayRefreshRateChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*, "SpatialAnchorCreateComplete",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>(value));
}
inline ::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* GlobalNamespace::OVRManager::getStaticF_SpatialAnchorCreateComplete() {
  return ::cordl_internals::getStaticField<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*, "SpatialAnchorCreateComplete",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceSetComponentStatusComplete(
    ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*,
                                    "SpaceSetComponentStatusComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>(value));
}
inline ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*
GlobalNamespace::OVRManager::getStaticF_SpaceSetComponentStatusComplete() {
  return ::cordl_internals::getStaticField<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*,
                                           "SpaceSetComponentStatusComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceQueryResults(::System::Action_1<uint64_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<uint64_t>*, "SpaceQueryResults", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_1<uint64_t>*>(value));
}
inline ::System::Action_1<uint64_t>* GlobalNamespace::OVRManager::getStaticF_SpaceQueryResults() {
  return ::cordl_internals::getStaticField<::System::Action_1<uint64_t>*, "SpaceQueryResults", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, bool>*, "SpaceQueryComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_2<uint64_t, bool>*>(value));
}
inline ::System::Action_2<uint64_t, bool>* GlobalNamespace::OVRManager::getStaticF_SpaceQueryComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, bool>*, "SpaceQueryComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*, "SpaceSaveComplete",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>(value));
}
inline ::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* GlobalNamespace::OVRManager::getStaticF_SpaceSaveComplete() {
  return ::cordl_internals::getStaticField<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*, "SpaceSaveComplete",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*, "SpaceEraseComplete",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>(value));
}
inline ::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* GlobalNamespace::OVRManager::getStaticF_SpaceEraseComplete() {
  return ::cordl_internals::getStaticField<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*, "SpaceEraseComplete",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "ShareSpacesComplete",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(value));
}
inline ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* GlobalNamespace::OVRManager::getStaticF_ShareSpacesComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "ShareSpacesComplete",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "SpaceListSaveComplete",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(value));
}
inline ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* GlobalNamespace::OVRManager::getStaticF_SpaceListSaveComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "SpaceListSaveComplete",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, bool>*, "SceneCaptureComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action_2<uint64_t, bool>*>(value));
}
inline ::System::Action_2<uint64_t, bool>* GlobalNamespace::OVRManager::getStaticF_SceneCaptureComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, bool>*, "SceneCaptureComplete", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HSWDismissed(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HSWDismissed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HSWDismissed() {
  return ::cordl_internals::getStaticField<::System::Action*, "HSWDismissed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isHmdPresentCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_isHmdPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isHmdPresentCached() {
  return ::cordl_internals::getStaticField<bool, "_isHmdPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isHmdPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_isHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isHmdPresent() {
  return ::cordl_internals::getStaticField<bool, "_isHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__wasHmdPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_wasHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__wasHmdPresent() {
  return ::cordl_internals::getStaticField<bool, "_wasHmdPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hasVrFocusCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_hasVrFocusCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hasVrFocusCached() {
  return ::cordl_internals::getStaticField<bool, "_hasVrFocusCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hasVrFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "_hasVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hasVrFocus() {
  return ::cordl_internals::getStaticField<bool, "_hasVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hadVrFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "_hadVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hadVrFocus() {
  return ::cordl_internals::getStaticField<bool, "_hadVrFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hadInputFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "_hadInputFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hadInputFocus() {
  return ::cordl_internals::getStaticField<bool, "_hadInputFocus", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OCULUS_UNITY_NAME_STR(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_OCULUS_UNITY_NAME_STR() {
  return ::cordl_internals::getStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OPENVR_UNITY_NAME_STR(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_OPENVR_UNITY_NAME_STR() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_loadedXRDevice(::GlobalNamespace::OVRManager_XRDevice value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_XRDevice, "loadedXRDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRManager_XRDevice>(value));
}
inline ::GlobalNamespace::OVRManager_XRDevice GlobalNamespace::OVRManager::getStaticF_loadedXRDevice() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_XRDevice, "loadedXRDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchRotationOffsetEulerLeft(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchRotationOffsetEulerLeft() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchRotationOffsetEulerRight(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchRotationOffsetEulerRight() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchPositionOffsetLeft(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchPositionOffsetLeft() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchPositionOffsetRight(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchPositionOffsetRight() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_SpaceWarpEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "m_SpaceWarpEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_m_SpaceWarpEnabled() {
  return ::cordl_internals::getStaticField<bool, "m_SpaceWarpEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_AppSpaceTransform(::UnityW<::UnityEngine::Transform> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "m_AppSpaceTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRManager::getStaticF_m_AppSpaceTransform() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "m_AppSpaceTransform", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_CachedDepthTextureMode(::UnityEngine::DepthTextureMode value) {
  ::cordl_internals::setStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityEngine::DepthTextureMode>(value));
}
inline ::UnityEngine::DepthTextureMode GlobalNamespace::OVRManager::getStaticF_m_CachedDepthTextureMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isUserPresentCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_isUserPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isUserPresentCached() {
  return ::cordl_internals::getStaticField<bool, "_isUserPresentCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isUserPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_isUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isUserPresent() {
  return ::cordl_internals::getStaticField<bool, "_isUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__wasUserPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_wasUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__wasUserPresent() {
  return ::cordl_internals::getStaticField<bool, "_wasUserPresent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioOutIdIsCached(bool value) {
  ::cordl_internals::setStaticField<bool, "prevAudioOutIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_prevAudioOutIdIsCached() {
  return ::cordl_internals::getStaticField<bool, "prevAudioOutIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioInIdIsCached(bool value) {
  ::cordl_internals::setStaticField<bool, "prevAudioInIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_prevAudioInIdIsCached() {
  return ::cordl_internals::getStaticField<bool, "prevAudioInIdIsCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioOutId(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "prevAudioOutId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_prevAudioOutId() {
  return ::cordl_internals::getStaticField<::StringW, "prevAudioOutId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioInId(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "prevAudioInId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_prevAudioInId() {
  return ::cordl_internals::getStaticField<::StringW, "prevAudioInId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_wasPositionTracked(bool value) {
  ::cordl_internals::setStaticField<bool, "wasPositionTracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_wasPositionTracked() {
  return ::cordl_internals::getStaticField<bool, "wasPositionTracked", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_eventDataBuffer(::GlobalNamespace::OVRPlugin_EventDataBuffer value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_EventDataBuffer, "eventDataBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRPlugin_EventDataBuffer>(value));
}
inline ::GlobalNamespace::OVRPlugin_EventDataBuffer GlobalNamespace::OVRManager::getStaticF_eventDataBuffer() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_EventDataBuffer, "eventDataBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_UnityAlphaOrBetaVersionWarningMessage(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_UnityAlphaOrBetaVersionWarningMessage() {
  return ::cordl_internals::getStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OVRManagerinitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "OVRManagerinitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_OVRManagerinitialized() {
  return ::cordl_internals::getStaticField<bool, "OVRManagerinitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* GlobalNamespace::OVRManager::getStaticF_s_displaySubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* GlobalNamespace::OVRManager::getStaticF_s_displaySubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* GlobalNamespace::OVRManager::getStaticF_s_inputSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_multipleMainCameraWarningPresented(bool value) {
  ::cordl_internals::setStaticField<bool, "multipleMainCameraWarningPresented", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_multipleMainCameraWarningPresented() {
  return ::cordl_internals::getStaticField<bool, "multipleMainCameraWarningPresented", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_suppressUnableToFindMainCameraMessage(bool value) {
  ::cordl_internals::setStaticField<bool, "suppressUnableToFindMainCameraMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_suppressUnableToFindMainCameraMessage() {
  return ::cordl_internals::getStaticField<bool, "suppressUnableToFindMainCameraMessage", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_lastFoundMainCamera(::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*, "lastFoundMainCamera",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* GlobalNamespace::OVRManager::getStaticF_lastFoundMainCamera() {
  return ::cordl_internals::getStaticField<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*, "lastFoundMainCamera",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticMixedRealityCaptureInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "staticMixedRealityCaptureInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_staticMixedRealityCaptureInitialized() {
  return ::cordl_internals::getStaticField<bool, "staticMixedRealityCaptureInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticPrevEnableMixedRealityCapture(bool value) {
  ::cordl_internals::setStaticField<bool, "staticPrevEnableMixedRealityCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_staticPrevEnableMixedRealityCapture() {
  return ::cordl_internals::getStaticField<bool, "staticPrevEnableMixedRealityCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticMrcSettings(::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings>, "staticMrcSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> GlobalNamespace::OVRManager::getStaticF_staticMrcSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings>, "staticMrcSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool value) {
  ::cordl_internals::setStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning() {
  return ::cordl_internals::getStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__passthroughInitializationState(::GlobalNamespace::OVRManager_PassthroughInitializationState value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_PassthroughInitializationState, "_passthroughInitializationState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRManager_PassthroughInitializationState>(value));
}
inline ::GlobalNamespace::OVRManager_PassthroughInitializationState GlobalNamespace::OVRManager::getStaticF__passthroughInitializationState() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_PassthroughInitializationState, "_passthroughInitializationState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline void GlobalNamespace::OVRManager::setStaticF__passthroughCapabilities(::GlobalNamespace::OVRManager_PassthroughCapabilities* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_PassthroughCapabilities*, "_passthroughCapabilities",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>(
      std::forward<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(value));
}
inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GlobalNamespace::OVRManager::getStaticF__passthroughCapabilities() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_PassthroughCapabilities*, "_passthroughCapabilities",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get>();
}
inline ::UnityW<::GlobalNamespace::OVRManager> GlobalNamespace::OVRManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRManager>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_instance(::GlobalNamespace::OVRManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_instance", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRManager::get_display() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_display",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDisplay*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_display(::GlobalNamespace::OVRDisplay* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_display", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDisplay*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTracker* GlobalNamespace::OVRManager::get_tracker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_tracker",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTracker*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_tracker(::GlobalNamespace::OVRTracker* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_tracker", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTracker*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRManager::get_boundary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_boundary",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBoundary*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_boundary(::GlobalNamespace::OVRBoundary* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_boundary", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoundary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRManager::get_runtimeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_runtimeSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_runtimeSettings(::GlobalNamespace::OVRRuntimeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_runtimeSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRRuntimeSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRProfile> GlobalNamespace::OVRManager::get_profile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_profile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRProfile>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::add_HMDAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDLost", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDMounted(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDMounted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDMounted(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDMounted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDUnmounted(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HMDUnmounted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDUnmounted(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HMDUnmounted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_VrFocusAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_VrFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_VrFocusAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_VrFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_VrFocusLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_VrFocusLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_VrFocusLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_VrFocusLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_InputFocusAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_InputFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_InputFocusAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_InputFocusAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_InputFocusLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_InputFocusLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_InputFocusLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_InputFocusLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_AudioOutChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_AudioOutChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_AudioOutChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_AudioOutChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_AudioInChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_AudioInChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_AudioInChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_AudioInChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_TrackingAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_TrackingAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_TrackingAcquired(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_TrackingAcquired", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_TrackingLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_TrackingLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_TrackingLost(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_TrackingLost", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_DisplayRefreshRateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_DisplayRefreshRateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<float_t, float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpatialAnchorCreateComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpatialAnchorCreateComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete(
    ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete(
    ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceQueryResults(::System::Action_1<uint64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceQueryResults", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceQueryResults(::System::Action_1<uint64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceQueryResults", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<uint64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceSaveComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceSaveComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_ShareSpacesComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_ShareSpacesComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SpaceListSaveComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SpaceListSaveComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_SceneCaptureComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_SceneCaptureComplete", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<uint64_t, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HSWDismissed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "add_HSWDismissed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HSWDismissed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "remove_HSWDismissed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isHmdPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isHmdPresent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isHmdPresent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_isHmdPresent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::OVRManager::get_audioOutId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_audioOutId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRManager::get_audioInId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_audioInId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_hasVrFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_hasVrFocus(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_hasVrFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_hasInputFocus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_chromatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_chromatic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_chromatic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_chromatic", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_monoscopic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_monoscopic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_monoscopic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_monoscopic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_LayerSharpenType GlobalNamespace::OVRManager::get_sharpenType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_sharpenType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_LayerSharpenType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_sharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_sharpenType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_LayerSharpenType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager::get_colorGamut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_colorGamut",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ColorSpace, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_colorGamut(::GlobalNamespace::OVRManager_ColorSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_colorGamut", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_ColorSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager::get_nativeColorGamut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_nativeColorGamut",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ColorSpace, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "IsAdaptiveResSupportedByEngine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_headPoseRelativeOffsetRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_headPoseRelativeOffsetRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_headPoseRelativeOffsetTranslation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_headPoseRelativeOffsetTranslation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeFovPremultipliedAlphaModeEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_eyeFovPremultipliedAlphaModeEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_enableMixedReality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_enableMixedReality",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_compositionMethod", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CompositionMethod, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_compositionMethod",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_CompositionMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_CameraDevice GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CameraDevice, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_CameraDevice>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                  "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                  "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_DepthQuality GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_depthQuality",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_DepthQuality, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_depthQuality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_DepthQuality>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_VirtualGreenScreenType GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_VirtualGreenScreenType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_VirtualGreenScreenType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                  "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                  "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_MrcActivationMode GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                               "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_MrcActivationMode, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_MrcActivationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                  "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_XrApi GlobalNamespace::OVRManager::get_xrApi() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_xrApi",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_XrApi, false>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRManager::get_xrInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_xrInstance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRManager::get_xrSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_xrSession",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRManager::get_vsyncCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_vsyncCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_vsyncCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_vsyncCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::get_batteryLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_batteryLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_batteryTemperature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_batteryTemperature",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::OVRManager::get_batteryStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_batteryStatus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_volumeLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_volumeLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_suggestedCpuPerfLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_suggestedCpuPerfLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_suggestedGpuPerfLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_suggestedGpuPerfLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::get_cpuLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_cpuLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_cpuLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_cpuLevel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::get_gpuLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_gpuLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_gpuLevel(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_gpuLevel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isPowerSavingActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isPowerSavingActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_EyeTextureFormat GlobalNamespace::OVRManager::get_eyeTextureFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeTextureFormat",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_EyeTextureFormat, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeTextureFormat(::GlobalNamespace::OVRManager_EyeTextureFormat value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_eyeTextureFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_EyeTextureFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeTrackedFoveatedRenderingSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_eyeTrackedFoveatedRenderingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_eyeTrackedFoveatedRenderingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnPermissionGranted", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, permissionId);
}
inline ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager::get_foveatedRenderingLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "get_foveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_FoveatedRenderingLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_foveatedRenderingLevel(::GlobalNamespace::OVRManager_FoveatedRenderingLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_foveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_fixedFoveatedRenderingSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "get_fixedFoveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_fixedFoveatedRenderingLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "get_useDynamicFoveatedRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_useDynamicFoveatedRendering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_useDynamicFixedFoveatedRendering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_useDynamicFixedFoveatedRendering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_tiledMultiResSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "get_tiledMultiResSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager::get_tiledMultiResLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_tiledMultiResLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_TiledMultiResLevel, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_tiledMultiResLevel(::GlobalNamespace::OVRManager_TiledMultiResLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_tiledMultiResLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TiledMultiResLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_gpuUtilSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_gpuUtilSupported",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_gpuUtilLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_gpuUtilLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager::get_systemHeadsetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_systemHeadsetType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_SystemHeadsetType, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetColorScaleAndOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, colorScale, colorOffset, applyToAllLayers);
}
inline void GlobalNamespace::OVRManager::SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetOpenVRLocalPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRManager::GetOpenVRControllerOffset(::UnityEngine::XR::XRNode hand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetOpenVRControllerOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose, false>(nullptr, ___internal_method, hand);
}
inline void GlobalNamespace::OVRManager::SetSpaceWarp(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetSpaceWarp", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enabled);
}
inline bool GlobalNamespace::OVRManager::GetSpaceWarp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetSpaceWarp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::SetDepthSubmission(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetDepthSubmission",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enable);
}
inline ::GlobalNamespace::OVRManager_TrackingOrigin GlobalNamespace::OVRManager::get_trackingOriginType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_trackingOriginType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_TrackingOrigin, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_trackingOriginType(::GlobalNamespace::OVRManager_TrackingOrigin value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_trackingOriginType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TrackingOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_IsSimultaneousHandsAndControllersSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_IsSimultaneousHandsAndControllersSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_isSupportedPlatform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isSupportedPlatform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isSupportedPlatform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_isSupportedPlatform",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isUserPresent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_isUserPresent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isUserPresent(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "set_isUserPresent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::RegisterEventListener(::GlobalNamespace::OVRManager_EventListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "RegisterEventListener", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_EventListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
inline void GlobalNamespace::OVRManager::DeregisterEventListener(::GlobalNamespace::OVRManager_EventListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "DeregisterEventListener", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_EventListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_utilitiesVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_utilitiesVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_pluginVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_pluginVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_sdkVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "get_sdkVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "MixedRealityEnabledFromCmd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::UseDirectCompositionFromCmd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "UseDirectCompositionFromCmd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::UseExternalCompositionFromCmd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "UseExternalCompositionFromCmd", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "CreateMixedRealityCaptureConfigurationFileFromCmd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "LoadMixedRealityCaptureConfigurationFileFromCmd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "IsUnityAlphaOrBetaVersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::InitOVRManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "InitOVRManager",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::InitPermissionRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "InitPermissionRequest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetCurrentXRDevice() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "SetCurrentXRDevice",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline Il2CppObject* GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "GetCurrentDisplaySubsystem", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetCurrentDisplaySubsystemDescriptor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystemDescriptor*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* GlobalNamespace::OVRManager::GetCurrentInputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "GetCurrentInputSubsystem",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateHMDEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "UpdateHMDEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::OVRManager::FindMainCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "FindMainCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnApplicationPause(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnApplicationPause",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline void GlobalNamespace::OVRManager::OnApplicationFocus(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focus);
}
inline void GlobalNamespace::OVRManager::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "OnApplicationQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::ReturnToLauncher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "ReturnToLauncher",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::PlatformUIConfirmQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "PlatformUIConfirmQuit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "StaticInitializeMixedRealityCapture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration);
}
inline void GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, ::UnityEngine::GameObject* gameObject,
                                                                         ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "StaticUpdateMixedRealityCapture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_TrackingOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration, gameObject, trackingOrigin);
}
inline void GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "StaticShutdownMixedRealityCapture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, configuration);
}
inline bool GlobalNamespace::OVRManager::PassthroughInitializedOrPending(::GlobalNamespace::OVRManager_PassthroughInitializationState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "PassthroughInitializedOrPending", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRManager_PassthroughInitializationState>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state);
}
inline bool GlobalNamespace::OVRManager::InitializeInsightPassthrough() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "InitializeInsightPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::ShutdownInsightPassthrough() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "ShutdownInsightPassthrough", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateInsightPassthrough(bool shouldBeEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "UpdateInsightPassthrough",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shouldBeEnabled);
}
inline bool GlobalNamespace::OVRManager::IsMultimodalHandsControllersSupported() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "IsMultimodalHandsControllersSupported",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "IsInsightPassthroughSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GlobalNamespace::OVRManager::GetPassthroughCapabilities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "GetPassthroughCapabilities", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_PassthroughCapabilities*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "IsInsightPassthroughInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "HasInsightPassthroughInitFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughInitPending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(),
                                                                             "IsInsightPassthroughInitPending", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsPassthroughRecommended() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), "IsPassthroughRecommended",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRManager* GlobalNamespace::OVRManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
constexpr GlobalNamespace::OVRManager::operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept {
  return static_cast<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* GlobalNamespace::OVRManager::i___GlobalNamespace__OVRMixedRealityCaptureConfiguration() noexcept {
  return static_cast<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager::OVRManager() {}
