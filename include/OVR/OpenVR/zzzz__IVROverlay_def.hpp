#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace OVR::OpenVR {
class __IVROverlay___ClearOverlayTexture;
}
namespace OVR::OpenVR {
class __IVROverlay___CloseMessageOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___ComputeOverlayIntersection;
}
namespace OVR::OpenVR {
class __IVROverlay___CreateDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___CreateOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___DestroyOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___FindOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___GetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class __IVROverlay___GetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___GetHighQualityOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___GetKeyboardText;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayAlpha;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayColor;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayFlag;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayFlags;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayImageData;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayInputMethod;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayKey;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayMouseScale;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayName;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayRenderModel;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlaySortOrder;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTextureSize;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTexture;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformType;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___GetPrimaryDashboardDevice;
}
namespace OVR::OpenVR {
class __IVROverlay___GetTransformForOverlayCoordinates;
}
namespace OVR::OpenVR {
class __IVROverlay___HideKeyboard;
}
namespace OVR::OpenVR {
class __IVROverlay___HideOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___IsActiveDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___IsDashboardVisible;
}
namespace OVR::OpenVR {
class __IVROverlay___IsHoverTargetOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___IsOverlayVisible;
}
namespace OVR::OpenVR {
class __IVROverlay___MoveGamepadFocusToNeighbor;
}
namespace OVR::OpenVR {
class __IVROverlay___PollNextOverlayEvent;
}
namespace OVR::OpenVR {
class __IVROverlay___ReleaseNativeOverlayHandle;
}
namespace OVR::OpenVR {
class __IVROverlay___SetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class __IVROverlay___SetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___SetHighQualityOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___SetKeyboardPositionForOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___SetKeyboardTransformAbsolute;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayAlpha;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayColor;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayFlag;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayFromFile;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayInputMethod;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayIntersectionMask;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayMouseScale;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayName;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayNeighbor;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayRaw;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayRenderModel;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlaySortOrder;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTexture;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowDashboard;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowKeyboardForOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowKeyboard;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowMessageOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowOverlay;
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
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVROverlay___ClearOverlayTexture;
}
namespace OVR::OpenVR {
class __IVROverlay___CloseMessageOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___ComputeOverlayIntersection;
}
namespace OVR::OpenVR {
class __IVROverlay___CreateDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___CreateOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___DestroyOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___FindOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___GetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class __IVROverlay___GetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___GetHighQualityOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___GetKeyboardText;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayAlpha;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayColor;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayFlag;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayFlags;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayImageData;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayInputMethod;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayKey;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayMouseScale;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayName;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayRenderModel;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlaySortOrder;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTexture;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTextureSize;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayTransformType;
}
namespace OVR::OpenVR {
class __IVROverlay___GetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___GetPrimaryDashboardDevice;
}
namespace OVR::OpenVR {
class __IVROverlay___GetTransformForOverlayCoordinates;
}
namespace OVR::OpenVR {
class __IVROverlay___HideKeyboard;
}
namespace OVR::OpenVR {
class __IVROverlay___HideOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___IsActiveDashboardOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___IsDashboardVisible;
}
namespace OVR::OpenVR {
class __IVROverlay___IsHoverTargetOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___IsOverlayVisible;
}
namespace OVR::OpenVR {
class __IVROverlay___MoveGamepadFocusToNeighbor;
}
namespace OVR::OpenVR {
class __IVROverlay___PollNextOverlayEvent;
}
namespace OVR::OpenVR {
class __IVROverlay___ReleaseNativeOverlayHandle;
}
namespace OVR::OpenVR {
class __IVROverlay___SetDashboardOverlaySceneProcess;
}
namespace OVR::OpenVR {
class __IVROverlay___SetGamepadFocusOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___SetHighQualityOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___SetKeyboardPositionForOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___SetKeyboardTransformAbsolute;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayAlpha;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayColor;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayDualAnalogTransform;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayFlag;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayFromFile;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayInputMethod;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayIntersectionMask;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayMouseScale;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayName;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayNeighbor;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayRaw;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayRenderModel;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayRenderingPid;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlaySortOrder;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTexelAspect;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTexture;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTextureBounds;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTextureColorSpace;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformAbsolute;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformOverlayRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformTrackedDeviceComponent;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayTransformTrackedDeviceRelative;
}
namespace OVR::OpenVR {
class __IVROverlay___SetOverlayWidthInMeters;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowDashboard;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowKeyboard;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowKeyboardForOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowMessageOverlay;
}
namespace OVR::OpenVR {
class __IVROverlay___ShowOverlay;
}
namespace OVR::OpenVR {
struct IVROverlay;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ClearOverlayTexture);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___CloseMessageOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___CreateOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___DestroyOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___FindOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetKeyboardText);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayAlpha);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayColor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayFlag);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayFlags);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayImageData);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayKey);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTexture);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayTransformType);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___HideKeyboard);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___HideOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___IsDashboardVisible);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___IsOverlayVisible);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayAlpha);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayColor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayFlag);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayFromFile);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayRaw);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTexture);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ShowDashboard);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ShowKeyboard);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ShowMessageOverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__IVROverlay___ShowOverlay);
MARK_VAL_T(::OVR::OpenVR::IVROverlay);
// Type: ::_FindOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8332))
// CS Name: ::IVROverlay::_FindOverlay*
class CORDL_TYPE __IVROverlay___FindOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___FindOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed510, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ed5e8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27ed5fc, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ed690, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___FindOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___FindOverlay(__IVROverlay___FindOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___FindOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___FindOverlay(__IVROverlay___FindOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___FindOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___FindOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CreateOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8333))
// CS Name: ::IVROverlay::_CreateOverlay*
class CORDL_TYPE __IVROverlay___CreateOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___CreateOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed6bc, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ed794, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27ed7a8, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ed848, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___CreateOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___CreateOverlay(__IVROverlay___CreateOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___CreateOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___CreateOverlay(__IVROverlay___CreateOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___CreateOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___CreateOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_DestroyOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8334))
// CS Name: ::IVROverlay::_DestroyOverlay*
class CORDL_TYPE __IVROverlay___DestroyOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___DestroyOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed874, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ed938, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27ed94c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ed9d0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___DestroyOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___DestroyOverlay(__IVROverlay___DestroyOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___DestroyOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___DestroyOverlay(__IVROverlay___DestroyOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___DestroyOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___DestroyOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetHighQualityOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8335))
// CS Name: ::IVROverlay::_SetHighQualityOverlay*
class CORDL_TYPE __IVROverlay___SetHighQualityOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed9f8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27edabc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27edad0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27edb54, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetHighQualityOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetHighQualityOverlay(__IVROverlay___SetHighQualityOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetHighQualityOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetHighQualityOverlay(__IVROverlay___SetHighQualityOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetHighQualityOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetHighQualityOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8336))
// CS Name: ::IVROverlay::_GetHighQualityOverlay*
class CORDL_TYPE __IVROverlay___GetHighQualityOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27edb7c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27edc38, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27edc4c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27edc6c, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetHighQualityOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetHighQualityOverlay(__IVROverlay___GetHighQualityOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetHighQualityOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetHighQualityOverlay(__IVROverlay___GetHighQualityOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetHighQualityOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayKey
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8337))
// CS Name: ::IVROverlay::_GetOverlayKey*
class CORDL_TYPE __IVROverlay___GetOverlayKey : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayKey* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27edc94, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27edd58, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method BeginInvoke, addr 0x27edd6c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ede5c, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayKey(__IVROverlay___GetOverlayKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayKey(__IVROverlay___GetOverlayKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayKey();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayKey, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8338))
// CS Name: ::IVROverlay::_GetOverlayName*
class CORDL_TYPE __IVROverlay___GetOverlayName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ede88, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27edf4c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method BeginInvoke, addr 0x27edf60, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ee050, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayName(__IVROverlay___GetOverlayName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayName(__IVROverlay___GetOverlayName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8339))
// CS Name: ::IVROverlay::_SetOverlayName*
class CORDL_TYPE __IVROverlay___SetOverlayName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ee07c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ee140, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchName);

  /// @brief Method BeginInvoke, addr 0x27ee154, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ee1e0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayName(__IVROverlay___SetOverlayName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayName(__IVROverlay___SetOverlayName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayImageData
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8340))
// CS Name: ::IVROverlay::_GetOverlayImageData*
class CORDL_TYPE __IVROverlay___GetOverlayImageData : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayImageData* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ee208, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ee2cc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight);

  /// @brief Method BeginInvoke, addr 0x27ee2e0, size 0x118, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ee3f8, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayImageData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayImageData(__IVROverlay___GetOverlayImageData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayImageData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayImageData(__IVROverlay___GetOverlayImageData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayImageData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayImageData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayErrorNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8341))
