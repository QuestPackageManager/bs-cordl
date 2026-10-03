#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVROverlay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVROverlay)
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
namespace OVR::OpenVR {
struct EOverlayDirection;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVROverlayError;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdRect2_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
class IVROverlay__ClearOverlayTexture;
}
namespace OVR::OpenVR {
class IVROverlay__CloseMessageOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__ComputeOverlayIntersection;
}
namespace OVR::OpenVR {
class IVROverlay__CreateDashboardOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__CreateOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__DestroyOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__FindOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__GetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class IVROverlay__GetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__GetHighQualityOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__GetKeyboardText;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayAlpha;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayColor;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayFlag;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayFlags;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayImageData;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayInputMethod;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayKey;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayMouseScale;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayName;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayRenderModel;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlaySortOrder;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTextureSize;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTexture;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformType;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__GetPrimaryDashboardDevice;
}
namespace OVR::OpenVR {
class IVROverlay__GetTransformForOverlayCoordinates;
}
namespace OVR::OpenVR {
class IVROverlay__HideKeyboard;
}
namespace OVR::OpenVR {
class IVROverlay__HideOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__IsActiveDashboardOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__IsDashboardVisible;
}
namespace OVR::OpenVR {
class IVROverlay__IsHoverTargetOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__IsOverlayVisible;
}
namespace OVR::OpenVR {
class IVROverlay__MoveGamepadFocusToNeighbor;
}
namespace OVR::OpenVR {
class IVROverlay__PollNextOverlayEvent;
}
namespace OVR::OpenVR {
class IVROverlay__ReleaseNativeOverlayHandle;
}
namespace OVR::OpenVR {
class IVROverlay__SetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class IVROverlay__SetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__SetHighQualityOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__SetKeyboardPositionForOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__SetKeyboardTransformAbsolute;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayAlpha;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayColor;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayFlag;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayFromFile;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayInputMethod;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayIntersectionMask;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayMouseScale;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayName;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayNeighbor;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayRaw;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayRenderModel;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlaySortOrder;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTexture;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__ShowDashboard;
}
namespace OVR::OpenVR {
class IVROverlay__ShowKeyboardForOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__ShowKeyboard;
}
namespace OVR::OpenVR {
class IVROverlay__ShowMessageOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__ShowOverlay;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
namespace OVR::OpenVR {
struct VROverlayFlags;
}
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
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
class IVROverlay__ClearOverlayTexture;
}
namespace OVR::OpenVR {
class IVROverlay__CloseMessageOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__ComputeOverlayIntersection;
}
namespace OVR::OpenVR {
class IVROverlay__CreateDashboardOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__CreateOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__DestroyOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__FindOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__GetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class IVROverlay__GetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__GetHighQualityOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__GetKeyboardText;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayAlpha;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayColor;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayFlag;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayFlags;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayImageData;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayInputMethod;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayKey;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayMouseScale;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayName;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayRenderModel;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlaySortOrder;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTexture;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTextureSize;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayTransformType;
}
namespace OVR::OpenVR {
class IVROverlay__GetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__GetPrimaryDashboardDevice;
}
namespace OVR::OpenVR {
class IVROverlay__GetTransformForOverlayCoordinates;
}
namespace OVR::OpenVR {
class IVROverlay__HideKeyboard;
}
namespace OVR::OpenVR {
class IVROverlay__HideOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__IsActiveDashboardOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__IsDashboardVisible;
}
namespace OVR::OpenVR {
class IVROverlay__IsHoverTargetOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__IsOverlayVisible;
}
namespace OVR::OpenVR {
class IVROverlay__MoveGamepadFocusToNeighbor;
}
namespace OVR::OpenVR {
class IVROverlay__PollNextOverlayEvent;
}
namespace OVR::OpenVR {
class IVROverlay__ReleaseNativeOverlayHandle;
}
namespace OVR::OpenVR {
class IVROverlay__SetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class IVROverlay__SetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__SetHighQualityOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__SetKeyboardPositionForOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__SetKeyboardTransformAbsolute;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayAlpha;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayColor;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayFlag;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayFromFile;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayInputMethod;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayIntersectionMask;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayMouseScale;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayName;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayNeighbor;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayRaw;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayRenderModel;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlaySortOrder;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTexture;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class IVROverlay__SetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class IVROverlay__ShowDashboard;
}
namespace OVR::OpenVR {
class IVROverlay__ShowKeyboard;
}
namespace OVR::OpenVR {
class IVROverlay__ShowKeyboardForOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__ShowMessageOverlay;
}
namespace OVR::OpenVR {
class IVROverlay__ShowOverlay;
}
namespace OVR::OpenVR {
struct IVROverlay;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::IVROverlay__ClearOverlayTexture*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__CloseMessageOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__CreateOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__DestroyOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__FindOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetKeyboardText*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayAlpha*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayColor*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayFlag*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayFlags*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayImageData*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayKey*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayName*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTexture*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayTransformType*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__HideKeyboard*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__HideOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__IsDashboardVisible*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__IsOverlayVisible*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayAlpha*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayColor*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayFlag*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayFromFile*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayName*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayRaw*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTexture*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ShowDashboard*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ShowKeyboard*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ShowMessageOverlay*);
MARK_REF_T(::OVR::OpenVR::IVROverlay__ShowOverlay*);
MARK_VAL_T(::OVR::OpenVR::IVROverlay);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ClearOverlayTexture*, "OVR.OpenVR", "IVROverlay/_ClearOverlayTexture");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__CloseMessageOverlay*, "OVR.OpenVR", "IVROverlay/_CloseMessageOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*, "OVR.OpenVR", "IVROverlay/_ComputeOverlayIntersection");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_CreateDashboardOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__CreateOverlay*, "OVR.OpenVR", "IVROverlay/_CreateOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__DestroyOverlay*, "OVR.OpenVR", "IVROverlay/_DestroyOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__FindOverlay*, "OVR.OpenVR", "IVROverlay/_FindOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*, "OVR.OpenVR", "IVROverlay/_GetDashboardOverlaySceneProcess");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*, "OVR.OpenVR", "IVROverlay/_GetGamepadFocusOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*, "OVR.OpenVR", "IVROverlay/_GetHighQualityOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetKeyboardText*, "OVR.OpenVR", "IVROverlay/_GetKeyboardText");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayAlpha*, "OVR.OpenVR", "IVROverlay/_GetOverlayAlpha");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*, "OVR.OpenVR", "IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayColor*, "OVR.OpenVR", "IVROverlay/_GetOverlayColor");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*, "OVR.OpenVR", "IVROverlay/_GetOverlayErrorNameFromEnum");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayFlag*, "OVR.OpenVR", "IVROverlay/_GetOverlayFlag");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayFlags*, "OVR.OpenVR", "IVROverlay/_GetOverlayFlags");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayImageData*, "OVR.OpenVR", "IVROverlay/_GetOverlayImageData");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*, "OVR.OpenVR", "IVROverlay/_GetOverlayInputMethod");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayKey*, "OVR.OpenVR", "IVROverlay/_GetOverlayKey");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*, "OVR.OpenVR", "IVROverlay/_GetOverlayMouseScale");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayName*, "OVR.OpenVR", "IVROverlay/_GetOverlayName");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*, "OVR.OpenVR", "IVROverlay/_GetOverlayRenderModel");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*, "OVR.OpenVR", "IVROverlay/_GetOverlayRenderingPid");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*, "OVR.OpenVR", "IVROverlay/_GetOverlaySortOrder");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexelAspect");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexture");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureBounds");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureColorSpace");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureSize");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformAbsolute");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformOverlayRelative");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceComponent");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceRelative");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayTransformType*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformType");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*, "OVR.OpenVR", "IVROverlay/_GetOverlayWidthInMeters");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*, "OVR.OpenVR", "IVROverlay/_GetPrimaryDashboardDevice");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*, "OVR.OpenVR", "IVROverlay/_GetTransformForOverlayCoordinates");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__HideKeyboard*, "OVR.OpenVR", "IVROverlay/_HideKeyboard");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__HideOverlay*, "OVR.OpenVR", "IVROverlay/_HideOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_IsActiveDashboardOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__IsDashboardVisible*, "OVR.OpenVR", "IVROverlay/_IsDashboardVisible");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*, "OVR.OpenVR", "IVROverlay/_IsHoverTargetOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__IsOverlayVisible*, "OVR.OpenVR", "IVROverlay/_IsOverlayVisible");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*, "OVR.OpenVR", "IVROverlay/_MoveGamepadFocusToNeighbor");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*, "OVR.OpenVR", "IVROverlay/_PollNextOverlayEvent");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*, "OVR.OpenVR", "IVROverlay/_ReleaseNativeOverlayHandle");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*, "OVR.OpenVR", "IVROverlay/_SetDashboardOverlaySceneProcess");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*, "OVR.OpenVR", "IVROverlay/_SetGamepadFocusOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*, "OVR.OpenVR", "IVROverlay/_SetHighQualityOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*, "OVR.OpenVR", "IVROverlay/_SetKeyboardPositionForOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetKeyboardTransformAbsolute");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayAlpha*, "OVR.OpenVR", "IVROverlay/_SetOverlayAlpha");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*, "OVR.OpenVR", "IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayColor*, "OVR.OpenVR", "IVROverlay/_SetOverlayColor");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_SetOverlayDualAnalogTransform");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayFlag*, "OVR.OpenVR", "IVROverlay/_SetOverlayFlag");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayFromFile*, "OVR.OpenVR", "IVROverlay/_SetOverlayFromFile");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*, "OVR.OpenVR", "IVROverlay/_SetOverlayInputMethod");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*, "OVR.OpenVR", "IVROverlay/_SetOverlayIntersectionMask");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*, "OVR.OpenVR", "IVROverlay/_SetOverlayMouseScale");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayName*, "OVR.OpenVR", "IVROverlay/_SetOverlayName");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*, "OVR.OpenVR", "IVROverlay/_SetOverlayNeighbor");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayRaw*, "OVR.OpenVR", "IVROverlay/_SetOverlayRaw");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*, "OVR.OpenVR", "IVROverlay/_SetOverlayRenderModel");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*, "OVR.OpenVR", "IVROverlay/_SetOverlayRenderingPid");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*, "OVR.OpenVR", "IVROverlay/_SetOverlaySortOrder");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*, "OVR.OpenVR", "IVROverlay/_SetOverlayTexelAspect");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_SetOverlayTexture");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureBounds");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureColorSpace");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformAbsolute");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformOverlayRelative");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformTrackedDeviceComponent");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformTrackedDeviceRelative");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*, "OVR.OpenVR", "IVROverlay/_SetOverlayWidthInMeters");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ShowDashboard*, "OVR.OpenVR", "IVROverlay/_ShowDashboard");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ShowKeyboard*, "OVR.OpenVR", "IVROverlay/_ShowKeyboard");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*, "OVR.OpenVR", "IVROverlay/_ShowKeyboardForOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ShowMessageOverlay*, "OVR.OpenVR", "IVROverlay/_ShowMessageOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay__ShowOverlay*, "OVR.OpenVR", "IVROverlay/_ShowOverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVROverlay, "OVR.OpenVR", "IVROverlay");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_FindOverlay
class CORDL_TYPE IVROverlay__FindOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6250b54, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6250bac, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> pOverlayHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6250b40, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__FindOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6250ac0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__FindOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__FindOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__FindOverlay(IVROverlay__FindOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__FindOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__FindOverlay(IVROverlay__FindOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__FindOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_CreateOverlay
class CORDL_TYPE IVROverlay__CreateOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6250c64, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6250cbc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> pOverlayHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6250c50, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__CreateOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6250bd0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__CreateOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__CreateOverlay(IVROverlay__CreateOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__CreateOverlay(IVROverlay__CreateOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8326 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__CreateOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_DestroyOverlay
class CORDL_TYPE IVROverlay__DestroyOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6250d60, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6250db4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6250d4c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__DestroyOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6250ce0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__DestroyOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__DestroyOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__DestroyOverlay(IVROverlay__DestroyOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__DestroyOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__DestroyOverlay(IVROverlay__DestroyOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__DestroyOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay
class CORDL_TYPE IVROverlay__SetHighQualityOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6250e58, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6250eac, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6250e44, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6250dd8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetHighQualityOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetHighQualityOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetHighQualityOverlay(IVROverlay__SetHighQualityOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetHighQualityOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetHighQualityOverlay(IVROverlay__SetHighQualityOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetHighQualityOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetHighQualityOverlay
class CORDL_TYPE IVROverlay__GetHighQualityOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6250f4c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6250f68, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6250f38, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke();

  static inline ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6250ed0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetHighQualityOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetHighQualityOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetHighQualityOverlay(IVROverlay__GetHighQualityOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetHighQualityOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetHighQualityOverlay(IVROverlay__GetHighQualityOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetHighQualityOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayKey
class CORDL_TYPE IVROverlay__GetOverlayKey : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625100c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62510d8, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6250ff8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayKey* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6250f8c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayKey", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayKey(IVROverlay__GetOverlayKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayKey", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayKey(IVROverlay__GetOverlayKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8330 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayKey) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayName
class CORDL_TYPE IVROverlay__GetOverlayName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625117c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251248, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251168, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62510fc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayName", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayName(IVROverlay__GetOverlayName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayName", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayName(IVROverlay__GetOverlayName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8331 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayName
class CORDL_TYPE IVROverlay__SetOverlayName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62512ec, size 0x60, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625134c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62512d8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchName);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x625126c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayName", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayName(IVROverlay__SetOverlayName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayName", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayName(IVROverlay__SetOverlayName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8332 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayImageData
class CORDL_TYPE IVROverlay__GetOverlayImageData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62513f0, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62514b8, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62513dc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayImageData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251370, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayImageData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayImageData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayImageData(IVROverlay__GetOverlayImageData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayImageData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayImageData(IVROverlay__GetOverlayImageData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8333 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayImageData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum
class CORDL_TYPE IVROverlay__GetOverlayErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251568, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62515f0, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251554, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVROverlayError error);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62514e8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayErrorNameFromEnum", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayErrorNameFromEnum(IVROverlay__GetOverlayErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayErrorNameFromEnum", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayErrorNameFromEnum(IVROverlay__GetOverlayErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8334 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid
class CORDL_TYPE IVROverlay__SetOverlayRenderingPid : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251694, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625170c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251680, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unPID);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251614, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayRenderingPid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderingPid", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayRenderingPid(IVROverlay__SetOverlayRenderingPid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderingPid", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayRenderingPid(IVROverlay__SetOverlayRenderingPid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8335 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid
class CORDL_TYPE IVROverlay__GetOverlayRenderingPid : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62517b0, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251804, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625179c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251730, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayRenderingPid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderingPid", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayRenderingPid(IVROverlay__GetOverlayRenderingPid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderingPid", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayRenderingPid(IVROverlay__GetOverlayRenderingPid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8336 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayFlag
class CORDL_TYPE IVROverlay__SetOverlayFlag : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62518a8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251968, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251894, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayFlag* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251828, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayFlag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFlag", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayFlag(IVROverlay__SetOverlayFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFlag", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayFlag(IVROverlay__SetOverlayFlag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayFlag) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayFlag
class CORDL_TYPE IVROverlay__GetOverlayFlag : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251a0c, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251ad0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<bool> pbEnabled, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62519f8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayFlag* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x625198c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayFlag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlag", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayFlag(IVROverlay__GetOverlayFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlag", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayFlag(IVROverlay__GetOverlayFlag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8338 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayFlag) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayColor
class CORDL_TYPE IVROverlay__SetOverlayColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251b74, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251c18, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251b60, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251af4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayColor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayColor(IVROverlay__SetOverlayColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayColor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayColor(IVROverlay__SetOverlayColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8339 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayColor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayColor
class CORDL_TYPE IVROverlay__GetOverlayColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251cbc, size 0xb0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251d6c, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251ca8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251c3c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayColor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayColor(IVROverlay__GetOverlayColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayColor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayColor(IVROverlay__GetOverlayColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayColor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayAlpha
class CORDL_TYPE IVROverlay__SetOverlayAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251e1c, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251e94, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251e08, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fAlpha);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251d9c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAlpha", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayAlpha(IVROverlay__SetOverlayAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAlpha", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayAlpha(IVROverlay__SetOverlayAlpha const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8341 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayAlpha) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayAlpha
class CORDL_TYPE IVROverlay__GetOverlayAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6251f38, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6251fb0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfAlpha, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6251f24, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251eb8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAlpha", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayAlpha(IVROverlay__GetOverlayAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAlpha", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayAlpha(IVROverlay__GetOverlayAlpha const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8342 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayAlpha) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTexelAspect
class CORDL_TYPE IVROverlay__SetOverlayTexelAspect : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252054, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62520cc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252040, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6251fd4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTexelAspect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexelAspect", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTexelAspect(IVROverlay__SetOverlayTexelAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexelAspect", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTexelAspect(IVROverlay__SetOverlayTexelAspect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect
class CORDL_TYPE IVROverlay__GetOverlayTexelAspect : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252170, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62521e8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfTexelAspect, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625215c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62520f0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTexelAspect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexelAspect", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTexelAspect(IVROverlay__GetOverlayTexelAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexelAspect", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTexelAspect(IVROverlay__GetOverlayTexelAspect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlaySortOrder
class CORDL_TYPE IVROverlay__SetOverlaySortOrder : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625228c, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252304, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252278, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x625220c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlaySortOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlaySortOrder", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlaySortOrder(IVROverlay__SetOverlaySortOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlaySortOrder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlaySortOrder(IVROverlay__SetOverlaySortOrder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlaySortOrder) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder
class CORDL_TYPE IVROverlay__GetOverlaySortOrder : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62523a8, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252420, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punSortOrder, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252394, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252328, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlaySortOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlaySortOrder", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlaySortOrder(IVROverlay__GetOverlaySortOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlaySortOrder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlaySortOrder(IVROverlay__GetOverlaySortOrder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8346 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlaySortOrder) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters
class CORDL_TYPE IVROverlay__SetOverlayWidthInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62524c4, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625253c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62524b0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252444, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayWidthInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayWidthInMeters", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayWidthInMeters(IVROverlay__SetOverlayWidthInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayWidthInMeters", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayWidthInMeters(IVROverlay__SetOverlayWidthInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters
class CORDL_TYPE IVROverlay__GetOverlayWidthInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62525e0, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252658, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfWidthInMeters, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62525cc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252560, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayWidthInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayWidthInMeters", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayWidthInMeters(IVROverlay__GetOverlayWidthInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayWidthInMeters", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayWidthInMeters(IVROverlay__GetOverlayWidthInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters
class CORDL_TYPE IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62526fc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252788, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62526e8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x625267c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
class CORDL_TYPE IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625282c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62528c4, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252818, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62527ac, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8350 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace
class CORDL_TYPE IVROverlay__SetOverlayTextureColorSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252974, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252a18, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252960, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62528f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTextureColorSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureColorSpace", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTextureColorSpace(IVROverlay__SetOverlayTextureColorSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureColorSpace", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTextureColorSpace(IVROverlay__SetOverlayTextureColorSpace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace
class CORDL_TYPE IVROverlay__GetOverlayTextureColorSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252abc, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252b64, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252aa8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252a3c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTextureColorSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureColorSpace", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTextureColorSpace(IVROverlay__GetOverlayTextureColorSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureColorSpace", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTextureColorSpace(IVROverlay__GetOverlayTextureColorSpace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8352 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTextureBounds
class CORDL_TYPE IVROverlay__SetOverlayTextureBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252c08, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252cb0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252bf4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252b88, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTextureBounds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureBounds", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTextureBounds(IVROverlay__SetOverlayTextureBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureBounds", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTextureBounds(IVROverlay__SetOverlayTextureBounds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTextureBounds
class CORDL_TYPE IVROverlay__GetOverlayTextureBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252d54, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252dfc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252d40, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252cd4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTextureBounds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureBounds", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTextureBounds(IVROverlay__GetOverlayTextureBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureBounds", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTextureBounds(IVROverlay__GetOverlayTextureBounds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayRenderModel
class CORDL_TYPE IVROverlay__GetOverlayRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6252ea0, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor,
                                             ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6252fa0, size 0x30, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6252e8c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor,
                         ::by_ref<::OVR::OpenVR::EVROverlayError> pError);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252e20, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayRenderModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayRenderModel(IVROverlay__GetOverlayRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayRenderModel(IVROverlay__GetOverlayRenderModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayRenderModel) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayRenderModel
class CORDL_TYPE IVROverlay__SetOverlayRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253050, size 0xb0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253100, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625303c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6252fd0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayRenderModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayRenderModel(IVROverlay__SetOverlayRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayRenderModel(IVROverlay__SetOverlayRenderModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8356 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayRenderModel) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformType
class CORDL_TYPE IVROverlay__GetOverlayTransformType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62531a4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625324c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253190, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253124, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformType", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformType(IVROverlay__GetOverlayTransformType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformType", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformType(IVROverlay__GetOverlayTransformType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformType) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute
class CORDL_TYPE IVROverlay__SetOverlayTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62532f0, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62533c8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62532dc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                               ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253270, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformAbsolute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformAbsolute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformAbsolute(IVROverlay__SetOverlayTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformAbsolute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformAbsolute(IVROverlay__SetOverlayTransformAbsolute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8358 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute
class CORDL_TYPE IVROverlay__GetOverlayTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625346c, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253548, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                  ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253458, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                               ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62533ec, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformAbsolute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformAbsolute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformAbsolute(IVROverlay__GetOverlayTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformAbsolute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformAbsolute(IVROverlay__GetOverlayTransformAbsolute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8359 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative
class CORDL_TYPE IVROverlay__SetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62535f8, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62536bc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62535e4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253578, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformTrackedDeviceRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformTrackedDeviceRelative(IVROverlay__SetOverlayTransformTrackedDeviceRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceRelative", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformTrackedDeviceRelative(IVROverlay__SetOverlayTransformTrackedDeviceRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative
class CORDL_TYPE IVROverlay__GetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253760, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253828, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625374c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62536e0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformTrackedDeviceRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformTrackedDeviceRelative(IVROverlay__GetOverlayTransformTrackedDeviceRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceRelative", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformTrackedDeviceRelative(IVROverlay__GetOverlayTransformTrackedDeviceRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8361 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent
class CORDL_TYPE IVROverlay__SetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62538d8, size 0x80, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253958, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62538c4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253858, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformTrackedDeviceComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformTrackedDeviceComponent(IVROverlay__SetOverlayTransformTrackedDeviceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceComponent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformTrackedDeviceComponent(IVROverlay__SetOverlayTransformTrackedDeviceComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8362 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
class CORDL_TYPE IVROverlay__GetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62539fc, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253a98, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punDeviceIndex, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62539e8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x625397c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformTrackedDeviceComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformTrackedDeviceComponent(IVROverlay__GetOverlayTransformTrackedDeviceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceComponent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformTrackedDeviceComponent(IVROverlay__GetOverlayTransformTrackedDeviceComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformOverlayRelative
class CORDL_TYPE IVROverlay__GetOverlayTransformOverlayRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253b3c, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253c00, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253b28, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253abc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformOverlayRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformOverlayRelative(IVROverlay__GetOverlayTransformOverlayRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformOverlayRelative", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformOverlayRelative(IVROverlay__GetOverlayTransformOverlayRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformOverlayRelative
class CORDL_TYPE IVROverlay__SetOverlayTransformOverlayRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253cb0, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253d70, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253c9c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253c30, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformOverlayRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformOverlayRelative(IVROverlay__SetOverlayTransformOverlayRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformOverlayRelative", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformOverlayRelative(IVROverlay__SetOverlayTransformOverlayRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowOverlay
class CORDL_TYPE IVROverlay__ShowOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253e14, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253e68, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253e00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__ShowOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253d94, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowOverlay(IVROverlay__ShowOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowOverlay(IVROverlay__ShowOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_HideOverlay
class CORDL_TYPE IVROverlay__HideOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253f0c, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253f60, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253ef8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__HideOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253e8c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__HideOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__HideOverlay(IVROverlay__HideOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__HideOverlay(IVROverlay__HideOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__HideOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsOverlayVisible
class CORDL_TYPE IVROverlay__IsOverlayVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254004, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254058, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253ff0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__IsOverlayVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6253f84, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsOverlayVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsOverlayVisible", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsOverlayVisible(IVROverlay__IsOverlayVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsOverlayVisible", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsOverlayVisible(IVROverlay__IsOverlayVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsOverlayVisible) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
class CORDL_TYPE IVROverlay__GetTransformForOverlayCoordinates : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62540fc, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254204, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62540e8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                               ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x625407c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetTransformForOverlayCoordinates();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetTransformForOverlayCoordinates", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetTransformForOverlayCoordinates(IVROverlay__GetTransformForOverlayCoordinates&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetTransformForOverlayCoordinates", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetTransformForOverlayCoordinates(IVROverlay__GetTransformForOverlayCoordinates const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
class CORDL_TYPE IVROverlay__PollNextOverlayEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62542a8, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625436c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254294, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254228, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__PollNextOverlayEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__PollNextOverlayEvent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__PollNextOverlayEvent(IVROverlay__PollNextOverlayEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__PollNextOverlayEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__PollNextOverlayEvent(IVROverlay__PollNextOverlayEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod
class CORDL_TYPE IVROverlay__GetOverlayInputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254410, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62544b8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62543fc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254390, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayInputMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayInputMethod", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayInputMethod(IVROverlay__GetOverlayInputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayInputMethod", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayInputMethod(IVROverlay__GetOverlayInputMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayInputMethod) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayInputMethod
class CORDL_TYPE IVROverlay__SetOverlayInputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625455c, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254600, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254548, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62544dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayInputMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayInputMethod", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayInputMethod(IVROverlay__SetOverlayInputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayInputMethod", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayInputMethod(IVROverlay__SetOverlayInputMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayInputMethod) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale
class CORDL_TYPE IVROverlay__GetOverlayMouseScale : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62546a4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625474c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254690, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254624, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayMouseScale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayMouseScale", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayMouseScale(IVROverlay__GetOverlayMouseScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayMouseScale", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayMouseScale(IVROverlay__GetOverlayMouseScale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayMouseScale) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayMouseScale
class CORDL_TYPE IVROverlay__SetOverlayMouseScale : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62547f0, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254898, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62547dc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254770, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayMouseScale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayMouseScale", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayMouseScale(IVROverlay__SetOverlayMouseScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayMouseScale", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayMouseScale(IVROverlay__SetOverlayMouseScale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayMouseScale) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ComputeOverlayIntersection
class CORDL_TYPE IVROverlay__ComputeOverlayIntersection : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625493c, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254a18, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254928, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults);

  static inline ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62548bc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ComputeOverlayIntersection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ComputeOverlayIntersection", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ComputeOverlayIntersection(IVROverlay__ComputeOverlayIntersection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ComputeOverlayIntersection", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ComputeOverlayIntersection(IVROverlay__ComputeOverlayIntersection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay
class CORDL_TYPE IVROverlay__IsHoverTargetOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254ac8, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254b1c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254ab4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254a48, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsHoverTargetOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsHoverTargetOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsHoverTargetOverlay(IVROverlay__IsHoverTargetOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsHoverTargetOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsHoverTargetOverlay(IVROverlay__IsHoverTargetOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetGamepadFocusOverlay
class CORDL_TYPE IVROverlay__GetGamepadFocusOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254bbc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254bd8, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254ba8, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke();

  static inline ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254b40, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetGamepadFocusOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetGamepadFocusOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetGamepadFocusOverlay(IVROverlay__GetGamepadFocusOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetGamepadFocusOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetGamepadFocusOverlay(IVROverlay__GetGamepadFocusOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay
class CORDL_TYPE IVROverlay__SetGamepadFocusOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254c7c, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254cd0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254c68, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulNewFocusOverlay);

  static inline ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254bfc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetGamepadFocusOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetGamepadFocusOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetGamepadFocusOverlay(IVROverlay__SetGamepadFocusOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetGamepadFocusOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetGamepadFocusOverlay(IVROverlay__SetGamepadFocusOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
class CORDL_TYPE IVROverlay__SetOverlayNeighbor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254d74, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254e2c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254d60, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254cf4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayNeighbor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayNeighbor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayNeighbor(IVROverlay__SetOverlayNeighbor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayNeighbor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayNeighbor(IVROverlay__SetOverlayNeighbor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayNeighbor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
class CORDL_TYPE IVROverlay__MoveGamepadFocusToNeighbor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6254ed0, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6254f74, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6254ebc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);

  static inline ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254e50, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__MoveGamepadFocusToNeighbor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__MoveGamepadFocusToNeighbor", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__MoveGamepadFocusToNeighbor(IVROverlay__MoveGamepadFocusToNeighbor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__MoveGamepadFocusToNeighbor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__MoveGamepadFocusToNeighbor(IVROverlay__MoveGamepadFocusToNeighbor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
class CORDL_TYPE IVROverlay__SetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255018, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter, float_t fRadius, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62550f0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255004, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter, float_t fRadius);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6254f98, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayDualAnalogTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayDualAnalogTransform", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayDualAnalogTransform(IVROverlay__SetOverlayDualAnalogTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayDualAnalogTransform", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayDualAnalogTransform(IVROverlay__SetOverlayDualAnalogTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
class CORDL_TYPE IVROverlay__GetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255194, size 0xf8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625528c, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255180, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255114, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayDualAnalogTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayDualAnalogTransform", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayDualAnalogTransform(IVROverlay__GetOverlayDualAnalogTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayDualAnalogTransform", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayDualAnalogTransform(IVROverlay__GetOverlayDualAnalogTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTexture
class CORDL_TYPE IVROverlay__SetOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625533c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62553e4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255328, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62552bc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexture", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTexture(IVROverlay__SetOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexture", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTexture(IVROverlay__SetOverlayTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ClearOverlayTexture
class CORDL_TYPE IVROverlay__ClearOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255488, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62554dc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255474, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255408, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ClearOverlayTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ClearOverlayTexture", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ClearOverlayTexture(IVROverlay__ClearOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ClearOverlayTexture", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ClearOverlayTexture(IVROverlay__ClearOverlayTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ClearOverlayTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayRaw
class CORDL_TYPE IVROverlay__SetOverlayRaw : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255580, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625563c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625556c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayRaw* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255500, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRaw", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayRaw(IVROverlay__SetOverlayRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRaw", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayRaw(IVROverlay__SetOverlayRaw const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayRaw) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayFromFile
class CORDL_TYPE IVROverlay__SetOverlayFromFile : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62556e0, size 0x60, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6255740, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62556cc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255660, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayFromFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFromFile", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayFromFile(IVROverlay__SetOverlayFromFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFromFile", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayFromFile(IVROverlay__SetOverlayFromFile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8386 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayFromFile) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTexture
class CORDL_TYPE IVROverlay__GetOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62557f0, size 0x18c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::by_ref<uint32_t> pWidth,
                                             ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat, ::by_ref<::OVR::OpenVR::ETextureType> pAPIType,
                                             ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625597c, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::System::IntPtr> pNativeTextureHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat,
                                                  ::by_ref<::OVR::OpenVR::ETextureType> pAPIType, ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                  ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62557d0, size 0x20, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::by_ref<uint32_t> pWidth,
                                               ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat, ::by_ref<::OVR::OpenVR::ETextureType> pAPIType,
                                               ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255764, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexture", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTexture(IVROverlay__GetOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexture", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTexture(IVROverlay__GetOverlayTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8387 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ReleaseNativeOverlayHandle
class CORDL_TYPE IVROverlay__ReleaseNativeOverlayHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255a34, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6255aac, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255a20, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle);

  static inline ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62559b4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ReleaseNativeOverlayHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ReleaseNativeOverlayHandle", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ReleaseNativeOverlayHandle(IVROverlay__ReleaseNativeOverlayHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ReleaseNativeOverlayHandle", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ReleaseNativeOverlayHandle(IVROverlay__ReleaseNativeOverlayHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8388 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTextureSize
class CORDL_TYPE IVROverlay__GetOverlayTextureSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255b50, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6255be8, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255b3c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255ad0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTextureSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureSize", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTextureSize(IVROverlay__GetOverlayTextureSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureSize", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTextureSize(IVROverlay__GetOverlayTextureSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTextureSize) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
class CORDL_TYPE IVROverlay__CreateDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255cac, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6255d24, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255c98, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle);

  static inline ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255c18, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__CreateDashboardOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateDashboardOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__CreateDashboardOverlay(IVROverlay__CreateDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateDashboardOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__CreateDashboardOverlay(IVROverlay__CreateDashboardOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__CreateDashboardOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsDashboardVisible
class CORDL_TYPE IVROverlay__IsDashboardVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255dd0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6255dec, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255dbc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVROverlay__IsDashboardVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255d54, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsDashboardVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsDashboardVisible", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsDashboardVisible(IVROverlay__IsDashboardVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsDashboardVisible", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsDashboardVisible(IVROverlay__IsDashboardVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsDashboardVisible) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay
class CORDL_TYPE IVROverlay__IsActiveDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255e90, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6255ee4, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255e7c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255e10, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsActiveDashboardOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsActiveDashboardOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsActiveDashboardOverlay(IVROverlay__IsActiveDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsActiveDashboardOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsActiveDashboardOverlay(IVROverlay__IsActiveDashboardOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetDashboardOverlaySceneProcess
class CORDL_TYPE IVROverlay__SetDashboardOverlaySceneProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6255f88, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256000, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6255f74, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId);

  static inline ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6255f08, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetDashboardOverlaySceneProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetDashboardOverlaySceneProcess(IVROverlay__SetDashboardOverlaySceneProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetDashboardOverlaySceneProcess", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetDashboardOverlaySceneProcess(IVROverlay__SetDashboardOverlaySceneProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetDashboardOverlaySceneProcess
class CORDL_TYPE IVROverlay__GetDashboardOverlaySceneProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62560a4, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625611c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punProcessId, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256090, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId);

  static inline ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256024, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetDashboardOverlaySceneProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetDashboardOverlaySceneProcess(IVROverlay__GetDashboardOverlaySceneProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetDashboardOverlaySceneProcess", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetDashboardOverlaySceneProcess(IVROverlay__GetDashboardOverlaySceneProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowDashboard
class CORDL_TYPE IVROverlay__ShowDashboard : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62561d0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62561f0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62561bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchOverlayToShow);

  static inline ::OVR::OpenVR::IVROverlay__ShowDashboard* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256140, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowDashboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowDashboard", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowDashboard(IVROverlay__ShowDashboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowDashboard", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowDashboard(IVROverlay__ShowDashboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowDashboard) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetPrimaryDashboardDevice
class CORDL_TYPE IVROverlay__GetPrimaryDashboardDevice : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256278, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256294, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256264, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62561fc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetPrimaryDashboardDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetPrimaryDashboardDevice", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetPrimaryDashboardDevice(IVROverlay__GetPrimaryDashboardDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetPrimaryDashboardDevice", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetPrimaryDashboardDevice(IVROverlay__GetPrimaryDashboardDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8396 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowKeyboard
class CORDL_TYPE IVROverlay__ShowKeyboard : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x625633c, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                             uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256404, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256324, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                               uint64_t uUserValue);

  static inline ::OVR::OpenVR::IVROverlay__ShowKeyboard* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62562b8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboard", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowKeyboard(IVROverlay__ShowKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboard", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowKeyboard(IVROverlay__ShowKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8397 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowKeyboard) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowKeyboardForOverlay
class CORDL_TYPE IVROverlay__ShowKeyboardForOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62564b0, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                             bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625658c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256494, size 0x1c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                               bool bUseMinimalMode, uint64_t uUserValue);

  static inline ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256428, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowKeyboardForOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboardForOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowKeyboardForOverlay(IVROverlay__ShowKeyboardForOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboardForOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowKeyboardForOverlay(IVROverlay__ShowKeyboardForOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetKeyboardText
class CORDL_TYPE IVROverlay__GetKeyboardText : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256644, size 0x5c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchText, uint32_t cchText, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62566a0, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256630, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::System::Text::StringBuilder* pchText, uint32_t cchText);

  static inline ::OVR::OpenVR::IVROverlay__GetKeyboardText* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62565b0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetKeyboardText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetKeyboardText", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetKeyboardText(IVROverlay__GetKeyboardText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetKeyboardText", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetKeyboardText(IVROverlay__GetKeyboardText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8399 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetKeyboardText) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_HideKeyboard
class CORDL_TYPE IVROverlay__HideKeyboard : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256740, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x625675c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625672c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVROverlay__HideKeyboard* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62566c4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__HideKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideKeyboard", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__HideKeyboard(IVROverlay__HideKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideKeyboard", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__HideKeyboard(IVROverlay__HideKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__HideKeyboard) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
class CORDL_TYPE IVROverlay__SetKeyboardTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x62567e8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62568a8, size 0x18, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x62567d4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256768, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetKeyboardTransformAbsolute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardTransformAbsolute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetKeyboardTransformAbsolute(IVROverlay__SetKeyboardTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardTransformAbsolute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetKeyboardTransformAbsolute(IVROverlay__SetKeyboardTransformAbsolute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetKeyboardPositionForOverlay
class CORDL_TYPE IVROverlay__SetKeyboardPositionForOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256940, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x62569e8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x625692c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect);

  static inline ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62568c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetKeyboardPositionForOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardPositionForOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetKeyboardPositionForOverlay(IVROverlay__SetKeyboardPositionForOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardPositionForOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetKeyboardPositionForOverlay(IVROverlay__SetKeyboardPositionForOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
class CORDL_TYPE IVROverlay__SetOverlayIntersectionMask : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256a74, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                             uint32_t unPrimitiveSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256b4c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256a60, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                               uint32_t unPrimitiveSize);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62569f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayIntersectionMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayIntersectionMask", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayIntersectionMask(IVROverlay__SetOverlayIntersectionMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayIntersectionMask", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayIntersectionMask(IVROverlay__SetOverlayIntersectionMask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8403 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayFlags
class CORDL_TYPE IVROverlay__GetOverlayFlags : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256bf0, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256c68, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> pFlags, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256bdc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayFlags* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256b70, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayFlags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlags", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayFlags(IVROverlay__GetOverlayFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlags", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayFlags(IVROverlay__GetOverlayFlags const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayFlags) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowMessageOverlay
class CORDL_TYPE IVROverlay__ShowMessageOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256d20, size 0x30, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256d50, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256d0c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text,
                                                        ::StringW pchButton3Text);

  static inline ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256c8c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowMessageOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowMessageOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowMessageOverlay(IVROverlay__ShowMessageOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowMessageOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowMessageOverlay(IVROverlay__ShowMessageOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowMessageOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_CloseMessageOverlay
class CORDL_TYPE IVROverlay__CloseMessageOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6256df0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6256e0c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6256ddc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6256d74, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__CloseMessageOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CloseMessageOverlay", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__CloseMessageOverlay(IVROverlay__CloseMessageOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CloseMessageOverlay", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__CloseMessageOverlay(IVROverlay__CloseMessageOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8406 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__CloseMessageOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVROverlay
struct CORDL_TYPE IVROverlay {
public:
  // Declarations
  using _ClearOverlayTexture = ::OVR::OpenVR::IVROverlay__ClearOverlayTexture;

  using _CloseMessageOverlay = ::OVR::OpenVR::IVROverlay__CloseMessageOverlay;

  using _ComputeOverlayIntersection = ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection;

  using _CreateDashboardOverlay = ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay;

  using _CreateOverlay = ::OVR::OpenVR::IVROverlay__CreateOverlay;

  using _DestroyOverlay = ::OVR::OpenVR::IVROverlay__DestroyOverlay;

  using _FindOverlay = ::OVR::OpenVR::IVROverlay__FindOverlay;

  using _GetDashboardOverlaySceneProcess = ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess;

  using _GetGamepadFocusOverlay = ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay;

  using _GetHighQualityOverlay = ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay;

  using _GetKeyboardText = ::OVR::OpenVR::IVROverlay__GetKeyboardText;

  using _GetOverlayAlpha = ::OVR::OpenVR::IVROverlay__GetOverlayAlpha;

  using _GetOverlayAutoCurveDistanceRangeInMeters = ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters;

  using _GetOverlayColor = ::OVR::OpenVR::IVROverlay__GetOverlayColor;

  using _GetOverlayDualAnalogTransform = ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform;

  using _GetOverlayErrorNameFromEnum = ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum;

  using _GetOverlayFlag = ::OVR::OpenVR::IVROverlay__GetOverlayFlag;

  using _GetOverlayFlags = ::OVR::OpenVR::IVROverlay__GetOverlayFlags;

  using _GetOverlayImageData = ::OVR::OpenVR::IVROverlay__GetOverlayImageData;

  using _GetOverlayInputMethod = ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod;

  using _GetOverlayKey = ::OVR::OpenVR::IVROverlay__GetOverlayKey;

  using _GetOverlayMouseScale = ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale;

  using _GetOverlayName = ::OVR::OpenVR::IVROverlay__GetOverlayName;

  using _GetOverlayRenderModel = ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel;

  using _GetOverlayRenderingPid = ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid;

  using _GetOverlaySortOrder = ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder;

  using _GetOverlayTexelAspect = ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect;

  using _GetOverlayTexture = ::OVR::OpenVR::IVROverlay__GetOverlayTexture;

  using _GetOverlayTextureBounds = ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds;

  using _GetOverlayTextureColorSpace = ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace;

  using _GetOverlayTextureSize = ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize;

  using _GetOverlayTransformAbsolute = ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute;

  using _GetOverlayTransformOverlayRelative = ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative;

  using _GetOverlayTransformTrackedDeviceComponent = ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent;

  using _GetOverlayTransformTrackedDeviceRelative = ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative;

  using _GetOverlayTransformType = ::OVR::OpenVR::IVROverlay__GetOverlayTransformType;

  using _GetOverlayWidthInMeters = ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters;

  using _GetPrimaryDashboardDevice = ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice;

  using _GetTransformForOverlayCoordinates = ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates;

  using _HideKeyboard = ::OVR::OpenVR::IVROverlay__HideKeyboard;

  using _HideOverlay = ::OVR::OpenVR::IVROverlay__HideOverlay;

  using _IsActiveDashboardOverlay = ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay;

  using _IsDashboardVisible = ::OVR::OpenVR::IVROverlay__IsDashboardVisible;

  using _IsHoverTargetOverlay = ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay;

  using _IsOverlayVisible = ::OVR::OpenVR::IVROverlay__IsOverlayVisible;

  using _MoveGamepadFocusToNeighbor = ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor;

  using _PollNextOverlayEvent = ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent;

  using _ReleaseNativeOverlayHandle = ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle;

  using _SetDashboardOverlaySceneProcess = ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess;

  using _SetGamepadFocusOverlay = ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay;

  using _SetHighQualityOverlay = ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay;

  using _SetKeyboardPositionForOverlay = ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay;

  using _SetKeyboardTransformAbsolute = ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute;

  using _SetOverlayAlpha = ::OVR::OpenVR::IVROverlay__SetOverlayAlpha;

  using _SetOverlayAutoCurveDistanceRangeInMeters = ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters;

  using _SetOverlayColor = ::OVR::OpenVR::IVROverlay__SetOverlayColor;

  using _SetOverlayDualAnalogTransform = ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform;

  using _SetOverlayFlag = ::OVR::OpenVR::IVROverlay__SetOverlayFlag;

  using _SetOverlayFromFile = ::OVR::OpenVR::IVROverlay__SetOverlayFromFile;

  using _SetOverlayInputMethod = ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod;

  using _SetOverlayIntersectionMask = ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask;

  using _SetOverlayMouseScale = ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale;

  using _SetOverlayName = ::OVR::OpenVR::IVROverlay__SetOverlayName;

  using _SetOverlayNeighbor = ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor;

  using _SetOverlayRaw = ::OVR::OpenVR::IVROverlay__SetOverlayRaw;

  using _SetOverlayRenderModel = ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel;

  using _SetOverlayRenderingPid = ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid;

  using _SetOverlaySortOrder = ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder;

  using _SetOverlayTexelAspect = ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect;

  using _SetOverlayTexture = ::OVR::OpenVR::IVROverlay__SetOverlayTexture;

  using _SetOverlayTextureBounds = ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds;

  using _SetOverlayTextureColorSpace = ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace;

  using _SetOverlayTransformAbsolute = ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute;

  using _SetOverlayTransformOverlayRelative = ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative;

  using _SetOverlayTransformTrackedDeviceComponent = ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent;

  using _SetOverlayTransformTrackedDeviceRelative = ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative;

  using _SetOverlayWidthInMeters = ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters;

  using _ShowDashboard = ::OVR::OpenVR::IVROverlay__ShowDashboard;

  using _ShowKeyboard = ::OVR::OpenVR::IVROverlay__ShowKeyboard;

  using _ShowKeyboardForOverlay = ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay;

  using _ShowMessageOverlay = ::OVR::OpenVR::IVROverlay__ShowMessageOverlay;

  using _ShowOverlay = ::OVR::OpenVR::IVROverlay__ShowOverlay;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay();

  // Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::IVROverlay__FindOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "CreateOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__CreateOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::IVROverlay__DestroyOverlay*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "GetHighQualityOverlay", ty: "::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayKey", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayKey*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::IVROverlay__GetOverlayName*", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "SetOverlayName", ty: "::OVR::OpenVR::IVROverlay__SetOverlayName*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "GetOverlayImageData", ty: "::OVR::OpenVR::IVROverlay__GetOverlayImageData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayErrorNameFromEnum", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayRenderingPid", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayRenderingPid", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__SetOverlayFlag*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlag*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "SetOverlayColor", ty: "::OVR::OpenVR::IVROverlay__SetOverlayColor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayColor", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayColor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAlpha*", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "GetOverlayAlpha", ty: "::OVR::OpenVR::IVROverlay__GetOverlayAlpha*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "SetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTexelAspect", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlaySortOrder", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlaySortOrder", ty: "::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "SetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "GetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "SetOverlayTextureColorSpace", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTextureColorSpace", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayTextureBounds", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTextureBounds", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayRenderModel", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayRenderModel", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTransformType", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformType*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayTransformAbsolute", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTransformAbsolute", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTransformOverlayRelative", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayTransformOverlayRelative", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowOverlay*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::IVROverlay__HideOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "IsOverlayVisible", ty: "::OVR::OpenVR::IVROverlay__IsOverlayVisible*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetTransformForOverlayCoordinates", ty:
  // "::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PollNextOverlayEvent", ty:
  // "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayInputMethod", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayInputMethod", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayMouseScale", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayMouseScale", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComputeOverlayIntersection", ty:
  // "::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsHoverTargetOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetGamepadFocusOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetGamepadFocusOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayNeighbor", ty: "::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "MoveGamepadFocusToNeighbor", ty: "::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "SetOverlayDualAnalogTransform", ty: "::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "GetOverlayDualAnalogTransform", ty: "::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayTexture", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTexture*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__ClearOverlayTexture*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayRaw", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRaw*", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "SetOverlayFromFile", ty: "::OVR::OpenVR::IVROverlay__SetOverlayFromFile*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTexture", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTexture*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReleaseNativeOverlayHandle", ty:
  // "::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayTextureSize", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*", modifiers: "", def_value: None, comment: None }, CppParam { name: "CreateDashboardOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::IVROverlay__IsDashboardVisible*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "SetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "GetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowDashboard", ty:
  // "::OVR::OpenVR::IVROverlay__ShowDashboard*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetPrimaryDashboardDevice", ty:
  // "::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowKeyboard", ty: "::OVR::OpenVR::IVROverlay__ShowKeyboard*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowKeyboardForOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::IVROverlay__GetKeyboardText*", modifiers: "", def_value: None, comment: None }, CppParam { name: "HideKeyboard", ty:
  // "::OVR::OpenVR::IVROverlay__HideKeyboard*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetKeyboardTransformAbsolute", ty:
  // "::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetKeyboardPositionForOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SetOverlayIntersectionMask", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*", modifiers: "", def_value: None, comment: None }, CppParam { name: "GetOverlayFlags", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlags*",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowMessageOverlay*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "CloseMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__CloseMessageOverlay*", modifiers: "", def_value: None, comment: None }]
  constexpr IVROverlay(::OVR::OpenVR::IVROverlay__FindOverlay* FindOverlay, ::OVR::OpenVR::IVROverlay__CreateOverlay* CreateOverlay, ::OVR::OpenVR::IVROverlay__DestroyOverlay* DestroyOverlay,
                       ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* SetHighQualityOverlay, ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* GetHighQualityOverlay,
                       ::OVR::OpenVR::IVROverlay__GetOverlayKey* GetOverlayKey, ::OVR::OpenVR::IVROverlay__GetOverlayName* GetOverlayName, ::OVR::OpenVR::IVROverlay__SetOverlayName* SetOverlayName,
                       ::OVR::OpenVR::IVROverlay__GetOverlayImageData* GetOverlayImageData, ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum,
                       ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* SetOverlayRenderingPid, ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* GetOverlayRenderingPid,
                       ::OVR::OpenVR::IVROverlay__SetOverlayFlag* SetOverlayFlag, ::OVR::OpenVR::IVROverlay__GetOverlayFlag* GetOverlayFlag,
                       ::OVR::OpenVR::IVROverlay__SetOverlayColor* SetOverlayColor, ::OVR::OpenVR::IVROverlay__GetOverlayColor* GetOverlayColor,
                       ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* SetOverlayAlpha, ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* GetOverlayAlpha,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* SetOverlayTexelAspect, ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* GetOverlayTexelAspect,
                       ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* SetOverlaySortOrder, ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* GetOverlaySortOrder,
                       ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* SetOverlayWidthInMeters, ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* GetOverlayWidthInMeters,
                       ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters,
                       ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* SetOverlayTextureColorSpace, ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* GetOverlayTextureColorSpace,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* SetOverlayTextureBounds, ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* GetOverlayTextureBounds,
                       ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* GetOverlayRenderModel, ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* SetOverlayRenderModel,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* GetOverlayTransformType, ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* SetOverlayTransformAbsolute,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* GetOverlayTransformAbsolute,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative, ::OVR::OpenVR::IVROverlay__ShowOverlay* ShowOverlay,
                       ::OVR::OpenVR::IVROverlay__HideOverlay* HideOverlay, ::OVR::OpenVR::IVROverlay__IsOverlayVisible* IsOverlayVisible,
                       ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates, ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* PollNextOverlayEvent,
                       ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* GetOverlayInputMethod, ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* SetOverlayInputMethod,
                       ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* GetOverlayMouseScale, ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* SetOverlayMouseScale,
                       ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* ComputeOverlayIntersection, ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* IsHoverTargetOverlay,
                       ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* GetGamepadFocusOverlay, ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* SetGamepadFocusOverlay,
                       ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* SetOverlayNeighbor, ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor,
                       ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform, ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform,
                       ::OVR::OpenVR::IVROverlay__SetOverlayTexture* SetOverlayTexture, ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* ClearOverlayTexture,
                       ::OVR::OpenVR::IVROverlay__SetOverlayRaw* SetOverlayRaw, ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* SetOverlayFromFile,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTexture* GetOverlayTexture, ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle,
                       ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* GetOverlayTextureSize, ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* CreateDashboardOverlay,
                       ::OVR::OpenVR::IVROverlay__IsDashboardVisible* IsDashboardVisible, ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* IsActiveDashboardOverlay,
                       ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess,
                       ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess, ::OVR::OpenVR::IVROverlay__ShowDashboard* ShowDashboard,
                       ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* GetPrimaryDashboardDevice, ::OVR::OpenVR::IVROverlay__ShowKeyboard* ShowKeyboard,
                       ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* ShowKeyboardForOverlay, ::OVR::OpenVR::IVROverlay__GetKeyboardText* GetKeyboardText,
                       ::OVR::OpenVR::IVROverlay__HideKeyboard* HideKeyboard, ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute,
                       ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay, ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* SetOverlayIntersectionMask,
                       ::OVR::OpenVR::IVROverlay__GetOverlayFlags* GetOverlayFlags, ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* ShowMessageOverlay,
                       ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* CloseMessageOverlay) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x290 };

  /// @brief Field FindOverlay, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__FindOverlay* FindOverlay;

  /// @brief Field CreateOverlay, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__CreateOverlay* CreateOverlay;

  /// @brief Field DestroyOverlay, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__DestroyOverlay* DestroyOverlay;

  /// @brief Field SetHighQualityOverlay, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* SetHighQualityOverlay;

  /// @brief Field GetHighQualityOverlay, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* GetHighQualityOverlay;

  /// @brief Field GetOverlayKey, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayKey* GetOverlayKey;

  /// @brief Field GetOverlayName, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayName* GetOverlayName;

  /// @brief Field SetOverlayName, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayName* SetOverlayName;

  /// @brief Field GetOverlayImageData, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayImageData* GetOverlayImageData;

  /// @brief Field GetOverlayErrorNameFromEnum, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum;

  /// @brief Field SetOverlayRenderingPid, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* SetOverlayRenderingPid;

  /// @brief Field GetOverlayRenderingPid, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* GetOverlayRenderingPid;

  /// @brief Field SetOverlayFlag, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayFlag* SetOverlayFlag;

  /// @brief Field GetOverlayFlag, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayFlag* GetOverlayFlag;

  /// @brief Field SetOverlayColor, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayColor* SetOverlayColor;

  /// @brief Field GetOverlayColor, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayColor* GetOverlayColor;

  /// @brief Field SetOverlayAlpha, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* SetOverlayAlpha;

  /// @brief Field GetOverlayAlpha, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* GetOverlayAlpha;

  /// @brief Field SetOverlayTexelAspect, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* SetOverlayTexelAspect;

  /// @brief Field GetOverlayTexelAspect, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* GetOverlayTexelAspect;

  /// @brief Field SetOverlaySortOrder, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* SetOverlaySortOrder;

  /// @brief Field GetOverlaySortOrder, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* GetOverlaySortOrder;

  /// @brief Field SetOverlayWidthInMeters, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* SetOverlayWidthInMeters;

  /// @brief Field GetOverlayWidthInMeters, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* GetOverlayWidthInMeters;

  /// @brief Field SetOverlayAutoCurveDistanceRangeInMeters, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters;

  /// @brief Field GetOverlayAutoCurveDistanceRangeInMeters, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters;

  /// @brief Field SetOverlayTextureColorSpace, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* SetOverlayTextureColorSpace;

  /// @brief Field GetOverlayTextureColorSpace, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* GetOverlayTextureColorSpace;

  /// @brief Field SetOverlayTextureBounds, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* SetOverlayTextureBounds;

  /// @brief Field GetOverlayTextureBounds, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* GetOverlayTextureBounds;

  /// @brief Field GetOverlayRenderModel, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* GetOverlayRenderModel;

  /// @brief Field SetOverlayRenderModel, offset: 0xf8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* SetOverlayRenderModel;

  /// @brief Field GetOverlayTransformType, offset: 0x100, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* GetOverlayTransformType;

  /// @brief Field SetOverlayTransformAbsolute, offset: 0x108, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* SetOverlayTransformAbsolute;

  /// @brief Field GetOverlayTransformAbsolute, offset: 0x110, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* GetOverlayTransformAbsolute;

  /// @brief Field SetOverlayTransformTrackedDeviceRelative, offset: 0x118, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative;

  /// @brief Field GetOverlayTransformTrackedDeviceRelative, offset: 0x120, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative;

  /// @brief Field SetOverlayTransformTrackedDeviceComponent, offset: 0x128, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent;

  /// @brief Field GetOverlayTransformTrackedDeviceComponent, offset: 0x130, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent;

  /// @brief Field GetOverlayTransformOverlayRelative, offset: 0x138, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative;

  /// @brief Field SetOverlayTransformOverlayRelative, offset: 0x140, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative;

  /// @brief Field ShowOverlay, offset: 0x148, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ShowOverlay* ShowOverlay;

  /// @brief Field HideOverlay, offset: 0x150, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__HideOverlay* HideOverlay;

  /// @brief Field IsOverlayVisible, offset: 0x158, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__IsOverlayVisible* IsOverlayVisible;

  /// @brief Field GetTransformForOverlayCoordinates, offset: 0x160, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates;

  /// @brief Field PollNextOverlayEvent, offset: 0x168, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* PollNextOverlayEvent;

  /// @brief Field GetOverlayInputMethod, offset: 0x170, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* GetOverlayInputMethod;

  /// @brief Field SetOverlayInputMethod, offset: 0x178, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* SetOverlayInputMethod;

  /// @brief Field GetOverlayMouseScale, offset: 0x180, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* GetOverlayMouseScale;

  /// @brief Field SetOverlayMouseScale, offset: 0x188, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* SetOverlayMouseScale;

  /// @brief Field ComputeOverlayIntersection, offset: 0x190, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* ComputeOverlayIntersection;

  /// @brief Field IsHoverTargetOverlay, offset: 0x198, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* IsHoverTargetOverlay;

  /// @brief Field GetGamepadFocusOverlay, offset: 0x1a0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* GetGamepadFocusOverlay;

  /// @brief Field SetGamepadFocusOverlay, offset: 0x1a8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* SetGamepadFocusOverlay;

  /// @brief Field SetOverlayNeighbor, offset: 0x1b0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* SetOverlayNeighbor;

  /// @brief Field MoveGamepadFocusToNeighbor, offset: 0x1b8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor;

  /// @brief Field SetOverlayDualAnalogTransform, offset: 0x1c0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform;

  /// @brief Field GetOverlayDualAnalogTransform, offset: 0x1c8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform;

  /// @brief Field SetOverlayTexture, offset: 0x1d0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayTexture* SetOverlayTexture;

  /// @brief Field ClearOverlayTexture, offset: 0x1d8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* ClearOverlayTexture;

  /// @brief Field SetOverlayRaw, offset: 0x1e0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayRaw* SetOverlayRaw;

  /// @brief Field SetOverlayFromFile, offset: 0x1e8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* SetOverlayFromFile;

  /// @brief Field GetOverlayTexture, offset: 0x1f0, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTexture* GetOverlayTexture;

  /// @brief Field ReleaseNativeOverlayHandle, offset: 0x1f8, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle;

  /// @brief Field GetOverlayTextureSize, offset: 0x200, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* GetOverlayTextureSize;

  /// @brief Field CreateDashboardOverlay, offset: 0x208, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* CreateDashboardOverlay;

  /// @brief Field IsDashboardVisible, offset: 0x210, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__IsDashboardVisible* IsDashboardVisible;

  /// @brief Field IsActiveDashboardOverlay, offset: 0x218, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* IsActiveDashboardOverlay;

  /// @brief Field SetDashboardOverlaySceneProcess, offset: 0x220, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess;

  /// @brief Field GetDashboardOverlaySceneProcess, offset: 0x228, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess;

  /// @brief Field ShowDashboard, offset: 0x230, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ShowDashboard* ShowDashboard;

  /// @brief Field GetPrimaryDashboardDevice, offset: 0x238, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* GetPrimaryDashboardDevice;

  /// @brief Field ShowKeyboard, offset: 0x240, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ShowKeyboard* ShowKeyboard;

  /// @brief Field ShowKeyboardForOverlay, offset: 0x248, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* ShowKeyboardForOverlay;

  /// @brief Field GetKeyboardText, offset: 0x250, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetKeyboardText* GetKeyboardText;

  /// @brief Field HideKeyboard, offset: 0x258, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__HideKeyboard* HideKeyboard;

  /// @brief Field SetKeyboardTransformAbsolute, offset: 0x260, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute;

  /// @brief Field SetKeyboardPositionForOverlay, offset: 0x268, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay;

  /// @brief Field SetOverlayIntersectionMask, offset: 0x270, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* SetOverlayIntersectionMask;

  /// @brief Field GetOverlayFlags, offset: 0x278, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__GetOverlayFlags* GetOverlayFlags;

  /// @brief Field ShowMessageOverlay, offset: 0x280, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* ShowMessageOverlay;

  /// @brief Field CloseMessageOverlay, offset: 0x288, size: 0x8, def value: None
  ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* CloseMessageOverlay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVROverlay, FindOverlay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, CreateOverlay) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, DestroyOverlay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetHighQualityOverlay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetHighQualityOverlay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayImageData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayErrorNameFromEnum) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayRenderingPid) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayRenderingPid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayFlag) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayFlag) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayAlpha) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayAlpha) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTexelAspect) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTexelAspect) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlaySortOrder) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlaySortOrder) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayWidthInMeters) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayWidthInMeters) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayAutoCurveDistanceRangeInMeters) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayAutoCurveDistanceRangeInMeters) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTextureColorSpace) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTextureColorSpace) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTextureBounds) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTextureBounds) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayRenderModel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayRenderModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTransformType) == 0x100, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTransformAbsolute) == 0x108, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTransformAbsolute) == 0x110, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTransformTrackedDeviceRelative) == 0x118, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTransformTrackedDeviceRelative) == 0x120, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTransformTrackedDeviceComponent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTransformTrackedDeviceComponent) == 0x130, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTransformOverlayRelative) == 0x138, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTransformOverlayRelative) == 0x140, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ShowOverlay) == 0x148, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, HideOverlay) == 0x150, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, IsOverlayVisible) == 0x158, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetTransformForOverlayCoordinates) == 0x160, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, PollNextOverlayEvent) == 0x168, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayInputMethod) == 0x170, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayInputMethod) == 0x178, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayMouseScale) == 0x180, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayMouseScale) == 0x188, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ComputeOverlayIntersection) == 0x190, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, IsHoverTargetOverlay) == 0x198, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetGamepadFocusOverlay) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetGamepadFocusOverlay) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayNeighbor) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, MoveGamepadFocusToNeighbor) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayDualAnalogTransform) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayDualAnalogTransform) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayTexture) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ClearOverlayTexture) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayRaw) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayFromFile) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTexture) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ReleaseNativeOverlayHandle) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayTextureSize) == 0x200, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, CreateDashboardOverlay) == 0x208, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, IsDashboardVisible) == 0x210, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, IsActiveDashboardOverlay) == 0x218, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetDashboardOverlaySceneProcess) == 0x220, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetDashboardOverlaySceneProcess) == 0x228, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ShowDashboard) == 0x230, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetPrimaryDashboardDevice) == 0x238, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ShowKeyboard) == 0x240, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ShowKeyboardForOverlay) == 0x248, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetKeyboardText) == 0x250, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, HideKeyboard) == 0x258, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetKeyboardTransformAbsolute) == 0x260, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetKeyboardPositionForOverlay) == 0x268, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, SetOverlayIntersectionMask) == 0x270, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, GetOverlayFlags) == 0x278, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, ShowMessageOverlay) == 0x280, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVROverlay, CloseMessageOverlay) == 0x288, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::IVROverlay) == 0x290, "Size mismatch!");

} // namespace OVR::OpenVR
