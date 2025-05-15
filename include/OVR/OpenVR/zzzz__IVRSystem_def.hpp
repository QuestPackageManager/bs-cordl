#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__ApplyTransform);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__ComputeDistortion);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__DriverDebugRequest);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetControllerState);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetOutputDevice);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetProjectionMatrix);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetProjectionRaw);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__IsInputAvailable);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__PollNextEvent);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__PollNextEventWithPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__SetDisplayVisibility);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__ShouldApplicationPause);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSystem__TriggerHapticPulse);
MARK_VAL_T(::OVR::OpenVR::IVRSystem);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetRecommendedRenderTargetSize
class CORDL_TYPE IVRSystem__GetRecommendedRenderTargetSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4054e08, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4054eac, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4054df4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<uint32_t> pnWidth, ::ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4054d54, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetRecommendedRenderTargetSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRecommendedRenderTargetSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetRecommendedRenderTargetSize(IVRSystem__GetRecommendedRenderTargetSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRecommendedRenderTargetSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetRecommendedRenderTargetSize(IVRSystem__GetRecommendedRenderTargetSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetProjectionMatrix
class CORDL_TYPE IVRSystem__GetProjectionMatrix : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4054f70, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055044, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4054f5c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t Invoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ);

  static inline ::OVR::OpenVR::IVRSystem__GetProjectionMatrix* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4054ed0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetProjectionMatrix();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionMatrix", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetProjectionMatrix(IVRSystem__GetProjectionMatrix&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionMatrix", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetProjectionMatrix(IVRSystem__GetProjectionMatrix const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8536 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetProjectionMatrix, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetProjectionRaw
class CORDL_TYPE IVRSystem__GetProjectionRaw : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405511c, size 0x118, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055234, size 0x28, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055108, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EVREye eEye, ::ByRef<float_t> pfLeft, ::ByRef<float_t> pfRight, ::ByRef<float_t> pfTop, ::ByRef<float_t> pfBottom);

  static inline ::OVR::OpenVR::IVRSystem__GetProjectionRaw* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405507c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetProjectionRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetProjectionRaw(IVRSystem__GetProjectionRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetProjectionRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetProjectionRaw(IVRSystem__GetProjectionRaw const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8537 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetProjectionRaw, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ComputeDistortion
class CORDL_TYPE IVRSystem__ComputeDistortion : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40552fc, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055408, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40552e8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ::ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates);

  static inline ::OVR::OpenVR::IVRSystem__ComputeDistortion* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405525c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ComputeDistortion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ComputeDistortion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ComputeDistortion(IVRSystem__ComputeDistortion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ComputeDistortion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ComputeDistortion(IVRSystem__ComputeDistortion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8538 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__ComputeDistortion, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetEyeToHeadTransform
class CORDL_TYPE IVRSystem__GetEyeToHeadTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40554d4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055558, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40554c0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke(::OVR::OpenVR::EVREye eEye);

  static inline ::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055434, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetEyeToHeadTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEyeToHeadTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetEyeToHeadTransform(IVRSystem__GetEyeToHeadTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEyeToHeadTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetEyeToHeadTransform(IVRSystem__GetEyeToHeadTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTimeSinceLastVsync
class CORDL_TYPE IVRSystem__GetTimeSinceLastVsync : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055644, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055704, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055630, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<float_t> pfSecondsSinceLastVsync, ::ByRef<uint64_t> pulFrameCounter);

  static inline ::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055590, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTimeSinceLastVsync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTimeSinceLastVsync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTimeSinceLastVsync(IVRSystem__GetTimeSinceLastVsync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTimeSinceLastVsync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTimeSinceLastVsync(IVRSystem__GetTimeSinceLastVsync const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetD3D9AdapterIndex
class CORDL_TYPE IVRSystem__GetD3D9AdapterIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40557d4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40557f4, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40557c0, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke();

  static inline ::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055738, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetD3D9AdapterIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetD3D9AdapterIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetD3D9AdapterIndex(IVRSystem__GetD3D9AdapterIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetD3D9AdapterIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetD3D9AdapterIndex(IVRSystem__GetD3D9AdapterIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetDXGIOutputInfo
class CORDL_TYPE IVRSystem__GetDXGIOutputInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40558cc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<int32_t> pnAdapterIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055958, size 0xec, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<int32_t> pnAdapterIndex, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40558b8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<int32_t> pnAdapterIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405581c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetDXGIOutputInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDXGIOutputInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetDXGIOutputInfo(IVRSystem__GetDXGIOutputInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDXGIOutputInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetDXGIOutputInfo(IVRSystem__GetDXGIOutputInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8542 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetOutputDevice
class CORDL_TYPE IVRSystem__GetOutputDevice : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055af8, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055be4, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<uint64_t> pnDevice, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055ae4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance);

  static inline ::OVR::OpenVR::IVRSystem__GetOutputDevice* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055a44, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetOutputDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetOutputDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetOutputDevice(IVRSystem__GetOutputDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetOutputDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetOutputDevice(IVRSystem__GetOutputDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetOutputDevice, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsDisplayOnDesktop
class CORDL_TYPE IVRSystem__IsDisplayOnDesktop : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055c9c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055cbc, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055c88, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055c00, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsDisplayOnDesktop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsDisplayOnDesktop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsDisplayOnDesktop(IVRSystem__IsDisplayOnDesktop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsDisplayOnDesktop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsDisplayOnDesktop(IVRSystem__IsDisplayOnDesktop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8544 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_SetDisplayVisibility
class CORDL_TYPE IVRSystem__SetDisplayVisibility : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055d88, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055e10, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055d70, size 0x18, virtual true, abstract: false, final false
  inline bool Invoke(bool bIsVisibleOnDesktop);

  static inline ::OVR::OpenVR::IVRSystem__SetDisplayVisibility* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055ce4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__SetDisplayVisibility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__SetDisplayVisibility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__SetDisplayVisibility(IVRSystem__SetDisplayVisibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__SetDisplayVisibility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__SetDisplayVisibility(IVRSystem__SetDisplayVisibility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__SetDisplayVisibility, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
class CORDL_TYPE IVRSystem__GetDeviceToAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4055ed8, size 0xf8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray,
                                             uint32_t unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4055fd0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4055ec4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                     ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount);

  static inline ::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055e38, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetDeviceToAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDeviceToAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetDeviceToAbsoluteTrackingPose(IVRSystem__GetDeviceToAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetDeviceToAbsoluteTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetDeviceToAbsoluteTrackingPose(IVRSystem__GetDeviceToAbsoluteTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ResetSeatedZeroPose
class CORDL_TYPE IVRSystem__ResetSeatedZeroPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056078, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056098, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056064, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4055fdc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ResetSeatedZeroPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ResetSeatedZeroPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ResetSeatedZeroPose(IVRSystem__ResetSeatedZeroPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ResetSeatedZeroPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ResetSeatedZeroPose(IVRSystem__ResetSeatedZeroPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
class CORDL_TYPE IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056140, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056160, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405612c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke();

  static inline ::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40560a4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8548 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
class CORDL_TYPE IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056234, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056254, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056220, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke();

  static inline ::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056198, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose(IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
class CORDL_TYPE IVRSystem__GetSortedTrackedDeviceIndicesOfClass : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405632c, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray,
                                             uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056404, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056318, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount,
                         uint32_t unRelativeToTrackedDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405628c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetSortedTrackedDeviceIndicesOfClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSortedTrackedDeviceIndicesOfClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetSortedTrackedDeviceIndicesOfClass(IVRSystem__GetSortedTrackedDeviceIndicesOfClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetSortedTrackedDeviceIndicesOfClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetSortedTrackedDeviceIndicesOfClass(IVRSystem__GetSortedTrackedDeviceIndicesOfClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8550 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTrackedDeviceActivityLevel
class CORDL_TYPE IVRSystem__GetTrackedDeviceActivityLevel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40564cc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056550, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40564b8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel Invoke(uint32_t unDeviceId);

  static inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405642c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTrackedDeviceActivityLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceActivityLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTrackedDeviceActivityLevel(IVRSystem__GetTrackedDeviceActivityLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceActivityLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTrackedDeviceActivityLevel(IVRSystem__GetTrackedDeviceActivityLevel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8551 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ApplyTransform
class CORDL_TYPE IVRSystem__ApplyTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405662c, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                             ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056704, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform,
                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056618, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform);

  static inline ::OVR::OpenVR::IVRSystem__ApplyTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056578, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ApplyTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ApplyTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ApplyTransform(IVRSystem__ApplyTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ApplyTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ApplyTransform(IVRSystem__ApplyTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8552 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__ApplyTransform, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
class CORDL_TYPE IVRSystem__GetTrackedDeviceIndexForControllerRole : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40567c8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405684c, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40567b4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType);

  static inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056728, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTrackedDeviceIndexForControllerRole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceIndexForControllerRole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTrackedDeviceIndexForControllerRole(IVRSystem__GetTrackedDeviceIndexForControllerRole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceIndexForControllerRole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTrackedDeviceIndexForControllerRole(IVRSystem__GetTrackedDeviceIndexForControllerRole const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8553 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
class CORDL_TYPE IVRSystem__GetControllerRoleForTrackedDeviceIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056914, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056998, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056900, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056874, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerRoleForTrackedDeviceIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerRoleForTrackedDeviceIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerRoleForTrackedDeviceIndex(IVRSystem__GetControllerRoleForTrackedDeviceIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerRoleForTrackedDeviceIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerRoleForTrackedDeviceIndex(IVRSystem__GetControllerRoleForTrackedDeviceIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetTrackedDeviceClass
class CORDL_TYPE IVRSystem__GetTrackedDeviceClass : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056a60, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056ae4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056a4c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40569c0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetTrackedDeviceClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetTrackedDeviceClass(IVRSystem__GetTrackedDeviceClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetTrackedDeviceClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetTrackedDeviceClass(IVRSystem__GetTrackedDeviceClass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8555 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsTrackedDeviceConnected
class CORDL_TYPE IVRSystem__IsTrackedDeviceConnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056bac, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056c30, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056b98, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056b0c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsTrackedDeviceConnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsTrackedDeviceConnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsTrackedDeviceConnected(IVRSystem__IsTrackedDeviceConnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsTrackedDeviceConnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsTrackedDeviceConnected(IVRSystem__IsTrackedDeviceConnected const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetBoolTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetBoolTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056cf8, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056de4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056ce4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056c58, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetBoolTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetBoolTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetBoolTrackedDeviceProperty(IVRSystem__GetBoolTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetBoolTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetBoolTrackedDeviceProperty(IVRSystem__GetBoolTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetFloatTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4056eb0, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4056f9c, size 0x2c, virtual true, abstract: false, final false
  inline float_t EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4056e9c, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056e10, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetFloatTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetFloatTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetFloatTrackedDeviceProperty(IVRSystem__GetFloatTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetFloatTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetFloatTrackedDeviceProperty(IVRSystem__GetFloatTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8558 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetInt32TrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetInt32TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057068, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057154, size 0x2c, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057054, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4056fc8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetInt32TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetInt32TrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetInt32TrackedDeviceProperty(IVRSystem__GetInt32TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetInt32TrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetInt32TrackedDeviceProperty(IVRSystem__GetInt32TrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8559 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetUint64TrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetUint64TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057220, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405730c, size 0x2c, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405720c, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057180, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetUint64TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetUint64TrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetUint64TrackedDeviceProperty(IVRSystem__GetUint64TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetUint64TrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetUint64TrackedDeviceProperty(IVRSystem__GetUint64TrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetMatrix34TrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetMatrix34TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40573d8, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40574c4, size 0x44, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40573c4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057338, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetMatrix34TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetMatrix34TrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetMatrix34TrackedDeviceProperty(IVRSystem__GetMatrix34TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetMatrix34TrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetMatrix34TrackedDeviceProperty(IVRSystem__GetMatrix34TrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8561 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetArrayTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetArrayTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40575a8, size 0x150, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                             ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40576f8, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057594, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                         ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057508, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetArrayTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetArrayTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetArrayTrackedDeviceProperty(IVRSystem__GetArrayTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetArrayTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetArrayTrackedDeviceProperty(IVRSystem__GetArrayTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetStringTrackedDeviceProperty
class CORDL_TYPE IVRSystem__GetStringTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40577c4, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                             ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40578d0, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40577b0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                         ::ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057724, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetStringTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetStringTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetStringTrackedDeviceProperty(IVRSystem__GetStringTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetStringTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetStringTrackedDeviceProperty(IVRSystem__GetStringTrackedDeviceProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8563 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetPropErrorNameFromEnum
class CORDL_TYPE IVRSystem__GetPropErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405799c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057a20, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057988, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::ETrackedPropertyError error);

  static inline ::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40578fc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetPropErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetPropErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetPropErrorNameFromEnum(IVRSystem__GetPropErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetPropErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetPropErrorNameFromEnum(IVRSystem__GetPropErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8564 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_PollNextEvent
class CORDL_TYPE IVRSystem__PollNextEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057afc, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057bb4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057ae8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::IVRSystem__PollNextEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057a48, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__PollNextEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__PollNextEvent(IVRSystem__PollNextEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__PollNextEvent(IVRSystem__PollNextEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8565 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__PollNextEvent, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_PollNextEventWithPose
class CORDL_TYPE IVRSystem__PollNextEventWithPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057c80, size 0x124, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                             ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057da4, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057c6c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::IVRSystem__PollNextEventWithPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057be0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__PollNextEventWithPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEventWithPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__PollNextEventWithPose(IVRSystem__PollNextEventWithPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PollNextEventWithPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__PollNextEventWithPose(IVRSystem__PollNextEventWithPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8566 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__PollNextEventWithPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum
class CORDL_TYPE IVRSystem__GetEventTypeNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057e78, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4057efc, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057e64, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVREventType eType);

  static inline ::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057dd8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetEventTypeNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEventTypeNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetEventTypeNameFromEnum(IVRSystem__GetEventTypeNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetEventTypeNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetEventTypeNameFromEnum(IVRSystem__GetEventTypeNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetHiddenAreaMesh
class CORDL_TYPE IVRSystem__GetHiddenAreaMesh : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4057fc4, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405807c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4057fb0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t Invoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type);

  static inline ::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4057f24, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetHiddenAreaMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetHiddenAreaMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetHiddenAreaMesh(IVRSystem__GetHiddenAreaMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetHiddenAreaMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetHiddenAreaMesh(IVRSystem__GetHiddenAreaMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerState
class CORDL_TYPE IVRSystem__GetControllerState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058148, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058218, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4058134, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40580a8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerState(IVRSystem__GetControllerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerState(IVRSystem__GetControllerState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8569 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetControllerState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerStateWithPose
class CORDL_TYPE IVRSystem__GetControllerStateWithPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40582e4, size 0x13c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                             uint32_t unControllerStateSize, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058420, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40582d0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                     ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058244, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerStateWithPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerStateWithPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerStateWithPose(IVRSystem__GetControllerStateWithPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerStateWithPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerStateWithPose(IVRSystem__GetControllerStateWithPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetControllerStateWithPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_TriggerHapticPulse
class CORDL_TYPE IVRSystem__TriggerHapticPulse : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40584f4, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40585c4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40584e0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec);

  static inline ::OVR::OpenVR::IVRSystem__TriggerHapticPulse* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058454, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__TriggerHapticPulse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__TriggerHapticPulse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__TriggerHapticPulse(IVRSystem__TriggerHapticPulse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__TriggerHapticPulse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__TriggerHapticPulse(IVRSystem__TriggerHapticPulse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__TriggerHapticPulse, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum
class CORDL_TYPE IVRSystem__GetButtonIdNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058670, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x40586f4, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405865c, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRButtonId eButtonId);

  static inline ::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x40585d0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetButtonIdNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetButtonIdNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetButtonIdNameFromEnum(IVRSystem__GetButtonIdNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetButtonIdNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetButtonIdNameFromEnum(IVRSystem__GetButtonIdNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_GetControllerAxisTypeNameFromEnum
class CORDL_TYPE IVRSystem__GetControllerAxisTypeNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40587bc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058840, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40587a8, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType);

  static inline ::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405871c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__GetControllerAxisTypeNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerAxisTypeNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__GetControllerAxisTypeNameFromEnum(IVRSystem__GetControllerAxisTypeNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__GetControllerAxisTypeNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__GetControllerAxisTypeNameFromEnum(IVRSystem__GetControllerAxisTypeNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8573 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsInputAvailable
class CORDL_TYPE IVRSystem__IsInputAvailable : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058904, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058924, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40588f0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__IsInputAvailable* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058868, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsInputAvailable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsInputAvailable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsInputAvailable(IVRSystem__IsInputAvailable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsInputAvailable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsInputAvailable(IVRSystem__IsInputAvailable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__IsInputAvailable, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_IsSteamVRDrawingControllers
class CORDL_TYPE IVRSystem__IsSteamVRDrawingControllers : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x40589e8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058a08, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x40589d4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405894c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__IsSteamVRDrawingControllers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsSteamVRDrawingControllers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__IsSteamVRDrawingControllers(IVRSystem__IsSteamVRDrawingControllers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__IsSteamVRDrawingControllers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__IsSteamVRDrawingControllers(IVRSystem__IsSteamVRDrawingControllers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8575 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ShouldApplicationPause
class CORDL_TYPE IVRSystem__ShouldApplicationPause : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058acc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058aec, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4058ab8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__ShouldApplicationPause* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058a30, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ShouldApplicationPause();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationPause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ShouldApplicationPause(IVRSystem__ShouldApplicationPause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationPause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ShouldApplicationPause(IVRSystem__ShouldApplicationPause const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__ShouldApplicationPause, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_ShouldApplicationReduceRenderingWork
class CORDL_TYPE IVRSystem__ShouldApplicationReduceRenderingWork : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058bb0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058bd0, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4058b9c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058b14, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__ShouldApplicationReduceRenderingWork();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationReduceRenderingWork", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__ShouldApplicationReduceRenderingWork(IVRSystem__ShouldApplicationReduceRenderingWork&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__ShouldApplicationReduceRenderingWork", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__ShouldApplicationReduceRenderingWork(IVRSystem__ShouldApplicationReduceRenderingWork const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_DriverDebugRequest
class CORDL_TYPE IVRSystem__DriverDebugRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058c98, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058d4c, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4058c84, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize);

  static inline ::OVR::OpenVR::IVRSystem__DriverDebugRequest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058bf8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__DriverDebugRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__DriverDebugRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__DriverDebugRequest(IVRSystem__DriverDebugRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__DriverDebugRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__DriverDebugRequest(IVRSystem__DriverDebugRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8578 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__DriverDebugRequest, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_PerformFirmwareUpdate
class CORDL_TYPE IVRSystem__PerformFirmwareUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058e14, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058e98, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4058e00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058d74, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__PerformFirmwareUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PerformFirmwareUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__PerformFirmwareUpdate(IVRSystem__PerformFirmwareUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__PerformFirmwareUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__PerformFirmwareUpdate(IVRSystem__PerformFirmwareUpdate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8579 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_AcknowledgeQuit_Exiting
class CORDL_TYPE IVRSystem__AcknowledgeQuit_Exiting : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4058f5c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4058f7c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4058f48, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058ec0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__AcknowledgeQuit_Exiting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_Exiting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__AcknowledgeQuit_Exiting(IVRSystem__AcknowledgeQuit_Exiting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_Exiting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__AcknowledgeQuit_Exiting(IVRSystem__AcknowledgeQuit_Exiting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8580 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSystem/_AcknowledgeQuit_UserPrompt
class CORDL_TYPE IVRSystem__AcknowledgeQuit_UserPrompt : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4059024, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4059044, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4059010, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4058f88, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem__AcknowledgeQuit_UserPrompt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_UserPrompt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSystem__AcknowledgeQuit_UserPrompt(IVRSystem__AcknowledgeQuit_UserPrompt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSystem__AcknowledgeQuit_UserPrompt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSystem__AcknowledgeQuit_UserPrompt(IVRSystem__AcknowledgeQuit_UserPrompt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8581 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt, 0x80>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*", modifiers: "", def_value: None }, CppParam { name:
  // "GetProjectionMatrix", ty: "::OVR::OpenVR::IVRSystem__GetProjectionMatrix*", modifiers: "", def_value: None }, CppParam { name: "GetProjectionRaw", ty:
  // "::OVR::OpenVR::IVRSystem__GetProjectionRaw*", modifiers: "", def_value: None }, CppParam { name: "ComputeDistortion", ty: "::OVR::OpenVR::IVRSystem__ComputeDistortion*", modifiers: "",
  // def_value: None }, CppParam { name: "GetEyeToHeadTransform", ty: "::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*", modifiers: "", def_value: None }, CppParam { name: "GetTimeSinceLastVsync",
  // ty: "::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*", modifiers: "", def_value: None }, CppParam { name: "GetD3D9AdapterIndex", ty: "::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*", modifiers:
  // "", def_value: None }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*", modifiers: "", def_value: None }, CppParam { name: "GetOutputDevice", ty:
  // "::OVR::OpenVR::IVRSystem__GetOutputDevice*", modifiers: "", def_value: None }, CppParam { name: "IsDisplayOnDesktop", ty: "::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*", modifiers: "",
  // def_value: None }, CppParam { name: "SetDisplayVisibility", ty: "::OVR::OpenVR::IVRSystem__SetDisplayVisibility*", modifiers: "", def_value: None }, CppParam { name:
  // "GetDeviceToAbsoluteTrackingPose", ty: "::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "ResetSeatedZeroPose", ty:
  // "::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*", modifiers: "", def_value: None }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty:
  // "::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*", modifiers: "", def_value: None }, CppParam { name: "GetTrackedDeviceActivityLevel", ty:
  // "::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*", modifiers: "", def_value: None }, CppParam { name: "ApplyTransform", ty: "::OVR::OpenVR::IVRSystem__ApplyTransform*", modifiers: "",
  // def_value: None }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*", modifiers: "", def_value: None }, CppParam {
  // name: "GetControllerRoleForTrackedDeviceIndex", ty: "::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*", modifiers: "", def_value: None }, CppParam { name:
  // "GetTrackedDeviceClass", ty: "::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*", modifiers: "", def_value: None }, CppParam { name: "IsTrackedDeviceConnected", ty:
  // "::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*", modifiers: "", def_value: None }, CppParam { name: "GetBoolTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetFloatTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetInt32TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetUint64TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetArrayTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetStringTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetPropErrorNameFromEnum", ty:
  // "::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "PollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "",
  // def_value: None }, CppParam { name: "PollNextEventWithPose", ty: "::OVR::OpenVR::IVRSystem__PollNextEventWithPose*", modifiers: "", def_value: None }, CppParam { name: "GetEventTypeNameFromEnum",
  // ty: "::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "GetHiddenAreaMesh", ty: "::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*", modifiers:
  // "", def_value: None }, CppParam { name: "GetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "", def_value: None }, CppParam { name: "GetControllerStateWithPose",
  // ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: None }, CppParam { name: "TriggerHapticPulse", ty: "::OVR::OpenVR::IVRSystem__TriggerHapticPulse*",
  // modifiers: "", def_value: None }, CppParam { name: "GetButtonIdNameFromEnum", ty: "::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*", modifiers: "", def_value: None }, CppParam { name:
  // "GetControllerAxisTypeNameFromEnum", ty: "::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "IsInputAvailable", ty:
  // "::OVR::OpenVR::IVRSystem__IsInputAvailable*", modifiers: "", def_value: None }, CppParam { name: "IsSteamVRDrawingControllers", ty: "::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*",
  // modifiers: "", def_value: None }, CppParam { name: "ShouldApplicationPause", ty: "::OVR::OpenVR::IVRSystem__ShouldApplicationPause*", modifiers: "", def_value: None }, CppParam { name:
  // "ShouldApplicationReduceRenderingWork", ty: "::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*", modifiers: "", def_value: None }, CppParam { name: "DriverDebugRequest", ty:
  // "::OVR::OpenVR::IVRSystem__DriverDebugRequest*", modifiers: "", def_value: None }, CppParam { name: "PerformFirmwareUpdate", ty: "::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*", modifiers: "",
  // def_value: None }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*", modifiers: "", def_value: None }, CppParam { name:
  // "AcknowledgeQuit_UserPrompt", ty: "::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8582 };

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

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem, 0x178>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_Exiting*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_Exiting");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__AcknowledgeQuit_UserPrompt*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_UserPrompt");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__ApplyTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__ApplyTransform*, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__ComputeDistortion);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__ComputeDistortion*, "OVR.OpenVR", "IVRSystem/_ComputeDistortion");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__DriverDebugRequest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__DriverDebugRequest*, "OVR.OpenVR", "IVRSystem/_DriverDebugRequest");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetArrayTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetArrayTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetBoolTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetBoolTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetButtonIdNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetButtonIdNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetControllerAxisTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetControllerAxisTypeNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetControllerRoleForTrackedDeviceIndex*, "OVR.OpenVR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetControllerState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetControllerState*, "OVR.OpenVR", "IVRSystem/_GetControllerState");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetD3D9AdapterIndex*, "OVR.OpenVR", "IVRSystem/_GetD3D9AdapterIndex");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetDXGIOutputInfo*, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetDeviceToAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetEventTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetEventTypeNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetEyeToHeadTransform*, "OVR.OpenVR", "IVRSystem/_GetEyeToHeadTransform");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetFloatTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetFloatTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetHiddenAreaMesh*, "OVR.OpenVR", "IVRSystem/_GetHiddenAreaMesh");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetInt32TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetInt32TrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetMatrix34TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetMatrix34TrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetOutputDevice);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetOutputDevice*, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetProjectionMatrix);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetProjectionMatrix*, "OVR.OpenVR", "IVRSystem/_GetProjectionMatrix");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetProjectionRaw);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetPropErrorNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetPropErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetRecommendedRenderTargetSize*, "OVR.OpenVR", "IVRSystem/_GetRecommendedRenderTargetSize");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetSortedTrackedDeviceIndicesOfClass*, "OVR.OpenVR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetStringTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetStringTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetTimeSinceLastVsync*, "OVR.OpenVR", "IVRSystem/_GetTimeSinceLastVsync");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetTrackedDeviceActivityLevel*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetTrackedDeviceClass*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceClass");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetTrackedDeviceIndexForControllerRole*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__GetUint64TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetUint64TrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__IsDisplayOnDesktop*, "OVR.OpenVR", "IVRSystem/_IsDisplayOnDesktop");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__IsInputAvailable);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__IsInputAvailable*, "OVR.OpenVR", "IVRSystem/_IsInputAvailable");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__IsSteamVRDrawingControllers*, "OVR.OpenVR", "IVRSystem/_IsSteamVRDrawingControllers");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__IsTrackedDeviceConnected*, "OVR.OpenVR", "IVRSystem/_IsTrackedDeviceConnected");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__PerformFirmwareUpdate*, "OVR.OpenVR", "IVRSystem/_PerformFirmwareUpdate");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__PollNextEvent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__PollNextEvent*, "OVR.OpenVR", "IVRSystem/_PollNextEvent");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__PollNextEventWithPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__PollNextEventWithPose*, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__ResetSeatedZeroPose*, "OVR.OpenVR", "IVRSystem/_ResetSeatedZeroPose");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__SetDisplayVisibility);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__SetDisplayVisibility*, "OVR.OpenVR", "IVRSystem/_SetDisplayVisibility");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__ShouldApplicationPause);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__ShouldApplicationPause*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationPause");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__ShouldApplicationReduceRenderingWork*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
NEED_NO_BOX(::OVR::OpenVR::IVRSystem__TriggerHapticPulse);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem__TriggerHapticPulse*, "OVR.OpenVR", "IVRSystem/_TriggerHapticPulse");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem, "OVR.OpenVR", "IVRSystem");