// CS Name: ::IVROverlay::_GetOverlayErrorNameFromEnum*
class CORDL_TYPE __IVROverlay___GetOverlayErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ee42c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ee4f0, size 0x14, virtual true, abstract: false, final false
  inline void* Invoke(::OVR::OpenVR::EVROverlayError error);

  /// @brief Method BeginInvoke, addr 0x27ee504, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ee588, size 0x28, virtual true, abstract: false, final false
  inline void* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayErrorNameFromEnum(__IVROverlay___GetOverlayErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayErrorNameFromEnum(__IVROverlay___GetOverlayErrorNameFromEnum const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayErrorNameFromEnum();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayRenderingPid
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8342))
// CS Name: ::IVROverlay::_SetOverlayRenderingPid*
class CORDL_TYPE __IVROverlay___SetOverlayRenderingPid : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ee5b0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ee674, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unPID);

  /// @brief Method BeginInvoke, addr 0x27ee688, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ee73c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayRenderingPid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayRenderingPid(__IVROverlay___SetOverlayRenderingPid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayRenderingPid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayRenderingPid(__IVROverlay___SetOverlayRenderingPid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayRenderingPid();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayRenderingPid
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8343))
// CS Name: ::IVROverlay::_GetOverlayRenderingPid*
class CORDL_TYPE __IVROverlay___GetOverlayRenderingPid : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ee764, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ee828, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27ee83c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ee8c0, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayRenderingPid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayRenderingPid(__IVROverlay___GetOverlayRenderingPid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayRenderingPid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayRenderingPid(__IVROverlay___GetOverlayRenderingPid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayRenderingPid();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayFlag
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8344))
// CS Name: ::IVROverlay::_SetOverlayFlag*
class CORDL_TYPE __IVROverlay___SetOverlayFlag : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayFlag* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ee8e8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ee9ac, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled);

  /// @brief Method BeginInvoke, addr 0x27ee9c4, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27eeaac, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayFlag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayFlag(__IVROverlay___SetOverlayFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayFlag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayFlag(__IVROverlay___SetOverlayFlag const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayFlag();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayFlag, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayFlag
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8345))
// CS Name: ::IVROverlay::_GetOverlayFlag*
class CORDL_TYPE __IVROverlay___GetOverlayFlag : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayFlag* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27eead4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27eeb98, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled);

  /// @brief Method BeginInvoke, addr 0x27eebac, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27eec94, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<bool> pbEnabled, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayFlag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayFlag(__IVROverlay___GetOverlayFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayFlag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayFlag(__IVROverlay___GetOverlayFlag const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayFlag();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayFlag, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayColor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8346))
// CS Name: ::IVROverlay::_SetOverlayColor*
class CORDL_TYPE __IVROverlay___SetOverlayColor : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayColor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27eecc0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27eed84, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue);

  /// @brief Method BeginInvoke, addr 0x27eed98, size 0xe0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27eee78, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayColor(__IVROverlay___SetOverlayColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayColor(__IVROverlay___SetOverlayColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayColor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayColor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8347))
// CS Name: ::IVROverlay::_GetOverlayColor*
class CORDL_TYPE __IVROverlay___GetOverlayColor : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayColor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27eeea0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27eef64, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue);

  /// @brief Method BeginInvoke, addr 0x27eef78, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ef068, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayColor(__IVROverlay___GetOverlayColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayColor(__IVROverlay___GetOverlayColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayColor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayAlpha
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8348))
// CS Name: ::IVROverlay::_SetOverlayAlpha*
class CORDL_TYPE __IVROverlay___SetOverlayAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ef09c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ef160, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fAlpha);

  /// @brief Method BeginInvoke, addr 0x27ef174, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ef228, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayAlpha(__IVROverlay___SetOverlayAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayAlpha(__IVROverlay___SetOverlayAlpha const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayAlpha();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayAlpha
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8349))
// CS Name: ::IVROverlay::_GetOverlayAlpha*
class CORDL_TYPE __IVROverlay___GetOverlayAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ef250, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ef314, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha);

  /// @brief Method BeginInvoke, addr 0x27ef328, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ef3e0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfAlpha, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayAlpha(__IVROverlay___GetOverlayAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayAlpha(__IVROverlay___GetOverlayAlpha const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayAlpha();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTexelAspect
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8350))
// CS Name: ::IVROverlay::_SetOverlayTexelAspect*
class CORDL_TYPE __IVROverlay___SetOverlayTexelAspect : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ef40c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ef4d0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect);

  /// @brief Method BeginInvoke, addr 0x27ef4e4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ef598, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTexelAspect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTexelAspect(__IVROverlay___SetOverlayTexelAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTexelAspect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTexelAspect(__IVROverlay___SetOverlayTexelAspect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTexelAspect();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTexelAspect
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8351))
// CS Name: ::IVROverlay::_GetOverlayTexelAspect*
class CORDL_TYPE __IVROverlay___GetOverlayTexelAspect : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ef5c0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ef684, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect);

  /// @brief Method BeginInvoke, addr 0x27ef698, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ef750, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfTexelAspect, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTexelAspect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTexelAspect(__IVROverlay___GetOverlayTexelAspect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTexelAspect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTexelAspect(__IVROverlay___GetOverlayTexelAspect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTexelAspect();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlaySortOrder
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8352))
// CS Name: ::IVROverlay::_SetOverlaySortOrder*
class CORDL_TYPE __IVROverlay___SetOverlaySortOrder : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ef77c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ef840, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder);

  /// @brief Method BeginInvoke, addr 0x27ef854, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ef908, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlaySortOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlaySortOrder(__IVROverlay___SetOverlaySortOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlaySortOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlaySortOrder(__IVROverlay___SetOverlaySortOrder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlaySortOrder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlaySortOrder
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8353))
// CS Name: ::IVROverlay::_GetOverlaySortOrder*
class CORDL_TYPE __IVROverlay___GetOverlaySortOrder : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ef930, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ef9f4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder);

  /// @brief Method BeginInvoke, addr 0x27efa08, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27efac0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punSortOrder, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlaySortOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlaySortOrder(__IVROverlay___GetOverlaySortOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlaySortOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlaySortOrder(__IVROverlay___GetOverlaySortOrder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlaySortOrder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayWidthInMeters
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8354))
// CS Name: ::IVROverlay::_SetOverlayWidthInMeters*
class CORDL_TYPE __IVROverlay___SetOverlayWidthInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27efaec, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27efbb0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters);

  /// @brief Method BeginInvoke, addr 0x27efbc4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27efc78, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayWidthInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayWidthInMeters(__IVROverlay___SetOverlayWidthInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayWidthInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayWidthInMeters(__IVROverlay___SetOverlayWidthInMeters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayWidthInMeters();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayWidthInMeters
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8355))
// CS Name: ::IVROverlay::_GetOverlayWidthInMeters*
class CORDL_TYPE __IVROverlay___GetOverlayWidthInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27efca0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27efd64, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters);

  /// @brief Method BeginInvoke, addr 0x27efd78, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27efe30, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfWidthInMeters, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayWidthInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayWidthInMeters(__IVROverlay___GetOverlayWidthInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayWidthInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayWidthInMeters(__IVROverlay___GetOverlayWidthInMeters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayWidthInMeters();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayAutoCurveDistanceRangeInMeters
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8356))
// CS Name: ::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters*
class CORDL_TYPE __IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27efe5c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27eff20, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters);

  /// @brief Method BeginInvoke, addr 0x27eff34, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27efffc, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters(__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayAutoCurveDistanceRangeInMeters
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8357))
// CS Name: ::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*
class CORDL_TYPE __IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0024, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f00e8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters);

  /// @brief Method BeginInvoke, addr 0x27f00fc, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f01d0, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters(__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTextureColorSpace
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8358))
// CS Name: ::IVROverlay::_SetOverlayTextureColorSpace*
class CORDL_TYPE __IVROverlay___SetOverlayTextureColorSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0204, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f02c8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace);

  /// @brief Method BeginInvoke, addr 0x27f02dc, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f0390, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTextureColorSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTextureColorSpace(__IVROverlay___SetOverlayTextureColorSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTextureColorSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTextureColorSpace(__IVROverlay___SetOverlayTextureColorSpace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTextureColorSpace();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTextureColorSpace
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8359))
// CS Name: ::IVROverlay::_GetOverlayTextureColorSpace*
class CORDL_TYPE __IVROverlay___GetOverlayTextureColorSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f03b8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f047c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace);

  /// @brief Method BeginInvoke, addr 0x27f0490, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f0548, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTextureColorSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTextureColorSpace(__IVROverlay___GetOverlayTextureColorSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTextureColorSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTextureColorSpace(__IVROverlay___GetOverlayTextureColorSpace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTextureColorSpace();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTextureBounds
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8360))
// CS Name: ::IVROverlay::_SetOverlayTextureBounds*
class CORDL_TYPE __IVROverlay___SetOverlayTextureBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0574, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f0638, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  /// @brief Method BeginInvoke, addr 0x27f064c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f0704, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTextureBounds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTextureBounds(__IVROverlay___SetOverlayTextureBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTextureBounds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTextureBounds(__IVROverlay___SetOverlayTextureBounds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTextureBounds();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTextureBounds
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8361))
// CS Name: ::IVROverlay::_GetOverlayTextureBounds*
class CORDL_TYPE __IVROverlay___GetOverlayTextureBounds : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0730, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f07f4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  /// @brief Method BeginInvoke, addr 0x27f0808, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f08c0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTextureBounds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTextureBounds(__IVROverlay___GetOverlayTextureBounds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTextureBounds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTextureBounds(__IVROverlay___GetOverlayTextureBounds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTextureBounds();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayRenderModel
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8362))
// CS Name: ::IVROverlay::_GetOverlayRenderModel*
class CORDL_TYPE __IVROverlay___GetOverlayRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f08ec, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f09b0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                         ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method BeginInvoke, addr 0x27f09c4, size 0x124, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                                             ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f0ae8, size 0x34, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayRenderModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayRenderModel(__IVROverlay___GetOverlayRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayRenderModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayRenderModel(__IVROverlay___GetOverlayRenderModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayRenderModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayRenderModel
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8363))
// CS Name: ::IVROverlay::_SetOverlayRenderModel*
class CORDL_TYPE __IVROverlay___SetOverlayRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0b1c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f0be0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor);

  /// @brief Method BeginInvoke, addr 0x27f0bf4, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f0cb4, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayRenderModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayRenderModel(__IVROverlay___SetOverlayRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayRenderModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayRenderModel(__IVROverlay___SetOverlayRenderModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayRenderModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTransformType
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8364))
// CS Name: ::IVROverlay::_GetOverlayTransformType*
class CORDL_TYPE __IVROverlay___GetOverlayTransformType : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0ce0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f0da4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType);

  /// @brief Method BeginInvoke, addr 0x27f0db8, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f0e70, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTransformType(__IVROverlay___GetOverlayTransformType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTransformType(__IVROverlay___GetOverlayTransformType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTransformType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTransformAbsolute
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8365))
// CS Name: ::IVROverlay::_SetOverlayTransformAbsolute*
class CORDL_TYPE __IVROverlay___SetOverlayTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f0e9c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f0f60, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                               ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  /// @brief Method BeginInvoke, addr 0x27f0f74, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f105c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformAbsolute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTransformAbsolute(__IVROverlay___SetOverlayTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformAbsolute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTransformAbsolute(__IVROverlay___SetOverlayTransformAbsolute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTransformAbsolute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTransformAbsolute
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8366))
// CS Name: ::IVROverlay::_GetOverlayTransformAbsolute*
class CORDL_TYPE __IVROverlay___GetOverlayTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1088, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f114c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                               ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  /// @brief Method BeginInvoke, addr 0x27f1160, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                             ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f124c, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                  ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformAbsolute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTransformAbsolute(__IVROverlay___GetOverlayTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformAbsolute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTransformAbsolute(__IVROverlay___GetOverlayTransformAbsolute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTransformAbsolute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTransformTrackedDeviceRelative
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8367))
// CS Name: ::IVROverlay::_SetOverlayTransformTrackedDeviceRelative*
class CORDL_TYPE __IVROverlay___SetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1280, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1344, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  /// @brief Method BeginInvoke, addr 0x27f1358, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f1440, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTransformTrackedDeviceRelative(__IVROverlay___SetOverlayTransformTrackedDeviceRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformTrackedDeviceRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTransformTrackedDeviceRelative(__IVROverlay___SetOverlayTransformTrackedDeviceRelative const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTransformTrackedDeviceRelative();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTransformTrackedDeviceRelative
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8368))
// CS Name: ::IVROverlay::_GetOverlayTransformTrackedDeviceRelative*
class CORDL_TYPE __IVROverlay___GetOverlayTransformTrackedDeviceRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f146c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1530, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  /// @brief Method BeginInvoke, addr 0x27f1544, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f1630, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punTrackedDevice, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformTrackedDeviceRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTransformTrackedDeviceRelative(__IVROverlay___GetOverlayTransformTrackedDeviceRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformTrackedDeviceRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTransformTrackedDeviceRelative(__IVROverlay___GetOverlayTransformTrackedDeviceRelative const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTransformTrackedDeviceRelative();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTransformTrackedDeviceComponent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8369))
// CS Name: ::IVROverlay::_SetOverlayTransformTrackedDeviceComponent*
class CORDL_TYPE __IVROverlay___SetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1664, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1728, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName);

  /// @brief Method BeginInvoke, addr 0x27f173c, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f17f8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTransformTrackedDeviceComponent(__IVROverlay___SetOverlayTransformTrackedDeviceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformTrackedDeviceComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTransformTrackedDeviceComponent(__IVROverlay___SetOverlayTransformTrackedDeviceComponent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTransformTrackedDeviceComponent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTransformTrackedDeviceComponent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8370))
