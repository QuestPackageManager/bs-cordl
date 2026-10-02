#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRSystem)
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRButtonId;
}
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
namespace OVR::OpenVR {
struct EVREventType;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct EVRFirmwareError;
}
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
class IVRSystem__AcknowledgeQuit_Exiting;
}
namespace OVR::OpenVR {
class IVRSystem__AcknowledgeQuit_UserPrompt;
}
namespace OVR::OpenVR {
class IVRSystem__ApplyTransform;
}
namespace OVR::OpenVR {
class IVRSystem__ComputeDistortion;
}
namespace OVR::OpenVR {
class IVRSystem__DriverDebugRequest;
}
namespace OVR::OpenVR {
class IVRSystem__GetArrayTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetBoolTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetButtonIdNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerAxisTypeNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerRoleForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerState;
}
namespace OVR::OpenVR {
class IVRSystem__GetD3D9AdapterIndex;
}
namespace OVR::OpenVR {
class IVRSystem__GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class IVRSystem__GetDeviceToAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetEventTypeNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetEyeToHeadTransform;
}
namespace OVR::OpenVR {
class IVRSystem__GetFloatTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetHiddenAreaMesh;
}
namespace OVR::OpenVR {
class IVRSystem__GetInt32TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetMatrix34TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetOutputDevice;
}
namespace OVR::OpenVR {
class IVRSystem__GetProjectionMatrix;
}
namespace OVR::OpenVR {
class IVRSystem__GetProjectionRaw;
}
namespace OVR::OpenVR {
class IVRSystem__GetPropErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetRecommendedRenderTargetSize;
}
namespace OVR::OpenVR {
class IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetSortedTrackedDeviceIndicesOfClass;
}
namespace OVR::OpenVR {
class IVRSystem__GetStringTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetTimeSinceLastVsync;
}
namespace OVR::OpenVR {
class IVRSystem__GetTrackedDeviceActivityLevel;
}
namespace OVR::OpenVR {
class IVRSystem__GetTrackedDeviceClass;
}
namespace OVR::OpenVR {
class IVRSystem__GetTrackedDeviceIndexForControllerRole;
}
namespace OVR::OpenVR {
class IVRSystem__GetUint64TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__IsDisplayOnDesktop;
}
namespace OVR::OpenVR {
class IVRSystem__IsInputAvailable;
}
namespace OVR::OpenVR {
class IVRSystem__IsSteamVRDrawingControllers;
}
namespace OVR::OpenVR {
class IVRSystem__IsTrackedDeviceConnected;
}
namespace OVR::OpenVR {
class IVRSystem__PerformFirmwareUpdate;
}
namespace OVR::OpenVR {
class IVRSystem__PollNextEventWithPose;
}
namespace OVR::OpenVR {
class IVRSystem__PollNextEvent;
}
namespace OVR::OpenVR {
class IVRSystem__ResetSeatedZeroPose;
}
namespace OVR::OpenVR {
class IVRSystem__SetDisplayVisibility;
}
namespace OVR::OpenVR {
class IVRSystem__ShouldApplicationPause;
}
namespace OVR::OpenVR {
class IVRSystem__ShouldApplicationReduceRenderingWork;
}
namespace OVR::OpenVR {
class IVRSystem__TriggerHapticPulse;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRSystem__AcknowledgeQuit_Exiting;
}
namespace OVR::OpenVR {
class IVRSystem__AcknowledgeQuit_UserPrompt;
}
namespace OVR::OpenVR {
class IVRSystem__ApplyTransform;
}
namespace OVR::OpenVR {
class IVRSystem__ComputeDistortion;
}
namespace OVR::OpenVR {
class IVRSystem__DriverDebugRequest;
}
namespace OVR::OpenVR {
class IVRSystem__GetArrayTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetBoolTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetButtonIdNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerAxisTypeNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerRoleForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerState;
}
namespace OVR::OpenVR {
class IVRSystem__GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetD3D9AdapterIndex;
}
namespace OVR::OpenVR {
class IVRSystem__GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class IVRSystem__GetDeviceToAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetEventTypeNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetEyeToHeadTransform;
}
namespace OVR::OpenVR {
class IVRSystem__GetFloatTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetHiddenAreaMesh;
}
namespace OVR::OpenVR {
class IVRSystem__GetInt32TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetMatrix34TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetOutputDevice;
}
namespace OVR::OpenVR {
class IVRSystem__GetProjectionMatrix;
}
namespace OVR::OpenVR {
class IVRSystem__GetProjectionRaw;
}
namespace OVR::OpenVR {
class IVRSystem__GetPropErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetRecommendedRenderTargetSize;
}
namespace OVR::OpenVR {
class IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class IVRSystem__GetSortedTrackedDeviceIndicesOfClass;
}
namespace OVR::OpenVR {
class IVRSystem__GetStringTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__GetTimeSinceLastVsync;
}
namespace OVR::OpenVR {
class IVRSystem__GetTrackedDeviceActivityLevel;
}
namespace OVR::OpenVR {
class IVRSystem__GetTrackedDeviceClass;
}
namespace OVR::OpenVR {
class IVRSystem__GetTrackedDeviceIndexForControllerRole;
}
namespace OVR::OpenVR {
class IVRSystem__GetUint64TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class IVRSystem__IsDisplayOnDesktop;
}
namespace OVR::OpenVR {
class IVRSystem__IsInputAvailable;
}
namespace OVR::OpenVR {
class IVRSystem__IsSteamVRDrawingControllers;
}
namespace OVR::OpenVR {
class IVRSystem__IsTrackedDeviceConnected;
}
namespace OVR::OpenVR {
class IVRSystem__PerformFirmwareUpdate;
}
namespace OVR::OpenVR {
class IVRSystem__PollNextEvent;
}
namespace OVR::OpenVR {
class IVRSystem__PollNextEventWithPose;
}
namespace OVR::OpenVR {
class IVRSystem__ResetSeatedZeroPose;
}
namespace OVR::OpenVR {
class IVRSystem__SetDisplayVisibility;
}
namespace OVR::OpenVR {
class IVRSystem__ShouldApplicationPause;
}
namespace OVR::OpenVR {
class IVRSystem__ShouldApplicationReduceRenderingWork;
}
namespace OVR::OpenVR {
class IVRSystem__TriggerHapticPulse;
}
namespace OVR::OpenVR {
struct IVRSystem;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__ApplyTransform*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__ComputeDistortion*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__DriverDebugRequest*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetControllerState*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetOutputDevice*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetProjectionMatrix*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetProjectionRaw*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__IsInputAvailable*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__PollNextEvent*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__PollNextEventWithPose*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__SetDisplayVisibility*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__ShouldApplicationPause*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*);
MARK_REF_T(::OVR::OpenVR::IVRSystem__TriggerHapticPulse*);
MARK_VAL_T(::OVR::OpenVR::IVRSystem);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_Exiting");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_UserPrompt");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__ApplyTransform*, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__ComputeDistortion*, "OVR.OpenVR", "IVRSystem/_ComputeDistortion");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__DriverDebugRequest*, "OVR.OpenVR", "IVRSystem/_DriverDebugRequest");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetArrayTrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetBoolTrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetButtonIdNameFromEnum");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetControllerAxisTypeNameFromEnum");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*, "OVR.OpenVR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetControllerState*, "OVR.OpenVR", "IVRSystem/_GetControllerState");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*, "OVR.OpenVR", "IVRSystem/_GetD3D9AdapterIndex");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetEventTypeNameFromEnum");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*, "OVR.OpenVR", "IVRSystem/_GetEyeToHeadTransform");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetFloatTrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*, "OVR.OpenVR", "IVRSystem/_GetHiddenAreaMesh");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetInt32TrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetMatrix34TrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetOutputDevice*, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetProjectionMatrix*, "OVR.OpenVR", "IVRSystem/_GetProjectionMatrix");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetPropErrorNameFromEnum");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*, "OVR.OpenVR", "IVRSystem/_GetRecommendedRenderTargetSize");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*, "OVR.OpenVR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetStringTrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*, "OVR.OpenVR", "IVRSystem/_GetTimeSinceLastVsync");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceClass");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetUint64TrackedDeviceProperty");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*, "OVR.OpenVR", "IVRSystem/_IsDisplayOnDesktop");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__IsInputAvailable*, "OVR.OpenVR", "IVRSystem/_IsInputAvailable");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*, "OVR.OpenVR", "IVRSystem/_IsSteamVRDrawingControllers");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*, "OVR.OpenVR", "IVRSystem/_IsTrackedDeviceConnected");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*, "OVR.OpenVR", "IVRSystem/_PerformFirmwareUpdate");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__PollNextEvent*, "OVR.OpenVR", "IVRSystem/_PollNextEvent");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__PollNextEventWithPose*, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*, "OVR.OpenVR", "IVRSystem/_ResetSeatedZeroPose");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__SetDisplayVisibility*, "OVR.OpenVR", "IVRSystem/_SetDisplayVisibility");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__ShouldApplicationPause*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationPause");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem__TriggerHapticPulse*, "OVR.OpenVR", "IVRSystem/_TriggerHapticPulse");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRSystem, "OVR.OpenVR", "IVRSystem");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize
class CORDL_TYPE IVRSystem__GetRecommendedRenderTargetSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6245818, size 0x70, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6245888, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6245804, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<uint32_t> pnWidth, ::by_ref<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6245784, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetRecommendedRenderTargetSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRecommendedRenderTargetSize", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetRecommendedRenderTargetSize(IVRSystem__GetRecommendedRenderTargetSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRecommendedRenderTargetSize", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetRecommendedRenderTargetSize(IVRSystem__GetRecommendedRenderTargetSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetProjectionMatrix
class CORDL_TYPE IVRSystem__GetProjectionMatrix : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x624592c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62459e4, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6245918, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t Invoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ);

  static inline ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62458ac, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetProjectionMatrix();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionMatrix", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetProjectionMatrix(IVRSystem__GetProjectionMatrix&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionMatrix", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetProjectionMatrix(IVRSystem__GetProjectionMatrix const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetProjectionMatrix) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetProjectionRaw
