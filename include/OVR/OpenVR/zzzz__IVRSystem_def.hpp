#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
class __IVRSystem___AcknowledgeQuit_Exiting;
}
namespace OVR::OpenVR {
class __IVRSystem___AcknowledgeQuit_UserPrompt;
}
namespace OVR::OpenVR {
class __IVRSystem___ApplyTransform;
}
namespace OVR::OpenVR {
class __IVRSystem___ComputeDistortion;
}
namespace OVR::OpenVR {
class __IVRSystem___DriverDebugRequest;
}
namespace OVR::OpenVR {
class __IVRSystem___GetArrayTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetBoolTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetButtonIdNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerAxisTypeNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerRoleForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerState;
}
namespace OVR::OpenVR {
class __IVRSystem___GetD3D9AdapterIndex;
}
namespace OVR::OpenVR {
class __IVRSystem___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class __IVRSystem___GetDeviceToAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetEventTypeNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetEyeToHeadTransform;
}
namespace OVR::OpenVR {
class __IVRSystem___GetFloatTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetHiddenAreaMesh;
}
namespace OVR::OpenVR {
class __IVRSystem___GetInt32TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetMatrix34TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetOutputDevice;
}
namespace OVR::OpenVR {
class __IVRSystem___GetProjectionMatrix;
}
namespace OVR::OpenVR {
class __IVRSystem___GetProjectionRaw;
}
namespace OVR::OpenVR {
class __IVRSystem___GetPropErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetRecommendedRenderTargetSize;
}
namespace OVR::OpenVR {
class __IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetSortedTrackedDeviceIndicesOfClass;
}
namespace OVR::OpenVR {
class __IVRSystem___GetStringTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTimeSinceLastVsync;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTrackedDeviceActivityLevel;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTrackedDeviceClass;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTrackedDeviceIndexForControllerRole;
}
namespace OVR::OpenVR {
class __IVRSystem___GetUint64TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___IsDisplayOnDesktop;
}
namespace OVR::OpenVR {
class __IVRSystem___IsInputAvailable;
}
namespace OVR::OpenVR {
class __IVRSystem___IsSteamVRDrawingControllers;
}
namespace OVR::OpenVR {
class __IVRSystem___IsTrackedDeviceConnected;
}
namespace OVR::OpenVR {
class __IVRSystem___PerformFirmwareUpdate;
}
namespace OVR::OpenVR {
class __IVRSystem___PollNextEventWithPose;
}
namespace OVR::OpenVR {
class __IVRSystem___PollNextEvent;
}
namespace OVR::OpenVR {
class __IVRSystem___ResetSeatedZeroPose;
}
namespace OVR::OpenVR {
class __IVRSystem___SetDisplayVisibility;
}
namespace OVR::OpenVR {
class __IVRSystem___ShouldApplicationPause;
}
namespace OVR::OpenVR {
class __IVRSystem___ShouldApplicationReduceRenderingWork;
}
namespace OVR::OpenVR {
class __IVRSystem___TriggerHapticPulse;
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
class __IVRSystem___AcknowledgeQuit_Exiting;
}
namespace OVR::OpenVR {
class __IVRSystem___AcknowledgeQuit_UserPrompt;
}
namespace OVR::OpenVR {
class __IVRSystem___ApplyTransform;
}
namespace OVR::OpenVR {
class __IVRSystem___ComputeDistortion;
}
namespace OVR::OpenVR {
class __IVRSystem___DriverDebugRequest;
}
namespace OVR::OpenVR {
class __IVRSystem___GetArrayTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetBoolTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetButtonIdNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerAxisTypeNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerRoleForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerState;
}
namespace OVR::OpenVR {
class __IVRSystem___GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetD3D9AdapterIndex;
}
namespace OVR::OpenVR {
class __IVRSystem___GetDXGIOutputInfo;
}
namespace OVR::OpenVR {
class __IVRSystem___GetDeviceToAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetEventTypeNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetEyeToHeadTransform;
}
namespace OVR::OpenVR {
class __IVRSystem___GetFloatTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetHiddenAreaMesh;
}
namespace OVR::OpenVR {
class __IVRSystem___GetInt32TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetMatrix34TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetOutputDevice;
}
namespace OVR::OpenVR {
class __IVRSystem___GetProjectionMatrix;
}
namespace OVR::OpenVR {
class __IVRSystem___GetProjectionRaw;
}
namespace OVR::OpenVR {
class __IVRSystem___GetPropErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetRecommendedRenderTargetSize;
}
namespace OVR::OpenVR {
class __IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose;
}
namespace OVR::OpenVR {
class __IVRSystem___GetSortedTrackedDeviceIndicesOfClass;
}
namespace OVR::OpenVR {
class __IVRSystem___GetStringTrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTimeSinceLastVsync;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTrackedDeviceActivityLevel;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTrackedDeviceClass;
}
namespace OVR::OpenVR {
class __IVRSystem___GetTrackedDeviceIndexForControllerRole;
}
namespace OVR::OpenVR {
class __IVRSystem___GetUint64TrackedDeviceProperty;
}
namespace OVR::OpenVR {
class __IVRSystem___IsDisplayOnDesktop;
}
namespace OVR::OpenVR {
class __IVRSystem___IsInputAvailable;
}
namespace OVR::OpenVR {
class __IVRSystem___IsSteamVRDrawingControllers;
}
namespace OVR::OpenVR {
class __IVRSystem___IsTrackedDeviceConnected;
}
namespace OVR::OpenVR {
class __IVRSystem___PerformFirmwareUpdate;
}
namespace OVR::OpenVR {
class __IVRSystem___PollNextEvent;
}
namespace OVR::OpenVR {
class __IVRSystem___PollNextEventWithPose;
}
namespace OVR::OpenVR {
class __IVRSystem___ResetSeatedZeroPose;
}
namespace OVR::OpenVR {
class __IVRSystem___SetDisplayVisibility;
}
namespace OVR::OpenVR {
class __IVRSystem___ShouldApplicationPause;
}
namespace OVR::OpenVR {
class __IVRSystem___ShouldApplicationReduceRenderingWork;
}
namespace OVR::OpenVR {
class __IVRSystem___TriggerHapticPulse;
}
namespace OVR::OpenVR {
struct IVRSystem;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___ApplyTransform);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___ComputeDistortion);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___DriverDebugRequest);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetControllerState);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetOutputDevice);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetProjectionMatrix);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetProjectionRaw);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___IsInputAvailable);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___PollNextEvent);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___PollNextEventWithPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___SetDisplayVisibility);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___ShouldApplicationPause);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRSystem___TriggerHapticPulse);
MARK_VAL_T(::OVR::OpenVR::IVRSystem);
// Type: ::_GetRecommendedRenderTargetSize
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetRecommendedRenderTargetSize*
class CORDL_TYPE __IVRSystem___GetRecommendedRenderTargetSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd7254, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd72f8, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd7240, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight);

  static inline ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd7168, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetRecommendedRenderTargetSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetRecommendedRenderTargetSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetRecommendedRenderTargetSize(__IVRSystem___GetRecommendedRenderTargetSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetRecommendedRenderTargetSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetRecommendedRenderTargetSize(__IVRSystem___GetRecommendedRenderTargetSize const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetProjectionMatrix
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetProjectionMatrix*
class CORDL_TYPE __IVRSystem___GetProjectionMatrix : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd73f4, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd74c4, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd73e0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix44_t Invoke(::OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ);

  static inline ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd731c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetProjectionMatrix();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetProjectionMatrix", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetProjectionMatrix(__IVRSystem___GetProjectionMatrix&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetProjectionMatrix", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetProjectionMatrix(__IVRSystem___GetProjectionMatrix const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetProjectionMatrix, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetProjectionRaw
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetProjectionRaw*
class CORDL_TYPE __IVRSystem___GetProjectionRaw : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd75d4, size 0x110, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd76e4, size 0x28, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd75c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom);

  static inline ::OVR::OpenVR::__IVRSystem___GetProjectionRaw* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd74fc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetProjectionRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetProjectionRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetProjectionRaw(__IVRSystem___GetProjectionRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetProjectionRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetProjectionRaw(__IVRSystem___GetProjectionRaw const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetProjectionRaw, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ComputeDistortion
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_ComputeDistortion*
class CORDL_TYPE __IVRSystem___ComputeDistortion : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd77e4, size 0x104, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd78e8, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd77d0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<::OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates);

  static inline ::OVR::OpenVR::__IVRSystem___ComputeDistortion* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd770c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___ComputeDistortion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ComputeDistortion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___ComputeDistortion(__IVRSystem___ComputeDistortion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ComputeDistortion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___ComputeDistortion(__IVRSystem___ComputeDistortion const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___ComputeDistortion, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetEyeToHeadTransform
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetEyeToHeadTransform*
class CORDL_TYPE __IVRSystem___GetEyeToHeadTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd79ec, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd7a70, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd79d8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke(::OVR::OpenVR::EVREye eEye);

  static inline ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd7914, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetEyeToHeadTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetEyeToHeadTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetEyeToHeadTransform(__IVRSystem___GetEyeToHeadTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetEyeToHeadTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetEyeToHeadTransform(__IVRSystem___GetEyeToHeadTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTimeSinceLastVsync
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetTimeSinceLastVsync*
class CORDL_TYPE __IVRSystem___GetTimeSinceLastVsync : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd7b94, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd7c54, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd7b80, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter);

  static inline ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd7aa8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetTimeSinceLastVsync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTimeSinceLastVsync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetTimeSinceLastVsync(__IVRSystem___GetTimeSinceLastVsync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTimeSinceLastVsync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetTimeSinceLastVsync(__IVRSystem___GetTimeSinceLastVsync const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetD3D9AdapterIndex
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetD3D9AdapterIndex*
class CORDL_TYPE __IVRSystem___GetD3D9AdapterIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd7d58, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd7d78, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd7d44, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd7c88, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetD3D9AdapterIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetD3D9AdapterIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetD3D9AdapterIndex(__IVRSystem___GetD3D9AdapterIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetD3D9AdapterIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetD3D9AdapterIndex(__IVRSystem___GetD3D9AdapterIndex const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDXGIOutputInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetDXGIOutputInfo*
class CORDL_TYPE __IVRSystem___GetDXGIOutputInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd7e88, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<int32_t> pnAdapterIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd7f14, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<int32_t> pnAdapterIndex, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd7e74, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<int32_t> pnAdapterIndex);

  static inline ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd7da0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetDXGIOutputInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetDXGIOutputInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetDXGIOutputInfo(__IVRSystem___GetDXGIOutputInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetDXGIOutputInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetDXGIOutputInfo(__IVRSystem___GetDXGIOutputInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOutputDevice
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetOutputDevice*
class CORDL_TYPE __IVRSystem___GetOutputDevice : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd801c, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd8104, size 0x101c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<uint64_t> pnDevice, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd8008, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance);

  static inline ::OVR::OpenVR::__IVRSystem___GetOutputDevice* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd7f30, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetOutputDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetOutputDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetOutputDevice(__IVRSystem___GetOutputDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetOutputDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetOutputDevice(__IVRSystem___GetOutputDevice const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetOutputDevice, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsDisplayOnDesktop
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_IsDisplayOnDesktop*
class CORDL_TYPE __IVRSystem___IsDisplayOnDesktop : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd91f0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9210, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd91dc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9120, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___IsDisplayOnDesktop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsDisplayOnDesktop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___IsDisplayOnDesktop(__IVRSystem___IsDisplayOnDesktop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsDisplayOnDesktop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___IsDisplayOnDesktop(__IVRSystem___IsDisplayOnDesktop const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetDisplayVisibility
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_SetDisplayVisibility*
class CORDL_TYPE __IVRSystem___SetDisplayVisibility : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd9314, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bIsVisibleOnDesktop, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd939c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd92fc, size 0x18, virtual true, abstract: false, final false
  inline bool Invoke(bool bIsVisibleOnDesktop);

  static inline ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9238, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___SetDisplayVisibility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___SetDisplayVisibility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___SetDisplayVisibility(__IVRSystem___SetDisplayVisibility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___SetDisplayVisibility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___SetDisplayVisibility(__IVRSystem___SetDisplayVisibility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___SetDisplayVisibility, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDeviceToAbsoluteTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetDeviceToAbsoluteTrackingPose*
class CORDL_TYPE __IVRSystem___GetDeviceToAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd949c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                                             ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray,
                                             uint32_t unTrackedDevicePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd958c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9488, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow,
                     ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount);

  static inline ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd93c4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetDeviceToAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetDeviceToAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetDeviceToAbsoluteTrackingPose(__IVRSystem___GetDeviceToAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetDeviceToAbsoluteTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetDeviceToAbsoluteTrackingPose(__IVRSystem___GetDeviceToAbsoluteTrackingPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ResetSeatedZeroPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_ResetSeatedZeroPose*
class CORDL_TYPE __IVRSystem___ResetSeatedZeroPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd9668, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9688, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9654, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9598, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___ResetSeatedZeroPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ResetSeatedZeroPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___ResetSeatedZeroPose(__IVRSystem___ResetSeatedZeroPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ResetSeatedZeroPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___ResetSeatedZeroPose(__IVRSystem___ResetSeatedZeroPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetSeatedZeroPoseToStandingAbsoluteTrackingPose*
class CORDL_TYPE __IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd9764, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9784, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9750, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9694, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose(__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose(__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetRawZeroPoseToStandingAbsoluteTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetRawZeroPoseToStandingAbsoluteTrackingPose*
class CORDL_TYPE __IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd988c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd98ac, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9878, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd97bc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose(__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose(__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetSortedTrackedDeviceIndicesOfClass
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetSortedTrackedDeviceIndicesOfClass*
class CORDL_TYPE __IVRSystem___GetSortedTrackedDeviceIndicesOfClass : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd99bc, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray,
                                             uint32_t unTrackedDeviceIndexArrayCount, uint32_t unRelativeToTrackedDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9a8c, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd99a8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount,
                         uint32_t unRelativeToTrackedDeviceIndex);

  static inline ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd98e4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetSortedTrackedDeviceIndicesOfClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetSortedTrackedDeviceIndicesOfClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetSortedTrackedDeviceIndicesOfClass(__IVRSystem___GetSortedTrackedDeviceIndicesOfClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetSortedTrackedDeviceIndicesOfClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetSortedTrackedDeviceIndicesOfClass(__IVRSystem___GetSortedTrackedDeviceIndicesOfClass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTrackedDeviceActivityLevel
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetTrackedDeviceActivityLevel*
class CORDL_TYPE __IVRSystem___GetTrackedDeviceActivityLevel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd9b8c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9c10, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9b78, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EDeviceActivityLevel Invoke(uint32_t unDeviceId);

  static inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9ab4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetTrackedDeviceActivityLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTrackedDeviceActivityLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetTrackedDeviceActivityLevel(__IVRSystem___GetTrackedDeviceActivityLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTrackedDeviceActivityLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetTrackedDeviceActivityLevel(__IVRSystem___GetTrackedDeviceActivityLevel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ApplyTransform
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_ApplyTransform*
class CORDL_TYPE __IVRSystem___ApplyTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd9d24, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose,
                                             ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9dfc, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform,
                        ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9d10, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<::OVR::OpenVR::HmdMatrix34_t> pTransform);

  static inline ::OVR::OpenVR::__IVRSystem___ApplyTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9c38, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___ApplyTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ApplyTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___ApplyTransform(__IVRSystem___ApplyTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ApplyTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___ApplyTransform(__IVRSystem___ApplyTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___ApplyTransform, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTrackedDeviceIndexForControllerRole
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetTrackedDeviceIndexForControllerRole*
class CORDL_TYPE __IVRSystem___GetTrackedDeviceIndexForControllerRole : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bd9ef8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bd9f7c, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bd9ee4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::OVR::OpenVR::ETrackedControllerRole unDeviceType);

  static inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9e20, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetTrackedDeviceIndexForControllerRole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTrackedDeviceIndexForControllerRole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetTrackedDeviceIndexForControllerRole(__IVRSystem___GetTrackedDeviceIndexForControllerRole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTrackedDeviceIndexForControllerRole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetTrackedDeviceIndexForControllerRole(__IVRSystem___GetTrackedDeviceIndexForControllerRole const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetControllerRoleForTrackedDeviceIndex
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetControllerRoleForTrackedDeviceIndex*
class CORDL_TYPE __IVRSystem___GetControllerRoleForTrackedDeviceIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bda07c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bda100, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bda068, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedControllerRole Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bd9fa4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetControllerRoleForTrackedDeviceIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerRoleForTrackedDeviceIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetControllerRoleForTrackedDeviceIndex(__IVRSystem___GetControllerRoleForTrackedDeviceIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerRoleForTrackedDeviceIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetControllerRoleForTrackedDeviceIndex(__IVRSystem___GetControllerRoleForTrackedDeviceIndex const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTrackedDeviceClass
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetTrackedDeviceClass*
class CORDL_TYPE __IVRSystem___GetTrackedDeviceClass : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bda200, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bda284, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bda1ec, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackedDeviceClass Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bda128, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetTrackedDeviceClass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTrackedDeviceClass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetTrackedDeviceClass(__IVRSystem___GetTrackedDeviceClass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetTrackedDeviceClass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetTrackedDeviceClass(__IVRSystem___GetTrackedDeviceClass const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsTrackedDeviceConnected
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_IsTrackedDeviceConnected*
class CORDL_TYPE __IVRSystem___IsTrackedDeviceConnected : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bda384, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bda408, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bda370, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bda2ac, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___IsTrackedDeviceConnected();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsTrackedDeviceConnected", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___IsTrackedDeviceConnected(__IVRSystem___IsTrackedDeviceConnected&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsTrackedDeviceConnected", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___IsTrackedDeviceConnected(__IVRSystem___IsTrackedDeviceConnected const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetBoolTrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetBoolTrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetBoolTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bda508, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bda5f0, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bda4f4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bda430, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetBoolTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetBoolTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetBoolTrackedDeviceProperty(__IVRSystem___GetBoolTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetBoolTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetBoolTrackedDeviceProperty(__IVRSystem___GetBoolTrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetFloatTrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetFloatTrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetFloatTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bda6f4, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bda7dc, size 0x2c, virtual true, abstract: false, final false
  inline float_t EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bda6e0, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bda61c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetFloatTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetFloatTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetFloatTrackedDeviceProperty(__IVRSystem___GetFloatTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetFloatTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetFloatTrackedDeviceProperty(__IVRSystem___GetFloatTrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetInt32TrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetInt32TrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetInt32TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bda8e0, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bda9c8, size 0x2c, virtual true, abstract: false, final false
  inline int32_t EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bda8cc, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bda808, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetInt32TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetInt32TrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetInt32TrackedDeviceProperty(__IVRSystem___GetInt32TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetInt32TrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetInt32TrackedDeviceProperty(__IVRSystem___GetInt32TrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetUint64TrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetUint64TrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetUint64TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdaacc, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdabb4, size 0x2c, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdaab8, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bda9f4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetUint64TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetUint64TrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetUint64TrackedDeviceProperty(__IVRSystem___GetUint64TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetUint64TrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetUint64TrackedDeviceProperty(__IVRSystem___GetUint64TrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetMatrix34TrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetMatrix34TrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetMatrix34TrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdacb8, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdada0, size 0x44, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdaca4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdMatrix34_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdabe0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetMatrix34TrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetMatrix34TrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetMatrix34TrackedDeviceProperty(__IVRSystem___GetMatrix34TrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetMatrix34TrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetMatrix34TrackedDeviceProperty(__IVRSystem___GetMatrix34TrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetArrayTrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetArrayTrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetArrayTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdaebc, size 0x144, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                                             ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdb000, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdaea8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::System::IntPtr pBuffer, uint32_t unBufferSize,
                         ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdade4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetArrayTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetArrayTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetArrayTrackedDeviceProperty(__IVRSystem___GetArrayTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetArrayTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetArrayTrackedDeviceProperty(__IVRSystem___GetArrayTrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetStringTrackedDeviceProperty
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetStringTrackedDeviceProperty*
class CORDL_TYPE __IVRSystem___GetStringTrackedDeviceProperty : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdb104, size 0x104, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                             ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdb208, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::ETrackedPropertyError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdb0f0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty prop, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                         ByRef<::OVR::OpenVR::ETrackedPropertyError> pError);

  static inline ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdb02c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetStringTrackedDeviceProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetStringTrackedDeviceProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetStringTrackedDeviceProperty(__IVRSystem___GetStringTrackedDeviceProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetStringTrackedDeviceProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetStringTrackedDeviceProperty(__IVRSystem___GetStringTrackedDeviceProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetPropErrorNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetPropErrorNameFromEnum*
class CORDL_TYPE __IVRSystem___GetPropErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdb30c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackedPropertyError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdb390, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdb2f8, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::ETrackedPropertyError error);

  static inline ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdb234, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetPropErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetPropErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetPropErrorNameFromEnum(__IVRSystem___GetPropErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetPropErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetPropErrorNameFromEnum(__IVRSystem___GetPropErrorNameFromEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PollNextEvent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_PollNextEvent*
class CORDL_TYPE __IVRSystem___PollNextEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdb4a4, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdb55c, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdb490, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::__IVRSystem___PollNextEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdb3b8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___PollNextEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___PollNextEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___PollNextEvent(__IVRSystem___PollNextEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___PollNextEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___PollNextEvent(__IVRSystem___PollNextEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___PollNextEvent, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PollNextEventWithPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_PollNextEventWithPose*
class CORDL_TYPE __IVRSystem___PollNextEventWithPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdb660, size 0x11c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                             ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdb77c, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdb64c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdb588, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___PollNextEventWithPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___PollNextEventWithPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___PollNextEventWithPose(__IVRSystem___PollNextEventWithPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___PollNextEventWithPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___PollNextEventWithPose(__IVRSystem___PollNextEventWithPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___PollNextEventWithPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetEventTypeNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetEventTypeNameFromEnum*
class CORDL_TYPE __IVRSystem___GetEventTypeNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdb888, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREventType eType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdb90c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdb874, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVREventType eType);

  static inline ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdb7b0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetEventTypeNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetEventTypeNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetEventTypeNameFromEnum(__IVRSystem___GetEventTypeNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetEventTypeNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetEventTypeNameFromEnum(__IVRSystem___GetEventTypeNameFromEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetHiddenAreaMesh
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetHiddenAreaMesh*
class CORDL_TYPE __IVRSystem___GetHiddenAreaMesh : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdba0c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdbac0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdb9f8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HiddenAreaMesh_t Invoke(::OVR::OpenVR::EVREye eEye, ::OVR::OpenVR::EHiddenAreaMeshType type);

  static inline ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdb934, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetHiddenAreaMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetHiddenAreaMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetHiddenAreaMesh(__IVRSystem___GetHiddenAreaMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetHiddenAreaMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetHiddenAreaMesh(__IVRSystem___GetHiddenAreaMesh const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetControllerState
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetControllerState*
class CORDL_TYPE __IVRSystem___GetControllerState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdbbc4, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdbc90, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdbbb0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize);

  static inline ::OVR::OpenVR::__IVRSystem___GetControllerState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdbaec, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetControllerState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetControllerState(__IVRSystem___GetControllerState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetControllerState(__IVRSystem___GetControllerState const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetControllerState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetControllerStateWithPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetControllerStateWithPose*
class CORDL_TYPE __IVRSystem___GetControllerStateWithPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdbd94, size 0x134, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                             uint32_t unControllerStateSize, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdbec8, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdbd80, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize,
                     ByRef<::OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose);

  static inline ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdbcbc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetControllerStateWithPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerStateWithPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetControllerStateWithPose(__IVRSystem___GetControllerStateWithPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerStateWithPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetControllerStateWithPose(__IVRSystem___GetControllerStateWithPose const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_TriggerHapticPulse
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_TriggerHapticPulse*
class CORDL_TYPE __IVRSystem___TriggerHapticPulse : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdbfd4, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc0a0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdbfc0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec);

  static inline ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdbefc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___TriggerHapticPulse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___TriggerHapticPulse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___TriggerHapticPulse(__IVRSystem___TriggerHapticPulse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___TriggerHapticPulse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___TriggerHapticPulse(__IVRSystem___TriggerHapticPulse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___TriggerHapticPulse, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetButtonIdNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetButtonIdNameFromEnum*
class CORDL_TYPE __IVRSystem___GetButtonIdNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc184, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc208, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc170, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRButtonId eButtonId);

  static inline ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc0ac, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetButtonIdNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetButtonIdNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetButtonIdNameFromEnum(__IVRSystem___GetButtonIdNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetButtonIdNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetButtonIdNameFromEnum(__IVRSystem___GetButtonIdNameFromEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetControllerAxisTypeNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_GetControllerAxisTypeNameFromEnum*
class CORDL_TYPE __IVRSystem___GetControllerAxisTypeNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc308, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRControllerAxisType eAxisType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc38c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc2f4, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRControllerAxisType eAxisType);

  static inline ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc230, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___GetControllerAxisTypeNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerAxisTypeNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___GetControllerAxisTypeNameFromEnum(__IVRSystem___GetControllerAxisTypeNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___GetControllerAxisTypeNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___GetControllerAxisTypeNameFromEnum(__IVRSystem___GetControllerAxisTypeNameFromEnum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsInputAvailable
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_IsInputAvailable*
class CORDL_TYPE __IVRSystem___IsInputAvailable : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc484, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc4a4, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc470, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___IsInputAvailable* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc3b4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___IsInputAvailable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsInputAvailable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___IsInputAvailable(__IVRSystem___IsInputAvailable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsInputAvailable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___IsInputAvailable(__IVRSystem___IsInputAvailable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___IsInputAvailable, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsSteamVRDrawingControllers
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_IsSteamVRDrawingControllers*
class CORDL_TYPE __IVRSystem___IsSteamVRDrawingControllers : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc59c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc5bc, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc588, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc4cc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___IsSteamVRDrawingControllers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsSteamVRDrawingControllers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___IsSteamVRDrawingControllers(__IVRSystem___IsSteamVRDrawingControllers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___IsSteamVRDrawingControllers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___IsSteamVRDrawingControllers(__IVRSystem___IsSteamVRDrawingControllers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShouldApplicationPause
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_ShouldApplicationPause*
class CORDL_TYPE __IVRSystem___ShouldApplicationPause : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc6b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc6d4, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc6a0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc5e4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___ShouldApplicationPause();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ShouldApplicationPause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___ShouldApplicationPause(__IVRSystem___ShouldApplicationPause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ShouldApplicationPause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___ShouldApplicationPause(__IVRSystem___ShouldApplicationPause const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___ShouldApplicationPause, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShouldApplicationReduceRenderingWork
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_ShouldApplicationReduceRenderingWork*
class CORDL_TYPE __IVRSystem___ShouldApplicationReduceRenderingWork : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc7cc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc7ec, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc7b8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc6fc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___ShouldApplicationReduceRenderingWork();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ShouldApplicationReduceRenderingWork", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___ShouldApplicationReduceRenderingWork(__IVRSystem___ShouldApplicationReduceRenderingWork&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___ShouldApplicationReduceRenderingWork", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___ShouldApplicationReduceRenderingWork(__IVRSystem___ShouldApplicationReduceRenderingWork const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_DriverDebugRequest
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_DriverDebugRequest*
class CORDL_TYPE __IVRSystem___DriverDebugRequest : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdc8ec, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdc998, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdc8d8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unDeviceIndex, ::StringW pchRequest, ::System::Text::StringBuilder* pchResponseBuffer, uint32_t unResponseBufferSize);

  static inline ::OVR::OpenVR::__IVRSystem___DriverDebugRequest* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc814, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___DriverDebugRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___DriverDebugRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___DriverDebugRequest(__IVRSystem___DriverDebugRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___DriverDebugRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___DriverDebugRequest(__IVRSystem___DriverDebugRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___DriverDebugRequest, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PerformFirmwareUpdate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_PerformFirmwareUpdate*
class CORDL_TYPE __IVRSystem___PerformFirmwareUpdate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdca98, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdcb1c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdca84, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRFirmwareError Invoke(uint32_t unDeviceIndex);

  static inline ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdc9c0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___PerformFirmwareUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___PerformFirmwareUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___PerformFirmwareUpdate(__IVRSystem___PerformFirmwareUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___PerformFirmwareUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___PerformFirmwareUpdate(__IVRSystem___PerformFirmwareUpdate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_AcknowledgeQuit_Exiting
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_AcknowledgeQuit_Exiting*
class CORDL_TYPE __IVRSystem___AcknowledgeQuit_Exiting : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdcc14, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdcc34, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdcc00, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdcb44, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___AcknowledgeQuit_Exiting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___AcknowledgeQuit_Exiting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___AcknowledgeQuit_Exiting(__IVRSystem___AcknowledgeQuit_Exiting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___AcknowledgeQuit_Exiting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___AcknowledgeQuit_Exiting(__IVRSystem___AcknowledgeQuit_Exiting const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_AcknowledgeQuit_UserPrompt
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRSystem::_AcknowledgeQuit_UserPrompt*
class CORDL_TYPE __IVRSystem___AcknowledgeQuit_UserPrompt : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bdcd10, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bdcd30, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bdccfc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bdcc40, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRSystem___AcknowledgeQuit_UserPrompt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___AcknowledgeQuit_UserPrompt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRSystem___AcknowledgeQuit_UserPrompt(__IVRSystem___AcknowledgeQuit_UserPrompt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRSystem___AcknowledgeQuit_UserPrompt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRSystem___AcknowledgeQuit_UserPrompt(__IVRSystem___AcknowledgeQuit_UserPrompt const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRSystem
// SizeInfo { instance_size: 376, native_size: 376, calculated_instance_size: 376, calculated_native_size: 392, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRSystem
struct CORDL_TYPE IVRSystem {
public:
  // Declarations
  using _AcknowledgeQuit_Exiting = ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting;

  using _AcknowledgeQuit_UserPrompt = ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt;

  using _ApplyTransform = ::OVR::OpenVR::__IVRSystem___ApplyTransform;

  using _ComputeDistortion = ::OVR::OpenVR::__IVRSystem___ComputeDistortion;

  using _DriverDebugRequest = ::OVR::OpenVR::__IVRSystem___DriverDebugRequest;

  using _GetArrayTrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty;

  using _GetBoolTrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty;

  using _GetButtonIdNameFromEnum = ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum;

  using _GetControllerAxisTypeNameFromEnum = ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum;

  using _GetControllerRoleForTrackedDeviceIndex = ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex;

  using _GetControllerState = ::OVR::OpenVR::__IVRSystem___GetControllerState;

  using _GetControllerStateWithPose = ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose;

  using _GetD3D9AdapterIndex = ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex;

  using _GetDXGIOutputInfo = ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo;

  using _GetDeviceToAbsoluteTrackingPose = ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose;

  using _GetEventTypeNameFromEnum = ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum;

  using _GetEyeToHeadTransform = ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform;

  using _GetFloatTrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty;

  using _GetHiddenAreaMesh = ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh;

  using _GetInt32TrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty;

  using _GetMatrix34TrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty;

  using _GetOutputDevice = ::OVR::OpenVR::__IVRSystem___GetOutputDevice;

  using _GetProjectionMatrix = ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix;

  using _GetProjectionRaw = ::OVR::OpenVR::__IVRSystem___GetProjectionRaw;

  using _GetPropErrorNameFromEnum = ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum;

  using _GetRawZeroPoseToStandingAbsoluteTrackingPose = ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose;

  using _GetRecommendedRenderTargetSize = ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize;

  using _GetSeatedZeroPoseToStandingAbsoluteTrackingPose = ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose;

  using _GetSortedTrackedDeviceIndicesOfClass = ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass;

  using _GetStringTrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty;

  using _GetTimeSinceLastVsync = ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync;

  using _GetTrackedDeviceActivityLevel = ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel;

  using _GetTrackedDeviceClass = ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass;

  using _GetTrackedDeviceIndexForControllerRole = ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole;

  using _GetUint64TrackedDeviceProperty = ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty;

  using _IsDisplayOnDesktop = ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop;

  using _IsInputAvailable = ::OVR::OpenVR::__IVRSystem___IsInputAvailable;

  using _IsSteamVRDrawingControllers = ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers;

  using _IsTrackedDeviceConnected = ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected;

  using _PerformFirmwareUpdate = ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate;

  using _PollNextEvent = ::OVR::OpenVR::__IVRSystem___PollNextEvent;

  using _PollNextEventWithPose = ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose;

  using _ResetSeatedZeroPose = ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose;

  using _SetDisplayVisibility = ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility;

  using _ShouldApplicationPause = ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause;

  using _ShouldApplicationReduceRenderingWork = ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork;

  using _TriggerHapticPulse = ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSystem();

  // Ctor Parameters [CppParam { name: "GetRecommendedRenderTargetSize", ty: "::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*", modifiers: "", def_value: None }, CppParam { name:
  // "GetProjectionMatrix", ty: "::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*", modifiers: "", def_value: None }, CppParam { name: "GetProjectionRaw", ty:
  // "::OVR::OpenVR::__IVRSystem___GetProjectionRaw*", modifiers: "", def_value: None }, CppParam { name: "ComputeDistortion", ty: "::OVR::OpenVR::__IVRSystem___ComputeDistortion*", modifiers: "",
  // def_value: None }, CppParam { name: "GetEyeToHeadTransform", ty: "::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*", modifiers: "", def_value: None }, CppParam { name: "GetTimeSinceLastVsync",
  // ty: "::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*", modifiers: "", def_value: None }, CppParam { name: "GetD3D9AdapterIndex", ty: "::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*",
  // modifiers: "", def_value: None }, CppParam { name: "GetDXGIOutputInfo", ty: "::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOutputDevice", ty: "::OVR::OpenVR::__IVRSystem___GetOutputDevice*", modifiers: "", def_value: None }, CppParam { name: "IsDisplayOnDesktop", ty:
  // "::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*", modifiers: "", def_value: None }, CppParam { name: "SetDisplayVisibility", ty: "::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*", modifiers:
  // "", def_value: None }, CppParam { name: "GetDeviceToAbsoluteTrackingPose", ty: "::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*", modifiers: "", def_value: None }, CppParam { name:
  // "ResetSeatedZeroPose", ty: "::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*", modifiers: "", def_value: None }, CppParam { name: "GetSeatedZeroPoseToStandingAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "GetRawZeroPoseToStandingAbsoluteTrackingPose", ty:
  // "::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "GetSortedTrackedDeviceIndicesOfClass", ty:
  // "::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*", modifiers: "", def_value: None }, CppParam { name: "GetTrackedDeviceActivityLevel", ty:
  // "::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*", modifiers: "", def_value: None }, CppParam { name: "ApplyTransform", ty: "::OVR::OpenVR::__IVRSystem___ApplyTransform*", modifiers:
  // "", def_value: None }, CppParam { name: "GetTrackedDeviceIndexForControllerRole", ty: "::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*", modifiers: "", def_value: None },
  // CppParam { name: "GetControllerRoleForTrackedDeviceIndex", ty: "::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*", modifiers: "", def_value: None }, CppParam { name:
  // "GetTrackedDeviceClass", ty: "::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*", modifiers: "", def_value: None }, CppParam { name: "IsTrackedDeviceConnected", ty:
  // "::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*", modifiers: "", def_value: None }, CppParam { name: "GetBoolTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetFloatTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetInt32TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetUint64TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetMatrix34TrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetArrayTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetStringTrackedDeviceProperty", ty:
  // "::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*", modifiers: "", def_value: None }, CppParam { name: "GetPropErrorNameFromEnum", ty:
  // "::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "PollNextEvent", ty: "::OVR::OpenVR::__IVRSystem___PollNextEvent*", modifiers: "",
  // def_value: None }, CppParam { name: "PollNextEventWithPose", ty: "::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*", modifiers: "", def_value: None }, CppParam { name:
  // "GetEventTypeNameFromEnum", ty: "::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "GetHiddenAreaMesh", ty:
  // "::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*", modifiers: "", def_value: None }, CppParam { name: "GetControllerState", ty: "::OVR::OpenVR::__IVRSystem___GetControllerState*", modifiers: "",
  // def_value: None }, CppParam { name: "GetControllerStateWithPose", ty: "::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*", modifiers: "", def_value: None }, CppParam { name:
  // "TriggerHapticPulse", ty: "::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*", modifiers: "", def_value: None }, CppParam { name: "GetButtonIdNameFromEnum", ty:
  // "::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "GetControllerAxisTypeNameFromEnum", ty:
  // "::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "IsInputAvailable", ty: "::OVR::OpenVR::__IVRSystem___IsInputAvailable*",
  // modifiers: "", def_value: None }, CppParam { name: "IsSteamVRDrawingControllers", ty: "::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*", modifiers: "", def_value: None }, CppParam {
  // name: "ShouldApplicationPause", ty: "::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*", modifiers: "", def_value: None }, CppParam { name: "ShouldApplicationReduceRenderingWork", ty:
  // "::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*", modifiers: "", def_value: None }, CppParam { name: "DriverDebugRequest", ty:
  // "::OVR::OpenVR::__IVRSystem___DriverDebugRequest*", modifiers: "", def_value: None }, CppParam { name: "PerformFirmwareUpdate", ty: "::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*",
  // modifiers: "", def_value: None }, CppParam { name: "AcknowledgeQuit_Exiting", ty: "::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*", modifiers: "", def_value: None }, CppParam { name:
  // "AcknowledgeQuit_UserPrompt", ty: "::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*", modifiers: "", def_value: None }]
  constexpr IVRSystem(
      ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize, ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix* GetProjectionMatrix,
      ::OVR::OpenVR::__IVRSystem___GetProjectionRaw* GetProjectionRaw, ::OVR::OpenVR::__IVRSystem___ComputeDistortion* ComputeDistortion,
      ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform* GetEyeToHeadTransform, ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync* GetTimeSinceLastVsync,
      ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex* GetD3D9AdapterIndex, ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo* GetDXGIOutputInfo,
      ::OVR::OpenVR::__IVRSystem___GetOutputDevice* GetOutputDevice, ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop* IsDisplayOnDesktop,
      ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility* SetDisplayVisibility, ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose,
      ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose* ResetSeatedZeroPose,
      ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose,
      ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose,
      ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass,
      ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel, ::OVR::OpenVR::__IVRSystem___ApplyTransform* ApplyTransform,
      ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole,
      ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex, ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass* GetTrackedDeviceClass,
      ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected* IsTrackedDeviceConnected, ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty,
      ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty, ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty,
      ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty, ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty,
      ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty, ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty,
      ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum* GetPropErrorNameFromEnum, ::OVR::OpenVR::__IVRSystem___PollNextEvent* PollNextEvent,
      ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose* PollNextEventWithPose, ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum* GetEventTypeNameFromEnum,
      ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh* GetHiddenAreaMesh, ::OVR::OpenVR::__IVRSystem___GetControllerState* GetControllerState,
      ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* GetControllerStateWithPose, ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse* TriggerHapticPulse,
      ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum* GetButtonIdNameFromEnum, ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum,
      ::OVR::OpenVR::__IVRSystem___IsInputAvailable* IsInputAvailable, ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers* IsSteamVRDrawingControllers,
      ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause* ShouldApplicationPause, ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork,
      ::OVR::OpenVR::__IVRSystem___DriverDebugRequest* DriverDebugRequest, ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate* PerformFirmwareUpdate,
      ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting, ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt) noexcept;

  /// @brief Field GetRecommendedRenderTargetSize, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize;

  /// @brief Field GetProjectionMatrix, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetProjectionMatrix* GetProjectionMatrix;

  /// @brief Field GetProjectionRaw, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetProjectionRaw* GetProjectionRaw;

  /// @brief Field ComputeDistortion, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___ComputeDistortion* ComputeDistortion;

  /// @brief Field GetEyeToHeadTransform, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform* GetEyeToHeadTransform;

  /// @brief Field GetTimeSinceLastVsync, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync* GetTimeSinceLastVsync;

  /// @brief Field GetD3D9AdapterIndex, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex* GetD3D9AdapterIndex;

  /// @brief Field GetDXGIOutputInfo, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo* GetDXGIOutputInfo;

  /// @brief Field GetOutputDevice, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetOutputDevice* GetOutputDevice;

  /// @brief Field IsDisplayOnDesktop, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop* IsDisplayOnDesktop;

  /// @brief Field SetDisplayVisibility, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___SetDisplayVisibility* SetDisplayVisibility;

  /// @brief Field GetDeviceToAbsoluteTrackingPose, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose;

  /// @brief Field ResetSeatedZeroPose, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose* ResetSeatedZeroPose;

  /// @brief Field GetSeatedZeroPoseToStandingAbsoluteTrackingPose, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose;

  /// @brief Field GetRawZeroPoseToStandingAbsoluteTrackingPose, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose;

  /// @brief Field GetSortedTrackedDeviceIndicesOfClass, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass;

  /// @brief Field GetTrackedDeviceActivityLevel, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel;

  /// @brief Field ApplyTransform, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___ApplyTransform* ApplyTransform;

  /// @brief Field GetTrackedDeviceIndexForControllerRole, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole;

  /// @brief Field GetControllerRoleForTrackedDeviceIndex, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex;

  /// @brief Field GetTrackedDeviceClass, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass* GetTrackedDeviceClass;

  /// @brief Field IsTrackedDeviceConnected, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected* IsTrackedDeviceConnected;

  /// @brief Field GetBoolTrackedDeviceProperty, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty;

  /// @brief Field GetFloatTrackedDeviceProperty, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty;

  /// @brief Field GetInt32TrackedDeviceProperty, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty;

  /// @brief Field GetUint64TrackedDeviceProperty, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty;

  /// @brief Field GetMatrix34TrackedDeviceProperty, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty;

  /// @brief Field GetArrayTrackedDeviceProperty, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty* GetArrayTrackedDeviceProperty;

  /// @brief Field GetStringTrackedDeviceProperty, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty;

  /// @brief Field GetPropErrorNameFromEnum, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum* GetPropErrorNameFromEnum;

  /// @brief Field PollNextEvent, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___PollNextEvent* PollNextEvent;

  /// @brief Field PollNextEventWithPose, offset: 0xf8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___PollNextEventWithPose* PollNextEventWithPose;

  /// @brief Field GetEventTypeNameFromEnum, offset: 0x100, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum* GetEventTypeNameFromEnum;

  /// @brief Field GetHiddenAreaMesh, offset: 0x108, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh* GetHiddenAreaMesh;

  /// @brief Field GetControllerState, offset: 0x110, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetControllerState* GetControllerState;

  /// @brief Field GetControllerStateWithPose, offset: 0x118, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose* GetControllerStateWithPose;

  /// @brief Field TriggerHapticPulse, offset: 0x120, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___TriggerHapticPulse* TriggerHapticPulse;

  /// @brief Field GetButtonIdNameFromEnum, offset: 0x128, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum* GetButtonIdNameFromEnum;

  /// @brief Field GetControllerAxisTypeNameFromEnum, offset: 0x130, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum;

  /// @brief Field IsInputAvailable, offset: 0x138, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___IsInputAvailable* IsInputAvailable;

  /// @brief Field IsSteamVRDrawingControllers, offset: 0x140, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers* IsSteamVRDrawingControllers;

  /// @brief Field ShouldApplicationPause, offset: 0x148, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___ShouldApplicationPause* ShouldApplicationPause;

  /// @brief Field ShouldApplicationReduceRenderingWork, offset: 0x150, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork* ShouldApplicationReduceRenderingWork;

  /// @brief Field DriverDebugRequest, offset: 0x158, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___DriverDebugRequest* DriverDebugRequest;

  /// @brief Field PerformFirmwareUpdate, offset: 0x160, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate* PerformFirmwareUpdate;

  /// @brief Field AcknowledgeQuit_Exiting, offset: 0x168, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting;

  /// @brief Field AcknowledgeQuit_UserPrompt, offset: 0x170, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSystem, 0x178>, "Size mismatch!");

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

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_Exiting*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_Exiting");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___AcknowledgeQuit_UserPrompt*, "OVR.OpenVR", "IVRSystem/_AcknowledgeQuit_UserPrompt");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___ApplyTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___ApplyTransform*, "OVR.OpenVR", "IVRSystem/_ApplyTransform");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___ComputeDistortion);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___ComputeDistortion*, "OVR.OpenVR", "IVRSystem/_ComputeDistortion");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___DriverDebugRequest);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___DriverDebugRequest*, "OVR.OpenVR", "IVRSystem/_DriverDebugRequest");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetArrayTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetArrayTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetBoolTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetBoolTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetButtonIdNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetButtonIdNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetControllerAxisTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetControllerAxisTypeNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetControllerRoleForTrackedDeviceIndex*, "OVR.OpenVR", "IVRSystem/_GetControllerRoleForTrackedDeviceIndex");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetControllerState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetControllerState*, "OVR.OpenVR", "IVRSystem/_GetControllerState");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetControllerStateWithPose*, "OVR.OpenVR", "IVRSystem/_GetControllerStateWithPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetD3D9AdapterIndex*, "OVR.OpenVR", "IVRSystem/_GetD3D9AdapterIndex");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetDXGIOutputInfo*, "OVR.OpenVR", "IVRSystem/_GetDXGIOutputInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetDeviceToAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetDeviceToAbsoluteTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetEventTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetEventTypeNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetEyeToHeadTransform*, "OVR.OpenVR", "IVRSystem/_GetEyeToHeadTransform");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetFloatTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetFloatTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetHiddenAreaMesh*, "OVR.OpenVR", "IVRSystem/_GetHiddenAreaMesh");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetInt32TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetInt32TrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetMatrix34TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetMatrix34TrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetOutputDevice);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetOutputDevice*, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetProjectionMatrix);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetProjectionMatrix*, "OVR.OpenVR", "IVRSystem/_GetProjectionMatrix");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetProjectionRaw);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetPropErrorNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetPropErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetRawZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetRecommendedRenderTargetSize*, "OVR.OpenVR", "IVRSystem/_GetRecommendedRenderTargetSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetSeatedZeroPoseToStandingAbsoluteTrackingPose*, "OVR.OpenVR", "IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetSortedTrackedDeviceIndicesOfClass*, "OVR.OpenVR", "IVRSystem/_GetSortedTrackedDeviceIndicesOfClass");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetStringTrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetStringTrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetTimeSinceLastVsync*, "OVR.OpenVR", "IVRSystem/_GetTimeSinceLastVsync");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceActivityLevel*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceActivityLevel");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceClass*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceClass");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetTrackedDeviceIndexForControllerRole*, "OVR.OpenVR", "IVRSystem/_GetTrackedDeviceIndexForControllerRole");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___GetUint64TrackedDeviceProperty*, "OVR.OpenVR", "IVRSystem/_GetUint64TrackedDeviceProperty");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___IsDisplayOnDesktop*, "OVR.OpenVR", "IVRSystem/_IsDisplayOnDesktop");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___IsInputAvailable);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___IsInputAvailable*, "OVR.OpenVR", "IVRSystem/_IsInputAvailable");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___IsSteamVRDrawingControllers*, "OVR.OpenVR", "IVRSystem/_IsSteamVRDrawingControllers");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___IsTrackedDeviceConnected*, "OVR.OpenVR", "IVRSystem/_IsTrackedDeviceConnected");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___PerformFirmwareUpdate*, "OVR.OpenVR", "IVRSystem/_PerformFirmwareUpdate");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___PollNextEvent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___PollNextEvent*, "OVR.OpenVR", "IVRSystem/_PollNextEvent");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___PollNextEventWithPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___PollNextEventWithPose*, "OVR.OpenVR", "IVRSystem/_PollNextEventWithPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___ResetSeatedZeroPose*, "OVR.OpenVR", "IVRSystem/_ResetSeatedZeroPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___SetDisplayVisibility);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___SetDisplayVisibility*, "OVR.OpenVR", "IVRSystem/_SetDisplayVisibility");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___ShouldApplicationPause);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___ShouldApplicationPause*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationPause");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___ShouldApplicationReduceRenderingWork*, "OVR.OpenVR", "IVRSystem/_ShouldApplicationReduceRenderingWork");
NEED_NO_BOX(::OVR::OpenVR::__IVRSystem___TriggerHapticPulse);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRSystem___TriggerHapticPulse*, "OVR.OpenVR", "IVRSystem/_TriggerHapticPulse");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem, "OVR.OpenVR", "IVRSystem");