// CS Name: ::IVROverlay::_GetOverlayTransformTrackedDeviceComponent*
class CORDL_TYPE __IVROverlay___GetOverlayTransformTrackedDeviceComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1820, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f18e4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize);

  /// @brief Method BeginInvoke, addr 0x27f18f8, size 0xd8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f19d0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punDeviceIndex, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformTrackedDeviceComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTransformTrackedDeviceComponent(__IVROverlay___GetOverlayTransformTrackedDeviceComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformTrackedDeviceComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTransformTrackedDeviceComponent(__IVROverlay___GetOverlayTransformTrackedDeviceComponent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTransformTrackedDeviceComponent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTransformOverlayRelative
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8371))
// CS Name: ::IVROverlay::_GetOverlayTransformOverlayRelative*
class CORDL_TYPE __IVROverlay___GetOverlayTransformOverlayRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f19fc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1ac0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  /// @brief Method BeginInvoke, addr 0x27f1ad4, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f1ba8, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTransformOverlayRelative(__IVROverlay___GetOverlayTransformOverlayRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTransformOverlayRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTransformOverlayRelative(__IVROverlay___GetOverlayTransformOverlayRelative const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTransformOverlayRelative();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTransformOverlayRelative
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8372))
// CS Name: ::IVROverlay::_SetOverlayTransformOverlayRelative*
class CORDL_TYPE __IVROverlay___SetOverlayTransformOverlayRelative : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1bdc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1ca0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  /// @brief Method BeginInvoke, addr 0x27f1cb4, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f1d80, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformOverlayRelative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTransformOverlayRelative(__IVROverlay___SetOverlayTransformOverlayRelative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTransformOverlayRelative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTransformOverlayRelative(__IVROverlay___SetOverlayTransformOverlayRelative const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTransformOverlayRelative();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8373))
// CS Name: ::IVROverlay::_ShowOverlay*
class CORDL_TYPE __IVROverlay___ShowOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ShowOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1dac, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1e70, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27f1e84, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f1f08, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ShowOverlay(__IVROverlay___ShowOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ShowOverlay(__IVROverlay___ShowOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ShowOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ShowOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_HideOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8374))
// CS Name: ::IVROverlay::_HideOverlay*
class CORDL_TYPE __IVROverlay___HideOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___HideOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f1f30, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f1ff4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27f2008, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f208c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___HideOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___HideOverlay(__IVROverlay___HideOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___HideOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___HideOverlay(__IVROverlay___HideOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___HideOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___HideOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsOverlayVisible
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8375))
// CS Name: ::IVROverlay::_IsOverlayVisible*
class CORDL_TYPE __IVROverlay___IsOverlayVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___IsOverlayVisible* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f20b4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2178, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27f218c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2210, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsOverlayVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___IsOverlayVisible(__IVROverlay___IsOverlayVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsOverlayVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___IsOverlayVisible(__IVROverlay___IsOverlayVisible const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___IsOverlayVisible();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___IsOverlayVisible, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetTransformForOverlayCoordinates
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8376))
// CS Name: ::IVROverlay::_GetTransformForOverlayCoordinates*
class CORDL_TYPE __IVROverlay___GetTransformForOverlayCoordinates : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f2238, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f22fc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                               ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform);

  /// @brief Method BeginInvoke, addr 0x27f2310, size 0x118, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                             ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2428, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetTransformForOverlayCoordinates", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetTransformForOverlayCoordinates(__IVROverlay___GetTransformForOverlayCoordinates&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetTransformForOverlayCoordinates", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetTransformForOverlayCoordinates(__IVROverlay___GetTransformForOverlayCoordinates const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetTransformForOverlayCoordinates();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_PollNextOverlayEvent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8377))
// CS Name: ::IVROverlay::_PollNextOverlayEvent*
class CORDL_TYPE __IVROverlay___PollNextOverlayEvent : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f2454, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2518, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  /// @brief Method BeginInvoke, addr 0x27f252c, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2614, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___PollNextOverlayEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___PollNextOverlayEvent(__IVROverlay___PollNextOverlayEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___PollNextOverlayEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___PollNextOverlayEvent(__IVROverlay___PollNextOverlayEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___PollNextOverlayEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayInputMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8378))
// CS Name: ::IVROverlay::_GetOverlayInputMethod*
class CORDL_TYPE __IVROverlay___GetOverlayInputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f2640, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2704, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod);

  /// @brief Method BeginInvoke, addr 0x27f2718, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f27d0, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayInputMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayInputMethod(__IVROverlay___GetOverlayInputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayInputMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayInputMethod(__IVROverlay___GetOverlayInputMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayInputMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayInputMethod
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8379))
// CS Name: ::IVROverlay::_SetOverlayInputMethod*
class CORDL_TYPE __IVROverlay___SetOverlayInputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f27fc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f28c0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod);

  /// @brief Method BeginInvoke, addr 0x27f28d4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2988, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayInputMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayInputMethod(__IVROverlay___SetOverlayInputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayInputMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayInputMethod(__IVROverlay___SetOverlayInputMethod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayInputMethod();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayMouseScale
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8380))
// CS Name: ::IVROverlay::_GetOverlayMouseScale*
class CORDL_TYPE __IVROverlay___GetOverlayMouseScale : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f29b0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2a74, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  /// @brief Method BeginInvoke, addr 0x27f2a88, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2b40, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayMouseScale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayMouseScale(__IVROverlay___GetOverlayMouseScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayMouseScale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayMouseScale(__IVROverlay___GetOverlayMouseScale const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayMouseScale();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayMouseScale
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8381))
// CS Name: ::IVROverlay::_SetOverlayMouseScale*
class CORDL_TYPE __IVROverlay___SetOverlayMouseScale : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f2b6c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2c30, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  /// @brief Method BeginInvoke, addr 0x27f2c44, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2cfc, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayMouseScale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayMouseScale(__IVROverlay___SetOverlayMouseScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayMouseScale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayMouseScale(__IVROverlay___SetOverlayMouseScale const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayMouseScale();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ComputeOverlayIntersection
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8382))
// CS Name: ::IVROverlay::_ComputeOverlayIntersection*
class CORDL_TYPE __IVROverlay___ComputeOverlayIntersection : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f2d28, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2dec, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults);

  /// @brief Method BeginInvoke, addr 0x27f2e00, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f2eec, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ComputeOverlayIntersection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ComputeOverlayIntersection(__IVROverlay___ComputeOverlayIntersection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ComputeOverlayIntersection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ComputeOverlayIntersection(__IVROverlay___ComputeOverlayIntersection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ComputeOverlayIntersection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsHoverTargetOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8383))
