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
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_FindOverlay
class CORDL_TYPE IVROverlay__FindOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e34b34, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e34b8c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> pOverlayHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e34b20, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::by_ref<uint64_t> pOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__FindOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e34aa0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__FindOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__FindOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__FindOverlay(IVROverlay__FindOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__FindOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__FindOverlay(IVROverlay__FindOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__FindOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_CreateOverlay
class CORDL_TYPE IVROverlay__CreateOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e34c44, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e34c9c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> pOverlayHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e34c30, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ::by_ref<uint64_t> pOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__CreateOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e34bb0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__CreateOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__CreateOverlay(IVROverlay__CreateOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__CreateOverlay(IVROverlay__CreateOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__CreateOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_DestroyOverlay
class CORDL_TYPE IVROverlay__DestroyOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e34d40, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e34d94, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e34d2c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__DestroyOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e34cc0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__DestroyOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__DestroyOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__DestroyOverlay(IVROverlay__DestroyOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__DestroyOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__DestroyOverlay(IVROverlay__DestroyOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8179 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__DestroyOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetHighQualityOverlay
class CORDL_TYPE IVROverlay__SetHighQualityOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e34e38, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e34e8c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e34e24, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__SetHighQualityOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e34db8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetHighQualityOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetHighQualityOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetHighQualityOverlay(IVROverlay__SetHighQualityOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetHighQualityOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetHighQualityOverlay(IVROverlay__SetHighQualityOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetHighQualityOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetHighQualityOverlay
class CORDL_TYPE IVROverlay__GetHighQualityOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e34f2c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e34f48, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e34f18, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke();

  static inline ::OVR::OpenVR::IVROverlay__GetHighQualityOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e34eb0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetHighQualityOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetHighQualityOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetHighQualityOverlay(IVROverlay__GetHighQualityOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetHighQualityOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetHighQualityOverlay(IVROverlay__GetHighQualityOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetHighQualityOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayKey
class CORDL_TYPE IVROverlay__GetOverlayKey : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e34fec, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e350b8, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e34fd8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayKey* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e34f6c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayKey(IVROverlay__GetOverlayKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayKey(IVROverlay__GetOverlayKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayKey) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayName
class CORDL_TYPE IVROverlay__GetOverlayName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3515c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35228, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35148, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError> pError);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e350dc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayName(IVROverlay__GetOverlayName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayName(IVROverlay__GetOverlayName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8183 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayName
class CORDL_TYPE IVROverlay__SetOverlayName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e352cc, size 0x60, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3532c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e352b8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchName);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3524c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayName(IVROverlay__SetOverlayName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayName(IVROverlay__SetOverlayName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8184 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayImageData
class CORDL_TYPE IVROverlay__GetOverlayImageData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e353d0, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35498, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e353bc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ::by_ref<uint32_t> punWidth, ::by_ref<uint32_t> punHeight);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayImageData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35350, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayImageData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayImageData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayImageData(IVROverlay__GetOverlayImageData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayImageData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayImageData(IVROverlay__GetOverlayImageData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayImageData) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum
class CORDL_TYPE IVROverlay__GetOverlayErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35548, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e355d0, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35534, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVROverlayError error);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e354c8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayErrorNameFromEnum(IVROverlay__GetOverlayErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayErrorNameFromEnum(IVROverlay__GetOverlayErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid
class CORDL_TYPE IVROverlay__SetOverlayRenderingPid : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35674, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e356ec, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35660, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unPID);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e355f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayRenderingPid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderingPid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayRenderingPid(IVROverlay__SetOverlayRenderingPid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderingPid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayRenderingPid(IVROverlay__SetOverlayRenderingPid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid
class CORDL_TYPE IVROverlay__GetOverlayRenderingPid : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35790, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e357e4, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3577c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35710, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayRenderingPid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderingPid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayRenderingPid(IVROverlay__GetOverlayRenderingPid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderingPid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayRenderingPid(IVROverlay__GetOverlayRenderingPid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayFlag
class CORDL_TYPE IVROverlay__SetOverlayFlag : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35888, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35948, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35874, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayFlag* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35808, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayFlag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFlag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayFlag(IVROverlay__SetOverlayFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFlag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayFlag(IVROverlay__SetOverlayFlag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayFlag) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayFlag
class CORDL_TYPE IVROverlay__GetOverlayFlag : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e359ec, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35ab0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<bool> pbEnabled, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e359d8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ::by_ref<bool> pbEnabled);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayFlag* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3596c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayFlag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayFlag(IVROverlay__GetOverlayFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayFlag(IVROverlay__GetOverlayFlag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8190 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayFlag) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayColor
class CORDL_TYPE IVROverlay__SetOverlayColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35b54, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35bf8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35b40, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35ad4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayColor(IVROverlay__SetOverlayColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayColor(IVROverlay__SetOverlayColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayColor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayColor
class CORDL_TYPE IVROverlay__GetOverlayColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35c9c, size 0xb0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35d4c, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35c88, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfRed, ::by_ref<float_t> pfGreen, ::by_ref<float_t> pfBlue);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35c1c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayColor(IVROverlay__GetOverlayColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayColor(IVROverlay__GetOverlayColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8192 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayColor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayAlpha
class CORDL_TYPE IVROverlay__SetOverlayAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35dfc, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35e74, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35de8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fAlpha);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayAlpha* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35d7c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayAlpha(IVROverlay__SetOverlayAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayAlpha(IVROverlay__SetOverlayAlpha const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8193 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayAlpha) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayAlpha
class CORDL_TYPE IVROverlay__GetOverlayAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e35f18, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e35f90, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfAlpha, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e35f04, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfAlpha);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayAlpha* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35e98, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayAlpha(IVROverlay__GetOverlayAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayAlpha(IVROverlay__GetOverlayAlpha const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8194 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayAlpha) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTexelAspect
class CORDL_TYPE IVROverlay__SetOverlayTexelAspect : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36034, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e360ac, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36020, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e35fb4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTexelAspect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexelAspect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTexelAspect(IVROverlay__SetOverlayTexelAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexelAspect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTexelAspect(IVROverlay__SetOverlayTexelAspect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect
class CORDL_TYPE IVROverlay__GetOverlayTexelAspect : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36150, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e361c8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfTexelAspect, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3613c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfTexelAspect);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e360d0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTexelAspect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexelAspect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTexelAspect(IVROverlay__GetOverlayTexelAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexelAspect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTexelAspect(IVROverlay__GetOverlayTexelAspect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlaySortOrder
class CORDL_TYPE IVROverlay__SetOverlaySortOrder : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3626c, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e362e4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36258, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlaySortOrder* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e361ec, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlaySortOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlaySortOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlaySortOrder(IVROverlay__SetOverlaySortOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlaySortOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlaySortOrder(IVROverlay__SetOverlaySortOrder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8197 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlaySortOrder) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder
class CORDL_TYPE IVROverlay__GetOverlaySortOrder : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36388, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36400, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punSortOrder, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36374, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punSortOrder);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlaySortOrder* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36308, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlaySortOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlaySortOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlaySortOrder(IVROverlay__GetOverlaySortOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlaySortOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlaySortOrder(IVROverlay__GetOverlaySortOrder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlaySortOrder) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters
class CORDL_TYPE IVROverlay__SetOverlayWidthInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e364a4, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3651c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36490, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36424, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayWidthInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayWidthInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayWidthInMeters(IVROverlay__SetOverlayWidthInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayWidthInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayWidthInMeters(IVROverlay__SetOverlayWidthInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8199 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters
class CORDL_TYPE IVROverlay__GetOverlayWidthInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e365c0, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36638, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfWidthInMeters, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e365ac, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfWidthInMeters);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36540, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayWidthInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayWidthInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayWidthInMeters(IVROverlay__GetOverlayWidthInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayWidthInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayWidthInMeters(IVROverlay__GetOverlayWidthInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8200 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters
class CORDL_TYPE IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e366dc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36768, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e366c8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3665c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters
class CORDL_TYPE IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3680c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e368a4, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e367f8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<float_t> pfMinDistanceInMeters, ::by_ref<float_t> pfMaxDistanceInMeters);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3678c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters(IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace
class CORDL_TYPE IVROverlay__SetOverlayTextureColorSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36954, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e369f8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36940, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e368d4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTextureColorSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureColorSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTextureColorSpace(IVROverlay__SetOverlayTextureColorSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureColorSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTextureColorSpace(IVROverlay__SetOverlayTextureColorSpace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace
class CORDL_TYPE IVROverlay__GetOverlayTextureColorSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36a9c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36b44, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36a88, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace> peTextureColorSpace);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36a1c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTextureColorSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureColorSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTextureColorSpace(IVROverlay__GetOverlayTextureColorSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureColorSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTextureColorSpace(IVROverlay__GetOverlayTextureColorSpace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8204 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTextureBounds
class CORDL_TYPE IVROverlay__SetOverlayTextureBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36be8, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36c90, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36bd4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36b68, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTextureBounds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureBounds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTextureBounds(IVROverlay__SetOverlayTextureBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTextureBounds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTextureBounds(IVROverlay__SetOverlayTextureBounds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8205 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTextureBounds
class CORDL_TYPE IVROverlay__GetOverlayTextureBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36d34, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36ddc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36d20, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36cb4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTextureBounds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureBounds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTextureBounds(IVROverlay__GetOverlayTextureBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureBounds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTextureBounds(IVROverlay__GetOverlayTextureBounds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8206 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayRenderModel
class CORDL_TYPE IVROverlay__GetOverlayRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e36e80, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor,
                                             ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e36f80, size 0x30, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::by_ref<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e36e6c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor,
                         ::by_ref<::OVR::OpenVR::EVROverlayError> pError);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayRenderModel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36e00, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayRenderModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayRenderModel(IVROverlay__GetOverlayRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayRenderModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayRenderModel(IVROverlay__GetOverlayRenderModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8207 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayRenderModel) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayRenderModel
class CORDL_TYPE IVROverlay__SetOverlayRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37030, size 0xb0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e370e0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3701c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t> pColor);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayRenderModel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e36fb0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayRenderModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayRenderModel(IVROverlay__SetOverlayRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRenderModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayRenderModel(IVROverlay__SetOverlayRenderModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayRenderModel) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformType
class CORDL_TYPE IVROverlay__GetOverlayTransformType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37184, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3722c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37170, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType> peTransformType);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37104, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformType(IVROverlay__GetOverlayTransformType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformType(IVROverlay__GetOverlayTransformType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformType) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute
class CORDL_TYPE IVROverlay__SetOverlayTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e372d0, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e373a8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e372bc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                               ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37250, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformAbsolute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformAbsolute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformAbsolute(IVROverlay__SetOverlayTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformAbsolute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformAbsolute(IVROverlay__SetOverlayTransformAbsolute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8210 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute
class CORDL_TYPE IVROverlay__GetOverlayTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3744c, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37528, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                  ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37438, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                               ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e373cc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformAbsolute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformAbsolute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformAbsolute(IVROverlay__GetOverlayTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformAbsolute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformAbsolute(IVROverlay__GetOverlayTransformAbsolute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8211 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative
class CORDL_TYPE IVROverlay__SetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e375d8, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3769c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e375c4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37558, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformTrackedDeviceRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformTrackedDeviceRelative(IVROverlay__SetOverlayTransformTrackedDeviceRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformTrackedDeviceRelative(IVROverlay__SetOverlayTransformTrackedDeviceRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative
class CORDL_TYPE IVROverlay__GetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37740, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37808, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3772c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e376c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformTrackedDeviceRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformTrackedDeviceRelative(IVROverlay__GetOverlayTransformTrackedDeviceRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformTrackedDeviceRelative(IVROverlay__GetOverlayTransformTrackedDeviceRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8213 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent
class CORDL_TYPE IVROverlay__SetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e378b8, size 0x80, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37938, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e378a4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37838, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformTrackedDeviceComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformTrackedDeviceComponent(IVROverlay__SetOverlayTransformTrackedDeviceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformTrackedDeviceComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformTrackedDeviceComponent(IVROverlay__SetOverlayTransformTrackedDeviceComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent
class CORDL_TYPE IVROverlay__GetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e379dc, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37a78, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punDeviceIndex, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e379c8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3795c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformTrackedDeviceComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformTrackedDeviceComponent(IVROverlay__GetOverlayTransformTrackedDeviceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformTrackedDeviceComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformTrackedDeviceComponent(IVROverlay__GetOverlayTransformTrackedDeviceComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8215 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTransformOverlayRelative
class CORDL_TYPE IVROverlay__GetOverlayTransformOverlayRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37b1c, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37be0, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37b08, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint64_t> ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37a9c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTransformOverlayRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTransformOverlayRelative(IVROverlay__GetOverlayTransformOverlayRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTransformOverlayRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTransformOverlayRelative(IVROverlay__GetOverlayTransformOverlayRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8216 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTransformOverlayRelative
class CORDL_TYPE IVROverlay__SetOverlayTransformOverlayRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37c90, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37d50, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37c7c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37c10, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTransformOverlayRelative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTransformOverlayRelative(IVROverlay__SetOverlayTransformOverlayRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTransformOverlayRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTransformOverlayRelative(IVROverlay__SetOverlayTransformOverlayRelative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowOverlay
class CORDL_TYPE IVROverlay__ShowOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37df4, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37e48, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37de0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__ShowOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37d74, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowOverlay(IVROverlay__ShowOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowOverlay(IVROverlay__ShowOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8218 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_HideOverlay
class CORDL_TYPE IVROverlay__HideOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37eec, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e37f40, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37ed8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__HideOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37e6c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__HideOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__HideOverlay(IVROverlay__HideOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__HideOverlay(IVROverlay__HideOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__HideOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsOverlayVisible
class CORDL_TYPE IVROverlay__IsOverlayVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e37fe4, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38038, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e37fd0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__IsOverlayVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e37f64, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsOverlayVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsOverlayVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsOverlayVisible(IVROverlay__IsOverlayVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsOverlayVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsOverlayVisible(IVROverlay__IsOverlayVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsOverlayVisible) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates
class CORDL_TYPE IVROverlay__GetTransformForOverlayCoordinates : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e380dc, size 0x108, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                             ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e381e4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e380c8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                               ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTransform);

  static inline ::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3805c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetTransformForOverlayCoordinates();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetTransformForOverlayCoordinates", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetTransformForOverlayCoordinates(IVROverlay__GetTransformForOverlayCoordinates&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetTransformForOverlayCoordinates", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetTransformForOverlayCoordinates(IVROverlay__GetTransformForOverlayCoordinates const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_PollNextOverlayEvent
class CORDL_TYPE IVROverlay__PollNextOverlayEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38288, size 0xc4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3834c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38274, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  static inline ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38208, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__PollNextOverlayEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__PollNextOverlayEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__PollNextOverlayEvent(IVROverlay__PollNextOverlayEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__PollNextOverlayEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__PollNextOverlayEvent(IVROverlay__PollNextOverlayEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8222 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayInputMethod
class CORDL_TYPE IVROverlay__GetOverlayInputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e383f0, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38498, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e383dc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod> peInputMethod);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayInputMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38370, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayInputMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayInputMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayInputMethod(IVROverlay__GetOverlayInputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayInputMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayInputMethod(IVROverlay__GetOverlayInputMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayInputMethod) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayInputMethod
class CORDL_TYPE IVROverlay__SetOverlayInputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3853c, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e385e0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38528, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayInputMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e384bc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayInputMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayInputMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayInputMethod(IVROverlay__SetOverlayInputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayInputMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayInputMethod(IVROverlay__SetOverlayInputMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayInputMethod) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayMouseScale
class CORDL_TYPE IVROverlay__GetOverlayMouseScale : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38684, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3872c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38670, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayMouseScale* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38604, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayMouseScale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayMouseScale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayMouseScale(IVROverlay__GetOverlayMouseScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayMouseScale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayMouseScale(IVROverlay__GetOverlayMouseScale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8225 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayMouseScale) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayMouseScale
class CORDL_TYPE IVROverlay__SetOverlayMouseScale : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e387d0, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38878, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e387bc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayMouseScale* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38750, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayMouseScale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayMouseScale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayMouseScale(IVROverlay__SetOverlayMouseScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayMouseScale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayMouseScale(IVROverlay__SetOverlayMouseScale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayMouseScale) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ComputeOverlayIntersection
class CORDL_TYPE IVROverlay__ComputeOverlayIntersection : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3891c, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e389f8, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38908, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults);

  static inline ::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3889c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ComputeOverlayIntersection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ComputeOverlayIntersection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ComputeOverlayIntersection(IVROverlay__ComputeOverlayIntersection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ComputeOverlayIntersection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ComputeOverlayIntersection(IVROverlay__ComputeOverlayIntersection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8227 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay
class CORDL_TYPE IVROverlay__IsHoverTargetOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38aa8, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38afc, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38a94, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38a28, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsHoverTargetOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsHoverTargetOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsHoverTargetOverlay(IVROverlay__IsHoverTargetOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsHoverTargetOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsHoverTargetOverlay(IVROverlay__IsHoverTargetOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8228 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetGamepadFocusOverlay
class CORDL_TYPE IVROverlay__GetGamepadFocusOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38b9c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38bb8, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38b88, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke();

  static inline ::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38b20, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetGamepadFocusOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetGamepadFocusOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetGamepadFocusOverlay(IVROverlay__GetGamepadFocusOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetGamepadFocusOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetGamepadFocusOverlay(IVROverlay__GetGamepadFocusOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8229 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay
class CORDL_TYPE IVROverlay__SetGamepadFocusOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38c5c, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38cb0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38c48, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulNewFocusOverlay);

  static inline ::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38bdc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetGamepadFocusOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetGamepadFocusOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetGamepadFocusOverlay(IVROverlay__SetGamepadFocusOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetGamepadFocusOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetGamepadFocusOverlay(IVROverlay__SetGamepadFocusOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8230 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayNeighbor
class CORDL_TYPE IVROverlay__SetOverlayNeighbor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38d54, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38e0c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38d40, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayNeighbor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38cd4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayNeighbor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayNeighbor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayNeighbor(IVROverlay__SetOverlayNeighbor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayNeighbor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayNeighbor(IVROverlay__SetOverlayNeighbor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8231 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayNeighbor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
class CORDL_TYPE IVROverlay__MoveGamepadFocusToNeighbor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38eb0, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e38f54, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38e9c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);

  static inline ::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38e30, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__MoveGamepadFocusToNeighbor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__MoveGamepadFocusToNeighbor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__MoveGamepadFocusToNeighbor(IVROverlay__MoveGamepadFocusToNeighbor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__MoveGamepadFocusToNeighbor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__MoveGamepadFocusToNeighbor(IVROverlay__MoveGamepadFocusToNeighbor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8232 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform
class CORDL_TYPE IVROverlay__SetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e38ff8, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter, float_t fRadius, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e390d0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e38fe4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter, float_t fRadius);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e38f78, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayDualAnalogTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayDualAnalogTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayDualAnalogTransform(IVROverlay__SetOverlayDualAnalogTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayDualAnalogTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayDualAnalogTransform(IVROverlay__SetOverlayDualAnalogTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8233 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform
class CORDL_TYPE IVROverlay__GetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39174, size 0xf8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3926c, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39160, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t> pvCenter, ::by_ref<float_t> pfRadius);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e390f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayDualAnalogTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayDualAnalogTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayDualAnalogTransform(IVROverlay__GetOverlayDualAnalogTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayDualAnalogTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayDualAnalogTransform(IVROverlay__GetOverlayDualAnalogTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8234 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayTexture
class CORDL_TYPE IVROverlay__SetOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3931c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e393c4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39308, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t> pTexture);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3929c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayTexture(IVROverlay__SetOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayTexture(IVROverlay__SetOverlayTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8235 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ClearOverlayTexture
class CORDL_TYPE IVROverlay__ClearOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39468, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e394bc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39454, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__ClearOverlayTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e393e8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ClearOverlayTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ClearOverlayTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ClearOverlayTexture(IVROverlay__ClearOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ClearOverlayTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ClearOverlayTexture(IVROverlay__ClearOverlayTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8236 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ClearOverlayTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayRaw
class CORDL_TYPE IVROverlay__SetOverlayRaw : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39560, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3961c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3954c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayRaw* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e394e0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayRaw(IVROverlay__SetOverlayRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayRaw(IVROverlay__SetOverlayRaw const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8237 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayRaw) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayFromFile
class CORDL_TYPE IVROverlay__SetOverlayFromFile : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e396c0, size 0x60, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39720, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e396ac, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayFromFile* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39640, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayFromFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFromFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayFromFile(IVROverlay__SetOverlayFromFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayFromFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayFromFile(IVROverlay__SetOverlayFromFile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8238 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayFromFile) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTexture
class CORDL_TYPE IVROverlay__GetOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e397d0, size 0x18c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::by_ref<uint32_t> pWidth,
                                             ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat, ::by_ref<::OVR::OpenVR::ETextureType> pAPIType,
                                             ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3995c, size 0x38, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::System::IntPtr> pNativeTextureHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat,
                                                  ::by_ref<::OVR::OpenVR::ETextureType> pAPIType, ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                  ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e397b0, size 0x20, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ::by_ref<uint32_t> pWidth,
                                               ::by_ref<uint32_t> pHeight, ::by_ref<uint32_t> pNativeFormat, ::by_ref<::OVR::OpenVR::ETextureType> pAPIType,
                                               ::by_ref<::OVR::OpenVR::EColorSpace> pColorSpace, ::by_ref<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39744, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTexture(IVROverlay__GetOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTexture(IVROverlay__GetOverlayTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ReleaseNativeOverlayHandle
class CORDL_TYPE IVROverlay__ReleaseNativeOverlayHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39a14, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39a8c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39a00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle);

  static inline ::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39994, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ReleaseNativeOverlayHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ReleaseNativeOverlayHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ReleaseNativeOverlayHandle(IVROverlay__ReleaseNativeOverlayHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ReleaseNativeOverlayHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ReleaseNativeOverlayHandle(IVROverlay__ReleaseNativeOverlayHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8240 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayTextureSize
class CORDL_TYPE IVROverlay__GetOverlayTextureSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39b30, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39bc8, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39b1c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pWidth, ::by_ref<uint32_t> pHeight);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayTextureSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39ab0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayTextureSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayTextureSize(IVROverlay__GetOverlayTextureSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayTextureSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayTextureSize(IVROverlay__GetOverlayTextureSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8241 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayTextureSize) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_CreateDashboardOverlay
class CORDL_TYPE IVROverlay__CreateDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39c8c, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39d04, size 0x30, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39c78, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ::by_ref<uint64_t> pMainHandle, ::by_ref<uint64_t> pThumbnailHandle);

  static inline ::OVR::OpenVR::IVROverlay__CreateDashboardOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39bf8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__CreateDashboardOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateDashboardOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__CreateDashboardOverlay(IVROverlay__CreateDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CreateDashboardOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__CreateDashboardOverlay(IVROverlay__CreateDashboardOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8242 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__CreateDashboardOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsDashboardVisible
class CORDL_TYPE IVROverlay__IsDashboardVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39db0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39dcc, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39d9c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVROverlay__IsDashboardVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39d34, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsDashboardVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsDashboardVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsDashboardVisible(IVROverlay__IsDashboardVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsDashboardVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsDashboardVisible(IVROverlay__IsDashboardVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8243 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsDashboardVisible) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay
class CORDL_TYPE IVROverlay__IsActiveDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39e70, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39ec4, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39e5c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  static inline ::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39df0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__IsActiveDashboardOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsActiveDashboardOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__IsActiveDashboardOverlay(IVROverlay__IsActiveDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__IsActiveDashboardOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__IsActiveDashboardOverlay(IVROverlay__IsActiveDashboardOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8244 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetDashboardOverlaySceneProcess
class CORDL_TYPE IVROverlay__SetDashboardOverlaySceneProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e39f68, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e39fe0, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e39f54, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId);

  static inline ::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e39ee8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetDashboardOverlaySceneProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetDashboardOverlaySceneProcess(IVROverlay__SetDashboardOverlaySceneProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetDashboardOverlaySceneProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetDashboardOverlaySceneProcess(IVROverlay__SetDashboardOverlaySceneProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetDashboardOverlaySceneProcess
class CORDL_TYPE IVROverlay__GetDashboardOverlaySceneProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a084, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a0fc, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> punProcessId, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a070, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> punProcessId);

  static inline ::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a004, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetDashboardOverlaySceneProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetDashboardOverlaySceneProcess(IVROverlay__GetDashboardOverlaySceneProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetDashboardOverlaySceneProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetDashboardOverlaySceneProcess(IVROverlay__GetDashboardOverlaySceneProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8246 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowDashboard
class CORDL_TYPE IVROverlay__ShowDashboard : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a1b0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a1d0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a19c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchOverlayToShow);

  static inline ::OVR::OpenVR::IVROverlay__ShowDashboard* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a120, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowDashboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowDashboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowDashboard(IVROverlay__ShowDashboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowDashboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowDashboard(IVROverlay__ShowDashboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowDashboard) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetPrimaryDashboardDevice
class CORDL_TYPE IVROverlay__GetPrimaryDashboardDevice : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a258, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a274, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a244, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a1dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetPrimaryDashboardDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetPrimaryDashboardDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetPrimaryDashboardDevice(IVROverlay__GetPrimaryDashboardDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetPrimaryDashboardDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetPrimaryDashboardDevice(IVROverlay__GetPrimaryDashboardDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowKeyboard
class CORDL_TYPE IVROverlay__ShowKeyboard : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a31c, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                             uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a3e4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a304, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                               uint64_t uUserValue);

  static inline ::OVR::OpenVR::IVROverlay__ShowKeyboard* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a298, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowKeyboard(IVROverlay__ShowKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowKeyboard(IVROverlay__ShowKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowKeyboard) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowKeyboardForOverlay
class CORDL_TYPE IVROverlay__ShowKeyboardForOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a490, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                             bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a56c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a474, size 0x1c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                               bool bUseMinimalMode, uint64_t uUserValue);

  static inline ::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a408, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowKeyboardForOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboardForOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowKeyboardForOverlay(IVROverlay__ShowKeyboardForOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowKeyboardForOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowKeyboardForOverlay(IVROverlay__ShowKeyboardForOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetKeyboardText
class CORDL_TYPE IVROverlay__GetKeyboardText : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a624, size 0x5c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchText, uint32_t cchText, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a680, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a610, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::System::Text::StringBuilder* pchText, uint32_t cchText);

  static inline ::OVR::OpenVR::IVROverlay__GetKeyboardText* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a590, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetKeyboardText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetKeyboardText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetKeyboardText(IVROverlay__GetKeyboardText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetKeyboardText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetKeyboardText(IVROverlay__GetKeyboardText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8251 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetKeyboardText) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_HideKeyboard
class CORDL_TYPE IVROverlay__HideKeyboard : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a720, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a73c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a70c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVROverlay__HideKeyboard* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a6a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__HideKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__HideKeyboard(IVROverlay__HideKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__HideKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__HideKeyboard(IVROverlay__HideKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8252 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__HideKeyboard) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute
class CORDL_TYPE IVROverlay__SetKeyboardTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a7c8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a888, size 0x18, virtual true, abstract: false, final false
  inline void EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a7b4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform);

  static inline ::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a748, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetKeyboardTransformAbsolute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardTransformAbsolute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetKeyboardTransformAbsolute(IVROverlay__SetKeyboardTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardTransformAbsolute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetKeyboardTransformAbsolute(IVROverlay__SetKeyboardTransformAbsolute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8253 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetKeyboardPositionForOverlay
class CORDL_TYPE IVROverlay__SetKeyboardPositionForOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3a920, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3a9c8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3a90c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect);

  static inline ::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a8a0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetKeyboardPositionForOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardPositionForOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetKeyboardPositionForOverlay(IVROverlay__SetKeyboardPositionForOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetKeyboardPositionForOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetKeyboardPositionForOverlay(IVROverlay__SetKeyboardPositionForOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8254 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask
class CORDL_TYPE IVROverlay__SetOverlayIntersectionMask : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3aa54, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                             uint32_t unPrimitiveSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3ab2c, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3aa40, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                               uint32_t unPrimitiveSize);

  static inline ::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3a9d4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__SetOverlayIntersectionMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayIntersectionMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__SetOverlayIntersectionMask(IVROverlay__SetOverlayIntersectionMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__SetOverlayIntersectionMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__SetOverlayIntersectionMask(IVROverlay__SetOverlayIntersectionMask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_GetOverlayFlags
class CORDL_TYPE IVROverlay__GetOverlayFlags : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3abd0, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3ac48, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::by_ref<uint32_t> pFlags, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3abbc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::by_ref<uint32_t> pFlags);

  static inline ::OVR::OpenVR::IVROverlay__GetOverlayFlags* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3ab50, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__GetOverlayFlags();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__GetOverlayFlags(IVROverlay__GetOverlayFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__GetOverlayFlags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__GetOverlayFlags(IVROverlay__GetOverlayFlags const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__GetOverlayFlags) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_ShowMessageOverlay
class CORDL_TYPE IVROverlay__ShowMessageOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3ad00, size 0x30, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3ad30, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3acec, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text,
                                                        ::StringW pchButton3Text);

  static inline ::OVR::OpenVR::IVROverlay__ShowMessageOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3ac6c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__ShowMessageOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowMessageOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__ShowMessageOverlay(IVROverlay__ShowMessageOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__ShowMessageOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__ShowMessageOverlay(IVROverlay__ShowMessageOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVROverlay__ShowMessageOverlay) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVROverlay/_CloseMessageOverlay
class CORDL_TYPE IVROverlay__CloseMessageOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3add0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3adec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3adbc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVROverlay__CloseMessageOverlay* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3ad54, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay__CloseMessageOverlay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CloseMessageOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVROverlay__CloseMessageOverlay(IVROverlay__CloseMessageOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVROverlay__CloseMessageOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVROverlay__CloseMessageOverlay(IVROverlay__CloseMessageOverlay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8258 };

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

  // Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::IVROverlay__FindOverlay*", modifiers: "", def_value: None }, CppParam { name: "CreateOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__CreateOverlay*", modifiers: "", def_value: None }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::IVROverlay__DestroyOverlay*", modifiers: "", def_value: None
  // }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::IVROverlay__SetHighQualityOverlay*", modifiers: "", def_value: None }, CppParam { name: "GetHighQualityOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__GetHighQualityOverlay*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayKey", ty: "::OVR::OpenVR::IVROverlay__GetOverlayKey*", modifiers: "", def_value:
  // None }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::IVROverlay__GetOverlayName*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayName", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayName*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayImageData", ty: "::OVR::OpenVR::IVROverlay__GetOverlayImageData*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOverlayErrorNameFromEnum", ty: "::OVR::OpenVR::IVROverlay__GetOverlayErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayRenderingPid", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRenderingPid*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayRenderingPid", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayRenderingPid*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__SetOverlayFlag*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::IVROverlay__GetOverlayFlag*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayColor", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayColor*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayColor", ty: "::OVR::OpenVR::IVROverlay__GetOverlayColor*", modifiers: "", def_value:
  // None }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::IVROverlay__SetOverlayAlpha*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayAlpha", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayAlpha*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexelAspect*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOverlayTexelAspect", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTexelAspect*", modifiers: "", def_value: None }, CppParam { name: "SetOverlaySortOrder", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlaySortOrder*", modifiers: "", def_value: None }, CppParam { name: "GetOverlaySortOrder", ty: "::OVR::OpenVR::IVROverlay__GetOverlaySortOrder*", modifiers: "",
  // def_value: None }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__SetOverlayWidthInMeters*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::IVROverlay__GetOverlayWidthInMeters*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayAutoCurveDistanceRangeInMeters", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayAutoCurveDistanceRangeInMeters", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTextureColorSpace", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTextureColorSpace*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureColorSpace", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTextureColorSpace*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTextureBounds", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTextureBounds*",
  // modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureBounds", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTextureBounds*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayRenderModel", ty: "::OVR::OpenVR::IVROverlay__GetOverlayRenderModel*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayRenderModel", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayRenderModel*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformType", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTransformType*",
  // modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformAbsolute", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTransformAbsolute*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayTransformAbsolute", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTransformAbsolute*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformOverlayRelative", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTransformOverlayRelative*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformOverlayRelative", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayTransformOverlayRelative*", modifiers: "", def_value: None }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowOverlay*", modifiers: "",
  // def_value: None }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::IVROverlay__HideOverlay*", modifiers: "", def_value: None }, CppParam { name: "IsOverlayVisible", ty:
  // "::OVR::OpenVR::IVROverlay__IsOverlayVisible*", modifiers: "", def_value: None }, CppParam { name: "GetTransformForOverlayCoordinates", ty:
  // "::OVR::OpenVR::IVROverlay__GetTransformForOverlayCoordinates*", modifiers: "", def_value: None }, CppParam { name: "PollNextOverlayEvent", ty: "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*",
  // modifiers: "", def_value: None }, CppParam { name: "GetOverlayInputMethod", ty: "::OVR::OpenVR::IVROverlay__GetOverlayInputMethod*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayInputMethod", ty: "::OVR::OpenVR::IVROverlay__SetOverlayInputMethod*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayMouseScale", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayMouseScale*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayMouseScale", ty: "::OVR::OpenVR::IVROverlay__SetOverlayMouseScale*", modifiers:
  // "", def_value: None }, CppParam { name: "ComputeOverlayIntersection", ty: "::OVR::OpenVR::IVROverlay__ComputeOverlayIntersection*", modifiers: "", def_value: None }, CppParam { name:
  // "IsHoverTargetOverlay", ty: "::OVR::OpenVR::IVROverlay__IsHoverTargetOverlay*", modifiers: "", def_value: None }, CppParam { name: "GetGamepadFocusOverlay", ty:
  // "::OVR::OpenVR::IVROverlay__GetGamepadFocusOverlay*", modifiers: "", def_value: None }, CppParam { name: "SetGamepadFocusOverlay", ty: "::OVR::OpenVR::IVROverlay__SetGamepadFocusOverlay*",
  // modifiers: "", def_value: None }, CppParam { name: "SetOverlayNeighbor", ty: "::OVR::OpenVR::IVROverlay__SetOverlayNeighbor*", modifiers: "", def_value: None }, CppParam { name:
  // "MoveGamepadFocusToNeighbor", ty: "::OVR::OpenVR::IVROverlay__MoveGamepadFocusToNeighbor*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayDualAnalogTransform", ty:
  // "::OVR::OpenVR::IVROverlay__SetOverlayDualAnalogTransform*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayDualAnalogTransform", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayDualAnalogTransform*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__SetOverlayTexture*",
  // modifiers: "", def_value: None }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__ClearOverlayTexture*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayRaw", ty: "::OVR::OpenVR::IVROverlay__SetOverlayRaw*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayFromFile", ty: "::OVR::OpenVR::IVROverlay__SetOverlayFromFile*",
  // modifiers: "", def_value: None }, CppParam { name: "GetOverlayTexture", ty: "::OVR::OpenVR::IVROverlay__GetOverlayTexture*", modifiers: "", def_value: None }, CppParam { name:
  // "ReleaseNativeOverlayHandle", ty: "::OVR::OpenVR::IVROverlay__ReleaseNativeOverlayHandle*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureSize", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayTextureSize*", modifiers: "", def_value: None }, CppParam { name: "CreateDashboardOverlay", ty: "::OVR::OpenVR::IVROverlay__CreateDashboardOverlay*",
  // modifiers: "", def_value: None }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::IVROverlay__IsDashboardVisible*", modifiers: "", def_value: None }, CppParam { name:
  // "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::IVROverlay__IsActiveDashboardOverlay*", modifiers: "", def_value: None }, CppParam { name: "SetDashboardOverlaySceneProcess", ty:
  // "::OVR::OpenVR::IVROverlay__SetDashboardOverlaySceneProcess*", modifiers: "", def_value: None }, CppParam { name: "GetDashboardOverlaySceneProcess", ty:
  // "::OVR::OpenVR::IVROverlay__GetDashboardOverlaySceneProcess*", modifiers: "", def_value: None }, CppParam { name: "ShowDashboard", ty: "::OVR::OpenVR::IVROverlay__ShowDashboard*", modifiers: "",
  // def_value: None }, CppParam { name: "GetPrimaryDashboardDevice", ty: "::OVR::OpenVR::IVROverlay__GetPrimaryDashboardDevice*", modifiers: "", def_value: None }, CppParam { name: "ShowKeyboard",
  // ty: "::OVR::OpenVR::IVROverlay__ShowKeyboard*", modifiers: "", def_value: None }, CppParam { name: "ShowKeyboardForOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowKeyboardForOverlay*", modifiers:
  // "", def_value: None }, CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::IVROverlay__GetKeyboardText*", modifiers: "", def_value: None }, CppParam { name: "HideKeyboard", ty:
  // "::OVR::OpenVR::IVROverlay__HideKeyboard*", modifiers: "", def_value: None }, CppParam { name: "SetKeyboardTransformAbsolute", ty: "::OVR::OpenVR::IVROverlay__SetKeyboardTransformAbsolute*",
  // modifiers: "", def_value: None }, CppParam { name: "SetKeyboardPositionForOverlay", ty: "::OVR::OpenVR::IVROverlay__SetKeyboardPositionForOverlay*", modifiers: "", def_value: None }, CppParam {
  // name: "SetOverlayIntersectionMask", ty: "::OVR::OpenVR::IVROverlay__SetOverlayIntersectionMask*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayFlags", ty:
  // "::OVR::OpenVR::IVROverlay__GetOverlayFlags*", modifiers: "", def_value: None }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__ShowMessageOverlay*", modifiers: "",
  // def_value: None }, CppParam { name: "CloseMessageOverlay", ty: "::OVR::OpenVR::IVROverlay__CloseMessageOverlay*", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8259 };

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
