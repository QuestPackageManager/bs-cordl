#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager.hpp"
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
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Quest_3S{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_13{ static_cast<int32_t>(0xd) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_14{ static_cast<int32_t>(0xe) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_15{ static_cast<int32_t>(0xf) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_16{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_17{ static_cast<int32_t>(0x11) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_18{ static_cast<int32_t>(0x12) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_19{ static_cast<int32_t>(0x13) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Placeholder_20{ static_cast<int32_t>(0x14) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_DK1{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_DK2{ static_cast<int32_t>(0x1001) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_CV1{ static_cast<int32_t>(0x1002) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_CB{ static_cast<int32_t>(0x1003) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Rift_S{ static_cast<int32_t>(0x1004) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Oculus_Link_Quest{ static_cast<int32_t>(0x1005) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Oculus_Link_Quest_2{ static_cast<int32_t>(0x1006) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Link_Quest_Pro{ static_cast<int32_t>(0x1007) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Link_Quest_3{ static_cast<int32_t>(0x1008) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::Meta_Link_Quest_3S{ static_cast<int32_t>(0x1009) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4106{ static_cast<int32_t>(0x100a) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4107{ static_cast<int32_t>(0x100b) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4108{ static_cast<int32_t>(0x100c) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4109{ static_cast<int32_t>(0x100d) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4110{ static_cast<int32_t>(0x100e) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4111{ static_cast<int32_t>(0x100f) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4112{ static_cast<int32_t>(0x1010) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager_SystemHeadsetType::PC_Placeholder_4113{ static_cast<int32_t>(0x1011) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetTheme::OVRManager_SystemHeadsetTheme(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetTheme::OVRManager_SystemHeadsetTheme() {}
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetTheme GlobalNamespace::OVRManager_SystemHeadsetTheme::Dark{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRManager_SystemHeadsetTheme GlobalNamespace::OVRManager_SystemHeadsetTheme::Light{ static_cast<int32_t>(0x1) };
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager_EventListener::*)(::GlobalNamespace::OVRPlugin_EventDataBuffer)>(
    &::GlobalNamespace::OVRManager_EventListener::OnEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_EventListener*>(), { ::i2c::class_of<::GlobalNamespace::OVRManager_EventListener*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRManager_EventListener::OnEvent(::GlobalNamespace::OVRPlugin_EventDataBuffer eventData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRManager_EventListener*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e70730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(
    ::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_MrcCameraType)>(&::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e707b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_MrcCameraType, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e707c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e7085c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::Invoke(::UnityEngine::GameObject* mainCameraGameObject,
                                                                                                            ::GlobalNamespace::OVRManager_MrcCameraType cameraType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, mainCameraGameObject, cameraType);
}
inline ::System::IAsyncResult* GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::BeginInvoke(::UnityEngine::GameObject* mainCameraGameObject,
                                                                                                     ::GlobalNamespace::OVRManager_MrcCameraType cameraType, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, mainCameraGameObject, cameraType, callback, object);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, result);
}
inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(object, method));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)()>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e70868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(), { "get_SupportsPassthrough", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities.get_SupportsColorPassthrough
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)()>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsColorPassthrough)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e70870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(), { "get_SupportsColorPassthrough", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities.get_MaxColorLutResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)()>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::get_MaxColorLutResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e70878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(), { "get_MaxColorLutResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager_PassthroughCapabilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager_PassthroughCapabilities::*)(bool, bool, uint32_t)>(
    &::GlobalNamespace::OVRManager_PassthroughCapabilities::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e700a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>() } })));
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(), { "get_SupportsPassthrough", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager_PassthroughCapabilities::get_SupportsColorPassthrough() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(), { "get_SupportsColorPassthrough", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::OVRManager_PassthroughCapabilities::get_MaxColorLutResolution() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(), { "get_MaxColorLutResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager_PassthroughCapabilities::_ctor(bool supportsPassthrough, bool supportsColorPassthrough, uint32_t maxColorLutResolution) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportsPassthrough, supportsColorPassthrough, maxColorLutResolution);
}
inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GlobalNamespace::OVRManager_PassthroughCapabilities::New_ctor(bool supportsPassthrough, bool supportsColorPassthrough,
                                                                                                                            uint32_t maxColorLutResolution) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(supportsPassthrough, supportsColorPassthrough, maxColorLutResolution));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_PassthroughCapabilities::OVRManager_PassthroughCapabilities() {}
template <typename T> constexpr T& GlobalNamespace::OVRManager_Observable_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::OVRManager_Observable_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::OVRManager_Observable_1<T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename T> constexpr ::System::Action_1<T>*& GlobalNamespace::OVRManager_Observable_1<T>::__cordl_internal_get_OnChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnChanged;
}
template <typename T> constexpr ::System::Action_1<T>* const& GlobalNamespace::OVRManager_Observable_1<T>::__cordl_internal_get_OnChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnChanged;
}
template <typename T> constexpr void GlobalNamespace::OVRManager_Observable_1<T>::__cordl_internal_set_OnChanged(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OnChanged = value;
}
template <typename T> inline T GlobalNamespace::OVRManager_Observable_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_Observable_1<T>*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRManager_Observable_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_Observable_1<T>*>(), { "set_Value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::OVRManager_Observable_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_Observable_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRManager_Observable_1<T>::_ctor(T defaultValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_Observable_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultValue);
}
template <typename T> inline void GlobalNamespace::OVRManager_Observable_1<T>::_ctor(T defaultValue, ::System::Action_1<T>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager_Observable_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultValue, callback);
}
template <typename T> inline ::GlobalNamespace::OVRManager_Observable_1<T>* GlobalNamespace::OVRManager_Observable_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager_Observable_1<T>*>());
}
template <typename T> inline ::GlobalNamespace::OVRManager_Observable_1<T>* GlobalNamespace::OVRManager_Observable_1<T>::New_ctor(T defaultValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager_Observable_1<T>*>(defaultValue));
}
template <typename T> inline ::GlobalNamespace::OVRManager_Observable_1<T>* GlobalNamespace::OVRManager_Observable_1<T>::New_ctor(T defaultValue, ::System::Action_1<T>* callback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager_Observable_1<T>*>(defaultValue, callback));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRManager_Observable_1<T>::OVRManager_Observable_1() {}
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager___c::*)()>(&::GlobalNamespace::OVRManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e708d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c._InitOVRManager_b__449_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRManager___c::*)(float_t)>(&::GlobalNamespace::OVRManager___c::_InitOVRManager_b__449_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e708d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(), { "<InitOVRManager>b__449_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c._FindMainCamera_b__466_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRManager___c::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRManager___c::_FindMainCamera_b__466_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e708f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(),
                                                             { "<FindMainCamera>b__466_0", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager___c.__cctor_b__516_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager___c::*)(::GlobalNamespace::OVRManager_PassthroughInitializationState)>(
    &::GlobalNamespace::OVRManager___c::__cctor_b__516_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e70980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(), { "<.cctor>b__516_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_PassthroughInitializationState>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRManager___c::setStaticF___9(::GlobalNamespace::OVRManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager___c*, "<>9", ::GlobalNamespace::OVRManager___c*>(std::forward<::GlobalNamespace::OVRManager___c*>(value));
}
inline ::GlobalNamespace::OVRManager___c* GlobalNamespace::OVRManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager___c*, "<>9", ::GlobalNamespace::OVRManager___c*>();
}
inline void GlobalNamespace::OVRManager___c::setStaticF___9__449_0(::System::Func_2<float_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, ::StringW>*, "<>9__449_0", ::GlobalNamespace::OVRManager___c*>(std::forward<::System::Func_2<float_t, ::StringW>*>(value));
}
inline ::System::Func_2<float_t, ::StringW>* GlobalNamespace::OVRManager___c::getStaticF___9__449_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, ::StringW>*, "<>9__449_0", ::GlobalNamespace::OVRManager___c*>();
}
inline void GlobalNamespace::OVRManager___c::setStaticF___9__466_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*, "<>9__466_0", ::GlobalNamespace::OVRManager___c*>(
      std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* GlobalNamespace::OVRManager___c::getStaticF___9__466_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*, "<>9__466_0", ::GlobalNamespace::OVRManager___c*>();
}
inline void GlobalNamespace::OVRManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRManager___c::_InitOVRManager_b__449_0(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(), { "<InitOVRManager>b__449_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline int32_t GlobalNamespace::OVRManager___c::_FindMainCamera_b__466_0(::UnityEngine::Camera* c0, ::UnityEngine::Camera* c1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(),
                                                           { "<FindMainCamera>b__466_0", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c0, c1);
}
inline void GlobalNamespace::OVRManager___c::__cctor_b__516_0(::GlobalNamespace::OVRManager_PassthroughInitializationState newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager___c*>(), { "<.cctor>b__516_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_PassthroughInitializationState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline ::GlobalNamespace::OVRManager___c* GlobalNamespace::OVRManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager___c::OVRManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRManager> (*)()>(&::GlobalNamespace::OVRManager::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e60778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager*)>(&::GlobalNamespace::OVRManager::set_instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e607d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_instance", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_display
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRDisplay* (*)()>(&::GlobalNamespace::OVRManager::get_display)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e60834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_display", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_display
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDisplay*)>(&::GlobalNamespace::OVRManager::set_display)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e60890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_display", {}, { ::i2c::type_of<::GlobalNamespace::OVRDisplay*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tracker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTracker* (*)()>(&::GlobalNamespace::OVRManager::get_tracker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e608f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_tracker", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tracker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRTracker*)>(&::GlobalNamespace::OVRManager::set_tracker)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e6094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_tracker", {}, { ::i2c::type_of<::GlobalNamespace::OVRTracker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_boundary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRBoundary* (*)()>(&::GlobalNamespace::OVRManager::get_boundary)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e609ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_boundary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_boundary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRBoundary*)>(&::GlobalNamespace::OVRManager::set_boundary)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e60a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_boundary", {}, { ::i2c::type_of<::GlobalNamespace::OVRBoundary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_runtimeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRRuntimeSettings> (*)()>(&::GlobalNamespace::OVRManager::get_runtimeSettings)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e60a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_runtimeSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_runtimeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRRuntimeSettings*)>(&::GlobalNamespace::OVRManager::set_runtimeSettings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e60ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_runtimeSettings", {}, { ::i2c::type_of<::GlobalNamespace::OVRRuntimeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_profile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRProfile> (*)()>(&::GlobalNamespace::OVRManager::get_profile)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e60b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_profile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e60c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e60d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e60e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e60ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDMounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDMounted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e60fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDMounted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDMounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDMounted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e610d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDMounted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HMDUnmounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HMDUnmounted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e611c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDUnmounted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HMDUnmounted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HMDUnmounted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e612b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDUnmounted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e613a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_VrFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_VrFocusAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_VrFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_VrFocusLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_VrFocusLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_VrFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_VrFocusLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_VrFocusLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_VrFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_InputFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_InputFocusAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_InputFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_InputFocusLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_InputFocusLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_InputFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_InputFocusLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_InputFocusLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_InputFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioOutChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_AudioOutChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_AudioOutChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioOutChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_AudioOutChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_AudioOutChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_AudioInChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_AudioInChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_AudioInChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_AudioInChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_AudioInChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_AudioInChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_TrackingAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_TrackingAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingAcquired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_TrackingAcquired)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e61fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_TrackingAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_TrackingLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_TrackingLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e620c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_TrackingLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_TrackingLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_TrackingLost)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e621b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_TrackingLost", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_DisplayRefreshRateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<float_t, float_t>*)>(&::GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e622a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_DisplayRefreshRateChanged", {}, { ::i2c::type_of<::System::Action_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_DisplayRefreshRateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<float_t, float_t>*)>(&::GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e623b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_DisplayRefreshRateChanged", {}, { ::i2c::type_of<::System::Action_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e624b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "add_SpatialAnchorCreateComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e625c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "remove_SpatialAnchorCreateComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*)>(
        &::GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e626c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                            { "add_SpaceSetComponentStatusComplete",
                              {},
                              { ::i2c::type_of<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*)>(
        &::GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e627d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                            { "remove_SpaceSetComponentStatusComplete",
                              {},
                              { ::i2c::type_of<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::OVRManager::add_SpaceQueryResults)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e628d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_SpaceQueryResults", {}, { ::i2c::type_of<::System::Action_1<uint64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<uint64_t>*)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryResults)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e629e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_SpaceQueryResults", {}, { ::i2c::type_of<::System::Action_1<uint64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceQueryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::add_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e62ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_SpaceQueryComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceQueryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::remove_SpaceQueryComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e62bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_SpaceQueryComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceSaveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::add_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e62cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "add_SpaceSaveComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceSaveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*)>(
    &::GlobalNamespace::OVRManager::remove_SpaceSaveComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e62e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "remove_SpaceSaveComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceEraseComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*)>(
    &::GlobalNamespace::OVRManager::add_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e62f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                            { "add_SpaceEraseComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceEraseComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*)>(
    &::GlobalNamespace::OVRManager::remove_SpaceEraseComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                            { "remove_SpaceEraseComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_ShareSpacesComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::add_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "add_ShareSpacesComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_ShareSpacesComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::remove_ShareSpacesComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "remove_ShareSpacesComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::add_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "add_SpaceListSaveComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRManager::remove_SpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "remove_SpaceListSaveComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_SceneCaptureComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::add_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_SceneCaptureComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_SceneCaptureComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<uint64_t, bool>*)>(&::GlobalNamespace::OVRManager::remove_SceneCaptureComplete)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_SceneCaptureComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_PassthroughLayerResumed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::OVRManager::add_PassthroughLayerResumed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_PassthroughLayerResumed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<int32_t>*)>(&::GlobalNamespace::OVRManager::remove_PassthroughLayerResumed)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_BoundaryVisibilityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*)>(&::GlobalNamespace::OVRManager::add_BoundaryVisibilityChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "add_BoundaryVisibilityChanged", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_BoundaryVisibilityChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*)>(
    &::GlobalNamespace::OVRManager::remove_BoundaryVisibilityChanged)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e63a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "remove_BoundaryVisibilityChanged", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.add_HSWDismissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::add_HSWDismissed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e63b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HSWDismissed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.remove_HSWDismissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OVRManager::remove_HSWDismissed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e63c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HSWDismissed", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isHmdPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isHmdPresent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e63d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isHmdPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioOutId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioOutId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e63e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_audioOutId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_audioInId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRManager::get_audioInId)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e63ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_audioInId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasVrFocus)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e63f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_hasVrFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_hasVrFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_hasVrFocus)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e63ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_hasVrFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_hasInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_hasInputFocus)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_hasInputFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_chromatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_chromatic)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e640b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_chromatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_chromatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_chromatic)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e64144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_chromatic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_monoscopic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_monoscopic)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e641dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_monoscopic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_monoscopic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_monoscopic)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e64274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_monoscopic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sharpenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_LayerSharpenType (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_sharpenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_sharpenType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_sharpenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRPlugin_LayerSharpenType)>(&::GlobalNamespace::OVRManager::set_sharpenType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e64320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_sharpenType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_LayerSharpenType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_colorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_ColorSpace (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_colorGamut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6438c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_colorGamut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_colorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_ColorSpace)>(&::GlobalNamespace::OVRManager::set_colorGamut)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e64394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_colorGamut", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_ColorSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_nativeColorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_ColorSpace (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_nativeColorGamut)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e64400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_nativeColorGamut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_enableDynamicResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_enableDynamicResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_enableDynamicResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_enableDynamicResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_enableDynamicResolution)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e6445c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_enableDynamicResolution", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsAdaptiveResSupportedByEngine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e644cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsAdaptiveResSupportedByEngine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e644d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_headPoseRelativeOffsetRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e644e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_headPoseRelativeOffsetRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_headPoseRelativeOffsetTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e645c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_headPoseRelativeOffsetTranslation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_headPoseRelativeOffsetTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e645d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_headPoseRelativeOffsetTranslation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeFovPremultipliedAlphaModeEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e646d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeFovPremultipliedAlphaModeEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeFovPremultipliedAlphaModeEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e6472c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_eyeFovPremultipliedAlphaModeEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_enableMixedReality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_enableMixedReality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_enableMixedReality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_enableMixedReality", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::LayerMask)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_compositionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_CompositionMethod (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_compositionMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_compositionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_CompositionMethod)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e647d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_compositionMethod", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CompositionMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e647d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e647e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e647f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e647fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_CameraDevice (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_CameraDevice)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CameraDevice>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                                                           { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeyColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e64868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeyColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e64874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_useDynamicLighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_useDynamicLighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_depthQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_DepthQuality (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_depthQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_depthQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_DepthQuality)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_depthQuality", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_DepthQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_VirtualGreenScreenType (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_VirtualGreenScreenType)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e648f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_VirtualGreenScreenType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(float_t)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_mrcActivationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_MrcActivationMode (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_mrcActivationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_MrcActivationMode)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_MrcActivationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* (::GlobalNamespace::OVRManager::*)()>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*)>(
    &::GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isBoundaryVisibilitySuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isBoundaryVisibilitySuppressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isBoundaryVisibilitySuppressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isBoundaryVisibilitySuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isBoundaryVisibilitySuppressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e64968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_isBoundaryVisibilitySuppressed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrApi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_XrApi (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrApi)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e64970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_xrApi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrInstance)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e649c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_xrInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_xrSession
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_xrSession)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e64a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_xrSession", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_vsyncCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_vsyncCount)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_vsyncCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_vsyncCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(int32_t)>(&::GlobalNamespace::OVRManager::set_vsyncCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e64b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_vsyncCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_batteryLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryTemperature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryTemperature)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_batteryTemperature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_batteryStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_batteryStatus)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_batteryStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_volumeLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_volumeLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_volumeLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedCpuPerfLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel (*)()>(&::GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_suggestedCpuPerfLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedCpuPerfLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel)>(&::GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e64e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_suggestedCpuPerfLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_suggestedGpuPerfLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel (*)()>(&::GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e64f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_suggestedGpuPerfLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_suggestedGpuPerfLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel)>(&::GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e64fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_suggestedGpuPerfLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_cpuLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_cpuLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e65040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_cpuLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_cpuLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_cpuLevel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e650d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_cpuLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuLevel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e6516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_gpuLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_gpuLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRManager::set_gpuLevel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e65200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_gpuLevel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isPowerSavingActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_isPowerSavingActive)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e65298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isPowerSavingActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_EyeTextureFormat (*)()>(&::GlobalNamespace::OVRManager::get_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6532c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_EyeTextureFormat)>(&::GlobalNamespace::OVRManager::set_eyeTextureFormat)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e65380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_eyeTextureFormat", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_EyeTextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e653dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeTrackedFoveatedRenderingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_eyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e654cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeTrackedFoveatedRenderingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_eyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e655bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_eyeTrackedFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnPermissionGranted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRManager::OnPermissionGranted)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e656f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_foveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_FoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e657c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_foveatedRenderingLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_foveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_FoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e658b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_foveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e659b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_fixedFoveatedRenderingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_fixedFoveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e65b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_fixedFoveatedRenderingLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_fixedFoveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e65b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "set_fixedFoveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e65bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_useDynamicFoveatedRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e65cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_useDynamicFoveatedRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_useDynamicFixedFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e65db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_useDynamicFixedFoveatedRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_useDynamicFixedFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e65e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_useDynamicFixedFoveatedRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e65e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_tiledMultiResSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_tiledMultiResLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_TiledMultiResLevel (*)()>(&::GlobalNamespace::OVRManager::get_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e65ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_tiledMultiResLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_tiledMultiResLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_TiledMultiResLevel)>(&::GlobalNamespace::OVRManager::set_tiledMultiResLevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e65f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_tiledMultiResLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_TiledMultiResLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e65f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_gpuUtilSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_gpuUtilLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::OVRManager::get_gpuUtilLevel)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e65fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_gpuUtilLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_systemHeadsetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_SystemHeadsetType (*)()>(&::GlobalNamespace::OVRManager::get_systemHeadsetType)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6607c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_systemHeadsetType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_systemHeadsetTheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_SystemHeadsetTheme (*)()>(&::GlobalNamespace::OVRManager::get_systemHeadsetTheme)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e660d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_systemHeadsetTheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetSystemHeadsetTheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_SystemHeadsetTheme (*)()>(&::GlobalNamespace::OVRManager::GetSystemHeadsetTheme)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5e66120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetSystemHeadsetTheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetColorScaleAndOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(&::GlobalNamespace::OVRManager::SetColorScaleAndOffset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e663e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "SetColorScaleAndOffset", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetOpenVRLocalPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVRManager::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e665a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetOpenVRLocalPose",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                       ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetOpenVRControllerOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRManager::GetOpenVRControllerOffset)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e666c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetOpenVRControllerOffset", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetSpaceWarp)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5e668f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PrepareCameraForSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVRManager::PrepareCameraForSpaceWarp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e6715c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "PrepareCameraForSpaceWarp", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetSpaceWarp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetSpaceWarp)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e672cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetSpaceWarp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_trackingOriginType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_TrackingOrigin (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_trackingOriginType)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e67328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_trackingOriginType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_trackingOriginType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_TrackingOrigin)>(&::GlobalNamespace::OVRManager::set_trackingOriginType)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5e673c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_trackingOriginType", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_TrackingOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_IsSimultaneousHandsAndControllersSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_IsSimultaneousHandsAndControllersSupported)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e677c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_IsSimultaneousHandsAndControllersSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isSupportedPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isSupportedPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6783c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isSupportedPlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isSupportedPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isSupportedPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e67844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_isSupportedPlatform", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_isUserPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::get_isUserPresent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e6784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isUserPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.set_isUserPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::set_isUserPresent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e67924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_isUserPresent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.RegisterEventListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_EventListener*)>(&::GlobalNamespace::OVRManager::RegisterEventListener)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e67990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "RegisterEventListener", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_EventListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.DeregisterEventListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(::GlobalNamespace::OVRManager_EventListener*)>(
    &::GlobalNamespace::OVRManager::DeregisterEventListener)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e67a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "DeregisterEventListener", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_EventListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_utilitiesVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_utilitiesVersion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e67a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_utilitiesVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_pluginVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_pluginVersion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e67ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_pluginVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.get_sdkVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)()>(&::GlobalNamespace::OVRManager::get_sdkVersion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e67b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_sdkVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.MixedRealityEnabledFromCmd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e67b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "MixedRealityEnabledFromCmd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseDirectCompositionFromCmd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseDirectCompositionFromCmd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e67c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UseDirectCompositionFromCmd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UseExternalCompositionFromCmd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::UseExternalCompositionFromCmd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e67cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UseExternalCompositionFromCmd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.CreateMixedRealityCaptureConfigurationFileFromCmd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e67d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "CreateMixedRealityCaptureConfigurationFileFromCmd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LoadMixedRealityCaptureConfigurationFileFromCmd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e67df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "LoadMixedRealityCaptureConfigurationFileFromCmd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsUnityAlphaOrBetaVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e67e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsUnityAlphaOrBetaVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e67f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitOVRManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitOVRManager)> {
  constexpr static std::size_t size = 0x195c;
  constexpr static std::size_t addrs = 0x5e67fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitOVRManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitPermissionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitPermissionRequest)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5e6a19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitPermissionRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e6a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetCurrentXRDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::SetCurrentXRDevice)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e6a764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetCurrentXRDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e6a8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetCurrentDisplaySubsystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentDisplaySubsystemDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRDisplaySubsystemDescriptor* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e6aa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetCurrentDisplaySubsystemDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetCurrentInputSubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRInputSubsystem* (*)()>(&::GlobalNamespace::OVRManager::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e67618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetCurrentInputSubsystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Initialize)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5e69ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::Update)> {
  constexpr static std::size_t size = 0x24c0;
  constexpr static std::size_t addrs = 0x5e6ac00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateHMDEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::UpdateHMDEvents)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0x5e6d394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateHMDEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateDynamicResolutionVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::UpdateDynamicResolutionVersion)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e6a594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateDynamicResolutionVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FindMainCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::GlobalNamespace::OVRManager::FindMainCamera)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x5e66b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "FindMainCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDisable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e6ef4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::LateUpdate)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5e6f000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnDestroy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e6f578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e6f620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)(bool)>(&::GlobalNamespace::OVRManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e6f6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e6f758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ReturnToLauncher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::ReturnToLauncher)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e6f7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "ReturnToLauncher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PlatformUIConfirmQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::PlatformUIConfirmQuit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e6f818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "PlatformUIConfirmQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticInitializeMixedRealityCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x5e69914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "StaticInitializeMixedRealityCapture", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticUpdateMixedRealityCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::UnityEngine::GameObject*, ::GlobalNamespace::OVRManager_TrackingOrigin)>(
    &::GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5e6e634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "StaticUpdateMixedRealityCapture",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(),
                                                                                   ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::OVRManager_TrackingOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.StaticShutdownMixedRealityCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e6d0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "StaticShutdownMixedRealityCapture", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.PassthroughInitializedOrPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRManager_PassthroughInitializationState)>(&::GlobalNamespace::OVRManager::PassthroughInitializedOrPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6fe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                             { "PassthroughInitializedOrPending", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_PassthroughInitializationState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitializeInsightPassthrough
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::InitializeInsightPassthrough)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5e6a2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitializeInsightPassthrough", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.ShutdownInsightPassthrough
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRManager::ShutdownInsightPassthrough)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5e6d1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "ShutdownInsightPassthrough", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateInsightPassthrough
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::UpdateInsightPassthrough)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5e6eb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateInsightPassthrough", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.InitializeBoundary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::InitializeBoundary)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e6a60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitializeBoundary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.UpdateBoundary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::UpdateBoundary)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e6ede4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateBoundary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsMultimodalHandsControllersSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsMultimodalHandsControllersSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6fea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsMultimodalHandsControllersSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e6fefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsInsightPassthroughSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetPassthroughCapabilities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_PassthroughCapabilities* (*)()>(&::GlobalNamespace::OVRManager::GetPassthroughCapabilities)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5e6ff50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetPassthroughCapabilities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitialized)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e700b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsInsightPassthroughInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.HasInsightPassthroughInitFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e70134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "HasInsightPassthroughInitFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsInsightPassthroughInitPending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsInsightPassthroughInitPending)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e701b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsInsightPassthroughInitPending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsPassthroughRecommended
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsPassthroughRecommended)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e7023c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsPassthroughRecommended", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetFixedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetFixedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5e65a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetFixedFoveatedRenderingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetFoveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_FoveatedRenderingLevel (*)()>(&::GlobalNamespace::OVRManager::GetFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e65818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetFoveatedRenderingLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetFoveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_FoveatedRenderingLevel)>(&::GlobalNamespace::OVRManager::SetFoveatedRenderingLevel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e65910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetFoveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetDynamicFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetDynamicFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e65c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetDynamicFoveatedRenderingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetDynamicFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetDynamicFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e65d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetDynamicFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetEyeTrackedFoveatedRenderingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e6542c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetEyeTrackedFoveatedRenderingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.GetEyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::GetEyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e6551c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetEyeTrackedFoveatedRenderingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetEyeTrackedFoveatedRenderingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetEyeTrackedFoveatedRenderingEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e65650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetEyeTrackedFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetSpaceWarp_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::OVRManager::SetSpaceWarp_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e67218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetSpaceWarp_Internal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetAppSpacePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t)>(&::GlobalNamespace::OVRManager::SetAppSpacePosition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e6f364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetAppSpaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::OVRManager::SetAppSpaceRotation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e6f440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                { "SetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.SetColorScaleAndOffset_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, bool)>(&::GlobalNamespace::OVRManager::SetColorScaleAndOffset_Internal)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e66498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                         { "SetColorScaleAndOffset_Internal", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager.IsOpenXRLoaderActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRManager::IsOpenXRLoaderActive)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e702ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsOpenXRLoaderActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRManager::*)()>(&::GlobalNamespace::OVRManager::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e703dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { ".ctor", {}, {} })));
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
  this->___disabledCameras = value;
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
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__enableDynamicResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDynamicResolution;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__enableDynamicResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableDynamicResolution;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__enableDynamicResolution(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableDynamicResolution = value;
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
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_quest2MinDynamicResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest2MinDynamicResolutionScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_quest2MinDynamicResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest2MinDynamicResolutionScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_quest2MinDynamicResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quest2MinDynamicResolutionScale = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_quest2MaxDynamicResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest2MaxDynamicResolutionScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_quest2MaxDynamicResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest2MaxDynamicResolutionScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_quest2MaxDynamicResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quest2MaxDynamicResolutionScale = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_quest3MinDynamicResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest3MinDynamicResolutionScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_quest3MinDynamicResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest3MinDynamicResolutionScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_quest3MinDynamicResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quest3MinDynamicResolutionScale = value;
}
constexpr float_t& GlobalNamespace::OVRManager::__cordl_internal_get_quest3MaxDynamicResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest3MaxDynamicResolutionScale;
}
constexpr float_t const& GlobalNamespace::OVRManager::__cordl_internal_get_quest3MaxDynamicResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quest3MaxDynamicResolutionScale;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_quest3MaxDynamicResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quest3MaxDynamicResolutionScale = value;
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
  this->___instantiateMixedRealityCameraGameObject = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_launchSimultaneousHandsControllersOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchSimultaneousHandsControllersOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_launchSimultaneousHandsControllersOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___launchSimultaneousHandsControllersOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_launchSimultaneousHandsControllersOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___launchSimultaneousHandsControllersOnStartup = value;
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
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_shouldBoundaryVisibilityBeSuppressed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldBoundaryVisibilityBeSuppressed;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_shouldBoundaryVisibilityBeSuppressed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldBoundaryVisibilityBeSuppressed;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_shouldBoundaryVisibilityBeSuppressed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldBoundaryVisibilityBeSuppressed = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__isBoundaryVisibilitySuppressed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBoundaryVisibilitySuppressed_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__isBoundaryVisibilitySuppressed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBoundaryVisibilitySuppressed_k__BackingField;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__isBoundaryVisibilitySuppressed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBoundaryVisibilitySuppressed_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__updateBoundaryLogOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBoundaryLogOnce;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__updateBoundaryLogOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateBoundaryLogOnce;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__updateBoundaryLogOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updateBoundaryLogOnce = value;
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
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_requestRecordAudioPermissionOnStartup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestRecordAudioPermissionOnStartup;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_requestRecordAudioPermissionOnStartup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestRecordAudioPermissionOnStartup;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_requestRecordAudioPermissionOnStartup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestRecordAudioPermissionOnStartup = value;
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
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_SimultaneousHandsAndControllersEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimultaneousHandsAndControllersEnabled;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_SimultaneousHandsAndControllersEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimultaneousHandsAndControllersEnabled;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_SimultaneousHandsAndControllersEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimultaneousHandsAndControllersEnabled = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get__readOnlyWideMotionModeHandPosesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnlyWideMotionModeHandPosesEnabled;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get__readOnlyWideMotionModeHandPosesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnlyWideMotionModeHandPosesEnabled;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set__readOnlyWideMotionModeHandPosesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readOnlyWideMotionModeHandPosesEnabled = value;
}
constexpr bool& GlobalNamespace::OVRManager::__cordl_internal_get_wideMotionModeHandPosesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wideMotionModeHandPosesEnabled;
}
constexpr bool const& GlobalNamespace::OVRManager::__cordl_internal_get_wideMotionModeHandPosesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wideMotionModeHandPosesEnabled;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_wideMotionModeHandPosesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wideMotionModeHandPosesEnabled = value;
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
  this->___eventListeners = value;
}
constexpr int32_t& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicResolutionVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicResolutionVersion;
}
constexpr int32_t const& GlobalNamespace::OVRManager::__cordl_internal_get_dynamicResolutionVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dynamicResolutionVersion;
}
constexpr void GlobalNamespace::OVRManager::__cordl_internal_set_dynamicResolutionVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dynamicResolutionVersion = value;
}
inline void GlobalNamespace::OVRManager::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::OVRManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRManager>, "<instance>k__BackingField", ::GlobalNamespace::OVRManager*>(std::forward<::UnityW<::GlobalNamespace::OVRManager>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRManager> GlobalNamespace::OVRManager::getStaticF__instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRManager>, "<instance>k__BackingField", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__display_k__BackingField(::GlobalNamespace::OVRDisplay* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRDisplay*, "<display>k__BackingField", ::GlobalNamespace::OVRManager*>(std::forward<::GlobalNamespace::OVRDisplay*>(value));
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRManager::getStaticF__display_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRDisplay*, "<display>k__BackingField", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__tracker_k__BackingField(::GlobalNamespace::OVRTracker* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTracker*, "<tracker>k__BackingField", ::GlobalNamespace::OVRManager*>(std::forward<::GlobalNamespace::OVRTracker*>(value));
}
inline ::GlobalNamespace::OVRTracker* GlobalNamespace::OVRManager::getStaticF__tracker_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTracker*, "<tracker>k__BackingField", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__boundary_k__BackingField(::GlobalNamespace::OVRBoundary* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRBoundary*, "<boundary>k__BackingField", ::GlobalNamespace::OVRManager*>(std::forward<::GlobalNamespace::OVRBoundary*>(value));
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRManager::getStaticF__boundary_k__BackingField() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRBoundary*, "<boundary>k__BackingField", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__runtimeSettings_k__BackingField(::UnityW<::GlobalNamespace::OVRRuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "<runtimeSettings>k__BackingField", ::GlobalNamespace::OVRManager*>(
      std::forward<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRManager::getStaticF__runtimeSettings_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRRuntimeSettings>, "<runtimeSettings>k__BackingField", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__profile(::UnityW<::GlobalNamespace::OVRProfile> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRProfile>, "_profile", ::GlobalNamespace::OVRManager*>(std::forward<::UnityW<::GlobalNamespace::OVRProfile>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRProfile> GlobalNamespace::OVRManager::getStaticF__profile() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRProfile>, "_profile", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDAcquired", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDAcquired", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDLost", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDLost", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDMounted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDMounted", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDMounted() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDMounted", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HMDUnmounted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HMDUnmounted", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HMDUnmounted() {
  return ::cordl_internals::getStaticField<::System::Action*, "HMDUnmounted", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_VrFocusAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "VrFocusAcquired", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_VrFocusAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "VrFocusAcquired", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_VrFocusLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "VrFocusLost", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_VrFocusLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "VrFocusLost", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_InputFocusAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "InputFocusAcquired", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_InputFocusAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "InputFocusAcquired", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_InputFocusLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "InputFocusLost", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_InputFocusLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "InputFocusLost", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_AudioOutChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "AudioOutChanged", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_AudioOutChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "AudioOutChanged", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_AudioInChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "AudioInChanged", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_AudioInChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "AudioInChanged", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_TrackingAcquired(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "TrackingAcquired", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_TrackingAcquired() {
  return ::cordl_internals::getStaticField<::System::Action*, "TrackingAcquired", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_TrackingLost(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "TrackingLost", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_TrackingLost() {
  return ::cordl_internals::getStaticField<::System::Action*, "TrackingLost", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<float_t, float_t>*, "DisplayRefreshRateChanged", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action_2<float_t, float_t>*>(value));
}
inline ::System::Action_2<float_t, float_t>* GlobalNamespace::OVRManager::getStaticF_DisplayRefreshRateChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<float_t, float_t>*, "DisplayRefreshRateChanged", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*, "SpatialAnchorCreateComplete", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>(value));
}
inline ::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* GlobalNamespace::OVRManager::getStaticF_SpatialAnchorCreateComplete() {
  return ::cordl_internals::getStaticField<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*, "SpatialAnchorCreateComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceSetComponentStatusComplete(
    ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*,
                                    "SpaceSetComponentStatusComplete", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>(value));
}
inline ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*
GlobalNamespace::OVRManager::getStaticF_SpaceSetComponentStatusComplete() {
  return ::cordl_internals::getStaticField<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*,
                                           "SpaceSetComponentStatusComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceQueryResults(::System::Action_1<uint64_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<uint64_t>*, "SpaceQueryResults", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action_1<uint64_t>*>(value));
}
inline ::System::Action_1<uint64_t>* GlobalNamespace::OVRManager::getStaticF_SpaceQueryResults() {
  return ::cordl_internals::getStaticField<::System::Action_1<uint64_t>*, "SpaceQueryResults", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, bool>*, "SpaceQueryComplete", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action_2<uint64_t, bool>*>(value));
}
inline ::System::Action_2<uint64_t, bool>* GlobalNamespace::OVRManager::getStaticF_SpaceQueryComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, bool>*, "SpaceQueryComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*, "SpaceSaveComplete", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>(value));
}
inline ::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* GlobalNamespace::OVRManager::getStaticF_SpaceSaveComplete() {
  return ::cordl_internals::getStaticField<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*, "SpaceSaveComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value) {
  ::cordl_internals::setStaticField<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*, "SpaceEraseComplete", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>(value));
}
inline ::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* GlobalNamespace::OVRManager::getStaticF_SpaceEraseComplete() {
  return ::cordl_internals::getStaticField<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*, "SpaceEraseComplete",
                                           ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "ShareSpacesComplete", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(value));
}
inline ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* GlobalNamespace::OVRManager::getStaticF_ShareSpacesComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "ShareSpacesComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "SpaceListSaveComplete", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>(value));
}
inline ::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* GlobalNamespace::OVRManager::getStaticF_SpaceListSaveComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, "SpaceListSaveComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<uint64_t, bool>*, "SceneCaptureComplete", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action_2<uint64_t, bool>*>(value));
}
inline ::System::Action_2<uint64_t, bool>* GlobalNamespace::OVRManager::getStaticF_SceneCaptureComplete() {
  return ::cordl_internals::getStaticField<::System::Action_2<uint64_t, bool>*, "SceneCaptureComplete", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_PassthroughLayerResumed(::System::Action_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "PassthroughLayerResumed", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::OVRManager::getStaticF_PassthroughLayerResumed() {
  return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "PassthroughLayerResumed", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_BoundaryVisibilityChanged(::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*, "BoundaryVisibilityChanged", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>* GlobalNamespace::OVRManager::getStaticF_BoundaryVisibilityChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*, "BoundaryVisibilityChanged", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_HSWDismissed(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "HSWDismissed", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::OVRManager::getStaticF_HSWDismissed() {
  return ::cordl_internals::getStaticField<::System::Action*, "HSWDismissed", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isHmdPresentCacheFrame(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_isHmdPresentCacheFrame", ::GlobalNamespace::OVRManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRManager::getStaticF__isHmdPresentCacheFrame() {
  return ::cordl_internals::getStaticField<int32_t, "_isHmdPresentCacheFrame", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isHmdPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_isHmdPresent", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isHmdPresent() {
  return ::cordl_internals::getStaticField<bool, "_isHmdPresent", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__wasHmdPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_wasHmdPresent", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__wasHmdPresent() {
  return ::cordl_internals::getStaticField<bool, "_wasHmdPresent", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hasVrFocusCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_hasVrFocusCached", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hasVrFocusCached() {
  return ::cordl_internals::getStaticField<bool, "_hasVrFocusCached", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hasVrFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "_hasVrFocus", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hasVrFocus() {
  return ::cordl_internals::getStaticField<bool, "_hasVrFocus", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hadVrFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "_hadVrFocus", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hadVrFocus() {
  return ::cordl_internals::getStaticField<bool, "_hadVrFocus", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__hadInputFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "_hadInputFocus", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__hadInputFocus() {
  return ::cordl_internals::getStaticField<bool, "_hadInputFocus", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OCULUS_UNITY_NAME_STR(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::GlobalNamespace::OVRManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_OCULUS_UNITY_NAME_STR() {
  return ::cordl_internals::getStaticField<::StringW, "OCULUS_UNITY_NAME_STR", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OPENVR_UNITY_NAME_STR(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::GlobalNamespace::OVRManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_OPENVR_UNITY_NAME_STR() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_UNITY_NAME_STR", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_loadedXRDevice(::GlobalNamespace::OVRManager_XRDevice value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_XRDevice, "loadedXRDevice", ::GlobalNamespace::OVRManager*>(std::forward<::GlobalNamespace::OVRManager_XRDevice>(value));
}
inline ::GlobalNamespace::OVRManager_XRDevice GlobalNamespace::OVRManager::getStaticF_loadedXRDevice() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_XRDevice, "loadedXRDevice", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isSystemHeadsetThemeCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_isSystemHeadsetThemeCached", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isSystemHeadsetThemeCached() {
  return ::cordl_internals::getStaticField<bool, "_isSystemHeadsetThemeCached", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__cachedSystemHeadsetTheme(::GlobalNamespace::OVRManager_SystemHeadsetTheme value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_SystemHeadsetTheme, "_cachedSystemHeadsetTheme", ::GlobalNamespace::OVRManager*>(
      std::forward<::GlobalNamespace::OVRManager_SystemHeadsetTheme>(value));
}
inline ::GlobalNamespace::OVRManager_SystemHeadsetTheme GlobalNamespace::OVRManager::getStaticF__cachedSystemHeadsetTheme() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_SystemHeadsetTheme, "_cachedSystemHeadsetTheme", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchRotationOffsetEulerLeft(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::GlobalNamespace::OVRManager*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchRotationOffsetEulerLeft() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerLeft", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchRotationOffsetEulerRight(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::GlobalNamespace::OVRManager*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchRotationOffsetEulerRight() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchRotationOffsetEulerRight", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchPositionOffsetLeft(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::GlobalNamespace::OVRManager*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchPositionOffsetLeft() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetLeft", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OpenVRTouchPositionOffsetRight(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::GlobalNamespace::OVRManager*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::getStaticF_OpenVRTouchPositionOffsetRight() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "OpenVRTouchPositionOffsetRight", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_lastSpaceWarpCamera(::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*, "m_lastSpaceWarpCamera", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* GlobalNamespace::OVRManager::getStaticF_m_lastSpaceWarpCamera() {
  return ::cordl_internals::getStaticField<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*, "m_lastSpaceWarpCamera", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_SpaceWarpEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "m_SpaceWarpEnabled", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_m_SpaceWarpEnabled() {
  return ::cordl_internals::getStaticField<bool, "m_SpaceWarpEnabled", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_AppSpaceTransform(::UnityW<::UnityEngine::Transform> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "m_AppSpaceTransform", ::GlobalNamespace::OVRManager*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRManager::getStaticF_m_AppSpaceTransform() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "m_AppSpaceTransform", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_m_CachedDepthTextureMode(::UnityEngine::DepthTextureMode value) {
  ::cordl_internals::setStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::GlobalNamespace::OVRManager*>(std::forward<::UnityEngine::DepthTextureMode>(value));
}
inline ::UnityEngine::DepthTextureMode GlobalNamespace::OVRManager::getStaticF_m_CachedDepthTextureMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::DepthTextureMode, "m_CachedDepthTextureMode", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__readOnlyControllerDrivenHandPosesType(::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType, "_readOnlyControllerDrivenHandPosesType", ::GlobalNamespace::OVRManager*>(
      std::forward<::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType>(value));
}
inline ::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType GlobalNamespace::OVRManager::getStaticF__readOnlyControllerDrivenHandPosesType() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_ControllerDrivenHandPosesType, "_readOnlyControllerDrivenHandPosesType", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isUserPresentCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_isUserPresentCached", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isUserPresentCached() {
  return ::cordl_internals::getStaticField<bool, "_isUserPresentCached", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__isUserPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_isUserPresent", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__isUserPresent() {
  return ::cordl_internals::getStaticField<bool, "_isUserPresent", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__wasUserPresent(bool value) {
  ::cordl_internals::setStaticField<bool, "_wasUserPresent", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF__wasUserPresent() {
  return ::cordl_internals::getStaticField<bool, "_wasUserPresent", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioOutIdIsCached(bool value) {
  ::cordl_internals::setStaticField<bool, "prevAudioOutIdIsCached", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_prevAudioOutIdIsCached() {
  return ::cordl_internals::getStaticField<bool, "prevAudioOutIdIsCached", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioInIdIsCached(bool value) {
  ::cordl_internals::setStaticField<bool, "prevAudioInIdIsCached", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_prevAudioInIdIsCached() {
  return ::cordl_internals::getStaticField<bool, "prevAudioInIdIsCached", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioOutId(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "prevAudioOutId", ::GlobalNamespace::OVRManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_prevAudioOutId() {
  return ::cordl_internals::getStaticField<::StringW, "prevAudioOutId", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_prevAudioInId(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "prevAudioInId", ::GlobalNamespace::OVRManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_prevAudioInId() {
  return ::cordl_internals::getStaticField<::StringW, "prevAudioInId", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_wasPositionTracked(bool value) {
  ::cordl_internals::setStaticField<bool, "wasPositionTracked", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_wasPositionTracked() {
  return ::cordl_internals::getStaticField<bool, "wasPositionTracked", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_eventDataBuffer(::GlobalNamespace::OVRPlugin_EventDataBuffer value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_EventDataBuffer, "eventDataBuffer", ::GlobalNamespace::OVRManager*>(std::forward<::GlobalNamespace::OVRPlugin_EventDataBuffer>(value));
}
inline ::GlobalNamespace::OVRPlugin_EventDataBuffer GlobalNamespace::OVRManager::getStaticF_eventDataBuffer() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_EventDataBuffer, "eventDataBuffer", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_UnityAlphaOrBetaVersionWarningMessage(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::GlobalNamespace::OVRManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRManager::getStaticF_UnityAlphaOrBetaVersionWarningMessage() {
  return ::cordl_internals::getStaticField<::StringW, "UnityAlphaOrBetaVersionWarningMessage", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_MaxDynamicResolutionVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxDynamicResolutionVersion", ::GlobalNamespace::OVRManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRManager::getStaticF_MaxDynamicResolutionVersion() {
  return ::cordl_internals::getStaticField<int32_t, "MaxDynamicResolutionVersion", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OVRManagerinitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "OVRManagerinitialized", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_OVRManagerinitialized() {
  return ::cordl_internals::getStaticField<bool, "OVRManagerinitialized", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* GlobalNamespace::OVRManager::getStaticF_s_displaySubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* GlobalNamespace::OVRManager::getStaticF_s_displaySubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors",
                                           ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* GlobalNamespace::OVRManager::getStaticF_s_inputSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_multipleMainCameraWarningPresented(bool value) {
  ::cordl_internals::setStaticField<bool, "multipleMainCameraWarningPresented", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_multipleMainCameraWarningPresented() {
  return ::cordl_internals::getStaticField<bool, "multipleMainCameraWarningPresented", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_suppressUnableToFindMainCameraMessage(bool value) {
  ::cordl_internals::setStaticField<bool, "suppressUnableToFindMainCameraMessage", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_suppressUnableToFindMainCameraMessage() {
  return ::cordl_internals::getStaticField<bool, "suppressUnableToFindMainCameraMessage", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_lastFoundMainCamera(::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*, "lastFoundMainCamera", ::GlobalNamespace::OVRManager*>(
      std::forward<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>* GlobalNamespace::OVRManager::getStaticF_lastFoundMainCamera() {
  return ::cordl_internals::getStaticField<::System::WeakReference_1<::UnityW<::UnityEngine::Camera>>*, "lastFoundMainCamera", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticMixedRealityCaptureInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "staticMixedRealityCaptureInitialized", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_staticMixedRealityCaptureInitialized() {
  return ::cordl_internals::getStaticField<bool, "staticMixedRealityCaptureInitialized", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticPrevEnableMixedRealityCapture(bool value) {
  ::cordl_internals::setStaticField<bool, "staticPrevEnableMixedRealityCapture", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_staticPrevEnableMixedRealityCapture() {
  return ::cordl_internals::getStaticField<bool, "staticPrevEnableMixedRealityCapture", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_staticMrcSettings(::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings>, "staticMrcSettings", ::GlobalNamespace::OVRManager*>(
      std::forward<::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings> GlobalNamespace::OVRManager::getStaticF_staticMrcSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::OVRMixedRealityCaptureSettings>, "staticMrcSettings", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning(bool value) {
  ::cordl_internals::setStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::GlobalNamespace::OVRManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRManager::getStaticF_suppressDisableMixedRealityBecauseOfNoMainCameraWarning() {
  return ::cordl_internals::getStaticField<bool, "suppressDisableMixedRealityBecauseOfNoMainCameraWarning", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF_OnPassthroughInitializedStateChange(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnPassthroughInitializedStateChange", ::GlobalNamespace::OVRManager*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::OVRManager::getStaticF_OnPassthroughInitializedStateChange() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnPassthroughInitializedStateChange", ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__passthroughInitializationState(::GlobalNamespace::OVRManager_Observable_1<::GlobalNamespace::OVRManager_PassthroughInitializationState>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_Observable_1<::GlobalNamespace::OVRManager_PassthroughInitializationState>*, "_passthroughInitializationState",
                                    ::GlobalNamespace::OVRManager*>(std::forward<::GlobalNamespace::OVRManager_Observable_1<::GlobalNamespace::OVRManager_PassthroughInitializationState>*>(value));
}
inline ::GlobalNamespace::OVRManager_Observable_1<::GlobalNamespace::OVRManager_PassthroughInitializationState>* GlobalNamespace::OVRManager::getStaticF__passthroughInitializationState() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_Observable_1<::GlobalNamespace::OVRManager_PassthroughInitializationState>*, "_passthroughInitializationState",
                                           ::GlobalNamespace::OVRManager*>();
}
inline void GlobalNamespace::OVRManager::setStaticF__passthroughCapabilities(::GlobalNamespace::OVRManager_PassthroughCapabilities* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRManager_PassthroughCapabilities*, "_passthroughCapabilities", ::GlobalNamespace::OVRManager*>(
      std::forward<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(value));
}
inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GlobalNamespace::OVRManager::getStaticF__passthroughCapabilities() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRManager_PassthroughCapabilities*, "_passthroughCapabilities", ::GlobalNamespace::OVRManager*>();
}
inline ::UnityW<::GlobalNamespace::OVRManager> GlobalNamespace::OVRManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_instance(::GlobalNamespace::OVRManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_instance", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRDisplay* GlobalNamespace::OVRManager::get_display() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_display", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRDisplay*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_display(::GlobalNamespace::OVRDisplay* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_display", {}, { ::i2c::type_of<::GlobalNamespace::OVRDisplay*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTracker* GlobalNamespace::OVRManager::get_tracker() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_tracker", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTracker*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_tracker(::GlobalNamespace::OVRTracker* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_tracker", {}, { ::i2c::type_of<::GlobalNamespace::OVRTracker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRManager::get_boundary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_boundary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRBoundary*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_boundary(::GlobalNamespace::OVRBoundary* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_boundary", {}, { ::i2c::type_of<::GlobalNamespace::OVRBoundary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRRuntimeSettings> GlobalNamespace::OVRManager::get_runtimeSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_runtimeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRRuntimeSettings>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_runtimeSettings(::GlobalNamespace::OVRRuntimeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_runtimeSettings", {}, { ::i2c::type_of<::GlobalNamespace::OVRRuntimeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OVRProfile> GlobalNamespace::OVRManager::get_profile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_profile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRProfile>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::add_HMDAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDMounted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDMounted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDMounted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDMounted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HMDUnmounted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HMDUnmounted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HMDUnmounted(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HMDUnmounted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_VrFocusAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_VrFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_VrFocusAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_VrFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_VrFocusLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_VrFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_VrFocusLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_VrFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_InputFocusAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_InputFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_InputFocusAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_InputFocusAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_InputFocusLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_InputFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_InputFocusLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_InputFocusLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_AudioOutChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_AudioOutChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_AudioOutChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_AudioOutChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_AudioInChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_AudioInChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_AudioInChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_AudioInChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_TrackingAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_TrackingAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_TrackingAcquired(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_TrackingAcquired", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_TrackingLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_TrackingLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_TrackingLost(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_TrackingLost", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_DisplayRefreshRateChanged", {}, { ::i2c::type_of<::System::Action_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_DisplayRefreshRateChanged(::System::Action_2<float_t, float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_DisplayRefreshRateChanged", {}, { ::i2c::type_of<::System::Action_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "add_SpatialAnchorCreateComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpatialAnchorCreateComplete(::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "remove_SpatialAnchorCreateComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceSetComponentStatusComplete(
    ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                          { "add_SpaceSetComponentStatusComplete",
                            {},
                            { ::i2c::type_of<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceSetComponentStatusComplete(
    ::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                          { "remove_SpaceSetComponentStatusComplete",
                            {},
                            { ::i2c::type_of<::System::Action_6<uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceQueryResults(::System::Action_1<uint64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_SpaceQueryResults", {}, { ::i2c::type_of<::System::Action_1<uint64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceQueryResults(::System::Action_1<uint64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_SpaceQueryResults", {}, { ::i2c::type_of<::System::Action_1<uint64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_SpaceQueryComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceQueryComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_SpaceQueryComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "add_SpaceSaveComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceSaveComplete(::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "remove_SpaceSaveComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                          { "add_SpaceEraseComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceEraseComplete(::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                          { "remove_SpaceEraseComplete", {}, { ::i2c::type_of<::System::Action_4<uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "add_ShareSpacesComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_ShareSpacesComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "remove_ShareSpacesComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "add_SpaceListSaveComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SpaceListSaveComplete(::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "remove_SpaceListSaveComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_SceneCaptureComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_SceneCaptureComplete(::System::Action_2<uint64_t, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_SceneCaptureComplete", {}, { ::i2c::type_of<::System::Action_2<uint64_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_PassthroughLayerResumed(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_PassthroughLayerResumed(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_PassthroughLayerResumed", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_BoundaryVisibilityChanged(::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "add_BoundaryVisibilityChanged", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_BoundaryVisibilityChanged(::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "remove_BoundaryVisibilityChanged", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRPlugin_BoundaryVisibility>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::add_HSWDismissed(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "add_HSWDismissed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::remove_HSWDismissed(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "remove_HSWDismissed", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isHmdPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isHmdPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRManager::get_audioOutId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_audioOutId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRManager::get_audioInId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_audioInId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_hasVrFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_hasVrFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_hasVrFocus(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_hasVrFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_hasInputFocus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_hasInputFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_chromatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_chromatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_chromatic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_chromatic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_monoscopic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_monoscopic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_monoscopic(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_monoscopic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_LayerSharpenType GlobalNamespace::OVRManager::get_sharpenType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_sharpenType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_LayerSharpenType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_sharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_sharpenType", {}, { ::i2c::type_of<::GlobalNamespace::OVRPlugin_LayerSharpenType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager::get_colorGamut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_colorGamut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ColorSpace>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_colorGamut(::GlobalNamespace::OVRManager_ColorSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_colorGamut", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_ColorSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_ColorSpace GlobalNamespace::OVRManager::get_nativeColorGamut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_nativeColorGamut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ColorSpace>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_enableDynamicResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_enableDynamicResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_enableDynamicResolution(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_enableDynamicResolution", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::IsAdaptiveResSupportedByEngine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsAdaptiveResSupportedByEngine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::get_headPoseRelativeOffsetRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_headPoseRelativeOffsetRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_headPoseRelativeOffsetRotation(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_headPoseRelativeOffsetRotation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRManager::get_headPoseRelativeOffsetTranslation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_headPoseRelativeOffsetTranslation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_headPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_headPoseRelativeOffsetTranslation", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_eyeFovPremultipliedAlphaModeEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeFovPremultipliedAlphaModeEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeFovPremultipliedAlphaModeEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_eyeFovPremultipliedAlphaModeEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_enableMixedReality() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_enableMixedReality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_enableMixedReality", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_compositionMethod() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_compositionMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CompositionMethod>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "OVRMixedRealityCaptureConfiguration.set_compositionMethod", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CompositionMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_CameraDevice GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CameraDevice>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_CameraDevice>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeyColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeyColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeyColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_useDynamicLighting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_useDynamicLighting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_useDynamicLighting", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_DepthQuality GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_depthQuality() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_depthQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_DepthQuality>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_depthQuality", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_DepthQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_VirtualGreenScreenType GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_VirtualGreenScreenType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_VirtualGreenScreenType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_MrcActivationMode GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_mrcActivationMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_mrcActivationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_MrcActivationMode>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "OVRMixedRealityCaptureConfiguration.set_mrcActivationMode", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_MrcActivationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isBoundaryVisibilitySuppressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isBoundaryVisibilitySuppressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isBoundaryVisibilitySuppressed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_isBoundaryVisibilitySuppressed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_XrApi GlobalNamespace::OVRManager::get_xrApi() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_xrApi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_XrApi>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRManager::get_xrInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_xrInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline uint64_t GlobalNamespace::OVRManager::get_xrSession() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_xrSession", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRManager::get_vsyncCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_vsyncCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_vsyncCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_vsyncCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRManager::get_batteryLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_batteryLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_batteryTemperature() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_batteryTemperature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::OVRManager::get_batteryStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_batteryStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_volumeLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_volumeLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager::get_suggestedCpuPerfLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_suggestedCpuPerfLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_suggestedCpuPerfLevel(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_suggestedCpuPerfLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel GlobalNamespace::OVRManager::get_suggestedGpuPerfLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_suggestedGpuPerfLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_suggestedGpuPerfLevel(::GlobalNamespace::OVRManager_ProcessorPerformanceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_suggestedGpuPerfLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_ProcessorPerformanceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::get_cpuLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_cpuLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_cpuLevel(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_cpuLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRManager::get_gpuLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_gpuLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_gpuLevel(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_gpuLevel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isPowerSavingActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isPowerSavingActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_EyeTextureFormat GlobalNamespace::OVRManager::get_eyeTextureFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_EyeTextureFormat>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeTextureFormat(::GlobalNamespace::OVRManager_EyeTextureFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_eyeTextureFormat", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_EyeTextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeTrackedFoveatedRenderingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_eyeTrackedFoveatedRenderingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_eyeTrackedFoveatedRenderingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_eyeTrackedFoveatedRenderingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_eyeTrackedFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::OnPermissionGranted(::StringW permissionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnPermissionGranted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissionId);
}
inline ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager::get_foveatedRenderingLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_foveatedRenderingLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_foveatedRenderingLevel(::GlobalNamespace::OVRManager_FoveatedRenderingLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_foveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_fixedFoveatedRenderingSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_fixedFoveatedRenderingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel GlobalNamespace::OVRManager::get_fixedFoveatedRenderingLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_fixedFoveatedRenderingLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_fixedFoveatedRenderingLevel(::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "set_fixedFoveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FixedFoveatedRenderingLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_useDynamicFoveatedRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_useDynamicFoveatedRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_useDynamicFoveatedRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_useDynamicFoveatedRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_useDynamicFixedFoveatedRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_useDynamicFixedFoveatedRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_useDynamicFixedFoveatedRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_useDynamicFixedFoveatedRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_tiledMultiResSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_tiledMultiResSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_TiledMultiResLevel GlobalNamespace::OVRManager::get_tiledMultiResLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_tiledMultiResLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_TiledMultiResLevel>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_tiledMultiResLevel(::GlobalNamespace::OVRManager_TiledMultiResLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_tiledMultiResLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_TiledMultiResLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_gpuUtilSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_gpuUtilSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::OVRManager::get_gpuUtilLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_gpuUtilLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_SystemHeadsetType GlobalNamespace::OVRManager::get_systemHeadsetType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_systemHeadsetType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_SystemHeadsetType>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_SystemHeadsetTheme GlobalNamespace::OVRManager::get_systemHeadsetTheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_systemHeadsetTheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_SystemHeadsetTheme>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_SystemHeadsetTheme GlobalNamespace::OVRManager::GetSystemHeadsetTheme() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetSystemHeadsetTheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_SystemHeadsetTheme>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "SetColorScaleAndOffset", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorScale, colorOffset, applyToAllLayers);
}
inline void GlobalNamespace::OVRManager::SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetOpenVRLocalPose",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                     ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRManager::GetOpenVRControllerOffset(::UnityEngine::XR::XRNode hand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetOpenVRControllerOffset", {}, { ::i2c::type_of<::UnityEngine::XR::XRNode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(nullptr, ___internal_method, hand);
}
inline void GlobalNamespace::OVRManager::SetSpaceWarp(bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetSpaceWarp", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void GlobalNamespace::OVRManager::PrepareCameraForSpaceWarp(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "PrepareCameraForSpaceWarp", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline bool GlobalNamespace::OVRManager::GetSpaceWarp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetSpaceWarp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_TrackingOrigin GlobalNamespace::OVRManager::get_trackingOriginType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_trackingOriginType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_TrackingOrigin>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_trackingOriginType(::GlobalNamespace::OVRManager_TrackingOrigin value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_trackingOriginType", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_TrackingOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_IsSimultaneousHandsAndControllersSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_IsSimultaneousHandsAndControllersSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::get_isSupportedPlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isSupportedPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isSupportedPlatform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_isSupportedPlatform", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRManager::get_isUserPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_isUserPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::set_isUserPresent(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "set_isUserPresent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRManager::RegisterEventListener(::GlobalNamespace::OVRManager_EventListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "RegisterEventListener", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_EventListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void GlobalNamespace::OVRManager::DeregisterEventListener(::GlobalNamespace::OVRManager_EventListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "DeregisterEventListener", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_EventListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_utilitiesVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_utilitiesVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_pluginVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_pluginVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method);
}
inline ::System::Version* GlobalNamespace::OVRManager::get_sdkVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "get_sdkVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::MixedRealityEnabledFromCmd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "MixedRealityEnabledFromCmd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::UseDirectCompositionFromCmd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UseDirectCompositionFromCmd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::UseExternalCompositionFromCmd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UseExternalCompositionFromCmd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::CreateMixedRealityCaptureConfigurationFileFromCmd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "CreateMixedRealityCaptureConfigurationFileFromCmd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::LoadMixedRealityCaptureConfigurationFileFromCmd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "LoadMixedRealityCaptureConfigurationFileFromCmd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsUnityAlphaOrBetaVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsUnityAlphaOrBetaVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::InitOVRManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitOVRManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::InitPermissionRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitPermissionRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetCurrentXRDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetCurrentXRDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline Il2CppObject* GlobalNamespace::OVRManager::GetCurrentDisplaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetCurrentDisplaySubsystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GlobalNamespace::OVRManager::GetCurrentDisplaySubsystemDescriptor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetCurrentDisplaySubsystemDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* GlobalNamespace::OVRManager::GetCurrentInputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetCurrentInputSubsystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateHMDEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateHMDEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateDynamicResolutionVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateDynamicResolutionVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::OVRManager::FindMainCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "FindMainCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::OnApplicationPause(bool pause) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::OVRManager::OnApplicationFocus(bool focus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void GlobalNamespace::OVRManager::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::ReturnToLauncher() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "ReturnToLauncher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::PlatformUIConfirmQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "PlatformUIConfirmQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::StaticInitializeMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "StaticInitializeMixedRealityCapture", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, configuration);
}
inline void GlobalNamespace::OVRManager::StaticUpdateMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, ::UnityEngine::GameObject* gameObject,
                                                                         ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "StaticUpdateMixedRealityCapture",
                                                                               {},
                                                                               { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>(),
                                                                                 ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::GlobalNamespace::OVRManager_TrackingOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, configuration, gameObject, trackingOrigin);
}
inline void GlobalNamespace::OVRManager::StaticShutdownMixedRealityCapture(::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "StaticShutdownMixedRealityCapture", {}, { ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, configuration);
}
inline bool GlobalNamespace::OVRManager::PassthroughInitializedOrPending(::GlobalNamespace::OVRManager_PassthroughInitializationState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                                           { "PassthroughInitializedOrPending", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_PassthroughInitializationState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
inline bool GlobalNamespace::OVRManager::InitializeInsightPassthrough() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitializeInsightPassthrough", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::ShutdownInsightPassthrough() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "ShutdownInsightPassthrough", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateInsightPassthrough(bool shouldBeEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateInsightPassthrough", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shouldBeEnabled);
}
inline void GlobalNamespace::OVRManager::InitializeBoundary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "InitializeBoundary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRManager::UpdateBoundary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "UpdateBoundary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsMultimodalHandsControllersSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsMultimodalHandsControllersSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsInsightPassthroughSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_PassthroughCapabilities* GlobalNamespace::OVRManager::GetPassthroughCapabilities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetPassthroughCapabilities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_PassthroughCapabilities*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsInsightPassthroughInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::HasInsightPassthroughInitFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "HasInsightPassthroughInitFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsInsightPassthroughInitPending() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsInsightPassthroughInitPending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::IsPassthroughRecommended() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsPassthroughRecommended", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::GetFixedFoveatedRenderingSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetFixedFoveatedRenderingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRManager_FoveatedRenderingLevel GlobalNamespace::OVRManager::GetFoveatedRenderingLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetFoveatedRenderingLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetFoveatedRenderingLevel(::GlobalNamespace::OVRManager_FoveatedRenderingLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetFoveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline bool GlobalNamespace::OVRManager::GetDynamicFoveatedRenderingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetDynamicFoveatedRenderingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetDynamicFoveatedRenderingEnabled(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetDynamicFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline bool GlobalNamespace::OVRManager::GetEyeTrackedFoveatedRenderingSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetEyeTrackedFoveatedRenderingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRManager::GetEyeTrackedFoveatedRenderingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "GetEyeTrackedFoveatedRenderingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::SetEyeTrackedFoveatedRenderingEnabled(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetEyeTrackedFoveatedRenderingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void GlobalNamespace::OVRManager::SetSpaceWarp_Internal(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetSpaceWarp_Internal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void GlobalNamespace::OVRManager::SetAppSpacePosition(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "SetAppSpacePosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z);
}
inline void GlobalNamespace::OVRManager::SetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                              { "SetAppSpaceRotation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, y, z, w);
}
inline bool GlobalNamespace::OVRManager::SetColorScaleAndOffset_Internal(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(),
                                       { "SetColorScaleAndOffset_Internal", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, colorScale, colorOffset, applyToAllLayers);
}
inline bool GlobalNamespace::OVRManager::IsOpenXRLoaderActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { "IsOpenXRLoaderActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRManager* GlobalNamespace::OVRManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRManager*>());
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