// CS Name: ::IVROverlay::_IsHoverTargetOverlay*
class CORDL_TYPE __IVROverlay___IsHoverTargetOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f2f20, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f2fe4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27f2ff8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f307c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsHoverTargetOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___IsHoverTargetOverlay(__IVROverlay___IsHoverTargetOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsHoverTargetOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___IsHoverTargetOverlay(__IVROverlay___IsHoverTargetOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___IsHoverTargetOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetGamepadFocusOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8384))
// CS Name: ::IVROverlay::_GetGamepadFocusOverlay*
class CORDL_TYPE __IVROverlay___GetGamepadFocusOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f30a4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3160, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27f3174, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f3194, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetGamepadFocusOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetGamepadFocusOverlay(__IVROverlay___GetGamepadFocusOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetGamepadFocusOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetGamepadFocusOverlay(__IVROverlay___GetGamepadFocusOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetGamepadFocusOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetGamepadFocusOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8385))
// CS Name: ::IVROverlay::_SetGamepadFocusOverlay*
class CORDL_TYPE __IVROverlay___SetGamepadFocusOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f31bc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3280, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulNewFocusOverlay);

  /// @brief Method BeginInvoke, addr 0x27f3294, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f3318, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetGamepadFocusOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetGamepadFocusOverlay(__IVROverlay___SetGamepadFocusOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetGamepadFocusOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetGamepadFocusOverlay(__IVROverlay___SetGamepadFocusOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetGamepadFocusOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayNeighbor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8386))
// CS Name: ::IVROverlay::_SetOverlayNeighbor*
class CORDL_TYPE __IVROverlay___SetOverlayNeighbor : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f3340, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3404, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);

  /// @brief Method BeginInvoke, addr 0x27f3418, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f34e4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayNeighbor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayNeighbor(__IVROverlay___SetOverlayNeighbor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayNeighbor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayNeighbor(__IVROverlay___SetOverlayNeighbor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayNeighbor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_MoveGamepadFocusToNeighbor
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8387))
// CS Name: ::IVROverlay::_MoveGamepadFocusToNeighbor*
class CORDL_TYPE __IVROverlay___MoveGamepadFocusToNeighbor : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f350c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f35d0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);

  /// @brief Method BeginInvoke, addr 0x27f35e4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f3698, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___MoveGamepadFocusToNeighbor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___MoveGamepadFocusToNeighbor(__IVROverlay___MoveGamepadFocusToNeighbor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___MoveGamepadFocusToNeighbor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___MoveGamepadFocusToNeighbor(__IVROverlay___MoveGamepadFocusToNeighbor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___MoveGamepadFocusToNeighbor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayDualAnalogTransform
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8388))
// CS Name: ::IVROverlay::_SetOverlayDualAnalogTransform*
class CORDL_TYPE __IVROverlay___SetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f36c0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3784, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, void* vCenter, float_t fRadius);

  /// @brief Method BeginInvoke, addr 0x27f3798, size 0x114, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, void* vCenter, float_t fRadius, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f38ac, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayDualAnalogTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayDualAnalogTransform(__IVROverlay___SetOverlayDualAnalogTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayDualAnalogTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayDualAnalogTransform(__IVROverlay___SetOverlayDualAnalogTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayDualAnalogTransform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayDualAnalogTransform
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8389))
// CS Name: ::IVROverlay::_GetOverlayDualAnalogTransform*
class CORDL_TYPE __IVROverlay___GetOverlayDualAnalogTransform : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f38d4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3998, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius);

  /// @brief Method BeginInvoke, addr 0x27f39ac, size 0x11c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f3ac8, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayDualAnalogTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayDualAnalogTransform(__IVROverlay___GetOverlayDualAnalogTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayDualAnalogTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayDualAnalogTransform(__IVROverlay___GetOverlayDualAnalogTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayDualAnalogTransform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayTexture
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8390))
// CS Name: ::IVROverlay::_SetOverlayTexture*
class CORDL_TYPE __IVROverlay___SetOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayTexture* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f3afc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3bc0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture);

  /// @brief Method BeginInvoke, addr 0x27f3bd4, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f3c8c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayTexture(__IVROverlay___SetOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayTexture(__IVROverlay___SetOverlayTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayTexture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayTexture, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ClearOverlayTexture
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8391))
// CS Name: ::IVROverlay::_ClearOverlayTexture*
class CORDL_TYPE __IVROverlay___ClearOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f3cb8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3d7c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27f3d90, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f3e14, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ClearOverlayTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ClearOverlayTexture(__IVROverlay___ClearOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ClearOverlayTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ClearOverlayTexture(__IVROverlay___ClearOverlayTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ClearOverlayTexture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayRaw
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8392))
// CS Name: ::IVROverlay::_SetOverlayRaw*
class CORDL_TYPE __IVROverlay___SetOverlayRaw : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayRaw* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f3e3c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f3f00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);

  /// @brief Method BeginInvoke, addr 0x27f3f14, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4020, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayRaw(__IVROverlay___SetOverlayRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayRaw(__IVROverlay___SetOverlayRaw const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayRaw();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayRaw, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayFromFile
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8393))
// CS Name: ::IVROverlay::_SetOverlayFromFile*
class CORDL_TYPE __IVROverlay___SetOverlayFromFile : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f4048, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f410c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath);

  /// @brief Method BeginInvoke, addr 0x27f4120, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f41ac, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayFromFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayFromFile(__IVROverlay___SetOverlayFromFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayFromFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayFromFile(__IVROverlay___SetOverlayFromFile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayFromFile();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTexture
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8394))
// CS Name: ::IVROverlay::_GetOverlayTexture*
class CORDL_TYPE __IVROverlay___GetOverlayTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTexture* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f41d4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4298, size 0x1c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<void*> pNativeTextureHandle, void* pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight,
                                               ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                               ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds);

  /// @brief Method BeginInvoke, addr 0x27f42b4, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<void*> pNativeTextureHandle, void* pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight,
                                             ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                             ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f446c, size 0x3c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<void*> pNativeTextureHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat,
                                                  ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                                  ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTexture(__IVROverlay___GetOverlayTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTexture(__IVROverlay___GetOverlayTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTexture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTexture, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ReleaseNativeOverlayHandle
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8395))
// CS Name: ::IVROverlay::_ReleaseNativeOverlayHandle*
class CORDL_TYPE __IVROverlay___ReleaseNativeOverlayHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f44a8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f456c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, void* pNativeTextureHandle);

  /// @brief Method BeginInvoke, addr 0x27f4580, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, void* pNativeTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4634, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ReleaseNativeOverlayHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ReleaseNativeOverlayHandle(__IVROverlay___ReleaseNativeOverlayHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ReleaseNativeOverlayHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ReleaseNativeOverlayHandle(__IVROverlay___ReleaseNativeOverlayHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ReleaseNativeOverlayHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayTextureSize
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8396))
// CS Name: ::IVROverlay::_GetOverlayTextureSize*
class CORDL_TYPE __IVROverlay___GetOverlayTextureSize : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f465c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4720, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight);

  /// @brief Method BeginInvoke, addr 0x27f4734, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4808, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTextureSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayTextureSize(__IVROverlay___GetOverlayTextureSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayTextureSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayTextureSize(__IVROverlay___GetOverlayTextureSize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayTextureSize();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CreateDashboardOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8397))
// CS Name: ::IVROverlay::_CreateDashboardOverlay*
class CORDL_TYPE __IVROverlay___CreateDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f483c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4914, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle);

  /// @brief Method BeginInvoke, addr 0x27f4928, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f49e0, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___CreateDashboardOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___CreateDashboardOverlay(__IVROverlay___CreateDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___CreateDashboardOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___CreateDashboardOverlay(__IVROverlay___CreateDashboardOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___CreateDashboardOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsDashboardVisible
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8398))
// CS Name: ::IVROverlay::_IsDashboardVisible*
class CORDL_TYPE __IVROverlay___IsDashboardVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___IsDashboardVisible* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f4a14, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4ad0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  /// @brief Method BeginInvoke, addr 0x27f4ae4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4b04, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsDashboardVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___IsDashboardVisible(__IVROverlay___IsDashboardVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsDashboardVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___IsDashboardVisible(__IVROverlay___IsDashboardVisible const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___IsDashboardVisible();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___IsDashboardVisible, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_IsActiveDashboardOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8399))
// CS Name: ::IVROverlay::_IsActiveDashboardOverlay*
class CORDL_TYPE __IVROverlay___IsActiveDashboardOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f4b2c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4bf0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint64_t ulOverlayHandle);

  /// @brief Method BeginInvoke, addr 0x27f4c04, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4c88, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsActiveDashboardOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___IsActiveDashboardOverlay(__IVROverlay___IsActiveDashboardOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___IsActiveDashboardOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___IsActiveDashboardOverlay(__IVROverlay___IsActiveDashboardOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___IsActiveDashboardOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetDashboardOverlaySceneProcess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8400))