class CORDL_TYPE IVRSystem__GetProjectionRaw : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6245a98, size 0xfc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop, ::by_ref<float_t> pfBottom,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6245b94, size 0x28, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop, ::by_ref<float_t> pfBottom, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6245a84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EVREye eEye, ::by_ref<float_t> pfLeft, ::by_ref<float_t> pfRight, ::by_ref<float_t> pfTop, ::by_ref<float_t> pfBottom);

  static inline ::OVR::OpenVR::IVRSystem__GetProjectionRaw* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6245a18, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetProjectionRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionRaw", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetProjectionRaw(IVRSystem__GetProjectionRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionRaw", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetProjectionRaw(IVRSystem__GetProjectionRaw const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetProjectionRaw) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ComputeDistortion
class CORDL_TYPE IVRSystem__ComputeDistortion : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6245c3c, size 0xf4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6245d30, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6245c28, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates);

  static inline ::OVR::OpenVR::IVRSystem__ComputeDistortion* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6245bbc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ComputeDistortion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ComputeDistortion", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ComputeDistortion(IVRSystem__ComputeDistortion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ComputeDistortion", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ComputeDistortion(IVRSystem__ComputeDistortion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8157 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__ComputeDistortion) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform
class CORDL_TYPE IVRSystem__GetEyeToHeadTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6245dd4, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6245e5c, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6245dc0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke(::OVR::OpenVR::EVREye eEye);

  static inline ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6245d54, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetEyeToHeadTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEyeToHeadTransform", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetEyeToHeadTransform(IVRSystem__GetEyeToHeadTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEyeToHeadTransform", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetEyeToHeadTransform(IVRSystem__GetEyeToHeadTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync
class CORDL_TYPE IVRSystem__GetTimeSinceLastVsync : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6245f24, size 0x74, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6245f98, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6245f10, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::by_ref<float_t> pfSecondsSinceLastVsync, ::by_ref<uint64_t> pulFrameCounter);

  static inline ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6245e90, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTimeSinceLastVsync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTimeSinceLastVsync", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTimeSinceLastVsync(IVRSystem__GetTimeSinceLastVsync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTimeSinceLastVsync", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTimeSinceLastVsync(IVRSystem__GetTimeSinceLastVsync const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetD3D9AdapterIndex
class CORDL_TYPE IVRSystem__GetD3D9AdapterIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246044, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246060, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246030, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke();

  static inline ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6245fc8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetD3D9AdapterIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetD3D9AdapterIndex", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetD3D9AdapterIndex(IVRSystem__GetD3D9AdapterIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetD3D9AdapterIndex", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetD3D9AdapterIndex(IVRSystem__GetD3D9AdapterIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8160 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
class CORDL_TYPE IVRSystem__GetDXGIOutputInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246114, size 0x50, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<int32_t> pnAdapterIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246164, size 0x18, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<int32_t> pnAdapterIndex, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246100, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<int32_t> pnAdapterIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246084, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetDXGIOutputInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDXGIOutputInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetDXGIOutputInfo(IVRSystem__GetDXGIOutputInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDXGIOutputInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetDXGIOutputInfo(IVRSystem__GetDXGIOutputInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8161 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetOutputDevice
class CORDL_TYPE IVRSystem__GetOutputDevice : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246210, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62462d4, size 0x18, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<uint64_t> pnDevice, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62461fc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance);

  static inline ::OVR::OpenVR::IVRSystem__GetOutputDevice* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x624617c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetOutputDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetOutputDevice", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetOutputDevice(IVRSystem__GetOutputDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetOutputDevice", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetOutputDevice(IVRSystem__GetOutputDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetOutputDevice) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsDisplayOnDesktop
class CORDL_TYPE IVRSystem__IsDisplayOnDesktop : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246368, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246384, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246354, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62462ec, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsDisplayOnDesktop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsDisplayOnDesktop", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsDisplayOnDesktop(IVRSystem__IsDisplayOnDesktop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsDisplayOnDesktop", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsDisplayOnDesktop(IVRSystem__IsDisplayOnDesktop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_SetDisplayVisibility
class CORDL_TYPE IVRSystem__SetDisplayVisibility : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246428, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246480, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246414, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(bool bIsVisibleOnDesktop);

  static inline ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62463a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__SetDisplayVisibility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__SetDisplayVisibility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__SetDisplayVisibility(IVRSystem__SetDisplayVisibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__SetDisplayVisibility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__SetDisplayVisibility(IVRSystem__SetDisplayVisibility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8164 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__SetDisplayVisibility) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
class CORDL_TYPE IVRSystem__GetDeviceToAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246524, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                             ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62465f0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246510, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow, ::by_ref<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pTrackedDevicePoseArray,
                     uint32_t unTrackedDevicePoseArrayCount);

  static inline ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62464a4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetDeviceToAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDeviceToAbsoluteTrackingPose", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetDeviceToAbsoluteTrackingPose(IVRSystem__GetDeviceToAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDeviceToAbsoluteTrackingPose", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetDeviceToAbsoluteTrackingPose(IVRSystem__GetDeviceToAbsoluteTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8165 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ResetSeatedZeroPose
class CORDL_TYPE IVRSystem__ResetSeatedZeroPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246678, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246694, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246664, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62465fc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ResetSeatedZeroPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ResetSeatedZeroPose", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ResetSeatedZeroPose(IVRSystem__ResetSeatedZeroPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ResetSeatedZeroPose", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ResetSeatedZeroPose(IVRSystem__ResetSeatedZeroPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8166 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
class CORDL_TYPE IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x624671c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246738, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246708, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke();

  static inline ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62466a0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8167 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
class CORDL_TYPE IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62467e8, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246804, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62467d4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke();

  static inline ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x624676c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8168 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
class CORDL_TYPE IVRSystem__GetSortedTrackedDeviceIndicesOfClass : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62468b8, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::by_ref<::ArrayW<uint32_t>> punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount,
                                             uint32_t unRelativeToTrackedDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x624697c, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62468a4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::by_ref<::ArrayW<uint32_t>> punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount,
                         uint32_t unRelativeToTrackedDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246838, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetSortedTrackedDeviceIndicesOfClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSortedTrackedDeviceIndicesOfClass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetSortedTrackedDeviceIndicesOfClass(IVRSystem__GetSortedTrackedDeviceIndicesOfClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSortedTrackedDeviceIndicesOfClass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetSortedTrackedDeviceIndicesOfClass(IVRSystem__GetSortedTrackedDeviceIndicesOfClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8169 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
class CORDL_TYPE IVRSystem__GetTrackedDeviceActivityLevel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246a20, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246a78, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246a0c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel Invoke(uint32_t unDeviceId);

  static inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62469a0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTrackedDeviceActivityLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceActivityLevel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTrackedDeviceActivityLevel(IVRSystem__GetTrackedDeviceActivityLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceActivityLevel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTrackedDeviceActivityLevel(IVRSystem__GetTrackedDeviceActivityLevel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ApplyTransform
class CORDL_TYPE IVRSystem__ApplyTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246b30, size 0xe0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246c10, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform,
                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246b1c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pTransform);

  static inline ::OVR::OpenVR::IVRSystem__ApplyTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246a9c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ApplyTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ApplyTransform", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ApplyTransform(IVRSystem__ApplyTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ApplyTransform", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ApplyTransform(IVRSystem__ApplyTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__ApplyTransform) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
class CORDL_TYPE IVRSystem__GetTrackedDeviceIndexForControllerRole : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246cb4, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246d3c, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246ca0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType);

  static inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246c34, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTrackedDeviceIndexForControllerRole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceIndexForControllerRole", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTrackedDeviceIndexForControllerRole(IVRSystem__GetTrackedDeviceIndexForControllerRole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceIndexForControllerRole", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTrackedDeviceIndexForControllerRole(IVRSystem__GetTrackedDeviceIndexForControllerRole const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8172 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
class CORDL_TYPE IVRSystem__GetControllerRoleForTrackedDeviceIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246de0, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246e38, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246dcc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246d60, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerRoleForTrackedDeviceIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerRoleForTrackedDeviceIndex", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerRoleForTrackedDeviceIndex(IVRSystem__GetControllerRoleForTrackedDeviceIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerRoleForTrackedDeviceIndex", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerRoleForTrackedDeviceIndex(IVRSystem__GetControllerRoleForTrackedDeviceIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8173 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTrackedDeviceClass
class CORDL_TYPE IVRSystem__GetTrackedDeviceClass : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246edc, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6246f34, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246ec8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246e5c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTrackedDeviceClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceClass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTrackedDeviceClass(IVRSystem__GetTrackedDeviceClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceClass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTrackedDeviceClass(IVRSystem__GetTrackedDeviceClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected
class CORDL_TYPE IVRSystem__IsTrackedDeviceConnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6246fd8, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247030, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6246fc4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6246f58, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsTrackedDeviceConnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsTrackedDeviceConnected", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsTrackedDeviceConnected(IVRSystem__IsTrackedDeviceConnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsTrackedDeviceConnected", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsTrackedDeviceConnected(IVRSystem__IsTrackedDeviceConnected const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8175 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetBoolTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62470d4, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62471ac, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62470c0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6247054, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetBoolTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetBoolTrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetBoolTrackedDeviceProperty(IVRSystem__GetBoolTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetBoolTrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetBoolTrackedDeviceProperty(IVRSystem__GetBoolTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetFloatTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6247250, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247328, size 0x24, virtual true, abstract: false, final false
  inline float_t EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x624723c, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62471d0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetFloatTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetFloatTrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetFloatTrackedDeviceProperty(IVRSystem__GetFloatTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetFloatTrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetFloatTrackedDeviceProperty(IVRSystem__GetFloatTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetInt32TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62473cc, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62474a4, size 0x24, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62473b8, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x624734c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetInt32TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetInt32TrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetInt32TrackedDeviceProperty(IVRSystem__GetInt32TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetInt32TrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetInt32TrackedDeviceProperty(IVRSystem__GetInt32TrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetUint64TrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetUint64TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6247548, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247620, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247534, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62474c8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetUint64TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetUint64TrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetUint64TrackedDeviceProperty(IVRSystem__GetUint64TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetUint64TrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetUint64TrackedDeviceProperty(IVRSystem__GetUint64TrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8179 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetMatrix34TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62476c4, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x624779c, size 0x40, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62476b0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6247644, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetMatrix34TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetMatrix34TrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetMatrix34TrackedDeviceProperty(IVRSystem__GetMatrix34TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetMatrix34TrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetMatrix34TrackedDeviceProperty(IVRSystem__GetMatrix34TrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetArrayTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x624785c, size 0x124, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                             ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247980, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247848, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                         ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62477dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetArrayTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetArrayTrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetArrayTrackedDeviceProperty(IVRSystem__GetArrayTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetArrayTrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetArrayTrackedDeviceProperty(IVRSystem__GetArrayTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetStringTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetStringTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6247a24, size 0xf4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                             ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247b18, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247a10, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                         ::by_ref<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62479a4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetStringTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetStringTrackedDeviceProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetStringTrackedDeviceProperty(IVRSystem__GetStringTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetStringTrackedDeviceProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetStringTrackedDeviceProperty(IVRSystem__GetStringTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
class CORDL_TYPE IVRSystem__GetPropErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6247bbc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247c44, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247ba8, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::ETrackedPropertyError error);

  static inline ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6247b3c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetPropErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetPropErrorNameFromEnum", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetPropErrorNameFromEnum(IVRSystem__GetPropErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetPropErrorNameFromEnum", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetPropErrorNameFromEnum(IVRSystem__GetPropErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8183 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_PollNextEvent
class CORDL_TYPE IVRSystem__PollNextEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6247cfc, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247da8, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247ce8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::IVRSystem__PollNextEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6247c68, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__PollNextEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEvent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__PollNextEvent(IVRSystem__PollNextEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__PollNextEvent(IVRSystem__PollNextEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8184 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__PollNextEvent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_PollNextEventWithPose
class CORDL_TYPE IVRSystem__PollNextEventWithPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6247e4c, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                             ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6247f54, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247e38, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6247dcc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__PollNextEventWithPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEventWithPose", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__PollNextEventWithPose(IVRSystem__PollNextEventWithPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEventWithPose", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__PollNextEventWithPose(IVRSystem__PollNextEventWithPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__PollNextEventWithPose) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum
class CORDL_TYPE IVRSystem__GetEventTypeNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248004, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x624808c, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6247ff0, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVREventType eType);

  static inline ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6247f84, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetEventTypeNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEventTypeNameFromEnum", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetEventTypeNameFromEnum(IVRSystem__GetEventTypeNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEventTypeNameFromEnum", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetEventTypeNameFromEnum(IVRSystem__GetEventTypeNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh
class CORDL_TYPE IVRSystem__GetHiddenAreaMesh : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248130, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62481e4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x624811c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t Invoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type);

  static inline ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62480b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetHiddenAreaMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetHiddenAreaMesh", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetHiddenAreaMesh(IVRSystem__GetHiddenAreaMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetHiddenAreaMesh", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetHiddenAreaMesh(IVRSystem__GetHiddenAreaMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerState
class CORDL_TYPE IVRSystem__GetControllerState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x624828c, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x624834c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248278, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x624820c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerState", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerState(IVRSystem__GetControllerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerState", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerState(IVRSystem__GetControllerState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetControllerState) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
class CORDL_TYPE IVRSystem__GetControllerStateWithPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62483f0, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                             uint32_t unControllerStateSize, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248510, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62483dc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                     ::by_ref<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248370, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerStateWithPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerStateWithPose", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerStateWithPose(IVRSystem__GetControllerStateWithPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerStateWithPose", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerStateWithPose(IVRSystem__GetControllerStateWithPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_TriggerHapticPulse
class CORDL_TYPE IVRSystem__TriggerHapticPulse : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62485c0, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248650, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62485ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec);

  static inline ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248540, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__TriggerHapticPulse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__TriggerHapticPulse", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__TriggerHapticPulse(IVRSystem__TriggerHapticPulse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__TriggerHapticPulse", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__TriggerHapticPulse(IVRSystem__TriggerHapticPulse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8190 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__TriggerHapticPulse) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum
class CORDL_TYPE IVRSystem__GetButtonIdNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62486dc, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248764, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62486c8, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRButtonId eButtonId);

  static inline ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x624865c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetButtonIdNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetButtonIdNameFromEnum", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetButtonIdNameFromEnum(IVRSystem__GetButtonIdNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetButtonIdNameFromEnum", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetButtonIdNameFromEnum(IVRSystem__GetButtonIdNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
class CORDL_TYPE IVRSystem__GetControllerAxisTypeNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248808, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248890, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62487f4, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248788, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerAxisTypeNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerAxisTypeNameFromEnum", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerAxisTypeNameFromEnum(IVRSystem__GetControllerAxisTypeNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerAxisTypeNameFromEnum", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerAxisTypeNameFromEnum(IVRSystem__GetControllerAxisTypeNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8192 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsInputAvailable
class CORDL_TYPE IVRSystem__IsInputAvailable : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248930, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x624894c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x624891c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__IsInputAvailable* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62488b4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsInputAvailable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsInputAvailable", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsInputAvailable(IVRSystem__IsInputAvailable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsInputAvailable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsInputAvailable(IVRSystem__IsInputAvailable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8193 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__IsInputAvailable) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsSteamVRDrawingControllers
class CORDL_TYPE IVRSystem__IsSteamVRDrawingControllers : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62489ec, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248a08, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62489d8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248970, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsSteamVRDrawingControllers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsSteamVRDrawingControllers", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsSteamVRDrawingControllers(IVRSystem__IsSteamVRDrawingControllers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsSteamVRDrawingControllers", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsSteamVRDrawingControllers(IVRSystem__IsSteamVRDrawingControllers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ShouldApplicationPause
class CORDL_TYPE IVRSystem__ShouldApplicationPause : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248aa8, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248ac4, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248a94, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248a2c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ShouldApplicationPause();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationPause", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ShouldApplicationPause(IVRSystem__ShouldApplicationPause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationPause", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ShouldApplicationPause(IVRSystem__ShouldApplicationPause const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__ShouldApplicationPause) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
class CORDL_TYPE IVRSystem__ShouldApplicationReduceRenderingWork : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248b64, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248b80, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248b50, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248ae8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ShouldApplicationReduceRenderingWork();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationReduceRenderingWork", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ShouldApplicationReduceRenderingWork(IVRSystem__ShouldApplicationReduceRenderingWork&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationReduceRenderingWork", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ShouldApplicationReduceRenderingWork(IVRSystem__ShouldApplicationReduceRenderingWork const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_DriverDebugRequest
class CORDL_TYPE IVRSystem__DriverDebugRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248c24, size 0x80, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248ca4, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248c10, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize);

  static inline ::OVR::OpenVR::IVRSystem__DriverDebugRequest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248ba4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__DriverDebugRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__DriverDebugRequest", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__DriverDebugRequest(IVRSystem__DriverDebugRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__DriverDebugRequest", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__DriverDebugRequest(IVRSystem__DriverDebugRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8197 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__DriverDebugRequest) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate
class CORDL_TYPE IVRSystem__PerformFirmwareUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248d48, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248da0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248d34, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248cc8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__PerformFirmwareUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PerformFirmwareUpdate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__PerformFirmwareUpdate(IVRSystem__PerformFirmwareUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PerformFirmwareUpdate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__PerformFirmwareUpdate(IVRSystem__PerformFirmwareUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_AcknowledgeQuit_Exiting
class CORDL_TYPE IVRSystem__AcknowledgeQuit_Exiting : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248e40, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248e5c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248e2c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248dc4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__AcknowledgeQuit_Exiting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_Exiting", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__AcknowledgeQuit_Exiting(IVRSystem__AcknowledgeQuit_Exiting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_Exiting", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__AcknowledgeQuit_Exiting(IVRSystem__AcknowledgeQuit_Exiting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8199 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt
class CORDL_TYPE IVRSystem__AcknowledgeQuit_UserPrompt : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6248ee4, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6248f00, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6248ed0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6248e68, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__AcknowledgeQuit_UserPrompt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_UserPrompt", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__AcknowledgeQuit_UserPrompt(IVRSystem__AcknowledgeQuit_UserPrompt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_UserPrompt", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__AcknowledgeQuit_UserPrompt(IVRSystem__AcknowledgeQuit_UserPrompt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8200 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRSystem
struct CORDL_TYPE IVRSystem {
public:
  // Declarations
  using _AcknowledgeQuit_Exiting = ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting;

  using _AcknowledgeQuit_UserPrompt = ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt;

  using _ApplyTransform = ::OVR::OpenVR::IVRSystem__ApplyTransform;

  using _ComputeDistortion = ::OVR::OpenVR::IVRSystem__ComputeDistortion;

  using _DriverDebugRequest = ::OVR::OpenVR::IVRSystem__DriverDebugRequest;

  using _GetArrayTrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty;

  using _GetBoolTrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty;

  using _GetButtonIdNameFromEnum = ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum;

  using _GetControllerAxisTypeNameFromEnum = ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum;

  using _GetControllerRoleForTrackedDeviceIndex = ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex;

  using _GetControllerState = ::OVR::OpenVR::IVRSystem__GetControllerState;

  using _GetControllerStateWithPose = ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose;

  using _GetD3D9AdapterIndex = ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex;

  using _GetDXGIOutputInfo = ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo;

  using _GetDeviceToAbsoluteTrackingPose = ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose;

  using _GetEventTypeNameFromEnum = ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum;

  using _GetEyeToHeadTransform = ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform;

  using _GetFloatTrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty;

  using _GetHiddenAreaMesh = ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh;

  using _GetInt32TrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty;

  using _GetMatrix34TrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty;

  using _GetOutputDevice = ::OVR::OpenVR::IVRSystem__GetOutputDevice;

  using _GetProjectionMatrix = ::OVR::OpenVR::IVRSystem__GetProjectionMatrix;

  using _GetProjectionRaw = ::OVR::OpenVR::IVRSystem__GetProjectionRaw;

  using _GetPropErrorNameFromEnum = ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum;

  using _GetRawZeroPoseToStandingAbsoluteTrackingPose = ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose;

  using _GetRecommendedRenderTargetSize = ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize;

  using _GetSeatedZeroPoseToStandingAbsoluteTrackingPose = ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose;

  using _GetSortedTrackedDeviceIndicesOfClass = ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass;

  using _GetStringTrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty;

  using _GetTimeSinceLastVsync = ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync;

  using _GetTrackedDeviceActivityLevel = ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel;

  using _GetTrackedDeviceClass = ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass;

  using _GetTrackedDeviceIndexForControllerRole = ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole;

  using _GetUint64TrackedDeviceProperty = ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty;

  using _IsDisplayOnDesktop = ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop;

  using _IsInputAvailable = ::OVR::OpenVR::IVRSystem__IsInputAvailable;

  using _IsSteamVRDrawingControllers = ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers;

  using _IsTrackedDeviceConnected = ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected;

  using _PerformFirmwareUpdate = ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate;

  using _PollNextEvent = ::OVR::OpenVR::IVRSystem__PollNextEvent;

  using _PollNextEventWithPose = ::OVR::OpenVR::IVRSystem__PollNextEventWithPose;

  using _ResetSeatedZeroPose = ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose;

  using _SetDisplayVisibility = ::OVR::OpenVR::IVRSystem__SetDisplayVisibility;

  using _ShouldApplicationPause = ::OVR::OpenVR::IVRSystem__ShouldApplicationPause;

  using _ShouldApplicationReduceRenderingWork = ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork;

  using _TriggerHapticPulse = ::OVR::OpenVR::IVRSystem__TriggerHapticPulse;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem();

  // Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "GetProjectionMatrix", ty: "::OVR::OpenVR::IVRSystem__GetProjectionMatrix*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetProjectionRaw", ty:
  // "::OVR::OpenVR::IVRSystem__GetProjectionRaw*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComputeDistortion", ty: "::OVR::OpenVR::IVRSystem__ComputeDistortion*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "GetEyeToHeadTransform", ty: "::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "GetTimeSinceLastVsync", ty: "::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetD3D9AdapterIndex", ty:
  // "::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOutputDevice", ty: "::OVR::OpenVR::IVRSystem__GetOutputDevice*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "IsDisplayOnDesktop", ty: "::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetDisplayVisibility", ty:
  // "::OVR::OpenVR::IVRSystem__SetDisplayVisibility*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetDeviceToAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResetSeatedZeroPose", ty:
  // "::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty:
  // "::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetTrackedDeviceActivityLevel", ty:
  // "::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ApplyTransform", ty: "::OVR::OpenVR::IVRSystem__ApplyTransform*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "GetControllerRoleForTrackedDeviceIndex", ty: "::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "GetTrackedDeviceClass", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "IsTrackedDeviceConnected", ty: "::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetBoolTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetFloatTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetInt32TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetUint64TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetArrayTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetStringTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetPropErrorNameFromEnum", ty:
  // "::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "PollNextEventWithPose", ty: "::OVR::OpenVR::IVRSystem__PollNextEventWithPose*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "GetEventTypeNameFromEnum", ty: "::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetHiddenAreaMesh", ty:
  // "::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "GetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "TriggerHapticPulse", ty: "::OVR::OpenVR::IVRSystem__TriggerHapticPulse*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "GetButtonIdNameFromEnum", ty: "::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetControllerAxisTypeNameFromEnum", ty:
  // "::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsInputAvailable", ty:
  // "::OVR::OpenVR::IVRSystem__IsInputAvailable*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsSteamVRDrawingControllers", ty:
  // "::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShouldApplicationPause", ty:
  // "::OVR::OpenVR::IVRSystem__ShouldApplicationPause*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShouldApplicationReduceRenderingWork", ty:
  // "::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DriverDebugRequest", ty:
  // "::OVR::OpenVR::IVRSystem__DriverDebugRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PerformFirmwareUpdate", ty: "::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "AcknowledgeQuit_UserPrompt", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*", modifiers: "", def_value: None, comment: None }]
  constexpr IVRSystem(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize, ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* GetProjectionMatrix,
                      ::OVR::OpenVR::IVRSystem__GetProjectionRaw* GetProjectionRaw, ::OVR::OpenVR::IVRSystem__ComputeDistortion* ComputeDistortion,
                      ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* GetEyeToHeadTransform, ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* GetTimeSinceLastVsync,
                      ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* GetD3D9AdapterIndex, ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* GetDXGIOutputInfo,
                      ::OVR::OpenVR::IVRSystem__GetOutputDevice* GetOutputDevice, ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* IsDisplayOnDesktop,
                      ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* SetDisplayVisibility, ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose,
                      ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* ResetSeatedZeroPose,
                      ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
                      ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose,
                      ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass,
                      ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel, ::OVR::OpenVR::IVRSystem__ApplyTransform* ApplyTransform,
                      ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole,
                      ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex, ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* GetTrackedDeviceClass,
                      ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* IsTrackedDeviceConnected, ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty,
                      ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty,
                      ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty,
                      ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty,
                      ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty, ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty,
                      ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* GetPropErrorNameFromEnum, ::OVR::OpenVR::IVRSystem__PollNextEvent* PollNextEvent,
                      ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* PollNextEventWithPose, ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* GetEventTypeNameFromEnum,
                      ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* GetHiddenAreaMesh, ::OVR::OpenVR::IVRSystem__GetControllerState* GetControllerState,
                      ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* GetControllerStateWithPose, ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* TriggerHapticPulse,
                      ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* GetButtonIdNameFromEnum, ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum,
                      ::OVR::OpenVR::IVRSystem__IsInputAvailable* IsInputAvailable, ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* IsSteamVRDrawingControllers,
                      ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* ShouldApplicationPause, ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork,
                      ::OVR::OpenVR::IVRSystem__DriverDebugRequest* DriverDebugRequest, ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* PerformFirmwareUpdate,
                      ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting, ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8201 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x178 };

  /// @brief Field GetRecommendedRenderTargetSize, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;

  /// @brief Field GetProjectionMatrix, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* GetProjectionMatrix;

  /// @brief Field GetProjectionRaw, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetProjectionRaw* GetProjectionRaw;

  /// @brief Field ComputeDistortion, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__ComputeDistortion* ComputeDistortion;

  /// @brief Field GetEyeToHeadTransform, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* GetEyeToHeadTransform;

  /// @brief Field GetTimeSinceLastVsync, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* GetTimeSinceLastVsync;

  /// @brief Field GetD3D9AdapterIndex, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* GetD3D9AdapterIndex;

  /// @brief Field GetDXGIOutputInfo, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* GetDXGIOutputInfo;

  /// @brief Field GetOutputDevice, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetOutputDevice* GetOutputDevice;

  /// @brief Field IsDisplayOnDesktop, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* IsDisplayOnDesktop;

  /// @brief Field SetDisplayVisibility, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* SetDisplayVisibility;

  /// @brief Field GetDeviceToAbsoluteTrackingPose, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;

  /// @brief Field ResetSeatedZeroPose, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* ResetSeatedZeroPose;

  /// @brief Field GetSeatedZeroPoseToStandingAbsoluteTrackingPose, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;

  /// @brief Field GetRawZeroPoseToStandingAbsoluteTrackingPose, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;

  /// @brief Field GetSortedTrackedDeviceIndicesOfClass, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;

  /// @brief Field GetTrackedDeviceActivityLevel, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;

  /// @brief Field ApplyTransform, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__ApplyTransform* ApplyTransform;

  /// @brief Field GetTrackedDeviceIndexForControllerRole, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;

  /// @brief Field GetControllerRoleForTrackedDeviceIndex, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;

  /// @brief Field GetTrackedDeviceClass, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* GetTrackedDeviceClass;

  /// @brief Field IsTrackedDeviceConnected, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* IsTrackedDeviceConnected;

  /// @brief Field GetBoolTrackedDeviceProperty, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;

  /// @brief Field GetFloatTrackedDeviceProperty, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;

  /// @brief Field GetInt32TrackedDeviceProperty, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;

  /// @brief Field GetUint64TrackedDeviceProperty, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;

  /// @brief Field GetMatrix34TrackedDeviceProperty, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;

  /// @brief Field GetArrayTrackedDeviceProperty, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty;

  /// @brief Field GetStringTrackedDeviceProperty, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;

  /// @brief Field GetPropErrorNameFromEnum, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;

  /// @brief Field PollNextEvent, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__PollNextEvent* PollNextEvent;

  /// @brief Field PollNextEventWithPose, offset: 0xf8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* PollNextEventWithPose;

  /// @brief Field GetEventTypeNameFromEnum, offset: 0x100, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;

  /// @brief Field GetHiddenAreaMesh, offset: 0x108, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* GetHiddenAreaMesh;

  /// @brief Field GetControllerState, offset: 0x110, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetControllerState* GetControllerState;

  /// @brief Field GetControllerStateWithPose, offset: 0x118, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* GetControllerStateWithPose;

  /// @brief Field TriggerHapticPulse, offset: 0x120, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* TriggerHapticPulse;

  /// @brief Field GetButtonIdNameFromEnum, offset: 0x128, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;

  /// @brief Field GetControllerAxisTypeNameFromEnum, offset: 0x130, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;

  /// @brief Field IsInputAvailable, offset: 0x138, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__IsInputAvailable* IsInputAvailable;

  /// @brief Field IsSteamVRDrawingControllers, offset: 0x140, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* IsSteamVRDrawingControllers;

  /// @brief Field ShouldApplicationPause, offset: 0x148, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* ShouldApplicationPause;

  /// @brief Field ShouldApplicationReduceRenderingWork, offset: 0x150, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork;

  /// @brief Field DriverDebugRequest, offset: 0x158, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__DriverDebugRequest* DriverDebugRequest;

  /// @brief Field PerformFirmwareUpdate, offset: 0x160, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* PerformFirmwareUpdate;

  /// @brief Field AcknowledgeQuit_Exiting, offset: 0x168, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;

  /// @brief Field AcknowledgeQuit_UserPrompt, offset: 0x170, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetRecommendedRenderTargetSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetProjectionMatrix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetProjectionRaw) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, ComputeDistortion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetEyeToHeadTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetTimeSinceLastVsync) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetD3D9AdapterIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetDXGIOutputInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetOutputDevice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, IsDisplayOnDesktop) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, SetDisplayVisibility) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetDeviceToAbsoluteTrackingPose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, ResetSeatedZeroPose) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetSeatedZeroPoseToStandingAbsoluteTrackingPose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetRawZeroPoseToStandingAbsoluteTrackingPose) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetSortedTrackedDeviceIndicesOfClass) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetTrackedDeviceActivityLevel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, ApplyTransform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetTrackedDeviceIndexForControllerRole) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetControllerRoleForTrackedDeviceIndex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetTrackedDeviceClass) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, IsTrackedDeviceConnected) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetBoolTrackedDeviceProperty) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetFloatTrackedDeviceProperty) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetInt32TrackedDeviceProperty) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetUint64TrackedDeviceProperty) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetMatrix34TrackedDeviceProperty) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetArrayTrackedDeviceProperty) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetStringTrackedDeviceProperty) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetPropErrorNameFromEnum) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, PollNextEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, PollNextEventWithPose) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetEventTypeNameFromEnum) == 0x100, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetHiddenAreaMesh) == 0x108, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetControllerState) == 0x110, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetControllerStateWithPose) == 0x118, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, TriggerHapticPulse) == 0x120, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetButtonIdNameFromEnum) == 0x128, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, GetControllerAxisTypeNameFromEnum) == 0x130, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, IsInputAvailable) == 0x138, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, IsSteamVRDrawingControllers) == 0x140, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, ShouldApplicationPause) == 0x148, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, ShouldApplicationReduceRenderingWork) == 0x150, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, DriverDebugRequest) == 0x158, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, PerformFirmwareUpdate) == 0x160, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, AcknowledgeQuit_Exiting) == 0x168, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSystem, AcknowledgeQuit_UserPrompt) == 0x170, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::IVRSystem) == 0x178, "Size mismatch!");

} // namespace OVR::OpenVR