// CS Name: ::IVROverlay::_SetDashboardOverlaySceneProcess*
class CORDL_TYPE __IVROverlay___SetDashboardOverlaySceneProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f4cb0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4d74, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId);

  /// @brief Method BeginInvoke, addr 0x27f4d88, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4e3c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetDashboardOverlaySceneProcess(__IVROverlay___SetDashboardOverlaySceneProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetDashboardOverlaySceneProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetDashboardOverlaySceneProcess(__IVROverlay___SetDashboardOverlaySceneProcess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetDashboardOverlaySceneProcess();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDashboardOverlaySceneProcess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8401))
// CS Name: ::IVROverlay::_GetDashboardOverlaySceneProcess*
class CORDL_TYPE __IVROverlay___GetDashboardOverlaySceneProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f4e64, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f4f28, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId);

  /// @brief Method BeginInvoke, addr 0x27f4f3c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f4ff4, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> punProcessId, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetDashboardOverlaySceneProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetDashboardOverlaySceneProcess(__IVROverlay___GetDashboardOverlaySceneProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetDashboardOverlaySceneProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetDashboardOverlaySceneProcess(__IVROverlay___GetDashboardOverlaySceneProcess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetDashboardOverlaySceneProcess();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowDashboard
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8402))
// CS Name: ::IVROverlay::_ShowDashboard*
class CORDL_TYPE __IVROverlay___ShowDashboard : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ShowDashboard* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5020, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f50f4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchOverlayToShow);

  /// @brief Method BeginInvoke, addr 0x27f5108, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5128, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowDashboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ShowDashboard(__IVROverlay___ShowDashboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowDashboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ShowDashboard(__IVROverlay___ShowDashboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ShowDashboard();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ShowDashboard, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetPrimaryDashboardDevice
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8403))
// CS Name: ::IVROverlay::_GetPrimaryDashboardDevice*
class CORDL_TYPE __IVROverlay___GetPrimaryDashboardDevice : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5134, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f51f0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27f5204, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5224, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetPrimaryDashboardDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetPrimaryDashboardDevice(__IVROverlay___GetPrimaryDashboardDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetPrimaryDashboardDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetPrimaryDashboardDevice(__IVROverlay___GetPrimaryDashboardDevice const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetPrimaryDashboardDevice();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowKeyboard
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8404))
// CS Name: ::IVROverlay::_ShowKeyboard*
class CORDL_TYPE __IVROverlay___ShowKeyboard : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ShowKeyboard* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f524c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5310, size 0x1c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                               uint64_t uUserValue);

  /// @brief Method BeginInvoke, addr 0x27f532c, size 0x13c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                             uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5468, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ShowKeyboard(__IVROverlay___ShowKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ShowKeyboard(__IVROverlay___ShowKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ShowKeyboard();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ShowKeyboard, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowKeyboardForOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8405))
// CS Name: ::IVROverlay::_ShowKeyboardForOverlay*
class CORDL_TYPE __IVROverlay___ShowKeyboardForOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5490, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5554, size 0x1c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                               bool bUseMinimalMode, uint64_t uUserValue);

  /// @brief Method BeginInvoke, addr 0x27f5570, size 0x14c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText,
                                             bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f56bc, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowKeyboardForOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ShowKeyboardForOverlay(__IVROverlay___ShowKeyboardForOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowKeyboardForOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ShowKeyboardForOverlay(__IVROverlay___ShowKeyboardForOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ShowKeyboardForOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetKeyboardText
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8406))
// CS Name: ::IVROverlay::_GetKeyboardText*
class CORDL_TYPE __IVROverlay___GetKeyboardText : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetKeyboardText* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f56e4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f57bc, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::System::Text::StringBuilder* pchText, uint32_t cchText);

  /// @brief Method BeginInvoke, addr 0x27f57d0, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchText, uint32_t cchText, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5864, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetKeyboardText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetKeyboardText(__IVROverlay___GetKeyboardText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetKeyboardText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetKeyboardText(__IVROverlay___GetKeyboardText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetKeyboardText();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetKeyboardText, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_HideKeyboard
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8407))
// CS Name: ::IVROverlay::_HideKeyboard*
class CORDL_TYPE __IVROverlay___HideKeyboard : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___HideKeyboard* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f588c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5948, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  /// @brief Method BeginInvoke, addr 0x27f595c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f597c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___HideKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___HideKeyboard(__IVROverlay___HideKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___HideKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___HideKeyboard(__IVROverlay___HideKeyboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___HideKeyboard();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___HideKeyboard, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetKeyboardTransformAbsolute
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8408))
// CS Name: ::IVROverlay::_SetKeyboardTransformAbsolute*
class CORDL_TYPE __IVROverlay___SetKeyboardTransformAbsolute : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5988, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5a4c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform);

  /// @brief Method BeginInvoke, addr 0x27f5a60, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5b18, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetKeyboardTransformAbsolute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetKeyboardTransformAbsolute(__IVROverlay___SetKeyboardTransformAbsolute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetKeyboardTransformAbsolute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetKeyboardTransformAbsolute(__IVROverlay___SetKeyboardTransformAbsolute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetKeyboardTransformAbsolute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetKeyboardPositionForOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8409))
// CS Name: ::IVROverlay::_SetKeyboardPositionForOverlay*
class CORDL_TYPE __IVROverlay___SetKeyboardPositionForOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5b34, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5bf8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect);

  /// @brief Method BeginInvoke, addr 0x27f5c0c, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5cc4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetKeyboardPositionForOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetKeyboardPositionForOverlay(__IVROverlay___SetKeyboardPositionForOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetKeyboardPositionForOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetKeyboardPositionForOverlay(__IVROverlay___SetKeyboardPositionForOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetKeyboardPositionForOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetOverlayIntersectionMask
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8410))
// CS Name: ::IVROverlay::_SetOverlayIntersectionMask*
class CORDL_TYPE __IVROverlay___SetOverlayIntersectionMask : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5cd0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5d94, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                               uint32_t unPrimitiveSize);

  /// @brief Method BeginInvoke, addr 0x27f5da8, size 0xfc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                             uint32_t unPrimitiveSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f5ea4, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayIntersectionMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___SetOverlayIntersectionMask(__IVROverlay___SetOverlayIntersectionMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___SetOverlayIntersectionMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___SetOverlayIntersectionMask(__IVROverlay___SetOverlayIntersectionMask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___SetOverlayIntersectionMask();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetOverlayFlags
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8411))
// CS Name: ::IVROverlay::_GetOverlayFlags*
class CORDL_TYPE __IVROverlay___GetOverlayFlags : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___GetOverlayFlags* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f5ed0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f5f94, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags);

  /// @brief Method BeginInvoke, addr 0x27f5fa8, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f6060, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<uint32_t> pFlags, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayFlags", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___GetOverlayFlags(__IVROverlay___GetOverlayFlags&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___GetOverlayFlags", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___GetOverlayFlags(__IVROverlay___GetOverlayFlags const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___GetOverlayFlags();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___GetOverlayFlags, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ShowMessageOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8412))
// CS Name: ::IVROverlay::_ShowMessageOverlay*
class CORDL_TYPE __IVROverlay___ShowMessageOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f608c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f6164, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text,
                                                        ::StringW pchButton3Text);

  /// @brief Method BeginInvoke, addr 0x27f6178, size 0x34, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f61ac, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowMessageOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___ShowMessageOverlay(__IVROverlay___ShowMessageOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___ShowMessageOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___ShowMessageOverlay(__IVROverlay___ShowMessageOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___ShowMessageOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_CloseMessageOverlay
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8413))
// CS Name: ::IVROverlay::_CloseMessageOverlay*
class CORDL_TYPE __IVROverlay___CloseMessageOverlay : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27f61d4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27f6290, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  /// @brief Method BeginInvoke, addr 0x27f62a4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27f62c4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___CloseMessageOverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVROverlay___CloseMessageOverlay(__IVROverlay___CloseMessageOverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVROverlay___CloseMessageOverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVROverlay___CloseMessageOverlay(__IVROverlay___CloseMessageOverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVROverlay___CloseMessageOverlay();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVROverlay
// SizeInfo { instance_size: 656, native_size: 656, calculated_instance_size: 656, calculated_native_size: 672, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8414))
// CS Name: ::OVR.OpenVR::IVROverlay
struct CORDL_TYPE IVROverlay {
public:
  // Declarations
  using _CloseMessageOverlay = ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay;

  using _ShowMessageOverlay = ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay;

  using _GetOverlayFlags = ::OVR::OpenVR::__IVROverlay___GetOverlayFlags;

  using _SetOverlayIntersectionMask = ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask;

  using _SetKeyboardPositionForOverlay = ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay;

  using _SetKeyboardTransformAbsolute = ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute;

  using _HideKeyboard = ::OVR::OpenVR::__IVROverlay___HideKeyboard;

  using _GetKeyboardText = ::OVR::OpenVR::__IVROverlay___GetKeyboardText;

  using _ShowKeyboardForOverlay = ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay;

  using _ShowKeyboard = ::OVR::OpenVR::__IVROverlay___ShowKeyboard;

  using _GetPrimaryDashboardDevice = ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice;

  using _ShowDashboard = ::OVR::OpenVR::__IVROverlay___ShowDashboard;

  using _GetDashboardOverlaySceneProcess = ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess;

  using _SetDashboardOverlaySceneProcess = ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess;

  using _IsActiveDashboardOverlay = ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay;

  using _IsDashboardVisible = ::OVR::OpenVR::__IVROverlay___IsDashboardVisible;

  using _CreateDashboardOverlay = ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay;

  using _GetOverlayTextureSize = ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize;

  using _ReleaseNativeOverlayHandle = ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle;

  using _GetOverlayTexture = ::OVR::OpenVR::__IVROverlay___GetOverlayTexture;

  using _SetOverlayFromFile = ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile;

  using _SetOverlayRaw = ::OVR::OpenVR::__IVROverlay___SetOverlayRaw;

  using _ClearOverlayTexture = ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture;

  using _SetOverlayTexture = ::OVR::OpenVR::__IVROverlay___SetOverlayTexture;

  using _GetOverlayDualAnalogTransform = ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform;

  using _SetOverlayDualAnalogTransform = ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform;

  using _MoveGamepadFocusToNeighbor = ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor;

  using _SetOverlayNeighbor = ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor;

  using _SetGamepadFocusOverlay = ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay;

  using _GetGamepadFocusOverlay = ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay;

  using _IsHoverTargetOverlay = ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay;

  using _ComputeOverlayIntersection = ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection;

  using _SetOverlayMouseScale = ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale;

  using _GetOverlayMouseScale = ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale;

  using _SetOverlayInputMethod = ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod;

  using _GetOverlayInputMethod = ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod;

  using _PollNextOverlayEvent = ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent;

  using _GetTransformForOverlayCoordinates = ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates;

  using _IsOverlayVisible = ::OVR::OpenVR::__IVROverlay___IsOverlayVisible;

  using _HideOverlay = ::OVR::OpenVR::__IVROverlay___HideOverlay;

  using _ShowOverlay = ::OVR::OpenVR::__IVROverlay___ShowOverlay;

  using _SetOverlayTransformOverlayRelative = ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative;

  using _GetOverlayTransformOverlayRelative = ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative;

  using _GetOverlayTransformTrackedDeviceComponent = ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent;

  using _SetOverlayTransformTrackedDeviceComponent = ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent;

  using _GetOverlayTransformTrackedDeviceRelative = ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative;

  using _SetOverlayTransformTrackedDeviceRelative = ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative;

  using _GetOverlayTransformAbsolute = ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute;

  using _SetOverlayTransformAbsolute = ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute;

  using _GetOverlayTransformType = ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType;

  using _SetOverlayRenderModel = ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel;

  using _GetOverlayRenderModel = ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel;

  using _GetOverlayTextureBounds = ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds;

  using _SetOverlayTextureBounds = ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds;

  using _GetOverlayTextureColorSpace = ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace;

  using _SetOverlayTextureColorSpace = ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace;

  using _GetOverlayAutoCurveDistanceRangeInMeters = ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters;

  using _SetOverlayAutoCurveDistanceRangeInMeters = ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters;

  using _GetOverlayWidthInMeters = ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters;

  using _SetOverlayWidthInMeters = ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters;

  using _GetOverlaySortOrder = ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder;

  using _SetOverlaySortOrder = ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder;

  using _GetOverlayTexelAspect = ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect;

  using _SetOverlayTexelAspect = ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect;

  using _GetOverlayAlpha = ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha;

  using _SetOverlayAlpha = ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha;

  using _GetOverlayColor = ::OVR::OpenVR::__IVROverlay___GetOverlayColor;

  using _SetOverlayColor = ::OVR::OpenVR::__IVROverlay___SetOverlayColor;

  using _GetOverlayFlag = ::OVR::OpenVR::__IVROverlay___GetOverlayFlag;

  using _SetOverlayFlag = ::OVR::OpenVR::__IVROverlay___SetOverlayFlag;

  using _GetOverlayRenderingPid = ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid;

  using _SetOverlayRenderingPid = ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid;

  using _GetOverlayErrorNameFromEnum = ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum;

  using _GetOverlayImageData = ::OVR::OpenVR::__IVROverlay___GetOverlayImageData;

  using _SetOverlayName = ::OVR::OpenVR::__IVROverlay___SetOverlayName;

  using _GetOverlayName = ::OVR::OpenVR::__IVROverlay___GetOverlayName;

  using _GetOverlayKey = ::OVR::OpenVR::__IVROverlay___GetOverlayKey;

  using _GetHighQualityOverlay = ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay;

  using _SetHighQualityOverlay = ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay;

  using _DestroyOverlay = ::OVR::OpenVR::__IVROverlay___DestroyOverlay;

  using _CreateOverlay = ::OVR::OpenVR::__IVROverlay___CreateOverlay;

  using _FindOverlay = ::OVR::OpenVR::__IVROverlay___FindOverlay;

  // Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::__IVROverlay___FindOverlay*", modifiers: "", def_value: None }, CppParam { name: "CreateOverlay", ty:
  // "::OVR::OpenVR::__IVROverlay___CreateOverlay*", modifiers: "", def_value: None }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::__IVROverlay___DestroyOverlay*", modifiers: "", def_value:
  // None }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*", modifiers: "", def_value: None }, CppParam { name: "GetHighQualityOverlay", ty:
  // "::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayKey", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayKey*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayName*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayName", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayName*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayImageData", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayImageData*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOverlayErrorNameFromEnum", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayRenderingPid", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayRenderingPid", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayFlag*", modifiers: "",
  // def_value: None }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayFlag*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayColor", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayColor*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayColor", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayColor*", modifiers: "",
  // def_value: None }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayAlpha", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTexelAspect", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*",
  // modifiers: "", def_value: None }, CppParam { name: "GetOverlayTexelAspect", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlaySortOrder", ty: "::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*", modifiers: "", def_value: None }, CppParam { name: "GetOverlaySortOrder", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*",
  // modifiers: "", def_value: None }, CppParam { name: "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayTextureColorSpace", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureColorSpace", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTextureBounds", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTextureBounds", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayRenderModel", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*",
  // modifiers: "", def_value: None }, CppParam { name: "SetOverlayRenderModel", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayTransformType", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformAbsolute", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformAbsolute", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTransformOverlayRelative", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTransformOverlayRelative", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*", modifiers: "", def_value: None }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::__IVROverlay___ShowOverlay*", modifiers:
  // "", def_value: None }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::__IVROverlay___HideOverlay*", modifiers: "", def_value: None }, CppParam { name: "IsOverlayVisible", ty:
  // "::OVR::OpenVR::__IVROverlay___IsOverlayVisible*", modifiers: "", def_value: None }, CppParam { name: "GetTransformForOverlayCoordinates", ty:
  // "::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*", modifiers: "", def_value: None }, CppParam { name: "PollNextOverlayEvent", ty:
  // "::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayInputMethod", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*",
  // modifiers: "", def_value: None }, CppParam { name: "SetOverlayInputMethod", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayMouseScale", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayMouseScale", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*", modifiers: "", def_value: None }, CppParam { name: "ComputeOverlayIntersection", ty:
  // "::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*", modifiers: "", def_value: None }, CppParam { name: "IsHoverTargetOverlay", ty: "::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*",
  // modifiers: "", def_value: None }, CppParam { name: "GetGamepadFocusOverlay", ty: "::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*", modifiers: "", def_value: None }, CppParam { name:
  // "SetGamepadFocusOverlay", ty: "::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayNeighbor", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*", modifiers: "", def_value: None }, CppParam { name: "MoveGamepadFocusToNeighbor", ty:
  // "::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayDualAnalogTransform", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayDualAnalogTransform", ty:
  // "::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayTexture", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayTexture*",
  // modifiers: "", def_value: None }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*", modifiers: "", def_value: None }, CppParam { name:
  // "SetOverlayRaw", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayRaw*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayFromFile", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayTexture", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayTexture*", modifiers: "",
  // def_value: None }, CppParam { name: "ReleaseNativeOverlayHandle", ty: "::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*", modifiers: "", def_value: None }, CppParam { name:
  // "GetOverlayTextureSize", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*", modifiers: "", def_value: None }, CppParam { name: "CreateDashboardOverlay", ty:
  // "::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*", modifiers: "", def_value: None }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::__IVROverlay___IsDashboardVisible*",
  // modifiers: "", def_value: None }, CppParam { name: "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*", modifiers: "", def_value: None }, CppParam { name:
  // "SetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*", modifiers: "", def_value: None }, CppParam { name: "GetDashboardOverlaySceneProcess", ty:
  // "::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*", modifiers: "", def_value: None }, CppParam { name: "ShowDashboard", ty: "::OVR::OpenVR::__IVROverlay___ShowDashboard*",
  // modifiers: "", def_value: None }, CppParam { name: "GetPrimaryDashboardDevice", ty: "::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*", modifiers: "", def_value: None }, CppParam { name:
  // "ShowKeyboard", ty: "::OVR::OpenVR::__IVROverlay___ShowKeyboard*", modifiers: "", def_value: None }, CppParam { name: "ShowKeyboardForOverlay", ty:
  // "::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*", modifiers: "", def_value: None }, CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::__IVROverlay___GetKeyboardText*", modifiers: "",
  // def_value: None }, CppParam { name: "HideKeyboard", ty: "::OVR::OpenVR::__IVROverlay___HideKeyboard*", modifiers: "", def_value: None }, CppParam { name: "SetKeyboardTransformAbsolute", ty:
  // "::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*", modifiers: "", def_value: None }, CppParam { name: "SetKeyboardPositionForOverlay", ty:
  // "::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*", modifiers: "", def_value: None }, CppParam { name: "SetOverlayIntersectionMask", ty:
  // "::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*", modifiers: "", def_value: None }, CppParam { name: "GetOverlayFlags", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayFlags*", modifiers:
  // "", def_value: None }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*", modifiers: "", def_value: None }, CppParam { name: "CloseMessageOverlay",
  // ty: "::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*", modifiers: "", def_value: None }]
  constexpr IVROverlay(::OVR::OpenVR::__IVROverlay___FindOverlay* FindOverlay, ::OVR::OpenVR::__IVROverlay___CreateOverlay* CreateOverlay, ::OVR::OpenVR::__IVROverlay___DestroyOverlay* DestroyOverlay,
                       ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay* SetHighQualityOverlay, ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay* GetHighQualityOverlay,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayKey* GetOverlayKey, ::OVR::OpenVR::__IVROverlay___GetOverlayName* GetOverlayName,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayName* SetOverlayName, ::OVR::OpenVR::__IVROverlay___GetOverlayImageData* GetOverlayImageData,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum, ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid* SetOverlayRenderingPid,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid* GetOverlayRenderingPid, ::OVR::OpenVR::__IVROverlay___SetOverlayFlag* SetOverlayFlag,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayFlag* GetOverlayFlag, ::OVR::OpenVR::__IVROverlay___SetOverlayColor* SetOverlayColor,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayColor* GetOverlayColor, ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha* SetOverlayAlpha,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha* GetOverlayAlpha, ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect* SetOverlayTexelAspect,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect* GetOverlayTexelAspect, ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder* SetOverlaySortOrder,
                       ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder* GetOverlaySortOrder, ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters* SetOverlayWidthInMeters,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters* GetOverlayWidthInMeters,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace* SetOverlayTextureColorSpace, ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace* GetOverlayTextureColorSpace,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds* SetOverlayTextureBounds, ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds* GetOverlayTextureBounds,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel* GetOverlayRenderModel, ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel* SetOverlayRenderModel,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType* GetOverlayTransformType, ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute* SetOverlayTransformAbsolute,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute* GetOverlayTransformAbsolute,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative, ::OVR::OpenVR::__IVROverlay___ShowOverlay* ShowOverlay,
                       ::OVR::OpenVR::__IVROverlay___HideOverlay* HideOverlay, ::OVR::OpenVR::__IVROverlay___IsOverlayVisible* IsOverlayVisible,
                       ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates, ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* PollNextOverlayEvent,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod* GetOverlayInputMethod, ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod* SetOverlayInputMethod,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale* GetOverlayMouseScale, ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale* SetOverlayMouseScale,
                       ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection* ComputeOverlayIntersection, ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay* IsHoverTargetOverlay,
                       ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay* GetGamepadFocusOverlay, ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay* SetGamepadFocusOverlay,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor* SetOverlayNeighbor, ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform, ::OVR::OpenVR::__IVROverlay___SetOverlayTexture* SetOverlayTexture,
                       ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture* ClearOverlayTexture, ::OVR::OpenVR::__IVROverlay___SetOverlayRaw* SetOverlayRaw,
                       ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile* SetOverlayFromFile, ::OVR::OpenVR::__IVROverlay___GetOverlayTexture* GetOverlayTexture,
                       ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle, ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize* GetOverlayTextureSize,
                       ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay* CreateDashboardOverlay, ::OVR::OpenVR::__IVROverlay___IsDashboardVisible* IsDashboardVisible,
                       ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay* IsActiveDashboardOverlay, ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess,
                       ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess, ::OVR::OpenVR::__IVROverlay___ShowDashboard* ShowDashboard,
                       ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice* GetPrimaryDashboardDevice, ::OVR::OpenVR::__IVROverlay___ShowKeyboard* ShowKeyboard,
                       ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay* ShowKeyboardForOverlay, ::OVR::OpenVR::__IVROverlay___GetKeyboardText* GetKeyboardText,
                       ::OVR::OpenVR::__IVROverlay___HideKeyboard* HideKeyboard, ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute,
                       ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay, ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask* SetOverlayIntersectionMask,
                       ::OVR::OpenVR::__IVROverlay___GetOverlayFlags* GetOverlayFlags, ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay* ShowMessageOverlay,
                       ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay* CloseMessageOverlay) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVROverlay();

  /// @brief Field FindOverlay, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___FindOverlay* FindOverlay;

  /// @brief Field CreateOverlay, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___CreateOverlay* CreateOverlay;

  /// @brief Field DestroyOverlay, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___DestroyOverlay* DestroyOverlay;

  /// @brief Field SetHighQualityOverlay, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay* SetHighQualityOverlay;

  /// @brief Field GetHighQualityOverlay, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay* GetHighQualityOverlay;

  /// @brief Field GetOverlayKey, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayKey* GetOverlayKey;

  /// @brief Field GetOverlayName, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayName* GetOverlayName;

  /// @brief Field SetOverlayName, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayName* SetOverlayName;

  /// @brief Field GetOverlayImageData, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayImageData* GetOverlayImageData;

  /// @brief Field GetOverlayErrorNameFromEnum, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum;

  /// @brief Field SetOverlayRenderingPid, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid* SetOverlayRenderingPid;

  /// @brief Field GetOverlayRenderingPid, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid* GetOverlayRenderingPid;

  /// @brief Field SetOverlayFlag, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayFlag* SetOverlayFlag;

  /// @brief Field GetOverlayFlag, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayFlag* GetOverlayFlag;

  /// @brief Field SetOverlayColor, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayColor* SetOverlayColor;

  /// @brief Field GetOverlayColor, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayColor* GetOverlayColor;

  /// @brief Field SetOverlayAlpha, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha* SetOverlayAlpha;

  /// @brief Field GetOverlayAlpha, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha* GetOverlayAlpha;

  /// @brief Field SetOverlayTexelAspect, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect* SetOverlayTexelAspect;

  /// @brief Field GetOverlayTexelAspect, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect* GetOverlayTexelAspect;

  /// @brief Field SetOverlaySortOrder, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder* SetOverlaySortOrder;

  /// @brief Field GetOverlaySortOrder, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder* GetOverlaySortOrder;

  /// @brief Field SetOverlayWidthInMeters, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters* SetOverlayWidthInMeters;

  /// @brief Field GetOverlayWidthInMeters, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters* GetOverlayWidthInMeters;

  /// @brief Field SetOverlayAutoCurveDistanceRangeInMeters, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters;

  /// @brief Field GetOverlayAutoCurveDistanceRangeInMeters, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters;

  /// @brief Field SetOverlayTextureColorSpace, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace* SetOverlayTextureColorSpace;

  /// @brief Field GetOverlayTextureColorSpace, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace* GetOverlayTextureColorSpace;

  /// @brief Field SetOverlayTextureBounds, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds* SetOverlayTextureBounds;

  /// @brief Field GetOverlayTextureBounds, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds* GetOverlayTextureBounds;

  /// @brief Field GetOverlayRenderModel, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel* GetOverlayRenderModel;

  /// @brief Field SetOverlayRenderModel, offset: 0xf8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel* SetOverlayRenderModel;

  /// @brief Field GetOverlayTransformType, offset: 0x100, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType* GetOverlayTransformType;

  /// @brief Field SetOverlayTransformAbsolute, offset: 0x108, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute* SetOverlayTransformAbsolute;

  /// @brief Field GetOverlayTransformAbsolute, offset: 0x110, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute* GetOverlayTransformAbsolute;

  /// @brief Field SetOverlayTransformTrackedDeviceRelative, offset: 0x118, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative;

  /// @brief Field GetOverlayTransformTrackedDeviceRelative, offset: 0x120, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative;

  /// @brief Field SetOverlayTransformTrackedDeviceComponent, offset: 0x128, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent;

  /// @brief Field GetOverlayTransformTrackedDeviceComponent, offset: 0x130, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent;

  /// @brief Field GetOverlayTransformOverlayRelative, offset: 0x138, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative;

  /// @brief Field SetOverlayTransformOverlayRelative, offset: 0x140, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative;

  /// @brief Field ShowOverlay, offset: 0x148, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ShowOverlay* ShowOverlay;

  /// @brief Field HideOverlay, offset: 0x150, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___HideOverlay* HideOverlay;

  /// @brief Field IsOverlayVisible, offset: 0x158, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___IsOverlayVisible* IsOverlayVisible;

  /// @brief Field GetTransformForOverlayCoordinates, offset: 0x160, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates;

  /// @brief Field PollNextOverlayEvent, offset: 0x168, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* PollNextOverlayEvent;

  /// @brief Field GetOverlayInputMethod, offset: 0x170, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod* GetOverlayInputMethod;

  /// @brief Field SetOverlayInputMethod, offset: 0x178, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod* SetOverlayInputMethod;

  /// @brief Field GetOverlayMouseScale, offset: 0x180, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale* GetOverlayMouseScale;

  /// @brief Field SetOverlayMouseScale, offset: 0x188, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale* SetOverlayMouseScale;

  /// @brief Field ComputeOverlayIntersection, offset: 0x190, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection* ComputeOverlayIntersection;

  /// @brief Field IsHoverTargetOverlay, offset: 0x198, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay* IsHoverTargetOverlay;

  /// @brief Field GetGamepadFocusOverlay, offset: 0x1a0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay* GetGamepadFocusOverlay;

  /// @brief Field SetGamepadFocusOverlay, offset: 0x1a8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay* SetGamepadFocusOverlay;

  /// @brief Field SetOverlayNeighbor, offset: 0x1b0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor* SetOverlayNeighbor;

  /// @brief Field MoveGamepadFocusToNeighbor, offset: 0x1b8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor;

  /// @brief Field SetOverlayDualAnalogTransform, offset: 0x1c0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform;

  /// @brief Field GetOverlayDualAnalogTransform, offset: 0x1c8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform;

  /// @brief Field SetOverlayTexture, offset: 0x1d0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayTexture* SetOverlayTexture;

  /// @brief Field ClearOverlayTexture, offset: 0x1d8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture* ClearOverlayTexture;

  /// @brief Field SetOverlayRaw, offset: 0x1e0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayRaw* SetOverlayRaw;

  /// @brief Field SetOverlayFromFile, offset: 0x1e8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile* SetOverlayFromFile;

  /// @brief Field GetOverlayTexture, offset: 0x1f0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTexture* GetOverlayTexture;

  /// @brief Field ReleaseNativeOverlayHandle, offset: 0x1f8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle;

  /// @brief Field GetOverlayTextureSize, offset: 0x200, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize* GetOverlayTextureSize;

  /// @brief Field CreateDashboardOverlay, offset: 0x208, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay* CreateDashboardOverlay;

  /// @brief Field IsDashboardVisible, offset: 0x210, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___IsDashboardVisible* IsDashboardVisible;

  /// @brief Field IsActiveDashboardOverlay, offset: 0x218, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay* IsActiveDashboardOverlay;

  /// @brief Field SetDashboardOverlaySceneProcess, offset: 0x220, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess;

  /// @brief Field GetDashboardOverlaySceneProcess, offset: 0x228, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess;

  /// @brief Field ShowDashboard, offset: 0x230, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ShowDashboard* ShowDashboard;

  /// @brief Field GetPrimaryDashboardDevice, offset: 0x238, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice* GetPrimaryDashboardDevice;

  /// @brief Field ShowKeyboard, offset: 0x240, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ShowKeyboard* ShowKeyboard;

  /// @brief Field ShowKeyboardForOverlay, offset: 0x248, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay* ShowKeyboardForOverlay;

  /// @brief Field GetKeyboardText, offset: 0x250, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetKeyboardText* GetKeyboardText;

  /// @brief Field HideKeyboard, offset: 0x258, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___HideKeyboard* HideKeyboard;

  /// @brief Field SetKeyboardTransformAbsolute, offset: 0x260, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute;

  /// @brief Field SetKeyboardPositionForOverlay, offset: 0x268, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay;

  /// @brief Field SetOverlayIntersectionMask, offset: 0x270, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask* SetOverlayIntersectionMask;

  /// @brief Field GetOverlayFlags, offset: 0x278, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___GetOverlayFlags* GetOverlayFlags;

  /// @brief Field ShowMessageOverlay, offset: 0x280, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay* ShowMessageOverlay;

  /// @brief Field CloseMessageOverlay, offset: 0x288, size: 0x8, def value: None
  ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay* CloseMessageOverlay;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x290 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVROverlay, 0x290>, "Size mismatch!");

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

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ClearOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*, "OVR.OpenVR", "IVROverlay/_ClearOverlayTexture");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___CloseMessageOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*, "OVR.OpenVR", "IVROverlay/_CloseMessageOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*, "OVR.OpenVR", "IVROverlay/_ComputeOverlayIntersection");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_CreateDashboardOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___CreateOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___CreateOverlay*, "OVR.OpenVR", "IVROverlay/_CreateOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___DestroyOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___DestroyOverlay*, "OVR.OpenVR", "IVROverlay/_DestroyOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___FindOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___FindOverlay*, "OVR.OpenVR", "IVROverlay/_FindOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*, "OVR.OpenVR", "IVROverlay/_GetDashboardOverlaySceneProcess");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*, "OVR.OpenVR", "IVROverlay/_GetGamepadFocusOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*, "OVR.OpenVR", "IVROverlay/_GetHighQualityOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetKeyboardText);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetKeyboardText*, "OVR.OpenVR", "IVROverlay/_GetKeyboardText");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayAlpha);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*, "OVR.OpenVR", "IVROverlay/_GetOverlayAlpha");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*, "OVR.OpenVR", "IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayColor*, "OVR.OpenVR", "IVROverlay/_GetOverlayColor");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_GetOverlayDualAnalogTransform");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*, "OVR.OpenVR", "IVROverlay/_GetOverlayErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayFlag);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayFlag*, "OVR.OpenVR", "IVROverlay/_GetOverlayFlag");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayFlags);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayFlags*, "OVR.OpenVR", "IVROverlay/_GetOverlayFlags");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayImageData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayImageData*, "OVR.OpenVR", "IVROverlay/_GetOverlayImageData");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*, "OVR.OpenVR", "IVROverlay/_GetOverlayInputMethod");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayKey);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayKey*, "OVR.OpenVR", "IVROverlay/_GetOverlayKey");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*, "OVR.OpenVR", "IVROverlay/_GetOverlayMouseScale");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayName*, "OVR.OpenVR", "IVROverlay/_GetOverlayName");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*, "OVR.OpenVR", "IVROverlay/_GetOverlayRenderModel");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*, "OVR.OpenVR", "IVROverlay/_GetOverlayRenderingPid");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*, "OVR.OpenVR", "IVROverlay/_GetOverlaySortOrder");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexelAspect");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_GetOverlayTexture");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureBounds");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureColorSpace");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureSize");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformAbsolute");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformOverlayRelative");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceComponent");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformTrackedDeviceRelative");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayTransformType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*, "OVR.OpenVR", "IVROverlay/_GetOverlayTransformType");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*, "OVR.OpenVR", "IVROverlay/_GetOverlayWidthInMeters");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*, "OVR.OpenVR", "IVROverlay/_GetPrimaryDashboardDevice");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*, "OVR.OpenVR", "IVROverlay/_GetTransformForOverlayCoordinates");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___HideKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___HideKeyboard*, "OVR.OpenVR", "IVROverlay/_HideKeyboard");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___HideOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___HideOverlay*, "OVR.OpenVR", "IVROverlay/_HideOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*, "OVR.OpenVR", "IVROverlay/_IsActiveDashboardOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___IsDashboardVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___IsDashboardVisible*, "OVR.OpenVR", "IVROverlay/_IsDashboardVisible");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*, "OVR.OpenVR", "IVROverlay/_IsHoverTargetOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___IsOverlayVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___IsOverlayVisible*, "OVR.OpenVR", "IVROverlay/_IsOverlayVisible");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*, "OVR.OpenVR", "IVROverlay/_MoveGamepadFocusToNeighbor");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*, "OVR.OpenVR", "IVROverlay/_PollNextOverlayEvent");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*, "OVR.OpenVR", "IVROverlay/_ReleaseNativeOverlayHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*, "OVR.OpenVR", "IVROverlay/_SetDashboardOverlaySceneProcess");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*, "OVR.OpenVR", "IVROverlay/_SetGamepadFocusOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*, "OVR.OpenVR", "IVROverlay/_SetHighQualityOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*, "OVR.OpenVR", "IVROverlay/_SetKeyboardPositionForOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetKeyboardTransformAbsolute");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayAlpha);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*, "OVR.OpenVR", "IVROverlay/_SetOverlayAlpha");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*, "OVR.OpenVR", "IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayColor*, "OVR.OpenVR", "IVROverlay/_SetOverlayColor");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*, "OVR.OpenVR", "IVROverlay/_SetOverlayDualAnalogTransform");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayFlag);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayFlag*, "OVR.OpenVR", "IVROverlay/_SetOverlayFlag");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayFromFile);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*, "OVR.OpenVR", "IVROverlay/_SetOverlayFromFile");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*, "OVR.OpenVR", "IVROverlay/_SetOverlayInputMethod");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*, "OVR.OpenVR", "IVROverlay/_SetOverlayIntersectionMask");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*, "OVR.OpenVR", "IVROverlay/_SetOverlayMouseScale");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayName*, "OVR.OpenVR", "IVROverlay/_SetOverlayName");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*, "OVR.OpenVR", "IVROverlay/_SetOverlayNeighbor");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayRaw);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayRaw*, "OVR.OpenVR", "IVROverlay/_SetOverlayRaw");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*, "OVR.OpenVR", "IVROverlay/_SetOverlayRenderModel");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*, "OVR.OpenVR", "IVROverlay/_SetOverlayRenderingPid");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*, "OVR.OpenVR", "IVROverlay/_SetOverlaySortOrder");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*, "OVR.OpenVR", "IVROverlay/_SetOverlayTexelAspect");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTexture*, "OVR.OpenVR", "IVROverlay/_SetOverlayTexture");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureBounds");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_SetOverlayTextureColorSpace");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformAbsolute");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformOverlayRelative");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformTrackedDeviceComponent");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*, "OVR.OpenVR", "IVROverlay/_SetOverlayTransformTrackedDeviceRelative");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*, "OVR.OpenVR", "IVROverlay/_SetOverlayWidthInMeters");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ShowDashboard);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ShowDashboard*, "OVR.OpenVR", "IVROverlay/_ShowDashboard");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ShowKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ShowKeyboard*, "OVR.OpenVR", "IVROverlay/_ShowKeyboard");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*, "OVR.OpenVR", "IVROverlay/_ShowKeyboardForOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ShowMessageOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*, "OVR.OpenVR", "IVROverlay/_ShowMessageOverlay");
NEED_NO_BOX(::OVR::OpenVR::__IVROverlay___ShowOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVROverlay___ShowOverlay*, "OVR.OpenVR", "IVROverlay/_ShowOverlay");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay, "OVR.OpenVR", "IVROverlay");
