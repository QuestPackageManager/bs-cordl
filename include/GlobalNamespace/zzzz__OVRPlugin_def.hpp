#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin)
namespace GlobalNamespace {
struct __OVRPlugin__EyeTextureFormat;
}
namespace GlobalNamespace {
struct __OVRPlugin__Eye;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerLayout;
}
namespace GlobalNamespace {
struct __OVRPlugin__Fovf;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_31_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_38_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoneId;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_57_0;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_10_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_86_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerDescInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsDesc;
}
namespace GlobalNamespace {
struct __OVRPlugin__Boundsf;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryType;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_16_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_87_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__AppPerfFrameStats;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_29_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__TextureRectMatrixf;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_82_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__OverlayFlag;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_73_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_67_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_52_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SkeletonType;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_49_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_63_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputSource;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceState2Internal;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_42_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_51_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__RenderModelProperties;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_2_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_41_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_55_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct __OVRPlugin__Frustumf2;
}
namespace GlobalNamespace {
struct __OVRPlugin__OverlayShape;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceLocationFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__RecenterFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughPreferenceFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_6_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState4;
}
namespace GlobalNamespace {
struct __OVRPlugin__Bool;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughColorLutChannels;
}
namespace GlobalNamespace {
struct __OVRPlugin__Recti;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_5_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__AppPerfStats;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_61_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDeviceDepthSensingMode;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_66_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardSpaceCreateInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4s;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizef;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_36_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SystemHeadset;
}
namespace GlobalNamespace {
struct __OVRPlugin__Hand;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryActionType;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackingOrigin;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_15_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_35_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__SystemRegion;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyle;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDeviceDepthQuality;
}
namespace GlobalNamespace {
struct __OVRPlugin__PerfMetrics;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_84_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_69_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_72_0;
}
namespace GlobalNamespace {
template <typename T> struct __OVRPlugin__PinnedArray_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_1_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__ProcessorPerformanceLevel;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_81_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_11_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_48_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_34_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState5;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraAnchorType;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDeviceIntrinsicsParameters;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryResult;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandFinger;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_5_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton2Internal;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandFingerPinch;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_74_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelAnimationStates;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_50_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__FeatureType;
}
namespace System {
class Version;
}
namespace Unity::Collections {
struct Allocator;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardTextureIds;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceLocationf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Controller;
}
namespace GlobalNamespace {
struct __OVRPlugin__PoseStatef;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoundaryTestResult;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSharpenType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceContainerInternal;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_37_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_68_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelVisibility;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_85_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__EventType;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerDesc;
}
namespace GlobalNamespace {
struct __OVRPlugin__MeshType;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyleFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsConstants;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_64_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStoragePersistenceMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardLocationInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__MeshConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughPreferenceFields;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelAnimationStatesInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceFilterInfoIds;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_7_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_45_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__KeyboardDescription;
}
namespace GlobalNamespace {
struct __OVRPlugin__TriangleMeshInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughCapabilityFlags;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_18_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_9_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_59_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughColorMapType;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSubmit;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_40_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazesStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoundaryType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Colorf;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_30_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState2;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazeState;
}
namespace GlobalNamespace {
struct __OVRPlugin__RenderModelFlags;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_55_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_71_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughPreferences;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardCreateInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__RenderModelPropertiesInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__XrApi;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_79_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyle2;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoneCapsule;
}
namespace GlobalNamespace {
struct __OVRPlugin__FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpatialAnchorCreateInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackingConfidence;
}
namespace GlobalNamespace {
struct __OVRPlugin__KeyboardDescriptionConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizei;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceSemanticLabelInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Bone;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraIntrinsics;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDevice;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2f;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_2;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_3;
}
namespace GlobalNamespace {
struct __OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct __OVRPlugin__BlendFactor;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughColorLutData;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_28_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton2;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputStateFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__SkeletonConstants;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_21_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryFilterType;
}
namespace GlobalNamespace {
struct __OVRPlugin__PolygonalBoundary2DInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__BatteryStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceExpression;
}
namespace GlobalNamespace {
class __OVRPlugin__UnityOpenXR;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_58_0;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_8_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsState;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_76_0;
}
namespace GlobalNamespace {
class __OVRPlugin__LogCallback2DelegateType;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_19_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_54_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_62_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoundaryGeometry;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Size3f;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_78_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughCapabilities;
}
namespace GlobalNamespace {
struct __OVRPlugin__Frustumf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazesState;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_43_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyJointLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__KeyboardState;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_53_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_44_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandState;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardLocationType;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_56_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__LogLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceExpressionStatusInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyState;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_60_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__TiledMultiResLevel;
}
namespace GlobalNamespace {
class __OVRPlugin__Media;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_17_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsBuffer;
}
namespace GlobalNamespace {
struct __OVRPlugin__Node;
}
namespace GlobalNamespace {
struct __OVRPlugin__PlatformUI;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_32_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__SceneCaptureRequestInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Rectf;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceExpressionStatus;
}
namespace GlobalNamespace {
class __OVRPlugin__Qpl;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_0_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_46_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_83_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_12_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_39_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSuperSamplingType;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelAnimationState;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_65_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__Tracker;
}
namespace GlobalNamespace {
struct __OVRPlugin__Handedness;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_75_0;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
struct __OVRPlugin__EventDataBuffer;
}
namespace GlobalNamespace {
struct __OVRPlugin__ColorSpace;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_47_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraExtrinsics;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState6;
}
namespace GlobalNamespace {
class __OVRPlugin__GUID;
}
namespace GlobalNamespace {
struct __OVRPlugin__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceState;
}
namespace GlobalNamespace {
struct __OVRPlugin__Result;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardTextureIdsInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2i;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughKeyboardHandsIntensity;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceRegionConfidence;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardTextureData;
}
namespace GlobalNamespace {
class __OVRPlugin__Ktx;
}
namespace GlobalNamespace {
struct __OVRPlugin__RoomLayout;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_3_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughCapabilityFields;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceFilterInfoComponents;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_70_0;
}
namespace GlobalNamespace {
struct __OVRPlugin__RoomLayoutInternal;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_88_0;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__PlatformCameraMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__MrcActivationMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__InputVideoBufferType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Qpl__ResultType;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRPlugin__BatteryStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__BlendFactor;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoneId;
}
namespace GlobalNamespace {
struct __OVRPlugin__Bool;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoundaryType;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraAnchorType;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDevice;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDeviceDepthQuality;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDeviceDepthSensingMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__ColorSpace;
}
namespace GlobalNamespace {
struct __OVRPlugin__Controller;
}
namespace GlobalNamespace {
struct __OVRPlugin__EventType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Eye;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeTextureFormat;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceExpression;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceRegionConfidence;
}
namespace GlobalNamespace {
struct __OVRPlugin__FeatureType;
}
namespace GlobalNamespace {
struct __OVRPlugin__FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__Hand;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandFinger;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandFingerPinch;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__Handedness;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughColorMapType;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyleFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRPlugin__KeyboardDescriptionConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerLayout;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSharpenType;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSuperSamplingType;
}
namespace GlobalNamespace {
struct __OVRPlugin__LogLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__InputVideoBufferType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__MrcActivationMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__Media__PlatformCameraMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__MeshConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__MeshType;
}
namespace GlobalNamespace {
struct __OVRPlugin__Node;
}
namespace GlobalNamespace {
struct __OVRPlugin__OverlayFlag;
}
namespace GlobalNamespace {
struct __OVRPlugin__OverlayShape;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughCapabilityFields;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughCapabilityFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughColorLutChannels;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughPreferenceFields;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughPreferenceFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__PerfMetrics;
}
namespace GlobalNamespace {
struct __OVRPlugin__PlatformUI;
}
namespace GlobalNamespace {
struct __OVRPlugin__ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__Qpl__ResultType;
}
namespace GlobalNamespace {
struct __OVRPlugin__RecenterFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__RenderModelFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__Result;
}
namespace GlobalNamespace {
struct __OVRPlugin__SkeletonConstants;
}
namespace GlobalNamespace {
struct __OVRPlugin__SkeletonType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceLocationFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryActionType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryFilterType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceStoragePersistenceMode;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace GlobalNamespace {
struct __OVRPlugin__SystemHeadset;
}
namespace GlobalNamespace {
struct __OVRPlugin__SystemRegion;
}
namespace GlobalNamespace {
struct __OVRPlugin__TiledMultiResLevel;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__Tracker;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackingConfidence;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackingOrigin;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputSource;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputStateFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardLocationType;
}
namespace GlobalNamespace {
struct __OVRPlugin__XrApi;
}
namespace GlobalNamespace {
class OVRPlugin;
}
namespace GlobalNamespace {
class __OVRPlugin__GUID;
}
namespace GlobalNamespace {
class __OVRPlugin__Ktx;
}
namespace GlobalNamespace {
class __OVRPlugin__LogCallback2DelegateType;
}
namespace GlobalNamespace {
class __OVRPlugin__Media;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_2;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_1_3;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_0_5_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_0_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_10_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_11_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_12_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_15_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_16_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_17_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_18_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_19_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_1_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_21_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_28_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_29_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_2_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_30_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_31_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_32_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_34_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_35_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_36_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_37_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_38_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_39_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_3_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_40_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_41_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_42_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_43_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_44_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_45_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_46_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_47_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_48_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_49_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_50_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_51_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_52_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_53_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_54_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_55_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_55_1;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_56_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_57_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_58_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_59_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_5_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_60_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_61_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_62_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_63_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_64_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_65_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_66_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_67_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_68_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_69_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_6_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_70_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_71_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_72_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_73_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_74_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_75_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_76_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_78_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_79_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_7_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_81_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_82_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_83_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_84_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_85_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_86_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_87_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_88_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_8_0;
}
namespace GlobalNamespace {
class __OVRPlugin__OVRP_1_9_0;
}
namespace GlobalNamespace {
class __OVRPlugin__Qpl;
}
namespace GlobalNamespace {
class __OVRPlugin__UnityOpenXR;
}
namespace GlobalNamespace {
struct __OVRPlugin__AppPerfFrameStats;
}
namespace GlobalNamespace {
struct __OVRPlugin__AppPerfStats;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyJointLocation;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyState;
}
namespace GlobalNamespace {
struct __OVRPlugin__BodyStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Bone;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoneCapsule;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoundaryGeometry;
}
namespace GlobalNamespace {
struct __OVRPlugin__BoundaryTestResult;
}
namespace GlobalNamespace {
struct __OVRPlugin__Boundsf;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraDeviceIntrinsicsParameters;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraExtrinsics;
}
namespace GlobalNamespace {
struct __OVRPlugin__CameraIntrinsics;
}
namespace GlobalNamespace {
struct __OVRPlugin__Colorf;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState2;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState4;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState5;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState6;
}
namespace GlobalNamespace {
struct __OVRPlugin__EventDataBuffer;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazeState;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazesState;
}
namespace GlobalNamespace {
struct __OVRPlugin__EyeGazesStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceExpressionStatus;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceExpressionStatusInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceState;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceState2Internal;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Fovf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Frustumf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Frustumf2;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandState;
}
namespace GlobalNamespace {
struct __OVRPlugin__HandStateInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsBuffer;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsDesc;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct __OVRPlugin__HapticsState;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughKeyboardHandsIntensity;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyle;
}
namespace GlobalNamespace {
struct __OVRPlugin__InsightPassthroughStyle2;
}
namespace GlobalNamespace {
struct __OVRPlugin__KeyboardDescription;
}
namespace GlobalNamespace {
struct __OVRPlugin__KeyboardState;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerDesc;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerDescInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__LayerSubmit;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughCapabilities;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughColorLutData;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughPreferences;
}
namespace GlobalNamespace {
template <typename T> struct __OVRPlugin__PinnedArray_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__PolygonalBoundary2DInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__PoseStatef;
}
namespace GlobalNamespace {
struct __OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct __OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Rectf;
}
namespace GlobalNamespace {
struct __OVRPlugin__Recti;
}
namespace GlobalNamespace {
struct __OVRPlugin__RenderModelProperties;
}
namespace GlobalNamespace {
struct __OVRPlugin__RenderModelPropertiesInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__RoomLayout;
}
namespace GlobalNamespace {
struct __OVRPlugin__RoomLayoutInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__SceneCaptureRequestInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Size3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizef;
}
namespace GlobalNamespace {
struct __OVRPlugin__Sizei;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton2;
}
namespace GlobalNamespace {
struct __OVRPlugin__Skeleton2Internal;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceContainerInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceFilterInfoComponents;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceFilterInfoIds;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceLocationf;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryResult;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceSemanticLabelInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpatialAnchorCreateInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__TextureRectMatrixf;
}
namespace GlobalNamespace {
struct __OVRPlugin__TriangleMeshInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector2i;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct __OVRPlugin__Vector4s;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardCreateInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardInputInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardLocationInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelAnimationState;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelAnimationStates;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelAnimationStatesInternal;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardModelVisibility;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardSpaceCreateInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardTextureData;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardTextureIds;
}
namespace GlobalNamespace {
struct __OVRPlugin__VirtualKeyboardTextureIdsInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BatteryStatus);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BlendFactor);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BoneId);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Bool);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BoundaryType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraAnchorType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraDevice);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraDeviceDepthSensingMode);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraStatus);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ColorSpace);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Controller);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__EventType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Eye);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__EyeTextureFormat);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceConstants);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceExpression);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceRegionConfidence);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FeatureType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Hand);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HandFinger);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HandFingerPinch);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HandStatus);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Handedness);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsConstants);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsLocation);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__InteractionProfile);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__KeyboardDescriptionConstants);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerLayout);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerSharpenType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LogLevel);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__MeshConstants);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__MeshType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Node);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__OverlayFlag);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__OverlayShape);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PerfMetrics);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PlatformUI);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Qpl__ResultType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__RecenterFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__RenderModelFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Result);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SkeletonConstants);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SkeletonType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceComponentType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceQueryType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceStorageLocation);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Step);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SystemHeadset);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SystemRegion);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TiledMultiResLevel);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Tracker);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TrackingConfidence);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TrackingOrigin);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__XrApi);
MARK_REF_PTR_T(::GlobalNamespace::OVRPlugin);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__GUID);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__Ktx);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__Media);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__Mesh);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_0_1_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_0_1_1);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_0_1_2);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_0_1_3);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_0_5_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_0_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_10_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_11_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_12_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_15_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_16_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_17_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_18_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_19_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_1_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_21_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_28_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_29_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_2_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_30_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_31_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_32_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_34_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_35_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_36_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_37_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_38_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_39_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_3_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_40_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_41_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_42_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_43_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_44_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_45_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_46_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_47_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_48_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_49_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_50_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_51_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_52_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_53_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_54_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_55_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_55_1);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_56_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_57_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_58_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_59_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_5_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_60_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_61_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_62_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_63_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_64_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_65_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_66_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_67_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_68_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_69_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_6_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_70_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_71_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_72_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_73_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_74_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_75_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_76_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_78_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_79_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_7_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_81_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_82_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_83_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_84_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_85_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_86_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_87_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_88_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_8_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__OVRP_1_9_0);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__Qpl);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPlugin__UnityOpenXR);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__AppPerfFrameStats);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__AppPerfStats);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BodyJointLocation);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BodyState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BodyStateInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Bone);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BoneCapsule);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BoundaryGeometry);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__BoundaryTestResult);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Boundsf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraDeviceIntrinsicsParameters);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraExtrinsics);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__CameraIntrinsics);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Colorf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ControllerState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ControllerState2);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ControllerState4);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ControllerState5);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__ControllerState6);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__EventDataBuffer);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__EyeGazeState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__EyeGazesState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceExpressionStatus);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceState2Internal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__FaceStateInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Fovf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Frustumf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Frustumf2);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HandState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HandStateInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsAmplitudeEnvelopeVibration);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsBuffer);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsDesc);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsPcmVibration);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__HapticsState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__InsightPassthroughKeyboardHandsIntensity);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__KeyboardDescription);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__KeyboardState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerDesc);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerDescInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__LayerSubmit);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughCapabilities);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PassthroughPreferences);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRPlugin__PinnedArray_1);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PolygonalBoundary2DInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__PoseStatef);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Posef);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Quatf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Rectf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Recti);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__RenderModelProperties);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__RenderModelPropertiesInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__RoomLayout);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__RoomLayoutInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SceneCaptureRequestInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Size3f);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Sizef);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Sizei);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Skeleton);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Skeleton2);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Skeleton2Internal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceContainerInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceLocationf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceQueryInfo);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceQueryResult);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpaceSemanticLabelInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__SpatialAnchorCreateInfo);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TextureRectMatrixf);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__TriangleMeshInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Vector2f);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Vector2i);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Vector3f);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Vector4f);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__Vector4s);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardCreateInfo);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputInfo);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStates);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStatesInternal);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelVisibility);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardSpaceCreateInfo);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureData);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIds);
MARK_VAL_T(::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIdsInternal);
// Type: ::GUID
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7685))
// CS Name: ::OVRPlugin::GUID*
class CORDL_TYPE __OVRPlugin__GUID : public ::System::Object {
public:
  // Declarations
  /// @brief Field a, offset 0x10, size 0x4
  __declspec(property(get = __get_a, put = __set_a)) int32_t a;

  /// @brief Field b, offset 0x14, size 0x2
  __declspec(property(get = __get_b, put = __set_b)) int16_t b;

  /// @brief Field c, offset 0x16, size 0x2
  __declspec(property(get = __get_c, put = __set_c)) int16_t c;

  /// @brief Field d0, offset 0x18, size 0x1
  __declspec(property(get = __get_d0, put = __set_d0)) uint8_t d0;

  /// @brief Field d1, offset 0x19, size 0x1
  __declspec(property(get = __get_d1, put = __set_d1)) uint8_t d1;

  /// @brief Field d2, offset 0x1a, size 0x1
  __declspec(property(get = __get_d2, put = __set_d2)) uint8_t d2;

  /// @brief Field d3, offset 0x1b, size 0x1
  __declspec(property(get = __get_d3, put = __set_d3)) uint8_t d3;

  /// @brief Field d4, offset 0x1c, size 0x1
  __declspec(property(get = __get_d4, put = __set_d4)) uint8_t d4;

  /// @brief Field d5, offset 0x1d, size 0x1
  __declspec(property(get = __get_d5, put = __set_d5)) uint8_t d5;

  /// @brief Field d6, offset 0x1e, size 0x1
  __declspec(property(get = __get_d6, put = __set_d6)) uint8_t d6;

  /// @brief Field d7, offset 0x1f, size 0x1
  __declspec(property(get = __get_d7, put = __set_d7)) uint8_t d7;

  constexpr int32_t& __get_a();

  constexpr int32_t const& __get_a() const;

  constexpr void __set_a(int32_t value);

  constexpr int16_t& __get_b();

  constexpr int16_t const& __get_b() const;

  constexpr void __set_b(int16_t value);

  constexpr int16_t& __get_c();

  constexpr int16_t const& __get_c() const;

  constexpr void __set_c(int16_t value);

  constexpr uint8_t& __get_d0();

  constexpr uint8_t const& __get_d0() const;

  constexpr void __set_d0(uint8_t value);

  constexpr uint8_t& __get_d1();

  constexpr uint8_t const& __get_d1() const;

  constexpr void __set_d1(uint8_t value);

  constexpr uint8_t& __get_d2();

  constexpr uint8_t const& __get_d2() const;

  constexpr void __set_d2(uint8_t value);

  constexpr uint8_t& __get_d3();

  constexpr uint8_t const& __get_d3() const;

  constexpr void __set_d3(uint8_t value);

  constexpr uint8_t& __get_d4();

  constexpr uint8_t const& __get_d4() const;

  constexpr void __set_d4(uint8_t value);

  constexpr uint8_t& __get_d5();

  constexpr uint8_t const& __get_d5() const;

  constexpr void __set_d5(uint8_t value);

  constexpr uint8_t& __get_d6();

  constexpr uint8_t const& __get_d6() const;

  constexpr void __set_d6(uint8_t value);

  constexpr uint8_t& __get_d7();

  constexpr uint8_t const& __get_d7() const;

  constexpr void __set_d7(uint8_t value);

  static inline ::GlobalNamespace::__OVRPlugin__GUID* New_ctor();

  /// @brief Method .ctor addr 0x2755f50 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__GUID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__GUID(__OVRPlugin__GUID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__GUID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__GUID(__OVRPlugin__GUID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__GUID();

public:
  /// @brief Field a, offset: 0x10, size: 0x4, def value: None
  int32_t ___a;

  /// @brief Field b, offset: 0x14, size: 0x2, def value: None
  int16_t ___b;

  /// @brief Field c, offset: 0x16, size: 0x2, def value: None
  int16_t ___c;

  /// @brief Field d0, offset: 0x18, size: 0x1, def value: None
  uint8_t ___d0;

  /// @brief Field d1, offset: 0x19, size: 0x1, def value: None
  uint8_t ___d1;

  /// @brief Field d2, offset: 0x1a, size: 0x1, def value: None
  uint8_t ___d2;

  /// @brief Field d3, offset: 0x1b, size: 0x1, def value: None
  uint8_t ___d3;

  /// @brief Field d4, offset: 0x1c, size: 0x1, def value: None
  uint8_t ___d4;

  /// @brief Field d5, offset: 0x1d, size: 0x1, def value: None
  uint8_t ___d5;

  /// @brief Field d6, offset: 0x1e, size: 0x1, def value: None
  uint8_t ___d6;

  /// @brief Field d7, offset: 0x1f, size: 0x1, def value: None
  uint8_t ___d7;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__GUID, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Bool
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7686))
// CS Name: ::OVRPlugin::Bool
struct CORDL_TYPE __OVRPlugin__Bool {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Bool_Unwrapped
  enum struct ____OVRPlugin__Bool_Unwrapped : int32_t {
    __E_False = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Bool_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Bool_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Bool(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Bool();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field False value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Bool const False;

  /// @brief Field True value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Bool const True;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Bool, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7687))
// CS Name: ::OVRPlugin::Result
struct CORDL_TYPE __OVRPlugin__Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Result_Unwrapped
  enum struct ____OVRPlugin__Result_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Success_EventUnavailable = static_cast<int32_t>(0x1),
    __E_Success_Pending = static_cast<int32_t>(0x2),
    __E_Failure = static_cast<int32_t>(0xfffffc18),
    __E_Failure_InvalidParameter = static_cast<int32_t>(0xfffffc17),
    __E_Failure_NotInitialized = static_cast<int32_t>(0xfffffc16),
    __E_Failure_InvalidOperation = static_cast<int32_t>(0xfffffc15),
    __E_Failure_Unsupported = static_cast<int32_t>(0xfffffc14),
    __E_Failure_NotYetImplemented = static_cast<int32_t>(0xfffffc13),
    __E_Failure_OperationFailed = static_cast<int32_t>(0xfffffc12),
    __E_Failure_InsufficientSize = static_cast<int32_t>(0xfffffc11),
    __E_Failure_DataIsInvalid = static_cast<int32_t>(0xfffffc10),
    __E_Failure_DeprecatedOperation = static_cast<int32_t>(0xfffffc0f),
    __E_Failure_ErrorLimitReached = static_cast<int32_t>(0xfffffc0e),
    __E_Failure_ErrorInitializationFailed = static_cast<int32_t>(0xfffffc0d),
    __E_Failure_SpaceCloudStorageDisabled = static_cast<int32_t>(0xfffff830),
    __E_Failure_SpaceMappingInsufficient = static_cast<int32_t>(0xfffff82f),
    __E_Failure_SpaceLocalizationFailed = static_cast<int32_t>(0xfffff82e),
    __E_Failure_SpaceNetworkTimeout = static_cast<int32_t>(0xfffff82d),
    __E_Failure_SpaceNetworkRequestFailed = static_cast<int32_t>(0xfffff82c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Result_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Result_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Result(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Result();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Result const Success;

  /// @brief Field Success_EventUnavailable value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Result const Success_EventUnavailable;

  /// @brief Field Success_Pending value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Result const Success_Pending;

  /// @brief Field Failure value: static_cast<int32_t>(0xfffffc18)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure;

  /// @brief Field Failure_InvalidParameter value: static_cast<int32_t>(0xfffffc17)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_InvalidParameter;

  /// @brief Field Failure_NotInitialized value: static_cast<int32_t>(0xfffffc16)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_NotInitialized;

  /// @brief Field Failure_InvalidOperation value: static_cast<int32_t>(0xfffffc15)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_InvalidOperation;

  /// @brief Field Failure_Unsupported value: static_cast<int32_t>(0xfffffc14)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_Unsupported;

  /// @brief Field Failure_NotYetImplemented value: static_cast<int32_t>(0xfffffc13)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_NotYetImplemented;

  /// @brief Field Failure_OperationFailed value: static_cast<int32_t>(0xfffffc12)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_OperationFailed;

  /// @brief Field Failure_InsufficientSize value: static_cast<int32_t>(0xfffffc11)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_InsufficientSize;

  /// @brief Field Failure_DataIsInvalid value: static_cast<int32_t>(0xfffffc10)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_DataIsInvalid;

  /// @brief Field Failure_DeprecatedOperation value: static_cast<int32_t>(0xfffffc0f)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_DeprecatedOperation;

  /// @brief Field Failure_ErrorLimitReached value: static_cast<int32_t>(0xfffffc0e)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_ErrorLimitReached;

  /// @brief Field Failure_ErrorInitializationFailed value: static_cast<int32_t>(0xfffffc0d)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_ErrorInitializationFailed;

  /// @brief Field Failure_SpaceCloudStorageDisabled value: static_cast<int32_t>(0xfffff830)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_SpaceCloudStorageDisabled;

  /// @brief Field Failure_SpaceMappingInsufficient value: static_cast<int32_t>(0xfffff82f)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_SpaceMappingInsufficient;

  /// @brief Field Failure_SpaceLocalizationFailed value: static_cast<int32_t>(0xfffff82e)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_SpaceLocalizationFailed;

  /// @brief Field Failure_SpaceNetworkTimeout value: static_cast<int32_t>(0xfffff82d)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_SpaceNetworkTimeout;

  /// @brief Field Failure_SpaceNetworkRequestFailed value: static_cast<int32_t>(0xfffff82c)
  static ::GlobalNamespace::__OVRPlugin__Result const Failure_SpaceNetworkRequestFailed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Result, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7688))
// CS Name: ::OVRPlugin::LogLevel
struct CORDL_TYPE __OVRPlugin__LogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__LogLevel_Unwrapped
  enum struct ____OVRPlugin__LogLevel_Unwrapped : int32_t {
    __E_Debug = static_cast<int32_t>(0x0),
    __E_Info = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__LogLevel_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__LogLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LogLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LogLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Debug value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__LogLevel const Debug;

  /// @brief Field Info value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__LogLevel const Info;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__LogLevel const Error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LogLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LogCallback2DelegateType
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7689))
// CS Name: ::OVRPlugin::LogCallback2DelegateType*
class CORDL_TYPE __OVRPlugin__LogCallback2DelegateType : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x276aaf0 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x276abb4 size 0x14 virtual true final false
  inline void Invoke(::GlobalNamespace::__OVRPlugin__LogLevel logLevel, void* message, int32_t size);

  /// @brief Method BeginInvoke addr 0x276abc8 size 0xe4 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__OVRPlugin__LogLevel logLevel, void* message, int32_t size, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x276acac size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__LogCallback2DelegateType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__LogCallback2DelegateType(__OVRPlugin__LogCallback2DelegateType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__LogCallback2DelegateType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__LogCallback2DelegateType(__OVRPlugin__LogCallback2DelegateType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LogCallback2DelegateType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7690))
// CS Name: ::OVRPlugin::CameraStatus
struct CORDL_TYPE __OVRPlugin__CameraStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__CameraStatus_Unwrapped
  enum struct ____OVRPlugin__CameraStatus_Unwrapped : int32_t {
    __E_CameraStatus_None = static_cast<int32_t>(0x0),
    __E_CameraStatus_Connected = static_cast<int32_t>(0x1),
    __E_CameraStatus_Calibrating = static_cast<int32_t>(0x2),
    __E_CameraStatus_CalibrationFailed = static_cast<int32_t>(0x3),
    __E_CameraStatus_Calibrated = static_cast<int32_t>(0x4),
    __E_CameraStatus_ThirdPerson = static_cast<int32_t>(0x5),
    __E_CameraStatus_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__CameraStatus_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__CameraStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CameraStatus_None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_None;

  /// @brief Field CameraStatus_Connected value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_Connected;

  /// @brief Field CameraStatus_Calibrating value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_Calibrating;

  /// @brief Field CameraStatus_CalibrationFailed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_CalibrationFailed;

  /// @brief Field CameraStatus_Calibrated value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_Calibrated;

  /// @brief Field CameraStatus_ThirdPerson value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_ThirdPerson;

  /// @brief Field CameraStatus_EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__CameraStatus const CameraStatus_EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraStatus, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraAnchorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7691))
// CS Name: ::OVRPlugin::CameraAnchorType
struct CORDL_TYPE __OVRPlugin__CameraAnchorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__CameraAnchorType_Unwrapped
  enum struct ____OVRPlugin__CameraAnchorType_Unwrapped : int32_t {
    __E_CameraAnchorType_PreDefined = static_cast<int32_t>(0x0),
    __E_CameraAnchorType_Custom = static_cast<int32_t>(0x1),
    __E_CameraAnchorType_Count = static_cast<int32_t>(0x2),
    __E_CameraAnchorType_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__CameraAnchorType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__CameraAnchorType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraAnchorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraAnchorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CameraAnchorType_PreDefined value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__CameraAnchorType const CameraAnchorType_PreDefined;

  /// @brief Field CameraAnchorType_Custom value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__CameraAnchorType const CameraAnchorType_Custom;

  /// @brief Field CameraAnchorType_Count value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__CameraAnchorType const CameraAnchorType_Count;

  /// @brief Field CameraAnchorType_EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__CameraAnchorType const CameraAnchorType_EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraAnchorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::XrApi
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7692))
// CS Name: ::OVRPlugin::XrApi
struct CORDL_TYPE __OVRPlugin__XrApi {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__XrApi_Unwrapped
  enum struct ____OVRPlugin__XrApi_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_CAPI = static_cast<int32_t>(0x1),
    __E_VRAPI = static_cast<int32_t>(0x2),
    __E_OpenXR = static_cast<int32_t>(0x3),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__XrApi_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__XrApi_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__XrApi(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__XrApi();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__XrApi const Unknown;

  /// @brief Field CAPI value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__XrApi const CAPI;

  /// @brief Field VRAPI value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__XrApi const VRAPI;

  /// @brief Field OpenXR value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__XrApi const OpenXR;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__XrApi const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__XrApi, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Eye
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7693))
// CS Name: ::OVRPlugin::Eye
struct CORDL_TYPE __OVRPlugin__Eye {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Eye_Unwrapped
  enum struct ____OVRPlugin__Eye_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Eye_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Eye_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Eye(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Eye();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Eye const None;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Eye const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Eye const Right;

  /// @brief Field Count value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Eye const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Eye, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Tracker
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7694))
// CS Name: ::OVRPlugin::Tracker
struct CORDL_TYPE __OVRPlugin__Tracker {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Tracker_Unwrapped
  enum struct ____OVRPlugin__Tracker_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Zero = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Three = static_cast<int32_t>(0x3),
    __E_Count = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Tracker_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Tracker_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Tracker(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Tracker();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Tracker const None;

  /// @brief Field Zero value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Tracker const Zero;

  /// @brief Field One value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Tracker const One;

  /// @brief Field Two value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Tracker const Two;

  /// @brief Field Three value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__Tracker const Three;

  /// @brief Field Count value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__Tracker const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Tracker, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Node
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7695))
// CS Name: ::OVRPlugin::Node
struct CORDL_TYPE __OVRPlugin__Node {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Node_Unwrapped
  enum struct ____OVRPlugin__Node_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_EyeLeft = static_cast<int32_t>(0x0),
    __E_EyeRight = static_cast<int32_t>(0x1),
    __E_EyeCenter = static_cast<int32_t>(0x2),
    __E_HandLeft = static_cast<int32_t>(0x3),
    __E_HandRight = static_cast<int32_t>(0x4),
    __E_TrackerZero = static_cast<int32_t>(0x5),
    __E_TrackerOne = static_cast<int32_t>(0x6),
    __E_TrackerTwo = static_cast<int32_t>(0x7),
    __E_TrackerThree = static_cast<int32_t>(0x8),
    __E_Head = static_cast<int32_t>(0x9),
    __E_DeviceObjectZero = static_cast<int32_t>(0xa),
    __E_TrackedKeyboard = static_cast<int32_t>(0xb),
    __E_ControllerLeft = static_cast<int32_t>(0xc),
    __E_ControllerRight = static_cast<int32_t>(0xd),
    __E_Count = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Node_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Node_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Node(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Node();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Node const None;

  /// @brief Field EyeLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Node const EyeLeft;

  /// @brief Field EyeRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Node const EyeRight;

  /// @brief Field EyeCenter value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Node const EyeCenter;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__Node const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__Node const HandRight;

  /// @brief Field TrackerZero value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__Node const TrackerZero;

  /// @brief Field TrackerOne value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__Node const TrackerOne;

  /// @brief Field TrackerTwo value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__Node const TrackerTwo;

  /// @brief Field TrackerThree value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__Node const TrackerThree;

  /// @brief Field Head value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__Node const Head;

  /// @brief Field DeviceObjectZero value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__Node const DeviceObjectZero;

  /// @brief Field TrackedKeyboard value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__Node const TrackedKeyboard;

  /// @brief Field ControllerLeft value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRPlugin__Node const ControllerLeft;

  /// @brief Field ControllerRight value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRPlugin__Node const ControllerRight;

  /// @brief Field Count value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRPlugin__Node const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Node, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Controller
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7696))
// CS Name: ::OVRPlugin::Controller
struct CORDL_TYPE __OVRPlugin__Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Controller_Unwrapped
  enum struct ____OVRPlugin__Controller_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LTouch = static_cast<int32_t>(0x1),
    __E_RTouch = static_cast<int32_t>(0x2),
    __E_Touch = static_cast<int32_t>(0x3),
    __E_Remote = static_cast<int32_t>(0x4),
    __E_Gamepad = static_cast<int32_t>(0x10),
    __E_LHand = static_cast<int32_t>(0x20),
    __E_RHand = static_cast<int32_t>(0x40),
    __E_Hands = static_cast<int32_t>(0x60),
    __E_Active = static_cast<int32_t>(0x80000000),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Controller_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Controller_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Controller(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Controller();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Controller const None;

  /// @brief Field LTouch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Controller const LTouch;

  /// @brief Field RTouch value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Controller const RTouch;

  /// @brief Field Touch value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__Controller const Touch;

  /// @brief Field Remote value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__Controller const Remote;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__Controller const Gamepad;

  /// @brief Field LHand value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__Controller const LHand;

  /// @brief Field RHand value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRPlugin__Controller const RHand;

  /// @brief Field Hands value: static_cast<int32_t>(0x60)
  static ::GlobalNamespace::__OVRPlugin__Controller const Hands;

  /// @brief Field Active value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRPlugin__Controller const Active;

  /// @brief Field All value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Controller const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Controller, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InteractionProfile
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7697))
// CS Name: ::OVRPlugin::InteractionProfile
struct CORDL_TYPE __OVRPlugin__InteractionProfile {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__InteractionProfile_Unwrapped
  enum struct ____OVRPlugin__InteractionProfile_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Touch = static_cast<int32_t>(0x1),
    __E_TouchPro = static_cast<int32_t>(0x2),
    __E_TouchPlus = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__InteractionProfile_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__InteractionProfile_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__InteractionProfile(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__InteractionProfile();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__InteractionProfile const None;

  /// @brief Field Touch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__InteractionProfile const Touch;

  /// @brief Field TouchPro value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__InteractionProfile const TouchPro;

  /// @brief Field TouchPlus value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__InteractionProfile const TouchPlus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__InteractionProfile, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Handedness
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7698))
// CS Name: ::OVRPlugin::Handedness
struct CORDL_TYPE __OVRPlugin__Handedness {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Handedness_Unwrapped
  enum struct ____OVRPlugin__Handedness_Unwrapped : int32_t {
    __E_Unsupported = static_cast<int32_t>(0x0),
    __E_LeftHanded = static_cast<int32_t>(0x1),
    __E_RightHanded = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Handedness_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Handedness_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Handedness(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Handedness();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unsupported value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Handedness const Unsupported;

  /// @brief Field LeftHanded value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Handedness const LeftHanded;

  /// @brief Field RightHanded value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Handedness const RightHanded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Handedness, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackingOrigin
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7699))
// CS Name: ::OVRPlugin::TrackingOrigin
struct CORDL_TYPE __OVRPlugin__TrackingOrigin {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__TrackingOrigin_Unwrapped
  enum struct ____OVRPlugin__TrackingOrigin_Unwrapped : int32_t {
    __E_EyeLevel = static_cast<int32_t>(0x0),
    __E_FloorLevel = static_cast<int32_t>(0x1),
    __E_Stage = static_cast<int32_t>(0x2),
    __E_View = static_cast<int32_t>(0x4),
    __E_Count = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__TrackingOrigin_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__TrackingOrigin_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TrackingOrigin(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TrackingOrigin();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EyeLevel value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__TrackingOrigin const EyeLevel;

  /// @brief Field FloorLevel value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__TrackingOrigin const FloorLevel;

  /// @brief Field Stage value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__TrackingOrigin const Stage;

  /// @brief Field View value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__TrackingOrigin const View;

  /// @brief Field Count value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__TrackingOrigin const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TrackingOrigin, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RecenterFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7700))
// CS Name: ::OVRPlugin::RecenterFlags
struct CORDL_TYPE __OVRPlugin__RecenterFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__RecenterFlags_Unwrapped
  enum struct ____OVRPlugin__RecenterFlags_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_IgnoreAll = static_cast<int32_t>(0x80000000),
    __E_Count = static_cast<int32_t>(0x80000001),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__RecenterFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__RecenterFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__RecenterFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__RecenterFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__RecenterFlags const Default;

  /// @brief Field IgnoreAll value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRPlugin__RecenterFlags const IgnoreAll;

  /// @brief Field Count value: static_cast<int32_t>(0x80000001)
  static ::GlobalNamespace::__OVRPlugin__RecenterFlags const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__RecenterFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BatteryStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7701))
// CS Name: ::OVRPlugin::BatteryStatus
struct CORDL_TYPE __OVRPlugin__BatteryStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__BatteryStatus_Unwrapped
  enum struct ____OVRPlugin__BatteryStatus_Unwrapped : int32_t {
    __E_Charging = static_cast<int32_t>(0x0),
    __E_Discharging = static_cast<int32_t>(0x1),
    __E_Full = static_cast<int32_t>(0x2),
    __E_NotCharging = static_cast<int32_t>(0x3),
    __E_Unknown = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__BatteryStatus_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__BatteryStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BatteryStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BatteryStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Charging value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__BatteryStatus const Charging;

  /// @brief Field Discharging value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__BatteryStatus const Discharging;

  /// @brief Field Full value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__BatteryStatus const Full;

  /// @brief Field NotCharging value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__BatteryStatus const NotCharging;

  /// @brief Field Unknown value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__BatteryStatus const Unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BatteryStatus, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeTextureFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7702))
// CS Name: ::OVRPlugin::EyeTextureFormat
struct CORDL_TYPE __OVRPlugin__EyeTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__EyeTextureFormat_Unwrapped
  enum struct ____OVRPlugin__EyeTextureFormat_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_R8G8B8A8_sRGB = static_cast<int32_t>(0x0),
    __E_R8G8B8A8 = static_cast<int32_t>(0x1),
    __E_R16G16B16A16_FP = static_cast<int32_t>(0x2),
    __E_R11G11B10_FP = static_cast<int32_t>(0x3),
    __E_B8G8R8A8_sRGB = static_cast<int32_t>(0x4),
    __E_B8G8R8A8 = static_cast<int32_t>(0x5),
    __E_R5G6B5 = static_cast<int32_t>(0xb),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__EyeTextureFormat_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__EyeTextureFormat_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__EyeTextureFormat(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__EyeTextureFormat();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const Default;

  /// @brief Field R8G8B8A8_sRGB value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const R8G8B8A8_sRGB;

  /// @brief Field R8G8B8A8 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const R8G8B8A8;

  /// @brief Field R16G16B16A16_FP value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const R16G16B16A16_FP;

  /// @brief Field R11G11B10_FP value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const R11G11B10_FP;

  /// @brief Field B8G8R8A8_sRGB value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const B8G8R8A8_sRGB;

  /// @brief Field B8G8R8A8 value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const B8G8R8A8;

  /// @brief Field R5G6B5 value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const R5G6B5;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__EyeTextureFormat const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__EyeTextureFormat, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformUI
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7703))
// CS Name: ::OVRPlugin::PlatformUI
struct CORDL_TYPE __OVRPlugin__PlatformUI {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__PlatformUI_Unwrapped
  enum struct ____OVRPlugin__PlatformUI_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_ConfirmQuit = static_cast<int32_t>(0x1),
    __E_GlobalMenuTutorial = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PlatformUI_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PlatformUI_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PlatformUI(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PlatformUI();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__PlatformUI const None;

  /// @brief Field ConfirmQuit value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PlatformUI const ConfirmQuit;

  /// @brief Field GlobalMenuTutorial value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__PlatformUI const GlobalMenuTutorial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PlatformUI, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SystemRegion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7704))
// CS Name: ::OVRPlugin::SystemRegion
struct CORDL_TYPE __OVRPlugin__SystemRegion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SystemRegion_Unwrapped
  enum struct ____OVRPlugin__SystemRegion_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Japan = static_cast<int32_t>(0x1),
    __E_China = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SystemRegion_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SystemRegion_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SystemRegion(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SystemRegion();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unspecified value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SystemRegion const Unspecified;

  /// @brief Field Japan value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__SystemRegion const Japan;

  /// @brief Field China value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__SystemRegion const China;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SystemRegion, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SystemHeadset
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7705))
// CS Name: ::OVRPlugin::SystemHeadset
struct CORDL_TYPE __OVRPlugin__SystemHeadset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SystemHeadset_Unwrapped
  enum struct ____OVRPlugin__SystemHeadset_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Oculus_Quest = static_cast<int32_t>(0x8),
    __E_Oculus_Quest_2 = static_cast<int32_t>(0x9),
    __E_Meta_Quest_Pro = static_cast<int32_t>(0xa),
    __E_Meta_Quest_3 = static_cast<int32_t>(0xb),
    __E_Placeholder_12 = static_cast<int32_t>(0xc),
    __E_Placeholder_13 = static_cast<int32_t>(0xd),
    __E_Placeholder_14 = static_cast<int32_t>(0xe),
    __E_Rift_DK1 = static_cast<int32_t>(0x1000),
    __E_Rift_DK2 = static_cast<int32_t>(0x1001),
    __E_Rift_CV1 = static_cast<int32_t>(0x1002),
    __E_Rift_CB = static_cast<int32_t>(0x1003),
    __E_Rift_S = static_cast<int32_t>(0x1004),
    __E_Oculus_Link_Quest = static_cast<int32_t>(0x1005),
    __E_Oculus_Link_Quest_2 = static_cast<int32_t>(0x1006),
    __E_Meta_Link_Quest_Pro = static_cast<int32_t>(0x1007),
    __E_Meta_Link_Quest_3 = static_cast<int32_t>(0x1008),
    __E_PC_Placeholder_4105 = static_cast<int32_t>(0x1009),
    __E_PC_Placeholder_4106 = static_cast<int32_t>(0x100a),
    __E_PC_Placeholder_4107 = static_cast<int32_t>(0x100b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SystemHeadset_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SystemHeadset_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SystemHeadset(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SystemHeadset();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const None;

  /// @brief Field Oculus_Quest value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Oculus_Quest;

  /// @brief Field Oculus_Quest_2 value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Oculus_Quest_2;

  /// @brief Field Meta_Quest_Pro value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Meta_Quest_Pro;

  /// @brief Field Meta_Quest_3 value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Meta_Quest_3;

  /// @brief Field Placeholder_12 value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Placeholder_12;

  /// @brief Field Placeholder_13 value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Placeholder_13;

  /// @brief Field Placeholder_14 value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Placeholder_14;

  /// @brief Field Rift_DK1 value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Rift_DK1;

  /// @brief Field Rift_DK2 value: static_cast<int32_t>(0x1001)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Rift_DK2;

  /// @brief Field Rift_CV1 value: static_cast<int32_t>(0x1002)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Rift_CV1;

  /// @brief Field Rift_CB value: static_cast<int32_t>(0x1003)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Rift_CB;

  /// @brief Field Rift_S value: static_cast<int32_t>(0x1004)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Rift_S;

  /// @brief Field Oculus_Link_Quest value: static_cast<int32_t>(0x1005)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Oculus_Link_Quest;

  /// @brief Field Oculus_Link_Quest_2 value: static_cast<int32_t>(0x1006)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Oculus_Link_Quest_2;

  /// @brief Field Meta_Link_Quest_Pro value: static_cast<int32_t>(0x1007)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Meta_Link_Quest_Pro;

  /// @brief Field Meta_Link_Quest_3 value: static_cast<int32_t>(0x1008)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const Meta_Link_Quest_3;

  /// @brief Field PC_Placeholder_4105 value: static_cast<int32_t>(0x1009)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const PC_Placeholder_4105;

  /// @brief Field PC_Placeholder_4106 value: static_cast<int32_t>(0x100a)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const PC_Placeholder_4106;

  /// @brief Field PC_Placeholder_4107 value: static_cast<int32_t>(0x100b)
  static ::GlobalNamespace::__OVRPlugin__SystemHeadset const PC_Placeholder_4107;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SystemHeadset, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OverlayShape
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7706))
// CS Name: ::OVRPlugin::OverlayShape
struct CORDL_TYPE __OVRPlugin__OverlayShape {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__OverlayShape_Unwrapped
  enum struct ____OVRPlugin__OverlayShape_Unwrapped : int32_t {
    __E_Quad = static_cast<int32_t>(0x0),
    __E_Cylinder = static_cast<int32_t>(0x1),
    __E_Cubemap = static_cast<int32_t>(0x2),
    __E_OffcenterCubemap = static_cast<int32_t>(0x4),
    __E_Equirect = static_cast<int32_t>(0x5),
    __E_ReconstructionPassthrough = static_cast<int32_t>(0x7),
    __E_SurfaceProjectedPassthrough = static_cast<int32_t>(0x8),
    __E_Fisheye = static_cast<int32_t>(0x9),
    __E_KeyboardHandsPassthrough = static_cast<int32_t>(0xa),
    __E_KeyboardMaskedHandsPassthrough = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__OverlayShape_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__OverlayShape_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__OverlayShape(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OverlayShape();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Quad value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const Quad;

  /// @brief Field Cylinder value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const Cylinder;

  /// @brief Field Cubemap value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const Cubemap;

  /// @brief Field OffcenterCubemap value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const OffcenterCubemap;

  /// @brief Field Equirect value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const Equirect;

  /// @brief Field ReconstructionPassthrough value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const ReconstructionPassthrough;

  /// @brief Field SurfaceProjectedPassthrough value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const SurfaceProjectedPassthrough;

  /// @brief Field Fisheye value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const Fisheye;

  /// @brief Field KeyboardHandsPassthrough value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const KeyboardHandsPassthrough;

  /// @brief Field KeyboardMaskedHandsPassthrough value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__OverlayShape const KeyboardMaskedHandsPassthrough;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OverlayShape, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerSuperSamplingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7707))
// CS Name: ::OVRPlugin::LayerSuperSamplingType
struct CORDL_TYPE __OVRPlugin__LayerSuperSamplingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__LayerSuperSamplingType_Unwrapped
  enum struct ____OVRPlugin__LayerSuperSamplingType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1000),
    __E_Quality = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__LayerSuperSamplingType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__LayerSuperSamplingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LayerSuperSamplingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerSuperSamplingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType const Normal;

  /// @brief Field Quality value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType const Quality;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerSharpenType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7708))
// CS Name: ::OVRPlugin::LayerSharpenType
struct CORDL_TYPE __OVRPlugin__LayerSharpenType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__LayerSharpenType_Unwrapped
  enum struct ____OVRPlugin__LayerSharpenType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x2000),
    __E_Quality = static_cast<int32_t>(0x10000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__LayerSharpenType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__LayerSharpenType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LayerSharpenType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerSharpenType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__LayerSharpenType const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRPlugin__LayerSharpenType const Normal;

  /// @brief Field Quality value: static_cast<int32_t>(0x10000)
  static ::GlobalNamespace::__OVRPlugin__LayerSharpenType const Quality;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerSharpenType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Step
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7709))
// CS Name: ::OVRPlugin::Step
struct CORDL_TYPE __OVRPlugin__Step {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Step_Unwrapped
  enum struct ____OVRPlugin__Step_Unwrapped : int32_t {
    __E_Render = static_cast<int32_t>(0xffffffff),
    __E_Physics = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Step_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Step_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Step(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Step();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Render value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Step const Render;

  /// @brief Field Physics value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Step const Physics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Step, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraDevice
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7710))
// CS Name: ::OVRPlugin::CameraDevice
struct CORDL_TYPE __OVRPlugin__CameraDevice {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__CameraDevice_Unwrapped
  enum struct ____OVRPlugin__CameraDevice_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WebCamera0 = static_cast<int32_t>(0x64),
    __E_WebCamera1 = static_cast<int32_t>(0x65),
    __E_ZEDCamera = static_cast<int32_t>(0x12c),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__CameraDevice_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__CameraDevice_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraDevice(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraDevice();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__CameraDevice const None;

  /// @brief Field WebCamera0 value: static_cast<int32_t>(0x64)
  static ::GlobalNamespace::__OVRPlugin__CameraDevice const WebCamera0;

  /// @brief Field WebCamera1 value: static_cast<int32_t>(0x65)
  static ::GlobalNamespace::__OVRPlugin__CameraDevice const WebCamera1;

  /// @brief Field ZEDCamera value: static_cast<int32_t>(0x12c)
  static ::GlobalNamespace::__OVRPlugin__CameraDevice const ZEDCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraDevice, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraDeviceDepthSensingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7711))
// CS Name: ::OVRPlugin::CameraDeviceDepthSensingMode
struct CORDL_TYPE __OVRPlugin__CameraDeviceDepthSensingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__CameraDeviceDepthSensingMode_Unwrapped
  enum struct ____OVRPlugin__CameraDeviceDepthSensingMode_Unwrapped : int32_t {
    __E_Standard = static_cast<int32_t>(0x0),
    __E_Fill = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__CameraDeviceDepthSensingMode_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__CameraDeviceDepthSensingMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraDeviceDepthSensingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraDeviceDepthSensingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Standard value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthSensingMode const Standard;

  /// @brief Field Fill value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthSensingMode const Fill;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraDeviceDepthSensingMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraDeviceDepthQuality
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7712))
// CS Name: ::OVRPlugin::CameraDeviceDepthQuality
struct CORDL_TYPE __OVRPlugin__CameraDeviceDepthQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__CameraDeviceDepthQuality_Unwrapped
  enum struct ____OVRPlugin__CameraDeviceDepthQuality_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__CameraDeviceDepthQuality_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__CameraDeviceDepthQuality_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraDeviceDepthQuality(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraDeviceDepthQuality();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality const High;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FoveatedRenderingLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7713))
// CS Name: ::OVRPlugin::FoveatedRenderingLevel
struct CORDL_TYPE __OVRPlugin__FoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__FoveatedRenderingLevel_Unwrapped
  enum struct ____OVRPlugin__FoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__FoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__FoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FoveatedRenderingLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FoveatedRenderingLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel const Off;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel const High;

  /// @brief Field HighTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel const HighTop;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FixedFoveatedRenderingLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7714))
// CS Name: ::OVRPlugin::FixedFoveatedRenderingLevel
struct CORDL_TYPE __OVRPlugin__FixedFoveatedRenderingLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__FixedFoveatedRenderingLevel_Unwrapped
  enum struct ____OVRPlugin__FixedFoveatedRenderingLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
    __E_HighTop = static_cast<int32_t>(0x4),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__FixedFoveatedRenderingLevel_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__FixedFoveatedRenderingLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FixedFoveatedRenderingLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FixedFoveatedRenderingLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel const Off;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel const Low;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel const Medium;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel const High;

  /// @brief Field HighTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel const HighTop;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TiledMultiResLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7715))
// CS Name: ::OVRPlugin::TiledMultiResLevel
struct CORDL_TYPE __OVRPlugin__TiledMultiResLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__TiledMultiResLevel_Unwrapped
  enum struct ____OVRPlugin__TiledMultiResLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_LMSLow = static_cast<int32_t>(0x1),
    __E_LMSMedium = static_cast<int32_t>(0x2),
    __E_LMSHigh = static_cast<int32_t>(0x3),
    __E_LMSHighTop = static_cast<int32_t>(0x4),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__TiledMultiResLevel_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__TiledMultiResLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TiledMultiResLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TiledMultiResLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel const Off;

  /// @brief Field LMSLow value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel const LMSLow;

  /// @brief Field LMSMedium value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel const LMSMedium;

  /// @brief Field LMSHigh value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel const LMSHigh;

  /// @brief Field LMSHighTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel const LMSHighTop;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TiledMultiResLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PerfMetrics
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7716))
// CS Name: ::OVRPlugin::PerfMetrics
struct CORDL_TYPE __OVRPlugin__PerfMetrics {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__PerfMetrics_Unwrapped
  enum struct ____OVRPlugin__PerfMetrics_Unwrapped : int32_t {
    __E_App_CpuTime_Float = static_cast<int32_t>(0x0),
    __E_App_GpuTime_Float = static_cast<int32_t>(0x1),
    __E_Compositor_CpuTime_Float = static_cast<int32_t>(0x3),
    __E_Compositor_GpuTime_Float = static_cast<int32_t>(0x4),
    __E_Compositor_DroppedFrameCount_Int = static_cast<int32_t>(0x5),
    __E_System_GpuUtilPercentage_Float = static_cast<int32_t>(0x7),
    __E_System_CpuUtilAveragePercentage_Float = static_cast<int32_t>(0x8),
    __E_System_CpuUtilWorstPercentage_Float = static_cast<int32_t>(0x9),
    __E_Device_CpuClockFrequencyInMHz_Float = static_cast<int32_t>(0xa),
    __E_Device_GpuClockFrequencyInMHz_Float = static_cast<int32_t>(0xb),
    __E_Device_CpuClockLevel_Int = static_cast<int32_t>(0xc),
    __E_Device_GpuClockLevel_Int = static_cast<int32_t>(0xd),
    __E_Compositor_SpaceWarp_Mode_Int = static_cast<int32_t>(0xe),
    __E_Device_CpuCore0UtilPercentage_Float = static_cast<int32_t>(0x20),
    __E_Device_CpuCore1UtilPercentage_Float = static_cast<int32_t>(0x21),
    __E_Device_CpuCore2UtilPercentage_Float = static_cast<int32_t>(0x22),
    __E_Device_CpuCore3UtilPercentage_Float = static_cast<int32_t>(0x23),
    __E_Device_CpuCore4UtilPercentage_Float = static_cast<int32_t>(0x24),
    __E_Device_CpuCore5UtilPercentage_Float = static_cast<int32_t>(0x25),
    __E_Device_CpuCore6UtilPercentage_Float = static_cast<int32_t>(0x26),
    __E_Device_CpuCore7UtilPercentage_Float = static_cast<int32_t>(0x27),
    __E_Count = static_cast<int32_t>(0x28),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PerfMetrics_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PerfMetrics_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PerfMetrics(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PerfMetrics();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field App_CpuTime_Float value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const App_CpuTime_Float;

  /// @brief Field App_GpuTime_Float value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const App_GpuTime_Float;

  /// @brief Field Compositor_CpuTime_Float value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Compositor_CpuTime_Float;

  /// @brief Field Compositor_GpuTime_Float value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Compositor_GpuTime_Float;

  /// @brief Field Compositor_DroppedFrameCount_Int value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Compositor_DroppedFrameCount_Int;

  /// @brief Field System_GpuUtilPercentage_Float value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const System_GpuUtilPercentage_Float;

  /// @brief Field System_CpuUtilAveragePercentage_Float value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const System_CpuUtilAveragePercentage_Float;

  /// @brief Field System_CpuUtilWorstPercentage_Float value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const System_CpuUtilWorstPercentage_Float;

  /// @brief Field Device_CpuClockFrequencyInMHz_Float value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuClockFrequencyInMHz_Float;

  /// @brief Field Device_GpuClockFrequencyInMHz_Float value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_GpuClockFrequencyInMHz_Float;

  /// @brief Field Device_CpuClockLevel_Int value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuClockLevel_Int;

  /// @brief Field Device_GpuClockLevel_Int value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_GpuClockLevel_Int;

  /// @brief Field Compositor_SpaceWarp_Mode_Int value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Compositor_SpaceWarp_Mode_Int;

  /// @brief Field Device_CpuCore0UtilPercentage_Float value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore0UtilPercentage_Float;

  /// @brief Field Device_CpuCore1UtilPercentage_Float value: static_cast<int32_t>(0x21)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore1UtilPercentage_Float;

  /// @brief Field Device_CpuCore2UtilPercentage_Float value: static_cast<int32_t>(0x22)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore2UtilPercentage_Float;

  /// @brief Field Device_CpuCore3UtilPercentage_Float value: static_cast<int32_t>(0x23)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore3UtilPercentage_Float;

  /// @brief Field Device_CpuCore4UtilPercentage_Float value: static_cast<int32_t>(0x24)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore4UtilPercentage_Float;

  /// @brief Field Device_CpuCore5UtilPercentage_Float value: static_cast<int32_t>(0x25)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore5UtilPercentage_Float;

  /// @brief Field Device_CpuCore6UtilPercentage_Float value: static_cast<int32_t>(0x26)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore6UtilPercentage_Float;

  /// @brief Field Device_CpuCore7UtilPercentage_Float value: static_cast<int32_t>(0x27)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Device_CpuCore7UtilPercentage_Float;

  /// @brief Field Count value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const Count;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__PerfMetrics const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PerfMetrics, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ProcessorPerformanceLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7717))
// CS Name: ::OVRPlugin::ProcessorPerformanceLevel
struct CORDL_TYPE __OVRPlugin__ProcessorPerformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__ProcessorPerformanceLevel_Unwrapped
  enum struct ____OVRPlugin__ProcessorPerformanceLevel_Unwrapped : int32_t {
    __E_PowerSavings = static_cast<int32_t>(0x0),
    __E_SustainedLow = static_cast<int32_t>(0x1),
    __E_SustainedHigh = static_cast<int32_t>(0x2),
    __E_Boost = static_cast<int32_t>(0x3),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__ProcessorPerformanceLevel_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__ProcessorPerformanceLevel_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ProcessorPerformanceLevel(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ProcessorPerformanceLevel();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field PowerSavings value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel const PowerSavings;

  /// @brief Field SustainedLow value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel const SustainedLow;

  /// @brief Field SustainedHigh value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel const SustainedHigh;

  /// @brief Field Boost value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel const Boost;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FeatureType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7718))
// CS Name: ::OVRPlugin::FeatureType
struct CORDL_TYPE __OVRPlugin__FeatureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__FeatureType_Unwrapped
  enum struct ____OVRPlugin__FeatureType_Unwrapped : int32_t {
    __E_HandTracking = static_cast<int32_t>(0x0),
    __E_KeyboardTracking = static_cast<int32_t>(0x1),
    __E_EyeTracking = static_cast<int32_t>(0x2),
    __E_FaceTracking = static_cast<int32_t>(0x3),
    __E_BodyTracking = static_cast<int32_t>(0x4),
    __E_Passthrough = static_cast<int32_t>(0x5),
    __E_GazeBasedFoveatedRendering = static_cast<int32_t>(0x6),
    __E_Count = static_cast<int32_t>(0x7),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__FeatureType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__FeatureType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FeatureType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FeatureType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HandTracking value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const HandTracking;

  /// @brief Field KeyboardTracking value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const KeyboardTracking;

  /// @brief Field EyeTracking value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const EyeTracking;

  /// @brief Field FaceTracking value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const FaceTracking;

  /// @brief Field BodyTracking value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const BodyTracking;

  /// @brief Field Passthrough value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const Passthrough;

  /// @brief Field GazeBasedFoveatedRendering value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const GazeBasedFoveatedRendering;

  /// @brief Field Count value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const Count;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__FeatureType const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FeatureType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraDeviceIntrinsicsParameters
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7719))
// CS Name: ::OVRPlugin::CameraDeviceIntrinsicsParameters
struct CORDL_TYPE __OVRPlugin__CameraDeviceIntrinsicsParameters {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "fx", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fy", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cx", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "cy", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "disto0", ty: "double_t", modifiers: "", def_value: None },
  // CppParam { name: "disto1", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "disto2", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "disto3", ty:
  // "double_t", modifiers: "", def_value: None }, CppParam { name: "disto4", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "v_fov", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "h_fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d_fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraDeviceIntrinsicsParameters(float_t fx, float_t fy, float_t cx, float_t cy, double_t disto0, double_t disto1, double_t disto2, double_t disto3, double_t disto4,
                                                          float_t v_fov, float_t h_fov, float_t d_fov, int32_t w, int32_t h) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraDeviceIntrinsicsParameters();

  /// @brief Field fx, offset: 0x0, size: 0x4, def value: None
  float_t fx;

  /// @brief Field fy, offset: 0x4, size: 0x4, def value: None
  float_t fy;

  /// @brief Field cx, offset: 0x8, size: 0x4, def value: None
  float_t cx;

  /// @brief Field cy, offset: 0xc, size: 0x4, def value: None
  float_t cy;

  /// @brief Field disto0, offset: 0x10, size: 0x8, def value: None
  double_t disto0;

  /// @brief Field disto1, offset: 0x18, size: 0x8, def value: None
  double_t disto1;

  /// @brief Field disto2, offset: 0x20, size: 0x8, def value: None
  double_t disto2;

  /// @brief Field disto3, offset: 0x28, size: 0x8, def value: None
  double_t disto3;

  /// @brief Field disto4, offset: 0x30, size: 0x8, def value: None
  double_t disto4;

  /// @brief Field v_fov, offset: 0x38, size: 0x4, def value: None
  float_t v_fov;

  /// @brief Field h_fov, offset: 0x3c, size: 0x4, def value: None
  float_t h_fov;

  /// @brief Field d_fov, offset: 0x40, size: 0x4, def value: None
  float_t d_fov;

  /// @brief Field w, offset: 0x44, size: 0x4, def value: None
  int32_t w;

  /// @brief Field h, offset: 0x48, size: 0x4, def value: None
  int32_t h;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraDeviceIntrinsicsParameters, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OverlayFlag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7720))
// CS Name: ::OVRPlugin::OverlayFlag
struct CORDL_TYPE __OVRPlugin__OverlayFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__OverlayFlag_Unwrapped
  enum struct ____OVRPlugin__OverlayFlag_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OnTop = static_cast<int32_t>(0x1),
    __E_HeadLocked = static_cast<int32_t>(0x2),
    __E_NoDepth = static_cast<int32_t>(0x4),
    __E_ExpensiveSuperSample = static_cast<int32_t>(0x8),
    __E_EfficientSuperSample = static_cast<int32_t>(0x10),
    __E_EfficientSharpen = static_cast<int32_t>(0x20),
    __E_BicubicFiltering = static_cast<int32_t>(0x40),
    __E_ExpensiveSharpen = static_cast<int32_t>(0x80),
    __E_SecureContent = static_cast<int32_t>(0x100),
    __E_ShapeFlag_Quad = static_cast<int32_t>(0x0),
    __E_ShapeFlag_Cylinder = static_cast<int32_t>(0x10),
    __E_ShapeFlag_Cubemap = static_cast<int32_t>(0x20),
    __E_ShapeFlag_OffcenterCubemap = static_cast<int32_t>(0x40),
    __E_ShapeFlagRangeMask = static_cast<int32_t>(0xf0),
    __E_Hidden = static_cast<int32_t>(0x200),
    __E_AutoFiltering = static_cast<int32_t>(0x400),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__OverlayFlag_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__OverlayFlag_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__OverlayFlag(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OverlayFlag();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const None;

  /// @brief Field OnTop value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const OnTop;

  /// @brief Field HeadLocked value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const HeadLocked;

  /// @brief Field NoDepth value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const NoDepth;

  /// @brief Field ExpensiveSuperSample value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ExpensiveSuperSample;

  /// @brief Field EfficientSuperSample value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const EfficientSuperSample;

  /// @brief Field EfficientSharpen value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const EfficientSharpen;

  /// @brief Field BicubicFiltering value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const BicubicFiltering;

  /// @brief Field ExpensiveSharpen value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ExpensiveSharpen;

  /// @brief Field SecureContent value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const SecureContent;

  /// @brief Field ShapeFlag_Quad value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ShapeFlag_Quad;

  /// @brief Field ShapeFlag_Cylinder value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ShapeFlag_Cylinder;

  /// @brief Field ShapeFlag_Cubemap value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ShapeFlag_Cubemap;

  /// @brief Field ShapeFlag_OffcenterCubemap value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ShapeFlag_OffcenterCubemap;

  /// @brief Field ShapeFlagRangeMask value: static_cast<int32_t>(0xf0)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const ShapeFlagRangeMask;

  /// @brief Field Hidden value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const Hidden;

  /// @brief Field AutoFiltering value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRPlugin__OverlayFlag const AutoFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OverlayFlag, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Vector2f
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7721))
// CS Name: ::OVRPlugin::Vector2f
struct CORDL_TYPE __OVRPlugin__Vector2f {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Vector2f(float_t x, float_t y) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Vector2f();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Vector2f, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Vector3f
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7722))
// CS Name: ::OVRPlugin::Vector3f
struct CORDL_TYPE __OVRPlugin__Vector3f {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__Vector3f zero;

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__Vector3f value);

  static inline ::GlobalNamespace::__OVRPlugin__Vector3f getStaticF_zero();

  /// @brief Method ToString addr 0x276acb8 size 0xfc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Vector3f(float_t x, float_t y, float_t z) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Vector3f();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Vector3f, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Vector4f
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7723))
// CS Name: ::OVRPlugin::Vector4f
struct CORDL_TYPE __OVRPlugin__Vector4f {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__Vector4f zero;

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__Vector4f value);

  static inline ::GlobalNamespace::__OVRPlugin__Vector4f getStaticF_zero();

  /// @brief Method ToString addr 0x276ae00 size 0x1e4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Vector4f(float_t x, float_t y, float_t z, float_t w) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Vector4f();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Vector4f, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Vector4s
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7724))
// CS Name: ::OVRPlugin::Vector4s
struct CORDL_TYPE __OVRPlugin__Vector4s {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__Vector4s zero;

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__Vector4s value);

  static inline ::GlobalNamespace::__OVRPlugin__Vector4s getStaticF_zero();

  /// @brief Method ToString addr 0x276b02c size 0x1e4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "x", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int16_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Vector4s(int16_t x, int16_t y, int16_t z, int16_t w) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Vector4s();

  /// @brief Field x, offset: 0x0, size: 0x2, def value: None
  int16_t x;

  /// @brief Field y, offset: 0x2, size: 0x2, def value: None
  int16_t y;

  /// @brief Field z, offset: 0x4, size: 0x2, def value: None
  int16_t z;

  /// @brief Field w, offset: 0x6, size: 0x2, def value: None
  int16_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Vector4s, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Quatf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7725))
// CS Name: ::OVRPlugin::Quatf
struct CORDL_TYPE __OVRPlugin__Quatf {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::GlobalNamespace::__OVRPlugin__Quatf identity;

  static inline void setStaticF_identity(::GlobalNamespace::__OVRPlugin__Quatf value);

  static inline ::GlobalNamespace::__OVRPlugin__Quatf getStaticF_identity();

  /// @brief Method ToString addr 0x276b258 size 0x1e4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Quatf(float_t x, float_t y, float_t z, float_t w) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Quatf();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Quatf, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Posef
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7725)), TypeDefinitionIndex(TypeDefinitionIndex(7722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7726))
// CS Name: ::OVRPlugin::Posef
struct CORDL_TYPE __OVRPlugin__Posef {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x1c
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::GlobalNamespace::__OVRPlugin__Posef identity;

  static inline void setStaticF_identity(::GlobalNamespace::__OVRPlugin__Posef value);

  static inline ::GlobalNamespace::__OVRPlugin__Posef getStaticF_identity();

  /// @brief Method ToString addr 0x276c48c size 0xf4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "Orientation", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "Position", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Posef(::GlobalNamespace::__OVRPlugin__Quatf Orientation, ::GlobalNamespace::__OVRPlugin__Vector3f Position) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Posef();

  /// @brief Field Orientation, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf Orientation;

  /// @brief Field Position, offset: 0x10, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f Position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Posef, 0x1c>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TextureRectMatrixf
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(10246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7727))
// CS Name: ::OVRPlugin::TextureRectMatrixf
struct CORDL_TYPE __OVRPlugin__TextureRectMatrixf {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__TextureRectMatrixf zero;

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__TextureRectMatrixf value);

  static inline ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf getStaticF_zero();

  /// @brief Method ToString addr 0x276c658 size 0x1f8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "leftRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "rightRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None
  // }, CppParam { name: "leftScaleBias", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "rightScaleBias", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
  // None }]
  constexpr __OVRPlugin__TextureRectMatrixf(::UnityEngine::Rect leftRect, ::UnityEngine::Rect rightRect, ::UnityEngine::Vector4 leftScaleBias, ::UnityEngine::Vector4 rightScaleBias) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TextureRectMatrixf();

  /// @brief Field leftRect, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rect leftRect;

  /// @brief Field rightRect, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rect rightRect;

  /// @brief Field leftScaleBias, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 leftScaleBias;

  /// @brief Field rightScaleBias, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 rightScaleBias;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TextureRectMatrixf, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PoseStatef
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7728))
// CS Name: ::OVRPlugin::PoseStatef
struct CORDL_TYPE __OVRPlugin__PoseStatef {
public:
  // Declarations
  /// @brief Field identity, offset 0xffffffff, size 0x58
  static __declspec(property(get = getStaticF_identity, put = setStaticF_identity))::GlobalNamespace::__OVRPlugin__PoseStatef identity;

  static inline void setStaticF_identity(::GlobalNamespace::__OVRPlugin__PoseStatef value);

  static inline ::GlobalNamespace::__OVRPlugin__PoseStatef getStaticF_identity();

  // Ctor Parameters [CppParam { name: "Pose", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "Velocity", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "Acceleration", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None },
  // CppParam { name: "AngularVelocity", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "AngularAcceleration", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PoseStatef(::GlobalNamespace::__OVRPlugin__Posef Pose, ::GlobalNamespace::__OVRPlugin__Vector3f Velocity, ::GlobalNamespace::__OVRPlugin__Vector3f Acceleration,
                                    ::GlobalNamespace::__OVRPlugin__Vector3f AngularVelocity, ::GlobalNamespace::__OVRPlugin__Vector3f AngularAcceleration, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PoseStatef();

  /// @brief Field Pose, offset: 0x0, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef Pose;

  /// @brief Field Velocity, offset: 0x1c, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f Velocity;

  /// @brief Field Acceleration, offset: 0x28, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f Acceleration;

  /// @brief Field AngularVelocity, offset: 0x34, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f AngularVelocity;

  /// @brief Field AngularAcceleration, offset: 0x40, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f AngularAcceleration;

  /// @brief Field Time, offset: 0x50, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PoseStatef, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsLocation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7729))
// CS Name: ::OVRPlugin::HapticsLocation
struct CORDL_TYPE __OVRPlugin__HapticsLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__HapticsLocation_Unwrapped
  enum struct ____OVRPlugin__HapticsLocation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hand = static_cast<int32_t>(0x1),
    __E_Thumb = static_cast<int32_t>(0x2),
    __E_Index = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__HapticsLocation_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__HapticsLocation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsLocation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsLocation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__HapticsLocation const None;

  /// @brief Field Hand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__HapticsLocation const Hand;

  /// @brief Field Thumb value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__HapticsLocation const Thumb;

  /// @brief Field Index value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__HapticsLocation const Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsLocation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerState6
// SizeInfo { instance_size: 108, native_size: 108, calculated_instance_size: 108, calculated_native_size: 124, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7721))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7730))
// CS Name: ::OVRPlugin::ControllerState6
struct CORDL_TYPE __OVRPlugin__ControllerState6 {
public:
  // Declarations
  /// @brief Method .ctor addr 0x276ca28 size 0xc8 virtual false final false
  inline void _ctor(::GlobalNamespace::__OVRPlugin__ControllerState5 cs);

  // Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTrigger", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "",
  // def_value: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "LTouchpad", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None },
  // CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "LThumbRestForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RThumbRestForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LStylusForce", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RStylusForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTriggerCurl", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RIndexTriggerCurl", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "RIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTriggerForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "RIndexTriggerForce", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ControllerState6(uint32_t ConnectedControllers, uint32_t Buttons, uint32_t Touches, uint32_t NearTouches, float_t LIndexTrigger, float_t RIndexTrigger, float_t LHandTrigger,
                                          float_t RHandTrigger, ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick, ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick,
                                          ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad, ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad, uint8_t LBatteryPercentRemaining,
                                          uint8_t RBatteryPercentRemaining, uint8_t LRecenterCount, uint8_t RRecenterCount, float_t LThumbRestForce, float_t RThumbRestForce, float_t LStylusForce,
                                          float_t RStylusForce, float_t LIndexTriggerCurl, float_t RIndexTriggerCurl, float_t LIndexTriggerSlide, float_t RIndexTriggerSlide,
                                          float_t LIndexTriggerForce, float_t RIndexTriggerForce) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ControllerState6();

  /// @brief Field ConnectedControllers, offset: 0x0, size: 0x4, def value: None
  uint32_t ConnectedControllers;

  /// @brief Field Buttons, offset: 0x4, size: 0x4, def value: None
  uint32_t Buttons;

  /// @brief Field Touches, offset: 0x8, size: 0x4, def value: None
  uint32_t Touches;

  /// @brief Field NearTouches, offset: 0xc, size: 0x4, def value: None
  uint32_t NearTouches;

  /// @brief Field LIndexTrigger, offset: 0x10, size: 0x4, def value: None
  float_t LIndexTrigger;

  /// @brief Field RIndexTrigger, offset: 0x14, size: 0x4, def value: None
  float_t RIndexTrigger;

  /// @brief Field LHandTrigger, offset: 0x18, size: 0x4, def value: None
  float_t LHandTrigger;

  /// @brief Field RHandTrigger, offset: 0x1c, size: 0x4, def value: None
  float_t RHandTrigger;

  /// @brief Field LThumbstick, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick;

  /// @brief Field RThumbstick, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick;

  /// @brief Field LTouchpad, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad;

  /// @brief Field RTouchpad, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad;

  /// @brief Field LBatteryPercentRemaining, offset: 0x40, size: 0x1, def value: None
  uint8_t LBatteryPercentRemaining;

  /// @brief Field RBatteryPercentRemaining, offset: 0x41, size: 0x1, def value: None
  uint8_t RBatteryPercentRemaining;

  /// @brief Field LRecenterCount, offset: 0x42, size: 0x1, def value: None
  uint8_t LRecenterCount;

  /// @brief Field RRecenterCount, offset: 0x43, size: 0x1, def value: None
  uint8_t RRecenterCount;

  /// @brief Field LThumbRestForce, offset: 0x44, size: 0x4, def value: None
  float_t LThumbRestForce;

  /// @brief Field RThumbRestForce, offset: 0x48, size: 0x4, def value: None
  float_t RThumbRestForce;

  /// @brief Field LStylusForce, offset: 0x4c, size: 0x4, def value: None
  float_t LStylusForce;

  /// @brief Field RStylusForce, offset: 0x50, size: 0x4, def value: None
  float_t RStylusForce;

  /// @brief Field LIndexTriggerCurl, offset: 0x54, size: 0x4, def value: None
  float_t LIndexTriggerCurl;

  /// @brief Field RIndexTriggerCurl, offset: 0x58, size: 0x4, def value: None
  float_t RIndexTriggerCurl;

  /// @brief Field LIndexTriggerSlide, offset: 0x5c, size: 0x4, def value: None
  float_t LIndexTriggerSlide;

  /// @brief Field RIndexTriggerSlide, offset: 0x60, size: 0x4, def value: None
  float_t RIndexTriggerSlide;

  /// @brief Field LIndexTriggerForce, offset: 0x64, size: 0x4, def value: None
  float_t LIndexTriggerForce;

  /// @brief Field RIndexTriggerForce, offset: 0x68, size: 0x4, def value: None
  float_t RIndexTriggerForce;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ControllerState6, 0x6c>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerState5
// SizeInfo { instance_size: 100, native_size: 100, calculated_instance_size: 100, calculated_native_size: 116, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7721))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7731))
// CS Name: ::OVRPlugin::ControllerState5
struct CORDL_TYPE __OVRPlugin__ControllerState5 {
public:
  // Declarations
  /// @brief Method .ctor addr 0x276caf0 size 0x90 virtual false final false
  inline void _ctor(::GlobalNamespace::__OVRPlugin__ControllerState4 cs);

  // Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTrigger", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "",
  // def_value: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "LTouchpad", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None },
  // CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "LThumbRestForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RThumbRestForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LStylusForce", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RStylusForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTriggerCurl", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RIndexTriggerCurl", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "RIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ControllerState5(uint32_t ConnectedControllers, uint32_t Buttons, uint32_t Touches, uint32_t NearTouches, float_t LIndexTrigger, float_t RIndexTrigger, float_t LHandTrigger,
                                          float_t RHandTrigger, ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick, ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick,
                                          ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad, ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad, uint8_t LBatteryPercentRemaining,
                                          uint8_t RBatteryPercentRemaining, uint8_t LRecenterCount, uint8_t RRecenterCount, float_t LThumbRestForce, float_t RThumbRestForce, float_t LStylusForce,
                                          float_t RStylusForce, float_t LIndexTriggerCurl, float_t RIndexTriggerCurl, float_t LIndexTriggerSlide, float_t RIndexTriggerSlide) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ControllerState5();

  /// @brief Field ConnectedControllers, offset: 0x0, size: 0x4, def value: None
  uint32_t ConnectedControllers;

  /// @brief Field Buttons, offset: 0x4, size: 0x4, def value: None
  uint32_t Buttons;

  /// @brief Field Touches, offset: 0x8, size: 0x4, def value: None
  uint32_t Touches;

  /// @brief Field NearTouches, offset: 0xc, size: 0x4, def value: None
  uint32_t NearTouches;

  /// @brief Field LIndexTrigger, offset: 0x10, size: 0x4, def value: None
  float_t LIndexTrigger;

  /// @brief Field RIndexTrigger, offset: 0x14, size: 0x4, def value: None
  float_t RIndexTrigger;

  /// @brief Field LHandTrigger, offset: 0x18, size: 0x4, def value: None
  float_t LHandTrigger;

  /// @brief Field RHandTrigger, offset: 0x1c, size: 0x4, def value: None
  float_t RHandTrigger;

  /// @brief Field LThumbstick, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick;

  /// @brief Field RThumbstick, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick;

  /// @brief Field LTouchpad, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad;

  /// @brief Field RTouchpad, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad;

  /// @brief Field LBatteryPercentRemaining, offset: 0x40, size: 0x1, def value: None
  uint8_t LBatteryPercentRemaining;

  /// @brief Field RBatteryPercentRemaining, offset: 0x41, size: 0x1, def value: None
  uint8_t RBatteryPercentRemaining;

  /// @brief Field LRecenterCount, offset: 0x42, size: 0x1, def value: None
  uint8_t LRecenterCount;

  /// @brief Field RRecenterCount, offset: 0x43, size: 0x1, def value: None
  uint8_t RRecenterCount;

  /// @brief Field LThumbRestForce, offset: 0x44, size: 0x4, def value: None
  float_t LThumbRestForce;

  /// @brief Field RThumbRestForce, offset: 0x48, size: 0x4, def value: None
  float_t RThumbRestForce;

  /// @brief Field LStylusForce, offset: 0x4c, size: 0x4, def value: None
  float_t LStylusForce;

  /// @brief Field RStylusForce, offset: 0x50, size: 0x4, def value: None
  float_t RStylusForce;

  /// @brief Field LIndexTriggerCurl, offset: 0x54, size: 0x4, def value: None
  float_t LIndexTriggerCurl;

  /// @brief Field RIndexTriggerCurl, offset: 0x58, size: 0x4, def value: None
  float_t RIndexTriggerCurl;

  /// @brief Field LIndexTriggerSlide, offset: 0x5c, size: 0x4, def value: None
  float_t LIndexTriggerSlide;

  /// @brief Field RIndexTriggerSlide, offset: 0x60, size: 0x4, def value: None
  float_t RIndexTriggerSlide;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x64 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ControllerState5, 0x64>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerState4
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7721))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7732))
// CS Name: ::OVRPlugin::ControllerState4
struct CORDL_TYPE __OVRPlugin__ControllerState4 {
public:
  // Declarations
  /// @brief Method .ctor addr 0x276cb80 size 0x6c virtual false final false
  inline void _ctor(::GlobalNamespace::__OVRPlugin__ControllerState2 cs);

  // Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTrigger", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "",
  // def_value: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "LTouchpad", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None },
  // CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "Reserved_27", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_26", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_25", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "Reserved_24", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_23", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "Reserved_22", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_21", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_20",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_19", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_18", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Reserved_17", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_16", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "Reserved_15", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_13", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_12", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_11", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Reserved_10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_09", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "Reserved_08", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_07", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_06", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_05", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_04", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "Reserved_03", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_02", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "Reserved_01", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Reserved_00", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ControllerState4(uint32_t ConnectedControllers, uint32_t Buttons, uint32_t Touches, uint32_t NearTouches, float_t LIndexTrigger, float_t RIndexTrigger, float_t LHandTrigger,
                                          float_t RHandTrigger, ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick, ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick,
                                          ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad, ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad, uint8_t LBatteryPercentRemaining,
                                          uint8_t RBatteryPercentRemaining, uint8_t LRecenterCount, uint8_t RRecenterCount, uint8_t Reserved_27, uint8_t Reserved_26, uint8_t Reserved_25,
                                          uint8_t Reserved_24, uint8_t Reserved_23, uint8_t Reserved_22, uint8_t Reserved_21, uint8_t Reserved_20, uint8_t Reserved_19, uint8_t Reserved_18,
                                          uint8_t Reserved_17, uint8_t Reserved_16, uint8_t Reserved_15, uint8_t Reserved_14, uint8_t Reserved_13, uint8_t Reserved_12, uint8_t Reserved_11,
                                          uint8_t Reserved_10, uint8_t Reserved_09, uint8_t Reserved_08, uint8_t Reserved_07, uint8_t Reserved_06, uint8_t Reserved_05, uint8_t Reserved_04,
                                          uint8_t Reserved_03, uint8_t Reserved_02, uint8_t Reserved_01, uint8_t Reserved_00) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ControllerState4();

  /// @brief Field ConnectedControllers, offset: 0x0, size: 0x4, def value: None
  uint32_t ConnectedControllers;

  /// @brief Field Buttons, offset: 0x4, size: 0x4, def value: None
  uint32_t Buttons;

  /// @brief Field Touches, offset: 0x8, size: 0x4, def value: None
  uint32_t Touches;

  /// @brief Field NearTouches, offset: 0xc, size: 0x4, def value: None
  uint32_t NearTouches;

  /// @brief Field LIndexTrigger, offset: 0x10, size: 0x4, def value: None
  float_t LIndexTrigger;

  /// @brief Field RIndexTrigger, offset: 0x14, size: 0x4, def value: None
  float_t RIndexTrigger;

  /// @brief Field LHandTrigger, offset: 0x18, size: 0x4, def value: None
  float_t LHandTrigger;

  /// @brief Field RHandTrigger, offset: 0x1c, size: 0x4, def value: None
  float_t RHandTrigger;

  /// @brief Field LThumbstick, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick;

  /// @brief Field RThumbstick, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick;

  /// @brief Field LTouchpad, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad;

  /// @brief Field RTouchpad, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad;

  /// @brief Field LBatteryPercentRemaining, offset: 0x40, size: 0x1, def value: None
  uint8_t LBatteryPercentRemaining;

  /// @brief Field RBatteryPercentRemaining, offset: 0x41, size: 0x1, def value: None
  uint8_t RBatteryPercentRemaining;

  /// @brief Field LRecenterCount, offset: 0x42, size: 0x1, def value: None
  uint8_t LRecenterCount;

  /// @brief Field RRecenterCount, offset: 0x43, size: 0x1, def value: None
  uint8_t RRecenterCount;

  /// @brief Field Reserved_27, offset: 0x44, size: 0x1, def value: None
  uint8_t Reserved_27;

  /// @brief Field Reserved_26, offset: 0x45, size: 0x1, def value: None
  uint8_t Reserved_26;

  /// @brief Field Reserved_25, offset: 0x46, size: 0x1, def value: None
  uint8_t Reserved_25;

  /// @brief Field Reserved_24, offset: 0x47, size: 0x1, def value: None
  uint8_t Reserved_24;

  /// @brief Field Reserved_23, offset: 0x48, size: 0x1, def value: None
  uint8_t Reserved_23;

  /// @brief Field Reserved_22, offset: 0x49, size: 0x1, def value: None
  uint8_t Reserved_22;

  /// @brief Field Reserved_21, offset: 0x4a, size: 0x1, def value: None
  uint8_t Reserved_21;

  /// @brief Field Reserved_20, offset: 0x4b, size: 0x1, def value: None
  uint8_t Reserved_20;

  /// @brief Field Reserved_19, offset: 0x4c, size: 0x1, def value: None
  uint8_t Reserved_19;

  /// @brief Field Reserved_18, offset: 0x4d, size: 0x1, def value: None
  uint8_t Reserved_18;

  /// @brief Field Reserved_17, offset: 0x4e, size: 0x1, def value: None
  uint8_t Reserved_17;

  /// @brief Field Reserved_16, offset: 0x4f, size: 0x1, def value: None
  uint8_t Reserved_16;

  /// @brief Field Reserved_15, offset: 0x50, size: 0x1, def value: None
  uint8_t Reserved_15;

  /// @brief Field Reserved_14, offset: 0x51, size: 0x1, def value: None
  uint8_t Reserved_14;

  /// @brief Field Reserved_13, offset: 0x52, size: 0x1, def value: None
  uint8_t Reserved_13;

  /// @brief Field Reserved_12, offset: 0x53, size: 0x1, def value: None
  uint8_t Reserved_12;

  /// @brief Field Reserved_11, offset: 0x54, size: 0x1, def value: None
  uint8_t Reserved_11;

  /// @brief Field Reserved_10, offset: 0x55, size: 0x1, def value: None
  uint8_t Reserved_10;

  /// @brief Field Reserved_09, offset: 0x56, size: 0x1, def value: None
  uint8_t Reserved_09;

  /// @brief Field Reserved_08, offset: 0x57, size: 0x1, def value: None
  uint8_t Reserved_08;

  /// @brief Field Reserved_07, offset: 0x58, size: 0x1, def value: None
  uint8_t Reserved_07;

  /// @brief Field Reserved_06, offset: 0x59, size: 0x1, def value: None
  uint8_t Reserved_06;

  /// @brief Field Reserved_05, offset: 0x5a, size: 0x1, def value: None
  uint8_t Reserved_05;

  /// @brief Field Reserved_04, offset: 0x5b, size: 0x1, def value: None
  uint8_t Reserved_04;

  /// @brief Field Reserved_03, offset: 0x5c, size: 0x1, def value: None
  uint8_t Reserved_03;

  /// @brief Field Reserved_02, offset: 0x5d, size: 0x1, def value: None
  uint8_t Reserved_02;

  /// @brief Field Reserved_01, offset: 0x5e, size: 0x1, def value: None
  uint8_t Reserved_01;

  /// @brief Field Reserved_00, offset: 0x5f, size: 0x1, def value: None
  uint8_t Reserved_00;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ControllerState4, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerState2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7721))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7733))
// CS Name: ::OVRPlugin::ControllerState2
struct CORDL_TYPE __OVRPlugin__ControllerState2 {
public:
  // Declarations
  /// @brief Method .ctor addr 0x276cbec size 0x58 virtual false final false
  inline void _ctor(::GlobalNamespace::__OVRPlugin__ControllerState cs);

  // Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTrigger", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "",
  // def_value: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "LTouchpad", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ControllerState2(uint32_t ConnectedControllers, uint32_t Buttons, uint32_t Touches, uint32_t NearTouches, float_t LIndexTrigger, float_t RIndexTrigger, float_t LHandTrigger,
                                          float_t RHandTrigger, ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick, ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick,
                                          ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad, ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ControllerState2();

  /// @brief Field ConnectedControllers, offset: 0x0, size: 0x4, def value: None
  uint32_t ConnectedControllers;

  /// @brief Field Buttons, offset: 0x4, size: 0x4, def value: None
  uint32_t Buttons;

  /// @brief Field Touches, offset: 0x8, size: 0x4, def value: None
  uint32_t Touches;

  /// @brief Field NearTouches, offset: 0xc, size: 0x4, def value: None
  uint32_t NearTouches;

  /// @brief Field LIndexTrigger, offset: 0x10, size: 0x4, def value: None
  float_t LIndexTrigger;

  /// @brief Field RIndexTrigger, offset: 0x14, size: 0x4, def value: None
  float_t RIndexTrigger;

  /// @brief Field LHandTrigger, offset: 0x18, size: 0x4, def value: None
  float_t LHandTrigger;

  /// @brief Field RHandTrigger, offset: 0x1c, size: 0x4, def value: None
  float_t RHandTrigger;

  /// @brief Field LThumbstick, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick;

  /// @brief Field RThumbstick, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick;

  /// @brief Field LTouchpad, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LTouchpad;

  /// @brief Field RTouchpad, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RTouchpad;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ControllerState2, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerState
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7721))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7734))
// CS Name: ::OVRPlugin::ControllerState
struct CORDL_TYPE __OVRPlugin__ControllerState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LIndexTrigger", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "",
  // def_value: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ControllerState(uint32_t ConnectedControllers, uint32_t Buttons, uint32_t Touches, uint32_t NearTouches, float_t LIndexTrigger, float_t RIndexTrigger, float_t LHandTrigger,
                                         float_t RHandTrigger, ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick, ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ControllerState();

  /// @brief Field ConnectedControllers, offset: 0x0, size: 0x4, def value: None
  uint32_t ConnectedControllers;

  /// @brief Field Buttons, offset: 0x4, size: 0x4, def value: None
  uint32_t Buttons;

  /// @brief Field Touches, offset: 0x8, size: 0x4, def value: None
  uint32_t Touches;

  /// @brief Field NearTouches, offset: 0xc, size: 0x4, def value: None
  uint32_t NearTouches;

  /// @brief Field LIndexTrigger, offset: 0x10, size: 0x4, def value: None
  float_t LIndexTrigger;

  /// @brief Field RIndexTrigger, offset: 0x14, size: 0x4, def value: None
  float_t RIndexTrigger;

  /// @brief Field LHandTrigger, offset: 0x18, size: 0x4, def value: None
  float_t LHandTrigger;

  /// @brief Field RHandTrigger, offset: 0x1c, size: 0x4, def value: None
  float_t RHandTrigger;

  /// @brief Field LThumbstick, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f LThumbstick;

  /// @brief Field RThumbstick, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f RThumbstick;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ControllerState, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7735))
// CS Name: ::OVRPlugin::HapticsBuffer
struct CORDL_TYPE __OVRPlugin__HapticsBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Samples", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsBuffer(void* Samples, int32_t SamplesCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsBuffer();

  /// @brief Field Samples, offset: 0x0, size: 0x8, def value: None
  void* Samples;

  /// @brief Field SamplesCount, offset: 0x8, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsBuffer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsState
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7736))
// CS Name: ::OVRPlugin::HapticsState
struct CORDL_TYPE __OVRPlugin__HapticsState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "SamplesAvailable", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SamplesQueued", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsState(int32_t SamplesAvailable, int32_t SamplesQueued) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsState();

  /// @brief Field SamplesAvailable, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesAvailable;

  /// @brief Field SamplesQueued, offset: 0x4, size: 0x4, def value: None
  int32_t SamplesQueued;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsState, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsDesc
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7737))
// CS Name: ::OVRPlugin::HapticsDesc
struct CORDL_TYPE __OVRPlugin__HapticsDesc {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "SampleRateHz", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SampleSizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "MinimumSafeSamplesQueued", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MinimumBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "OptimalBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MaximumBufferSamplesCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsDesc(int32_t SampleRateHz, int32_t SampleSizeInBytes, int32_t MinimumSafeSamplesQueued, int32_t MinimumBufferSamplesCount, int32_t OptimalBufferSamplesCount,
                                     int32_t MaximumBufferSamplesCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsDesc();

  /// @brief Field SampleRateHz, offset: 0x0, size: 0x4, def value: None
  int32_t SampleRateHz;

  /// @brief Field SampleSizeInBytes, offset: 0x4, size: 0x4, def value: None
  int32_t SampleSizeInBytes;

  /// @brief Field MinimumSafeSamplesQueued, offset: 0x8, size: 0x4, def value: None
  int32_t MinimumSafeSamplesQueued;

  /// @brief Field MinimumBufferSamplesCount, offset: 0xc, size: 0x4, def value: None
  int32_t MinimumBufferSamplesCount;

  /// @brief Field OptimalBufferSamplesCount, offset: 0x10, size: 0x4, def value: None
  int32_t OptimalBufferSamplesCount;

  /// @brief Field MaximumBufferSamplesCount, offset: 0x14, size: 0x4, def value: None
  int32_t MaximumBufferSamplesCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsDesc, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsAmplitudeEnvelopeVibration
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7738))
// CS Name: ::OVRPlugin::HapticsAmplitudeEnvelopeVibration
struct CORDL_TYPE __OVRPlugin__HapticsAmplitudeEnvelopeVibration {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "AmplitudeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "Amplitudes", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsAmplitudeEnvelopeVibration(float_t Duration, uint32_t AmplitudeCount, void* Amplitudes) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsAmplitudeEnvelopeVibration();

  /// @brief Field Duration, offset: 0x0, size: 0x4, def value: None
  float_t Duration;

  /// @brief Field AmplitudeCount, offset: 0x4, size: 0x4, def value: None
  uint32_t AmplitudeCount;

  /// @brief Field Amplitudes, offset: 0x8, size: 0x8, def value: None
  void* Amplitudes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsAmplitudeEnvelopeVibration, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsPcmVibration
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7739))
// CS Name: ::OVRPlugin::HapticsPcmVibration
struct CORDL_TYPE __OVRPlugin__HapticsPcmVibration {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "BufferSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "SampleRateHz", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Append", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name:
  // "SamplesConsumed", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsPcmVibration(uint32_t BufferSize, void* Buffer, float_t SampleRateHz, ::GlobalNamespace::__OVRPlugin__Bool Append, void* SamplesConsumed) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsPcmVibration();

  /// @brief Field BufferSize, offset: 0x0, size: 0x4, def value: None
  uint32_t BufferSize;

  /// @brief Field Buffer, offset: 0x8, size: 0x8, def value: None
  void* Buffer;

  /// @brief Field SampleRateHz, offset: 0x10, size: 0x4, def value: None
  float_t SampleRateHz;

  /// @brief Field Append, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool Append;

  /// @brief Field SamplesConsumed, offset: 0x18, size: 0x8, def value: None
  void* SamplesConsumed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsPcmVibration, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsConstants
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7740))
// CS Name: ::OVRPlugin::HapticsConstants
struct CORDL_TYPE __OVRPlugin__HapticsConstants {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__HapticsConstants_Unwrapped
  enum struct ____OVRPlugin__HapticsConstants_Unwrapped : int32_t {
    __E_MaxSamples = static_cast<int32_t>(0xfa0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__HapticsConstants_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__HapticsConstants_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HapticsConstants(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HapticsConstants();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaxSamples value: static_cast<int32_t>(0xfa0)
  static ::GlobalNamespace::__OVRPlugin__HapticsConstants const MaxSamples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HapticsConstants, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AppPerfFrameStats
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7741))
// CS Name: ::OVRPlugin::AppPerfFrameStats
struct CORDL_TYPE __OVRPlugin__AppPerfFrameStats {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "HmdVsyncIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AppFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "AppDroppedFrameCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AppMotionToPhotonLatency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "AppQueueAheadTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "AppCpuElapsedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "AppGpuElapsedTime",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "CompositorFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CompositorDroppedFrameCount", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "CompositorLatency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "CompositorCpuElapsedTime", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "CompositorGpuElapsedTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "CompositorCpuStartToGpuEndElapsedTime", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "CompositorGpuEndToVsyncElapsedTime", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__AppPerfFrameStats(int32_t HmdVsyncIndex, int32_t AppFrameIndex, int32_t AppDroppedFrameCount, float_t AppMotionToPhotonLatency, float_t AppQueueAheadTime,
                                           float_t AppCpuElapsedTime, float_t AppGpuElapsedTime, int32_t CompositorFrameIndex, int32_t CompositorDroppedFrameCount, float_t CompositorLatency,
                                           float_t CompositorCpuElapsedTime, float_t CompositorGpuElapsedTime, float_t CompositorCpuStartToGpuEndElapsedTime,
                                           float_t CompositorGpuEndToVsyncElapsedTime) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__AppPerfFrameStats();

  /// @brief Field HmdVsyncIndex, offset: 0x0, size: 0x4, def value: None
  int32_t HmdVsyncIndex;

  /// @brief Field AppFrameIndex, offset: 0x4, size: 0x4, def value: None
  int32_t AppFrameIndex;

  /// @brief Field AppDroppedFrameCount, offset: 0x8, size: 0x4, def value: None
  int32_t AppDroppedFrameCount;

  /// @brief Field AppMotionToPhotonLatency, offset: 0xc, size: 0x4, def value: None
  float_t AppMotionToPhotonLatency;

  /// @brief Field AppQueueAheadTime, offset: 0x10, size: 0x4, def value: None
  float_t AppQueueAheadTime;

  /// @brief Field AppCpuElapsedTime, offset: 0x14, size: 0x4, def value: None
  float_t AppCpuElapsedTime;

  /// @brief Field AppGpuElapsedTime, offset: 0x18, size: 0x4, def value: None
  float_t AppGpuElapsedTime;

  /// @brief Field CompositorFrameIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t CompositorFrameIndex;

  /// @brief Field CompositorDroppedFrameCount, offset: 0x20, size: 0x4, def value: None
  int32_t CompositorDroppedFrameCount;

  /// @brief Field CompositorLatency, offset: 0x24, size: 0x4, def value: None
  float_t CompositorLatency;

  /// @brief Field CompositorCpuElapsedTime, offset: 0x28, size: 0x4, def value: None
  float_t CompositorCpuElapsedTime;

  /// @brief Field CompositorGpuElapsedTime, offset: 0x2c, size: 0x4, def value: None
  float_t CompositorGpuElapsedTime;

  /// @brief Field CompositorCpuStartToGpuEndElapsedTime, offset: 0x30, size: 0x4, def value: None
  float_t CompositorCpuStartToGpuEndElapsedTime;

  /// @brief Field CompositorGpuEndToVsyncElapsedTime, offset: 0x34, size: 0x4, def value: None
  float_t CompositorGpuEndToVsyncElapsedTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AppPerfStats
// SizeInfo { instance_size: 24, native_size: 292, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7742))
// CS Name: ::OVRPlugin::AppPerfStats
struct CORDL_TYPE __OVRPlugin__AppPerfStats {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FrameStats", ty: "::ArrayW<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats,::Array<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats>*>", modifiers: "",
  // def_value: None }, CppParam { name: "FrameStatsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AnyFrameStatsDropped", ty: "::GlobalNamespace::__OVRPlugin__Bool",
  // modifiers: "", def_value: None }, CppParam { name: "AdaptiveGpuPerformanceScale", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__AppPerfStats(::ArrayW<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats, ::Array<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats>*> FrameStats, int32_t FrameStatsCount,
                                      ::GlobalNamespace::__OVRPlugin__Bool AnyFrameStatsDropped, float_t AdaptiveGpuPerformanceScale) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__AppPerfStats();

  /// @brief Field FrameStats, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats, ::Array<::GlobalNamespace::__OVRPlugin__AppPerfFrameStats>*> FrameStats;

  /// @brief Field FrameStatsCount, offset: 0x8, size: 0x4, def value: None
  int32_t FrameStatsCount;

  /// @brief Field AnyFrameStatsDropped, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool AnyFrameStatsDropped;

  /// @brief Field AdaptiveGpuPerformanceScale, offset: 0x10, size: 0x4, def value: None
  float_t AdaptiveGpuPerformanceScale;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__AppPerfStats, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Sizei
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7743))
// CS Name: ::OVRPlugin::Sizei
struct CORDL_TYPE __OVRPlugin__Sizei {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__Sizei zero;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__OVRPlugin__Sizei>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::__OVRPlugin__Sizei>*();

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__Sizei value);

  static inline ::GlobalNamespace::__OVRPlugin__Sizei getStaticF_zero();

  /// @brief Method Equals addr 0x276cc44 size 0x28 virtual true final true
  inline bool Equals(::GlobalNamespace::__OVRPlugin__Sizei other);

  /// @brief Method Equals addr 0x276cc6c size 0x88 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x276ccf4 size 0x14 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Sizei(int32_t w, int32_t h) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Sizei();

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  int32_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  int32_t h;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Sizei, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Sizef
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7744))
// CS Name: ::OVRPlugin::Sizef
struct CORDL_TYPE __OVRPlugin__Sizef {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__Sizef zero;

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__Sizef value);

  static inline ::GlobalNamespace::__OVRPlugin__Sizef getStaticF_zero();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Sizef(float_t w, float_t h) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Sizef();

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  float_t h;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Sizef, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Size3f
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7745))
// CS Name: ::OVRPlugin::Size3f
struct CORDL_TYPE __OVRPlugin__Size3f {
public:
  // Declarations
  /// @brief Field zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_zero, put = setStaticF_zero))::GlobalNamespace::__OVRPlugin__Size3f zero;

  static inline void setStaticF_zero(::GlobalNamespace::__OVRPlugin__Size3f value);

  static inline ::GlobalNamespace::__OVRPlugin__Size3f getStaticF_zero();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Size3f(float_t w, float_t h, float_t d) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Size3f();

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  float_t h;

  /// @brief Field d, offset: 0x8, size: 0x4, def value: None
  float_t d;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Size3f, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Vector2i
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7746))
// CS Name: ::OVRPlugin::Vector2i
struct CORDL_TYPE __OVRPlugin__Vector2i {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Vector2i(int32_t x, int32_t y) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Vector2i();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Vector2i, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Recti
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7743)), TypeDefinitionIndex(TypeDefinitionIndex(7746))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7747))
// CS Name: ::OVRPlugin::Recti
struct CORDL_TYPE __OVRPlugin__Recti {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::__OVRPlugin__Vector2i", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "::GlobalNamespace::__OVRPlugin__Sizei",
  // modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Recti(::GlobalNamespace::__OVRPlugin__Vector2i Pos, ::GlobalNamespace::__OVRPlugin__Sizei Size) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Recti();

  /// @brief Field Pos, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2i Pos;

  /// @brief Field Size, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei Size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Recti, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Rectf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7721)), TypeDefinitionIndex(TypeDefinitionIndex(7744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7748))
// CS Name: ::OVRPlugin::Rectf
struct CORDL_TYPE __OVRPlugin__Rectf {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::__OVRPlugin__Vector2f", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "::GlobalNamespace::__OVRPlugin__Sizef",
  // modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Rectf(::GlobalNamespace::__OVRPlugin__Vector2f Pos, ::GlobalNamespace::__OVRPlugin__Sizef Size) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Rectf();

  /// @brief Field Pos, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector2f Pos;

  /// @brief Field Size, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizef Size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Rectf, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Boundsf
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7722)), TypeDefinitionIndex(TypeDefinitionIndex(7745))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7749))
// CS Name: ::OVRPlugin::Boundsf
struct CORDL_TYPE __OVRPlugin__Boundsf {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "::GlobalNamespace::__OVRPlugin__Size3f",
  // modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Boundsf(::GlobalNamespace::__OVRPlugin__Vector3f Pos, ::GlobalNamespace::__OVRPlugin__Size3f Size) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Boundsf();

  /// @brief Field Pos, offset: 0x0, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f Pos;

  /// @brief Field Size, offset: 0xc, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Size3f Size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Boundsf, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Frustumf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7750))
// CS Name: ::OVRPlugin::Frustumf
struct CORDL_TYPE __OVRPlugin__Frustumf {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "zNear", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fovX", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "fovY", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Frustumf(float_t zNear, float_t zFar, float_t fovX, float_t fovY) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Frustumf();

  /// @brief Field zNear, offset: 0x0, size: 0x4, def value: None
  float_t zNear;

  /// @brief Field zFar, offset: 0x4, size: 0x4, def value: None
  float_t zFar;

  /// @brief Field fovX, offset: 0x8, size: 0x4, def value: None
  float_t fovX;

  /// @brief Field fovY, offset: 0xc, size: 0x4, def value: None
  float_t fovY;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Frustumf, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Fovf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7756))
// CS Name: ::OVRPlugin::Fovf
struct CORDL_TYPE __OVRPlugin__Fovf {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "UpTan", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DownTan", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "LeftTan", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RightTan", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Fovf(float_t UpTan, float_t DownTan, float_t LeftTan, float_t RightTan) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Fovf();

  /// @brief Field UpTan, offset: 0x0, size: 0x4, def value: None
  float_t UpTan;

  /// @brief Field DownTan, offset: 0x4, size: 0x4, def value: None
  float_t DownTan;

  /// @brief Field LeftTan, offset: 0x8, size: 0x4, def value: None
  float_t LeftTan;

  /// @brief Field RightTan, offset: 0xc, size: 0x4, def value: None
  float_t RightTan;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Fovf, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Frustumf2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7751))
// CS Name: ::OVRPlugin::Frustumf2
struct CORDL_TYPE __OVRPlugin__Frustumf2 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "zNear", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "zFar", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Fov", ty:
  // "::GlobalNamespace::__OVRPlugin__Fovf", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Frustumf2(float_t zNear, float_t zFar, ::GlobalNamespace::__OVRPlugin__Fovf Fov) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Frustumf2();

  /// @brief Field zNear, offset: 0x0, size: 0x4, def value: None
  float_t zNear;

  /// @brief Field zFar, offset: 0x4, size: 0x4, def value: None
  float_t zFar;

  /// @brief Field Fov, offset: 0x8, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Fovf Fov;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Frustumf2, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoundaryType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7752))
// CS Name: ::OVRPlugin::BoundaryType
struct CORDL_TYPE __OVRPlugin__BoundaryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__BoundaryType_Unwrapped
  enum struct ____OVRPlugin__BoundaryType_Unwrapped : int32_t {
    __E_OuterBoundary = static_cast<int32_t>(0x1),
    __E_PlayArea = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__BoundaryType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__BoundaryType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BoundaryType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BoundaryType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OuterBoundary value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__BoundaryType const OuterBoundary;

  /// @brief Field PlayArea value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRPlugin__BoundaryType const PlayArea;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BoundaryType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoundaryTestResult
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7722)), TypeDefinitionIndex(TypeDefinitionIndex(7686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7753))
// CS Name: ::OVRPlugin::BoundaryTestResult
struct CORDL_TYPE __OVRPlugin__BoundaryTestResult {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsTriggering", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "ClosestPoint", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "ClosestPointNormal", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BoundaryTestResult(::GlobalNamespace::__OVRPlugin__Bool IsTriggering, float_t ClosestDistance, ::GlobalNamespace::__OVRPlugin__Vector3f ClosestPoint,
                                            ::GlobalNamespace::__OVRPlugin__Vector3f ClosestPointNormal) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BoundaryTestResult();

  /// @brief Field IsTriggering, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsTriggering;

  /// @brief Field ClosestDistance, offset: 0x4, size: 0x4, def value: None
  float_t ClosestDistance;

  /// @brief Field ClosestPoint, offset: 0x8, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f ClosestPoint;

  /// @brief Field ClosestPointNormal, offset: 0x14, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f ClosestPointNormal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BoundaryTestResult, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoundaryGeometry
// SizeInfo { instance_size: 24, native_size: 3080, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7752))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7754))
// CS Name: ::OVRPlugin::BoundaryGeometry
struct CORDL_TYPE __OVRPlugin__BoundaryGeometry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "BoundaryType", ty: "::GlobalNamespace::__OVRPlugin__BoundaryType", modifiers: "", def_value: None }, CppParam { name: "Points", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f,::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>", modifiers: "", def_value: None }, CppParam { name: "PointsCount", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BoundaryGeometry(::GlobalNamespace::__OVRPlugin__BoundaryType BoundaryType,
                                          ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> Points, int32_t PointsCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BoundaryGeometry();

  /// @brief Field BoundaryType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__BoundaryType BoundaryType;

  /// @brief Field Points, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> Points;

  /// @brief Field PointsCount, offset: 0x10, size: 0x4, def value: None
  int32_t PointsCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BoundaryGeometry, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Colorf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7755))
// CS Name: ::OVRPlugin::Colorf
struct CORDL_TYPE __OVRPlugin__Colorf {
public:
  // Declarations
  /// @brief Method ToString addr 0x276cde4 size 0x1e4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Colorf(float_t r, float_t g, float_t b, float_t a) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Colorf();

  /// @brief Field r, offset: 0x0, size: 0x4, def value: None
  float_t r;

  /// @brief Field g, offset: 0x4, size: 0x4, def value: None
  float_t g;

  /// @brief Field b, offset: 0x8, size: 0x4, def value: None
  float_t b;

  /// @brief Field a, offset: 0xc, size: 0x4, def value: None
  float_t a;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Colorf, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraIntrinsics
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686)), TypeDefinitionIndex(TypeDefinitionIndex(7743)), TypeDefinitionIndex(TypeDefinitionIndex(7756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7757))
// CS Name: ::OVRPlugin::CameraIntrinsics
struct CORDL_TYPE __OVRPlugin__CameraIntrinsics {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "LastChangedTimeSeconds", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "FOVPort", ty: "::GlobalNamespace::__OVRPlugin__Fovf", modifiers: "", def_value: None }, CppParam { name: "VirtualNearPlaneDistanceMeters", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "VirtualFarPlaneDistanceMeters", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ImageSensorPixelResolution", ty:
  // "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraIntrinsics(::GlobalNamespace::__OVRPlugin__Bool IsValid, double_t LastChangedTimeSeconds, ::GlobalNamespace::__OVRPlugin__Fovf FOVPort,
                                          float_t VirtualNearPlaneDistanceMeters, float_t VirtualFarPlaneDistanceMeters, ::GlobalNamespace::__OVRPlugin__Sizei ImageSensorPixelResolution) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraIntrinsics();

  /// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsValid;

  /// @brief Field LastChangedTimeSeconds, offset: 0x8, size: 0x8, def value: None
  double_t LastChangedTimeSeconds;

  /// @brief Field FOVPort, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Fovf FOVPort;

  /// @brief Field VirtualNearPlaneDistanceMeters, offset: 0x20, size: 0x4, def value: None
  float_t VirtualNearPlaneDistanceMeters;

  /// @brief Field VirtualFarPlaneDistanceMeters, offset: 0x24, size: 0x4, def value: None
  float_t VirtualFarPlaneDistanceMeters;

  /// @brief Field ImageSensorPixelResolution, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei ImageSensorPixelResolution;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraIntrinsics, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraExtrinsics
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686)), TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7690)),
// TypeDefinitionIndex(TypeDefinitionIndex(7695))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7758)) CS Name: ::OVRPlugin::CameraExtrinsics
struct CORDL_TYPE __OVRPlugin__CameraExtrinsics {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "LastChangedTimeSeconds", ty: "double_t", modifiers:
  // "", def_value: None }, CppParam { name: "CameraStatusData", ty: "::GlobalNamespace::__OVRPlugin__CameraStatus", modifiers: "", def_value: None }, CppParam { name: "AttachedToNode", ty:
  // "::GlobalNamespace::__OVRPlugin__Node", modifiers: "", def_value: None }, CppParam { name: "RelativePose", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__CameraExtrinsics(::GlobalNamespace::__OVRPlugin__Bool IsValid, double_t LastChangedTimeSeconds, ::GlobalNamespace::__OVRPlugin__CameraStatus CameraStatusData,
                                          ::GlobalNamespace::__OVRPlugin__Node AttachedToNode, ::GlobalNamespace::__OVRPlugin__Posef RelativePose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__CameraExtrinsics();

  /// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsValid;

  /// @brief Field LastChangedTimeSeconds, offset: 0x8, size: 0x8, def value: None
  double_t LastChangedTimeSeconds;

  /// @brief Field CameraStatusData, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__CameraStatus CameraStatusData;

  /// @brief Field AttachedToNode, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Node AttachedToNode;

  /// @brief Field RelativePose, offset: 0x18, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef RelativePose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__CameraExtrinsics, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerLayout
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7759))
// CS Name: ::OVRPlugin::LayerLayout
struct CORDL_TYPE __OVRPlugin__LayerLayout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__LayerLayout_Unwrapped
  enum struct ____OVRPlugin__LayerLayout_Unwrapped : int32_t {
    __E_Stereo = static_cast<int32_t>(0x0),
    __E_Mono = static_cast<int32_t>(0x1),
    __E_DoubleWide = static_cast<int32_t>(0x2),
    __E_Array = static_cast<int32_t>(0x3),
    __E_EnumSize = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__LayerLayout_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__LayerLayout_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LayerLayout(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerLayout();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Stereo value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__LayerLayout const Stereo;

  /// @brief Field Mono value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__LayerLayout const Mono;

  /// @brief Field DoubleWide value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__LayerLayout const DoubleWide;

  /// @brief Field Array value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__LayerLayout const Array;

  /// @brief Field EnumSize value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRPlugin__LayerLayout const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerLayout, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7760))
// CS Name: ::OVRPlugin::LayerFlags
struct CORDL_TYPE __OVRPlugin__LayerFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__LayerFlags_Unwrapped
  enum struct ____OVRPlugin__LayerFlags_Unwrapped : int32_t {
    __E_Static = static_cast<int32_t>(0x1),
    __E_LoadingScreen = static_cast<int32_t>(0x2),
    __E_SymmetricFov = static_cast<int32_t>(0x4),
    __E_TextureOriginAtBottomLeft = static_cast<int32_t>(0x8),
    __E_ChromaticAberrationCorrection = static_cast<int32_t>(0x10),
    __E_NoAllocation = static_cast<int32_t>(0x20),
    __E_ProtectedContent = static_cast<int32_t>(0x40),
    __E_AndroidSurfaceSwapChain = static_cast<int32_t>(0x80),
    __E_BicubicFiltering = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__LayerFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__LayerFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LayerFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Static value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const Static;

  /// @brief Field LoadingScreen value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const LoadingScreen;

  /// @brief Field SymmetricFov value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const SymmetricFov;

  /// @brief Field TextureOriginAtBottomLeft value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const TextureOriginAtBottomLeft;

  /// @brief Field ChromaticAberrationCorrection value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const ChromaticAberrationCorrection;

  /// @brief Field NoAllocation value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const NoAllocation;

  /// @brief Field ProtectedContent value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const ProtectedContent;

  /// @brief Field AndroidSurfaceSwapChain value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const AndroidSurfaceSwapChain;

  /// @brief Field BicubicFiltering value: static_cast<int32_t>(0x4000)
  static ::GlobalNamespace::__OVRPlugin__LayerFlags const BicubicFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerDesc
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7743)), TypeDefinitionIndex(TypeDefinitionIndex(7706)), TypeDefinitionIndex(TypeDefinitionIndex(7759)),
// TypeDefinitionIndex(TypeDefinitionIndex(7702))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7761)) CS Name: ::OVRPlugin::LayerDesc
struct CORDL_TYPE __OVRPlugin__LayerDesc {
public:
  // Declarations
  /// @brief Method ToString addr 0x276cfc8 size 0x400 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "Shape", ty: "::GlobalNamespace::__OVRPlugin__OverlayShape", modifiers: "", def_value: None }, CppParam { name: "Layout", ty:
  // "::GlobalNamespace::__OVRPlugin__LayerLayout", modifiers: "", def_value: None }, CppParam { name: "TextureSize", ty: "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "", def_value: None },
  // CppParam { name: "MipLevels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SampleCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Format", ty:
  // "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None }, CppParam { name: "LayerFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Fov", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Fovf,::Array<::GlobalNamespace::__OVRPlugin__Fovf>*>", modifiers: "", def_value: None }, CppParam { name: "VisibleRect", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Rectf,::Array<::GlobalNamespace::__OVRPlugin__Rectf>*>", modifiers: "", def_value: None }, CppParam { name: "MaxViewportSize", ty:
  // "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "", def_value: None }, CppParam { name: "DepthFormat", ty: "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None
  // }, CppParam { name: "MotionVectorFormat", ty: "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None }, CppParam { name: "MotionVectorDepthFormat", ty:
  // "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None }, CppParam { name: "MotionVectorTextureSize", ty: "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "",
  // def_value: None }]
  constexpr __OVRPlugin__LayerDesc(::GlobalNamespace::__OVRPlugin__OverlayShape Shape, ::GlobalNamespace::__OVRPlugin__LayerLayout Layout, ::GlobalNamespace::__OVRPlugin__Sizei TextureSize,
                                   int32_t MipLevels, int32_t SampleCount, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat Format, int32_t LayerFlags,
                                   ::ArrayW<::GlobalNamespace::__OVRPlugin__Fovf, ::Array<::GlobalNamespace::__OVRPlugin__Fovf>*> Fov,
                                   ::ArrayW<::GlobalNamespace::__OVRPlugin__Rectf, ::Array<::GlobalNamespace::__OVRPlugin__Rectf>*> VisibleRect, ::GlobalNamespace::__OVRPlugin__Sizei MaxViewportSize,
                                   ::GlobalNamespace::__OVRPlugin__EyeTextureFormat DepthFormat, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorFormat,
                                   ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorDepthFormat, ::GlobalNamespace::__OVRPlugin__Sizei MotionVectorTextureSize) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerDesc();

  /// @brief Field Shape, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__OverlayShape Shape;

  /// @brief Field Layout, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__LayerLayout Layout;

  /// @brief Field TextureSize, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei TextureSize;

  /// @brief Field MipLevels, offset: 0x10, size: 0x4, def value: None
  int32_t MipLevels;

  /// @brief Field SampleCount, offset: 0x14, size: 0x4, def value: None
  int32_t SampleCount;

  /// @brief Field Format, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat Format;

  /// @brief Field LayerFlags, offset: 0x1c, size: 0x4, def value: None
  int32_t LayerFlags;

  /// @brief Field Fov, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Fovf, ::Array<::GlobalNamespace::__OVRPlugin__Fovf>*> Fov;

  /// @brief Field VisibleRect, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Rectf, ::Array<::GlobalNamespace::__OVRPlugin__Rectf>*> VisibleRect;

  /// @brief Field MaxViewportSize, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei MaxViewportSize;

  /// @brief Field DepthFormat, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat DepthFormat;

  /// @brief Field MotionVectorFormat, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorFormat;

  /// @brief Field MotionVectorDepthFormat, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorDepthFormat;

  /// @brief Field MotionVectorTextureSize, offset: 0x44, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei MotionVectorTextureSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerDesc, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerDescInternal
// SizeInfo { instance_size: 124, native_size: 124, calculated_instance_size: 124, calculated_native_size: 140, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7706)), TypeDefinitionIndex(TypeDefinitionIndex(7702)), TypeDefinitionIndex(TypeDefinitionIndex(7759)),
// TypeDefinitionIndex(TypeDefinitionIndex(7743)), TypeDefinitionIndex(TypeDefinitionIndex(7756)), TypeDefinitionIndex(TypeDefinitionIndex(7748))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7762))
// CS Name: ::OVRPlugin::LayerDescInternal
struct CORDL_TYPE __OVRPlugin__LayerDescInternal {
public:
  // Declarations
  /// @brief Method .ctor addr 0x276d3c8 size 0xdc virtual false final false
  inline void _ctor(::GlobalNamespace::__OVRPlugin__LayerDesc layerDesc);

  /// @brief Method ToLayerDesc addr 0x276d4a4 size 0x150 virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__LayerDesc ToLayerDesc();

  // Ctor Parameters [CppParam { name: "Shape", ty: "::GlobalNamespace::__OVRPlugin__OverlayShape", modifiers: "", def_value: None }, CppParam { name: "Layout", ty:
  // "::GlobalNamespace::__OVRPlugin__LayerLayout", modifiers: "", def_value: None }, CppParam { name: "TextureSize", ty: "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "", def_value: None },
  // CppParam { name: "MipLevels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SampleCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Format", ty:
  // "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None }, CppParam { name: "LayerFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Fov0", ty:
  // "::GlobalNamespace::__OVRPlugin__Fovf", modifiers: "", def_value: None }, CppParam { name: "Fov1", ty: "::GlobalNamespace::__OVRPlugin__Fovf", modifiers: "", def_value: None }, CppParam { name:
  // "VisibleRect0", ty: "::GlobalNamespace::__OVRPlugin__Rectf", modifiers: "", def_value: None }, CppParam { name: "VisibleRect1", ty: "::GlobalNamespace::__OVRPlugin__Rectf", modifiers: "",
  // def_value: None }, CppParam { name: "MaxViewportSize", ty: "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "", def_value: None }, CppParam { name: "DepthFormat", ty:
  // "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None }, CppParam { name: "MotionVectorFormat", ty: "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "",
  // def_value: None }, CppParam { name: "MotionVectorDepthFormat", ty: "::GlobalNamespace::__OVRPlugin__EyeTextureFormat", modifiers: "", def_value: None }, CppParam { name:
  // "MotionVectorTextureSize", ty: "::GlobalNamespace::__OVRPlugin__Sizei", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LayerDescInternal(::GlobalNamespace::__OVRPlugin__OverlayShape Shape, ::GlobalNamespace::__OVRPlugin__LayerLayout Layout, ::GlobalNamespace::__OVRPlugin__Sizei TextureSize,
                                           int32_t MipLevels, int32_t SampleCount, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat Format, int32_t LayerFlags,
                                           ::GlobalNamespace::__OVRPlugin__Fovf Fov0, ::GlobalNamespace::__OVRPlugin__Fovf Fov1, ::GlobalNamespace::__OVRPlugin__Rectf VisibleRect0,
                                           ::GlobalNamespace::__OVRPlugin__Rectf VisibleRect1, ::GlobalNamespace::__OVRPlugin__Sizei MaxViewportSize,
                                           ::GlobalNamespace::__OVRPlugin__EyeTextureFormat DepthFormat, ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorFormat,
                                           ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorDepthFormat, ::GlobalNamespace::__OVRPlugin__Sizei MotionVectorTextureSize) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerDescInternal();

  /// @brief Field Shape, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__OverlayShape Shape;

  /// @brief Field Layout, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__LayerLayout Layout;

  /// @brief Field TextureSize, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei TextureSize;

  /// @brief Field MipLevels, offset: 0x10, size: 0x4, def value: None
  int32_t MipLevels;

  /// @brief Field SampleCount, offset: 0x14, size: 0x4, def value: None
  int32_t SampleCount;

  /// @brief Field Format, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat Format;

  /// @brief Field LayerFlags, offset: 0x1c, size: 0x4, def value: None
  int32_t LayerFlags;

  /// @brief Field Fov0, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Fovf Fov0;

  /// @brief Field Fov1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Fovf Fov1;

  /// @brief Field VisibleRect0, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Rectf VisibleRect0;

  /// @brief Field VisibleRect1, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Rectf VisibleRect1;

  /// @brief Field MaxViewportSize, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei MaxViewportSize;

  /// @brief Field DepthFormat, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat DepthFormat;

  /// @brief Field MotionVectorFormat, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorFormat;

  /// @brief Field MotionVectorDepthFormat, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeTextureFormat MotionVectorDepthFormat;

  /// @brief Field MotionVectorTextureSize, offset: 0x74, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Sizei MotionVectorTextureSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x7c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerDescInternal, 0x7c>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BlendFactor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7763))
// CS Name: ::OVRPlugin::BlendFactor
struct CORDL_TYPE __OVRPlugin__BlendFactor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__BlendFactor_Unwrapped
  enum struct ____OVRPlugin__BlendFactor_Unwrapped : int32_t {
    __E_Zero = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_SrcAlpha = static_cast<int32_t>(0x2),
    __E_OneMinusSrcAlpha = static_cast<int32_t>(0x3),
    __E_DstAlpha = static_cast<int32_t>(0x4),
    __E_OneMinusDstAlpha = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__BlendFactor_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__BlendFactor_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BlendFactor(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BlendFactor();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Zero value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__BlendFactor const Zero;

  /// @brief Field One value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__BlendFactor const One;

  /// @brief Field SrcAlpha value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__BlendFactor const SrcAlpha;

  /// @brief Field OneMinusSrcAlpha value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__BlendFactor const OneMinusSrcAlpha;

  /// @brief Field DstAlpha value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__BlendFactor const DstAlpha;

  /// @brief Field OneMinusDstAlpha value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__BlendFactor const OneMinusDstAlpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BlendFactor, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LayerSubmit
// SizeInfo { instance_size: 48, native_size: 72, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7764))
// CS Name: ::OVRPlugin::LayerSubmit
struct CORDL_TYPE __OVRPlugin__LayerSubmit {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "LayerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TextureStage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "ViewportRect", ty: "::ArrayW<::GlobalNamespace::__OVRPlugin__Recti,::Array<::GlobalNamespace::__OVRPlugin__Recti>*>", modifiers: "", def_value: None }, CppParam { name: "Pose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "LayerSubmitFlags", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__LayerSubmit(int32_t LayerId, int32_t TextureStage, ::ArrayW<::GlobalNamespace::__OVRPlugin__Recti, ::Array<::GlobalNamespace::__OVRPlugin__Recti>*> ViewportRect,
                                     ::GlobalNamespace::__OVRPlugin__Posef Pose, int32_t LayerSubmitFlags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__LayerSubmit();

  /// @brief Field LayerId, offset: 0x0, size: 0x4, def value: None
  int32_t LayerId;

  /// @brief Field TextureStage, offset: 0x4, size: 0x4, def value: None
  int32_t TextureStage;

  /// @brief Field ViewportRect, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Recti, ::Array<::GlobalNamespace::__OVRPlugin__Recti>*> ViewportRect;

  /// @brief Field Pose, offset: 0x10, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef Pose;

  /// @brief Field LayerSubmitFlags, offset: 0x2c, size: 0x4, def value: None
  int32_t LayerSubmitFlags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__LayerSubmit, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackingConfidence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7765))
// CS Name: ::OVRPlugin::TrackingConfidence
struct CORDL_TYPE __OVRPlugin__TrackingConfidence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__TrackingConfidence_Unwrapped
  enum struct ____OVRPlugin__TrackingConfidence_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_High = static_cast<int32_t>(0x3f800000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__TrackingConfidence_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__TrackingConfidence_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TrackingConfidence(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TrackingConfidence();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Low value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__TrackingConfidence const Low;

  /// @brief Field High value: static_cast<int32_t>(0x3f800000)
  static ::GlobalNamespace::__OVRPlugin__TrackingConfidence const High;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TrackingConfidence, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Hand
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7766))
// CS Name: ::OVRPlugin::Hand
struct CORDL_TYPE __OVRPlugin__Hand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Hand_Unwrapped
  enum struct ____OVRPlugin__Hand_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Hand_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Hand_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Hand(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Hand();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Hand const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Hand const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Hand const HandRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Hand, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7767))
// CS Name: ::OVRPlugin::HandStatus
struct CORDL_TYPE __OVRPlugin__HandStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__HandStatus_Unwrapped
  enum struct ____OVRPlugin__HandStatus_Unwrapped : int32_t {
    __E_HandTracked = static_cast<int32_t>(0x1),
    __E_InputStateValid = static_cast<int32_t>(0x2),
    __E_SystemGestureInProgress = static_cast<int32_t>(0x40),
    __E_DominantHand = static_cast<int32_t>(0x80),
    __E_MenuPressed = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__HandStatus_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__HandStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HandStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HandStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HandTracked value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__HandStatus const HandTracked;

  /// @brief Field InputStateValid value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__HandStatus const InputStateValid;

  /// @brief Field SystemGestureInProgress value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRPlugin__HandStatus const SystemGestureInProgress;

  /// @brief Field DominantHand value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRPlugin__HandStatus const DominantHand;

  /// @brief Field MenuPressed value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRPlugin__HandStatus const MenuPressed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HandStatus, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoneId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7768))
// CS Name: ::OVRPlugin::BoneId
struct CORDL_TYPE __OVRPlugin__BoneId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__BoneId_Unwrapped
  enum struct ____OVRPlugin__BoneId_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0xffffffff),
    __E_Hand_Start = static_cast<int32_t>(0x0),
    __E_Hand_WristRoot = static_cast<int32_t>(0x0),
    __E_Hand_ForearmStub = static_cast<int32_t>(0x1),
    __E_Hand_Thumb0 = static_cast<int32_t>(0x2),
    __E_Hand_Thumb1 = static_cast<int32_t>(0x3),
    __E_Hand_Thumb2 = static_cast<int32_t>(0x4),
    __E_Hand_Thumb3 = static_cast<int32_t>(0x5),
    __E_Hand_Index1 = static_cast<int32_t>(0x6),
    __E_Hand_Index2 = static_cast<int32_t>(0x7),
    __E_Hand_Index3 = static_cast<int32_t>(0x8),
    __E_Hand_Middle1 = static_cast<int32_t>(0x9),
    __E_Hand_Middle2 = static_cast<int32_t>(0xa),
    __E_Hand_Middle3 = static_cast<int32_t>(0xb),
    __E_Hand_Ring1 = static_cast<int32_t>(0xc),
    __E_Hand_Ring2 = static_cast<int32_t>(0xd),
    __E_Hand_Ring3 = static_cast<int32_t>(0xe),
    __E_Hand_Pinky0 = static_cast<int32_t>(0xf),
    __E_Hand_Pinky1 = static_cast<int32_t>(0x10),
    __E_Hand_Pinky2 = static_cast<int32_t>(0x11),
    __E_Hand_Pinky3 = static_cast<int32_t>(0x12),
    __E_Hand_MaxSkinnable = static_cast<int32_t>(0x13),
    __E_Hand_ThumbTip = static_cast<int32_t>(0x13),
    __E_Hand_IndexTip = static_cast<int32_t>(0x14),
    __E_Hand_MiddleTip = static_cast<int32_t>(0x15),
    __E_Hand_RingTip = static_cast<int32_t>(0x16),
    __E_Hand_PinkyTip = static_cast<int32_t>(0x17),
    __E_Hand_End = static_cast<int32_t>(0x18),
    __E_Body_Start = static_cast<int32_t>(0x0),
    __E_Body_Root = static_cast<int32_t>(0x0),
    __E_Body_Hips = static_cast<int32_t>(0x1),
    __E_Body_SpineLower = static_cast<int32_t>(0x2),
    __E_Body_SpineMiddle = static_cast<int32_t>(0x3),
    __E_Body_SpineUpper = static_cast<int32_t>(0x4),
    __E_Body_Chest = static_cast<int32_t>(0x5),
    __E_Body_Neck = static_cast<int32_t>(0x6),
    __E_Body_Head = static_cast<int32_t>(0x7),
    __E_Body_LeftShoulder = static_cast<int32_t>(0x8),
    __E_Body_LeftScapula = static_cast<int32_t>(0x9),
    __E_Body_LeftArmUpper = static_cast<int32_t>(0xa),
    __E_Body_LeftArmLower = static_cast<int32_t>(0xb),
    __E_Body_LeftHandWristTwist = static_cast<int32_t>(0xc),
    __E_Body_RightShoulder = static_cast<int32_t>(0xd),
    __E_Body_RightScapula = static_cast<int32_t>(0xe),
    __E_Body_RightArmUpper = static_cast<int32_t>(0xf),
    __E_Body_RightArmLower = static_cast<int32_t>(0x10),
    __E_Body_RightHandWristTwist = static_cast<int32_t>(0x11),
    __E_Body_LeftHandPalm = static_cast<int32_t>(0x12),
    __E_Body_LeftHandWrist = static_cast<int32_t>(0x13),
    __E_Body_LeftHandThumbMetacarpal = static_cast<int32_t>(0x14),
    __E_Body_LeftHandThumbProximal = static_cast<int32_t>(0x15),
    __E_Body_LeftHandThumbDistal = static_cast<int32_t>(0x16),
    __E_Body_LeftHandThumbTip = static_cast<int32_t>(0x17),
    __E_Body_LeftHandIndexMetacarpal = static_cast<int32_t>(0x18),
    __E_Body_LeftHandIndexProximal = static_cast<int32_t>(0x19),
    __E_Body_LeftHandIndexIntermediate = static_cast<int32_t>(0x1a),
    __E_Body_LeftHandIndexDistal = static_cast<int32_t>(0x1b),
    __E_Body_LeftHandIndexTip = static_cast<int32_t>(0x1c),
    __E_Body_LeftHandMiddleMetacarpal = static_cast<int32_t>(0x1d),
    __E_Body_LeftHandMiddleProximal = static_cast<int32_t>(0x1e),
    __E_Body_LeftHandMiddleIntermediate = static_cast<int32_t>(0x1f),
    __E_Body_LeftHandMiddleDistal = static_cast<int32_t>(0x20),
    __E_Body_LeftHandMiddleTip = static_cast<int32_t>(0x21),
    __E_Body_LeftHandRingMetacarpal = static_cast<int32_t>(0x22),
    __E_Body_LeftHandRingProximal = static_cast<int32_t>(0x23),
    __E_Body_LeftHandRingIntermediate = static_cast<int32_t>(0x24),
    __E_Body_LeftHandRingDistal = static_cast<int32_t>(0x25),
    __E_Body_LeftHandRingTip = static_cast<int32_t>(0x26),
    __E_Body_LeftHandLittleMetacarpal = static_cast<int32_t>(0x27),
    __E_Body_LeftHandLittleProximal = static_cast<int32_t>(0x28),
    __E_Body_LeftHandLittleIntermediate = static_cast<int32_t>(0x29),
    __E_Body_LeftHandLittleDistal = static_cast<int32_t>(0x2a),
    __E_Body_LeftHandLittleTip = static_cast<int32_t>(0x2b),
    __E_Body_RightHandPalm = static_cast<int32_t>(0x2c),
    __E_Body_RightHandWrist = static_cast<int32_t>(0x2d),
    __E_Body_RightHandThumbMetacarpal = static_cast<int32_t>(0x2e),
    __E_Body_RightHandThumbProximal = static_cast<int32_t>(0x2f),
    __E_Body_RightHandThumbDistal = static_cast<int32_t>(0x30),
    __E_Body_RightHandThumbTip = static_cast<int32_t>(0x31),
    __E_Body_RightHandIndexMetacarpal = static_cast<int32_t>(0x32),
    __E_Body_RightHandIndexProximal = static_cast<int32_t>(0x33),
    __E_Body_RightHandIndexIntermediate = static_cast<int32_t>(0x34),
    __E_Body_RightHandIndexDistal = static_cast<int32_t>(0x35),
    __E_Body_RightHandIndexTip = static_cast<int32_t>(0x36),
    __E_Body_RightHandMiddleMetacarpal = static_cast<int32_t>(0x37),
    __E_Body_RightHandMiddleProximal = static_cast<int32_t>(0x38),
    __E_Body_RightHandMiddleIntermediate = static_cast<int32_t>(0x39),
    __E_Body_RightHandMiddleDistal = static_cast<int32_t>(0x3a),
    __E_Body_RightHandMiddleTip = static_cast<int32_t>(0x3b),
    __E_Body_RightHandRingMetacarpal = static_cast<int32_t>(0x3c),
    __E_Body_RightHandRingProximal = static_cast<int32_t>(0x3d),
    __E_Body_RightHandRingIntermediate = static_cast<int32_t>(0x3e),
    __E_Body_RightHandRingDistal = static_cast<int32_t>(0x3f),
    __E_Body_RightHandRingTip = static_cast<int32_t>(0x40),
    __E_Body_RightHandLittleMetacarpal = static_cast<int32_t>(0x41),
    __E_Body_RightHandLittleProximal = static_cast<int32_t>(0x42),
    __E_Body_RightHandLittleIntermediate = static_cast<int32_t>(0x43),
    __E_Body_RightHandLittleDistal = static_cast<int32_t>(0x44),
    __E_Body_RightHandLittleTip = static_cast<int32_t>(0x45),
    __E_Body_End = static_cast<int32_t>(0x46),
    __E_Max = static_cast<int32_t>(0x46),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__BoneId_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__BoneId_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BoneId(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BoneId();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Invalid;

  /// @brief Field Hand_Start value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Start;

  /// @brief Field Hand_WristRoot value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_WristRoot;

  /// @brief Field Hand_ForearmStub value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_ForearmStub;

  /// @brief Field Hand_Thumb0 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Thumb0;

  /// @brief Field Hand_Thumb1 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Thumb1;

  /// @brief Field Hand_Thumb2 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Thumb2;

  /// @brief Field Hand_Thumb3 value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Thumb3;

  /// @brief Field Hand_Index1 value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Index1;

  /// @brief Field Hand_Index2 value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Index2;

  /// @brief Field Hand_Index3 value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Index3;

  /// @brief Field Hand_Middle1 value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Middle1;

  /// @brief Field Hand_Middle2 value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Middle2;

  /// @brief Field Hand_Middle3 value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Middle3;

  /// @brief Field Hand_Ring1 value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Ring1;

  /// @brief Field Hand_Ring2 value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Ring2;

  /// @brief Field Hand_Ring3 value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Ring3;

  /// @brief Field Hand_Pinky0 value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Pinky0;

  /// @brief Field Hand_Pinky1 value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Pinky1;

  /// @brief Field Hand_Pinky2 value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Pinky2;

  /// @brief Field Hand_Pinky3 value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_Pinky3;

  /// @brief Field Hand_MaxSkinnable value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_MaxSkinnable;

  /// @brief Field Hand_ThumbTip value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_ThumbTip;

  /// @brief Field Hand_IndexTip value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_IndexTip;

  /// @brief Field Hand_MiddleTip value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_MiddleTip;

  /// @brief Field Hand_RingTip value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_RingTip;

  /// @brief Field Hand_PinkyTip value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_PinkyTip;

  /// @brief Field Hand_End value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Hand_End;

  /// @brief Field Body_Start value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_Start;

  /// @brief Field Body_Root value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_Root;

  /// @brief Field Body_Hips value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_Hips;

  /// @brief Field Body_SpineLower value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_SpineLower;

  /// @brief Field Body_SpineMiddle value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_SpineMiddle;

  /// @brief Field Body_SpineUpper value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_SpineUpper;

  /// @brief Field Body_Chest value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_Chest;

  /// @brief Field Body_Neck value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_Neck;

  /// @brief Field Body_Head value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_Head;

  /// @brief Field Body_LeftShoulder value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftShoulder;

  /// @brief Field Body_LeftScapula value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftScapula;

  /// @brief Field Body_LeftArmUpper value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftArmUpper;

  /// @brief Field Body_LeftArmLower value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftArmLower;

  /// @brief Field Body_LeftHandWristTwist value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandWristTwist;

  /// @brief Field Body_RightShoulder value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightShoulder;

  /// @brief Field Body_RightScapula value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightScapula;

  /// @brief Field Body_RightArmUpper value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightArmUpper;

  /// @brief Field Body_RightArmLower value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightArmLower;

  /// @brief Field Body_RightHandWristTwist value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandWristTwist;

  /// @brief Field Body_LeftHandPalm value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandPalm;

  /// @brief Field Body_LeftHandWrist value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandWrist;

  /// @brief Field Body_LeftHandThumbMetacarpal value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandThumbMetacarpal;

  /// @brief Field Body_LeftHandThumbProximal value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandThumbProximal;

  /// @brief Field Body_LeftHandThumbDistal value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandThumbDistal;

  /// @brief Field Body_LeftHandThumbTip value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandThumbTip;

  /// @brief Field Body_LeftHandIndexMetacarpal value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandIndexMetacarpal;

  /// @brief Field Body_LeftHandIndexProximal value: static_cast<int32_t>(0x19)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandIndexProximal;

  /// @brief Field Body_LeftHandIndexIntermediate value: static_cast<int32_t>(0x1a)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandIndexIntermediate;

  /// @brief Field Body_LeftHandIndexDistal value: static_cast<int32_t>(0x1b)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandIndexDistal;

  /// @brief Field Body_LeftHandIndexTip value: static_cast<int32_t>(0x1c)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandIndexTip;

  /// @brief Field Body_LeftHandMiddleMetacarpal value: static_cast<int32_t>(0x1d)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandMiddleMetacarpal;

  /// @brief Field Body_LeftHandMiddleProximal value: static_cast<int32_t>(0x1e)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandMiddleProximal;

  /// @brief Field Body_LeftHandMiddleIntermediate value: static_cast<int32_t>(0x1f)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandMiddleIntermediate;

  /// @brief Field Body_LeftHandMiddleDistal value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandMiddleDistal;

  /// @brief Field Body_LeftHandMiddleTip value: static_cast<int32_t>(0x21)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandMiddleTip;

  /// @brief Field Body_LeftHandRingMetacarpal value: static_cast<int32_t>(0x22)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandRingMetacarpal;

  /// @brief Field Body_LeftHandRingProximal value: static_cast<int32_t>(0x23)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandRingProximal;

  /// @brief Field Body_LeftHandRingIntermediate value: static_cast<int32_t>(0x24)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandRingIntermediate;

  /// @brief Field Body_LeftHandRingDistal value: static_cast<int32_t>(0x25)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandRingDistal;

  /// @brief Field Body_LeftHandRingTip value: static_cast<int32_t>(0x26)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandRingTip;

  /// @brief Field Body_LeftHandLittleMetacarpal value: static_cast<int32_t>(0x27)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandLittleMetacarpal;

  /// @brief Field Body_LeftHandLittleProximal value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandLittleProximal;

  /// @brief Field Body_LeftHandLittleIntermediate value: static_cast<int32_t>(0x29)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandLittleIntermediate;

  /// @brief Field Body_LeftHandLittleDistal value: static_cast<int32_t>(0x2a)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandLittleDistal;

  /// @brief Field Body_LeftHandLittleTip value: static_cast<int32_t>(0x2b)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_LeftHandLittleTip;

  /// @brief Field Body_RightHandPalm value: static_cast<int32_t>(0x2c)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandPalm;

  /// @brief Field Body_RightHandWrist value: static_cast<int32_t>(0x2d)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandWrist;

  /// @brief Field Body_RightHandThumbMetacarpal value: static_cast<int32_t>(0x2e)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandThumbMetacarpal;

  /// @brief Field Body_RightHandThumbProximal value: static_cast<int32_t>(0x2f)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandThumbProximal;

  /// @brief Field Body_RightHandThumbDistal value: static_cast<int32_t>(0x30)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandThumbDistal;

  /// @brief Field Body_RightHandThumbTip value: static_cast<int32_t>(0x31)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandThumbTip;

  /// @brief Field Body_RightHandIndexMetacarpal value: static_cast<int32_t>(0x32)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandIndexMetacarpal;

  /// @brief Field Body_RightHandIndexProximal value: static_cast<int32_t>(0x33)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandIndexProximal;

  /// @brief Field Body_RightHandIndexIntermediate value: static_cast<int32_t>(0x34)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandIndexIntermediate;

  /// @brief Field Body_RightHandIndexDistal value: static_cast<int32_t>(0x35)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandIndexDistal;

  /// @brief Field Body_RightHandIndexTip value: static_cast<int32_t>(0x36)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandIndexTip;

  /// @brief Field Body_RightHandMiddleMetacarpal value: static_cast<int32_t>(0x37)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandMiddleMetacarpal;

  /// @brief Field Body_RightHandMiddleProximal value: static_cast<int32_t>(0x38)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandMiddleProximal;

  /// @brief Field Body_RightHandMiddleIntermediate value: static_cast<int32_t>(0x39)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandMiddleIntermediate;

  /// @brief Field Body_RightHandMiddleDistal value: static_cast<int32_t>(0x3a)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandMiddleDistal;

  /// @brief Field Body_RightHandMiddleTip value: static_cast<int32_t>(0x3b)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandMiddleTip;

  /// @brief Field Body_RightHandRingMetacarpal value: static_cast<int32_t>(0x3c)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandRingMetacarpal;

  /// @brief Field Body_RightHandRingProximal value: static_cast<int32_t>(0x3d)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandRingProximal;

  /// @brief Field Body_RightHandRingIntermediate value: static_cast<int32_t>(0x3e)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandRingIntermediate;

  /// @brief Field Body_RightHandRingDistal value: static_cast<int32_t>(0x3f)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandRingDistal;

  /// @brief Field Body_RightHandRingTip value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandRingTip;

  /// @brief Field Body_RightHandLittleMetacarpal value: static_cast<int32_t>(0x41)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandLittleMetacarpal;

  /// @brief Field Body_RightHandLittleProximal value: static_cast<int32_t>(0x42)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandLittleProximal;

  /// @brief Field Body_RightHandLittleIntermediate value: static_cast<int32_t>(0x43)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandLittleIntermediate;

  /// @brief Field Body_RightHandLittleDistal value: static_cast<int32_t>(0x44)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandLittleDistal;

  /// @brief Field Body_RightHandLittleTip value: static_cast<int32_t>(0x45)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_RightHandLittleTip;

  /// @brief Field Body_End value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Body_End;

  /// @brief Field Max value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRPlugin__BoneId const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BoneId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandFinger
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7769))
// CS Name: ::OVRPlugin::HandFinger
struct CORDL_TYPE __OVRPlugin__HandFinger {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__HandFinger_Unwrapped
  enum struct ____OVRPlugin__HandFinger_Unwrapped : int32_t {
    __E_Thumb = static_cast<int32_t>(0x0),
    __E_Index = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
    __E_Ring = static_cast<int32_t>(0x3),
    __E_Pinky = static_cast<int32_t>(0x4),
    __E_Max = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__HandFinger_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__HandFinger_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HandFinger(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HandFinger();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Thumb value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__HandFinger const Thumb;

  /// @brief Field Index value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__HandFinger const Index;

  /// @brief Field Middle value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__HandFinger const Middle;

  /// @brief Field Ring value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__HandFinger const Ring;

  /// @brief Field Pinky value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__HandFinger const Pinky;

  /// @brief Field Max value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__HandFinger const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HandFinger, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandFingerPinch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7770))
// CS Name: ::OVRPlugin::HandFingerPinch
struct CORDL_TYPE __OVRPlugin__HandFingerPinch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__HandFingerPinch_Unwrapped
  enum struct ____OVRPlugin__HandFingerPinch_Unwrapped : int32_t {
    __E_Thumb = static_cast<int32_t>(0x1),
    __E_Index = static_cast<int32_t>(0x2),
    __E_Middle = static_cast<int32_t>(0x4),
    __E_Ring = static_cast<int32_t>(0x8),
    __E_Pinky = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__HandFingerPinch_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__HandFingerPinch_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HandFingerPinch(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HandFingerPinch();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Thumb value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__HandFingerPinch const Thumb;

  /// @brief Field Index value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__HandFingerPinch const Index;

  /// @brief Field Middle value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__HandFingerPinch const Middle;

  /// @brief Field Ring value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__HandFingerPinch const Ring;

  /// @brief Field Pinky value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__HandFingerPinch const Pinky;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HandFingerPinch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandState
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7765)), TypeDefinitionIndex(TypeDefinitionIndex(7767)),
// TypeDefinitionIndex(TypeDefinitionIndex(7770))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7771)) CS Name: ::OVRPlugin::HandState
struct CORDL_TYPE __OVRPlugin__HandState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::__OVRPlugin__HandStatus", modifiers: "", def_value: None }, CppParam { name: "RootPose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "BoneRotations", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf,::Array<::GlobalNamespace::__OVRPlugin__Quatf>*>", modifiers: "", def_value: None }, CppParam { name: "Pinches", ty:
  // "::GlobalNamespace::__OVRPlugin__HandFingerPinch", modifiers: "", def_value: None }, CppParam { name: "PinchStrength", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None },
  // CppParam { name: "PointerPose", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "HandScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "HandConfidence", ty: "::GlobalNamespace::__OVRPlugin__TrackingConfidence", modifiers: "", def_value: None }, CppParam { name: "FingerConfidences", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__TrackingConfidence,::Array<::GlobalNamespace::__OVRPlugin__TrackingConfidence>*>", modifiers: "", def_value: None }, CppParam { name:
  // "RequestedTimeStamp", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "SampleTimeStamp", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__HandState(::GlobalNamespace::__OVRPlugin__HandStatus Status, ::GlobalNamespace::__OVRPlugin__Posef RootPose,
                                   ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> BoneRotations,
                                   ::GlobalNamespace::__OVRPlugin__HandFingerPinch Pinches, ::ArrayW<float_t, ::Array<float_t>*> PinchStrength, ::GlobalNamespace::__OVRPlugin__Posef PointerPose,
                                   float_t HandScale, ::GlobalNamespace::__OVRPlugin__TrackingConfidence HandConfidence,
                                   ::ArrayW<::GlobalNamespace::__OVRPlugin__TrackingConfidence, ::Array<::GlobalNamespace::__OVRPlugin__TrackingConfidence>*> FingerConfidences,
                                   double_t RequestedTimeStamp, double_t SampleTimeStamp) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HandState();

  /// @brief Field Status, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__HandStatus Status;

  /// @brief Field RootPose, offset: 0x4, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef RootPose;

  /// @brief Field BoneRotations, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Quatf, ::Array<::GlobalNamespace::__OVRPlugin__Quatf>*> BoneRotations;

  /// @brief Field Pinches, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__HandFingerPinch Pinches;

  /// @brief Field PinchStrength, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> PinchStrength;

  /// @brief Field PointerPose, offset: 0x38, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef PointerPose;

  /// @brief Field HandScale, offset: 0x54, size: 0x4, def value: None
  float_t HandScale;

  /// @brief Field HandConfidence, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence HandConfidence;

  /// @brief Field FingerConfidences, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__TrackingConfidence, ::Array<::GlobalNamespace::__OVRPlugin__TrackingConfidence>*> FingerConfidences;

  /// @brief Field RequestedTimeStamp, offset: 0x68, size: 0x8, def value: None
  double_t RequestedTimeStamp;

  /// @brief Field SampleTimeStamp, offset: 0x70, size: 0x8, def value: None
  double_t SampleTimeStamp;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HandState, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HandStateInternal
// SizeInfo { instance_size: 512, native_size: 512, calculated_instance_size: 512, calculated_native_size: 528, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7770)), TypeDefinitionIndex(TypeDefinitionIndex(7765)),
// TypeDefinitionIndex(TypeDefinitionIndex(7725)), TypeDefinitionIndex(TypeDefinitionIndex(7767))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7772)) CS Name: ::OVRPlugin::HandStateInternal
struct CORDL_TYPE __OVRPlugin__HandStateInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::__OVRPlugin__HandStatus", modifiers: "", def_value: None }, CppParam { name: "RootPose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_0", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_1", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_2", ty: "::GlobalNamespace::__OVRPlugin__Quatf",
  // modifiers: "", def_value: None }, CppParam { name: "BoneRotations_3", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_4", ty:
  // "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_5", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_6", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_7", ty: "::GlobalNamespace::__OVRPlugin__Quatf",
  // modifiers: "", def_value: None }, CppParam { name: "BoneRotations_8", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_9", ty:
  // "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_10", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_11", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_12", ty:
  // "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_13", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_14", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_15", ty:
  // "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_16", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_17", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_18", ty:
  // "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_19", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_20", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_21", ty:
  // "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "BoneRotations_22", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None },
  // CppParam { name: "BoneRotations_23", ty: "::GlobalNamespace::__OVRPlugin__Quatf", modifiers: "", def_value: None }, CppParam { name: "Pinches", ty:
  // "::GlobalNamespace::__OVRPlugin__HandFingerPinch", modifiers: "", def_value: None }, CppParam { name: "PinchStrength_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "PinchStrength_1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "PinchStrength_2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "PinchStrength_3", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "PinchStrength_4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "PointerPose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "HandScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "HandConfidence", ty:
  // "::GlobalNamespace::__OVRPlugin__TrackingConfidence", modifiers: "", def_value: None }, CppParam { name: "FingerConfidences_0", ty: "::GlobalNamespace::__OVRPlugin__TrackingConfidence",
  // modifiers: "", def_value: None }, CppParam { name: "FingerConfidences_1", ty: "::GlobalNamespace::__OVRPlugin__TrackingConfidence", modifiers: "", def_value: None }, CppParam { name:
  // "FingerConfidences_2", ty: "::GlobalNamespace::__OVRPlugin__TrackingConfidence", modifiers: "", def_value: None }, CppParam { name: "FingerConfidences_3", ty:
  // "::GlobalNamespace::__OVRPlugin__TrackingConfidence", modifiers: "", def_value: None }, CppParam { name: "FingerConfidences_4", ty: "::GlobalNamespace::__OVRPlugin__TrackingConfidence",
  // modifiers: "", def_value: None }, CppParam { name: "RequestedTimeStamp", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "SampleTimeStamp", ty: "double_t", modifiers: "",
  // def_value: None }]
  constexpr __OVRPlugin__HandStateInternal(
      ::GlobalNamespace::__OVRPlugin__HandStatus Status, ::GlobalNamespace::__OVRPlugin__Posef RootPose, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_0,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_1, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_2, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_3,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_4, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_5, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_6,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_7, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_8, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_9,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_10, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_11, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_12,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_13, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_14, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_15,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_16, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_17, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_18,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_19, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_20, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_21,
      ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_22, ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_23, ::GlobalNamespace::__OVRPlugin__HandFingerPinch Pinches, float_t PinchStrength_0,
      float_t PinchStrength_1, float_t PinchStrength_2, float_t PinchStrength_3, float_t PinchStrength_4, ::GlobalNamespace::__OVRPlugin__Posef PointerPose, float_t HandScale,
      ::GlobalNamespace::__OVRPlugin__TrackingConfidence HandConfidence, ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_0,
      ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_1, ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_2,
      ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_3, ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_4, double_t RequestedTimeStamp,
      double_t SampleTimeStamp) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__HandStateInternal();

  /// @brief Field Status, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__HandStatus Status;

  /// @brief Field RootPose, offset: 0x4, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef RootPose;

  /// @brief Field BoneRotations_0, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_0;

  /// @brief Field BoneRotations_1, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_1;

  /// @brief Field BoneRotations_2, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_2;

  /// @brief Field BoneRotations_3, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_3;

  /// @brief Field BoneRotations_4, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_4;

  /// @brief Field BoneRotations_5, offset: 0x70, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_5;

  /// @brief Field BoneRotations_6, offset: 0x80, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_6;

  /// @brief Field BoneRotations_7, offset: 0x90, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_7;

  /// @brief Field BoneRotations_8, offset: 0xa0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_8;

  /// @brief Field BoneRotations_9, offset: 0xb0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_9;

  /// @brief Field BoneRotations_10, offset: 0xc0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_10;

  /// @brief Field BoneRotations_11, offset: 0xd0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_11;

  /// @brief Field BoneRotations_12, offset: 0xe0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_12;

  /// @brief Field BoneRotations_13, offset: 0xf0, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_13;

  /// @brief Field BoneRotations_14, offset: 0x100, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_14;

  /// @brief Field BoneRotations_15, offset: 0x110, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_15;

  /// @brief Field BoneRotations_16, offset: 0x120, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_16;

  /// @brief Field BoneRotations_17, offset: 0x130, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_17;

  /// @brief Field BoneRotations_18, offset: 0x140, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_18;

  /// @brief Field BoneRotations_19, offset: 0x150, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_19;

  /// @brief Field BoneRotations_20, offset: 0x160, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_20;

  /// @brief Field BoneRotations_21, offset: 0x170, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_21;

  /// @brief Field BoneRotations_22, offset: 0x180, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_22;

  /// @brief Field BoneRotations_23, offset: 0x190, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Quatf BoneRotations_23;

  /// @brief Field Pinches, offset: 0x1a0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__HandFingerPinch Pinches;

  /// @brief Field PinchStrength_0, offset: 0x1a4, size: 0x4, def value: None
  float_t PinchStrength_0;

  /// @brief Field PinchStrength_1, offset: 0x1a8, size: 0x4, def value: None
  float_t PinchStrength_1;

  /// @brief Field PinchStrength_2, offset: 0x1ac, size: 0x4, def value: None
  float_t PinchStrength_2;

  /// @brief Field PinchStrength_3, offset: 0x1b0, size: 0x4, def value: None
  float_t PinchStrength_3;

  /// @brief Field PinchStrength_4, offset: 0x1b4, size: 0x4, def value: None
  float_t PinchStrength_4;

  /// @brief Field PointerPose, offset: 0x1b8, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef PointerPose;

  /// @brief Field HandScale, offset: 0x1d4, size: 0x4, def value: None
  float_t HandScale;

  /// @brief Field HandConfidence, offset: 0x1d8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence HandConfidence;

  /// @brief Field FingerConfidences_0, offset: 0x1dc, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_0;

  /// @brief Field FingerConfidences_1, offset: 0x1e0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_1;

  /// @brief Field FingerConfidences_2, offset: 0x1e4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_2;

  /// @brief Field FingerConfidences_3, offset: 0x1e8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_3;

  /// @brief Field FingerConfidences_4, offset: 0x1ec, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingConfidence FingerConfidences_4;

  /// @brief Field RequestedTimeStamp, offset: 0x1f0, size: 0x8, def value: None
  double_t RequestedTimeStamp;

  /// @brief Field SampleTimeStamp, offset: 0x1f8, size: 0x8, def value: None
  double_t SampleTimeStamp;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x200 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__HandStateInternal, 0x200>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoneCapsule
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7773))
// CS Name: ::OVRPlugin::BoneCapsule
struct CORDL_TYPE __OVRPlugin__BoneCapsule {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "BoneIndex", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "StartPoint", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "",
  // def_value: None }, CppParam { name: "EndPoint", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "",
  // def_value: None }]
  constexpr __OVRPlugin__BoneCapsule(int16_t BoneIndex, ::GlobalNamespace::__OVRPlugin__Vector3f StartPoint, ::GlobalNamespace::__OVRPlugin__Vector3f EndPoint, float_t Radius) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BoneCapsule();

  /// @brief Field BoneIndex, offset: 0x0, size: 0x2, def value: None
  int16_t BoneIndex;

  /// @brief Field StartPoint, offset: 0x4, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f StartPoint;

  /// @brief Field EndPoint, offset: 0x10, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f EndPoint;

  /// @brief Field Radius, offset: 0x1c, size: 0x4, def value: None
  float_t Radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BoneCapsule, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Bone
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7768))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7774))
// CS Name: ::OVRPlugin::Bone
struct CORDL_TYPE __OVRPlugin__Bone {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Id", ty: "::GlobalNamespace::__OVRPlugin__BoneId", modifiers: "", def_value: None }, CppParam { name: "ParentBoneIndex", ty: "int16_t", modifiers: "",
  // def_value: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Bone(::GlobalNamespace::__OVRPlugin__BoneId Id, int16_t ParentBoneIndex, ::GlobalNamespace::__OVRPlugin__Posef Pose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Bone();

  /// @brief Field Id, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneId Id;

  /// @brief Field ParentBoneIndex, offset: 0x4, size: 0x2, def value: None
  int16_t ParentBoneIndex;

  /// @brief Field Pose, offset: 0x8, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef Pose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Bone, 0x24>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SkeletonConstants
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7775))
// CS Name: ::OVRPlugin::SkeletonConstants
struct CORDL_TYPE __OVRPlugin__SkeletonConstants {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SkeletonConstants_Unwrapped
  enum struct ____OVRPlugin__SkeletonConstants_Unwrapped : int32_t {
    __E_MaxHandBones = static_cast<int32_t>(0x18),
    __E_MaxBodyBones = static_cast<int32_t>(0x46),
    __E_MaxBones = static_cast<int32_t>(0x46),
    __E_MaxBoneCapsules = static_cast<int32_t>(0x13),
    __E_MaxNumMicrogestures = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SkeletonConstants_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SkeletonConstants_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SkeletonConstants(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SkeletonConstants();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaxHandBones value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRPlugin__SkeletonConstants const MaxHandBones;

  /// @brief Field MaxBodyBones value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRPlugin__SkeletonConstants const MaxBodyBones;

  /// @brief Field MaxBones value: static_cast<int32_t>(0x46)
  static ::GlobalNamespace::__OVRPlugin__SkeletonConstants const MaxBones;

  /// @brief Field MaxBoneCapsules value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRPlugin__SkeletonConstants const MaxBoneCapsules;

  /// @brief Field MaxNumMicrogestures value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__SkeletonConstants const MaxNumMicrogestures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SkeletonConstants, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SkeletonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7776))
// CS Name: ::OVRPlugin::SkeletonType
struct CORDL_TYPE __OVRPlugin__SkeletonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SkeletonType_Unwrapped
  enum struct ____OVRPlugin__SkeletonType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
    __E_Body = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SkeletonType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SkeletonType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SkeletonType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SkeletonType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__SkeletonType const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SkeletonType const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__SkeletonType const HandRight;

  /// @brief Field Body value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__SkeletonType const Body;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SkeletonType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Skeleton
// SizeInfo { instance_size: 32, native_size: 1484, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7776))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7777))
// CS Name: ::OVRPlugin::Skeleton
struct CORDL_TYPE __OVRPlugin__Skeleton {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::__OVRPlugin__SkeletonType", modifiers: "", def_value: None }, CppParam { name: "NumBones", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "NumBoneCapsules", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Bones", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Bone,::Array<::GlobalNamespace::__OVRPlugin__Bone>*>", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__BoneCapsule,::Array<::GlobalNamespace::__OVRPlugin__BoneCapsule>*>", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Skeleton(::GlobalNamespace::__OVRPlugin__SkeletonType Type, uint32_t NumBones, uint32_t NumBoneCapsules,
                                  ::ArrayW<::GlobalNamespace::__OVRPlugin__Bone, ::Array<::GlobalNamespace::__OVRPlugin__Bone>*> Bones,
                                  ::ArrayW<::GlobalNamespace::__OVRPlugin__BoneCapsule, ::Array<::GlobalNamespace::__OVRPlugin__BoneCapsule>*> BoneCapsules) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Skeleton();

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SkeletonType Type;

  /// @brief Field NumBones, offset: 0x4, size: 0x4, def value: None
  uint32_t NumBones;

  /// @brief Field NumBoneCapsules, offset: 0x8, size: 0x4, def value: None
  uint32_t NumBoneCapsules;

  /// @brief Field Bones, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Bone, ::Array<::GlobalNamespace::__OVRPlugin__Bone>*> Bones;

  /// @brief Field BoneCapsules, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__BoneCapsule, ::Array<::GlobalNamespace::__OVRPlugin__BoneCapsule>*> BoneCapsules;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Skeleton, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Skeleton2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7776))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7778))
// CS Name: ::OVRPlugin::Skeleton2
struct CORDL_TYPE __OVRPlugin__Skeleton2 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::__OVRPlugin__SkeletonType", modifiers: "", def_value: None }, CppParam { name: "NumBones", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "NumBoneCapsules", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Bones", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__Bone,::Array<::GlobalNamespace::__OVRPlugin__Bone>*>", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__BoneCapsule,::Array<::GlobalNamespace::__OVRPlugin__BoneCapsule>*>", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Skeleton2(::GlobalNamespace::__OVRPlugin__SkeletonType Type, uint32_t NumBones, uint32_t NumBoneCapsules,
                                   ::ArrayW<::GlobalNamespace::__OVRPlugin__Bone, ::Array<::GlobalNamespace::__OVRPlugin__Bone>*> Bones,
                                   ::ArrayW<::GlobalNamespace::__OVRPlugin__BoneCapsule, ::Array<::GlobalNamespace::__OVRPlugin__BoneCapsule>*> BoneCapsules) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Skeleton2();

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SkeletonType Type;

  /// @brief Field NumBones, offset: 0x4, size: 0x4, def value: None
  uint32_t NumBones;

  /// @brief Field NumBoneCapsules, offset: 0x8, size: 0x4, def value: None
  uint32_t NumBoneCapsules;

  /// @brief Field Bones, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Bone, ::Array<::GlobalNamespace::__OVRPlugin__Bone>*> Bones;

  /// @brief Field BoneCapsules, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__BoneCapsule, ::Array<::GlobalNamespace::__OVRPlugin__BoneCapsule>*> BoneCapsules;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Skeleton2, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Skeleton2Internal
// SizeInfo { instance_size: 3140, native_size: 3140, calculated_instance_size: 3140, calculated_native_size: 3156, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7774)), TypeDefinitionIndex(TypeDefinitionIndex(7776)), TypeDefinitionIndex(TypeDefinitionIndex(7773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7779))
// CS Name: ::OVRPlugin::Skeleton2Internal
struct CORDL_TYPE __OVRPlugin__Skeleton2Internal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::__OVRPlugin__SkeletonType", modifiers: "", def_value: None }, CppParam { name: "NumBones", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "NumBoneCapsules", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Bones_0", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "",
  // def_value: None }, CppParam { name: "Bones_1", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_2", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_3", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_4", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_5", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_6", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_7", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_8", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_9", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_10", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_11", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_12", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_13", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_14", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_15", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_16", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_17", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_18", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_19", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_20", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_21", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_22", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_23", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_24", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_25", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_26", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_27", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_28", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_29", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_30", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_31", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_32", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_33", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_34", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_35", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_36", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_37", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_38", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_39", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_40", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_41", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_42", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_43", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_44", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_45", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_46", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_47", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_48", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_49", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_50", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_51", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_52", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_53", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_54", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_55", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_56", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_57", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_58", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_59", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_60", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_61", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_62", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_63", ty: "::GlobalNamespace::__OVRPlugin__Bone",
  // modifiers: "", def_value: None }, CppParam { name: "Bones_64", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_65", ty:
  // "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_66", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam {
  // name: "Bones_67", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "Bones_68", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value:
  // None }, CppParam { name: "Bones_69", ty: "::GlobalNamespace::__OVRPlugin__Bone", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_0", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_1", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value:
  // None }, CppParam { name: "BoneCapsules_2", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_3", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_4", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value:
  // None }, CppParam { name: "BoneCapsules_5", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_6", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_7", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value:
  // None }, CppParam { name: "BoneCapsules_8", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_9", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_10", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value:
  // None }, CppParam { name: "BoneCapsules_11", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_12", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_13", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value:
  // None }, CppParam { name: "BoneCapsules_14", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_15", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_16", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value:
  // None }, CppParam { name: "BoneCapsules_17", ty: "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }, CppParam { name: "BoneCapsules_18", ty:
  // "::GlobalNamespace::__OVRPlugin__BoneCapsule", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Skeleton2Internal(
      ::GlobalNamespace::__OVRPlugin__SkeletonType Type, uint32_t NumBones, uint32_t NumBoneCapsules, ::GlobalNamespace::__OVRPlugin__Bone Bones_0, ::GlobalNamespace::__OVRPlugin__Bone Bones_1,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_2, ::GlobalNamespace::__OVRPlugin__Bone Bones_3, ::GlobalNamespace::__OVRPlugin__Bone Bones_4, ::GlobalNamespace::__OVRPlugin__Bone Bones_5,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_6, ::GlobalNamespace::__OVRPlugin__Bone Bones_7, ::GlobalNamespace::__OVRPlugin__Bone Bones_8, ::GlobalNamespace::__OVRPlugin__Bone Bones_9,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_10, ::GlobalNamespace::__OVRPlugin__Bone Bones_11, ::GlobalNamespace::__OVRPlugin__Bone Bones_12, ::GlobalNamespace::__OVRPlugin__Bone Bones_13,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_14, ::GlobalNamespace::__OVRPlugin__Bone Bones_15, ::GlobalNamespace::__OVRPlugin__Bone Bones_16, ::GlobalNamespace::__OVRPlugin__Bone Bones_17,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_18, ::GlobalNamespace::__OVRPlugin__Bone Bones_19, ::GlobalNamespace::__OVRPlugin__Bone Bones_20, ::GlobalNamespace::__OVRPlugin__Bone Bones_21,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_22, ::GlobalNamespace::__OVRPlugin__Bone Bones_23, ::GlobalNamespace::__OVRPlugin__Bone Bones_24, ::GlobalNamespace::__OVRPlugin__Bone Bones_25,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_26, ::GlobalNamespace::__OVRPlugin__Bone Bones_27, ::GlobalNamespace::__OVRPlugin__Bone Bones_28, ::GlobalNamespace::__OVRPlugin__Bone Bones_29,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_30, ::GlobalNamespace::__OVRPlugin__Bone Bones_31, ::GlobalNamespace::__OVRPlugin__Bone Bones_32, ::GlobalNamespace::__OVRPlugin__Bone Bones_33,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_34, ::GlobalNamespace::__OVRPlugin__Bone Bones_35, ::GlobalNamespace::__OVRPlugin__Bone Bones_36, ::GlobalNamespace::__OVRPlugin__Bone Bones_37,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_38, ::GlobalNamespace::__OVRPlugin__Bone Bones_39, ::GlobalNamespace::__OVRPlugin__Bone Bones_40, ::GlobalNamespace::__OVRPlugin__Bone Bones_41,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_42, ::GlobalNamespace::__OVRPlugin__Bone Bones_43, ::GlobalNamespace::__OVRPlugin__Bone Bones_44, ::GlobalNamespace::__OVRPlugin__Bone Bones_45,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_46, ::GlobalNamespace::__OVRPlugin__Bone Bones_47, ::GlobalNamespace::__OVRPlugin__Bone Bones_48, ::GlobalNamespace::__OVRPlugin__Bone Bones_49,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_50, ::GlobalNamespace::__OVRPlugin__Bone Bones_51, ::GlobalNamespace::__OVRPlugin__Bone Bones_52, ::GlobalNamespace::__OVRPlugin__Bone Bones_53,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_54, ::GlobalNamespace::__OVRPlugin__Bone Bones_55, ::GlobalNamespace::__OVRPlugin__Bone Bones_56, ::GlobalNamespace::__OVRPlugin__Bone Bones_57,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_58, ::GlobalNamespace::__OVRPlugin__Bone Bones_59, ::GlobalNamespace::__OVRPlugin__Bone Bones_60, ::GlobalNamespace::__OVRPlugin__Bone Bones_61,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_62, ::GlobalNamespace::__OVRPlugin__Bone Bones_63, ::GlobalNamespace::__OVRPlugin__Bone Bones_64, ::GlobalNamespace::__OVRPlugin__Bone Bones_65,
      ::GlobalNamespace::__OVRPlugin__Bone Bones_66, ::GlobalNamespace::__OVRPlugin__Bone Bones_67, ::GlobalNamespace::__OVRPlugin__Bone Bones_68, ::GlobalNamespace::__OVRPlugin__Bone Bones_69,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_0, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_1, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_2,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_3, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_4, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_5,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_6, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_7, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_8,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_9, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_10, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_11,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_12, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_13, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_14,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_15, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_16, ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_17,
      ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_18) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Skeleton2Internal();

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SkeletonType Type;

  /// @brief Field NumBones, offset: 0x4, size: 0x4, def value: None
  uint32_t NumBones;

  /// @brief Field NumBoneCapsules, offset: 0x8, size: 0x4, def value: None
  uint32_t NumBoneCapsules;

  /// @brief Field Bones_0, offset: 0xc, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_0;

  /// @brief Field Bones_1, offset: 0x30, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_1;

  /// @brief Field Bones_2, offset: 0x54, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_2;

  /// @brief Field Bones_3, offset: 0x78, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_3;

  /// @brief Field Bones_4, offset: 0x9c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_4;

  /// @brief Field Bones_5, offset: 0xc0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_5;

  /// @brief Field Bones_6, offset: 0xe4, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_6;

  /// @brief Field Bones_7, offset: 0x108, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_7;

  /// @brief Field Bones_8, offset: 0x12c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_8;

  /// @brief Field Bones_9, offset: 0x150, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_9;

  /// @brief Field Bones_10, offset: 0x174, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_10;

  /// @brief Field Bones_11, offset: 0x198, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_11;

  /// @brief Field Bones_12, offset: 0x1bc, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_12;

  /// @brief Field Bones_13, offset: 0x1e0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_13;

  /// @brief Field Bones_14, offset: 0x204, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_14;

  /// @brief Field Bones_15, offset: 0x228, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_15;

  /// @brief Field Bones_16, offset: 0x24c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_16;

  /// @brief Field Bones_17, offset: 0x270, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_17;

  /// @brief Field Bones_18, offset: 0x294, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_18;

  /// @brief Field Bones_19, offset: 0x2b8, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_19;

  /// @brief Field Bones_20, offset: 0x2dc, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_20;

  /// @brief Field Bones_21, offset: 0x300, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_21;

  /// @brief Field Bones_22, offset: 0x324, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_22;

  /// @brief Field Bones_23, offset: 0x348, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_23;

  /// @brief Field Bones_24, offset: 0x36c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_24;

  /// @brief Field Bones_25, offset: 0x390, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_25;

  /// @brief Field Bones_26, offset: 0x3b4, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_26;

  /// @brief Field Bones_27, offset: 0x3d8, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_27;

  /// @brief Field Bones_28, offset: 0x3fc, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_28;

  /// @brief Field Bones_29, offset: 0x420, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_29;

  /// @brief Field Bones_30, offset: 0x444, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_30;

  /// @brief Field Bones_31, offset: 0x468, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_31;

  /// @brief Field Bones_32, offset: 0x48c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_32;

  /// @brief Field Bones_33, offset: 0x4b0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_33;

  /// @brief Field Bones_34, offset: 0x4d4, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_34;

  /// @brief Field Bones_35, offset: 0x4f8, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_35;

  /// @brief Field Bones_36, offset: 0x51c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_36;

  /// @brief Field Bones_37, offset: 0x540, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_37;

  /// @brief Field Bones_38, offset: 0x564, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_38;

  /// @brief Field Bones_39, offset: 0x588, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_39;

  /// @brief Field Bones_40, offset: 0x5ac, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_40;

  /// @brief Field Bones_41, offset: 0x5d0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_41;

  /// @brief Field Bones_42, offset: 0x5f4, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_42;

  /// @brief Field Bones_43, offset: 0x618, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_43;

  /// @brief Field Bones_44, offset: 0x63c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_44;

  /// @brief Field Bones_45, offset: 0x660, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_45;

  /// @brief Field Bones_46, offset: 0x684, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_46;

  /// @brief Field Bones_47, offset: 0x6a8, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_47;

  /// @brief Field Bones_48, offset: 0x6cc, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_48;

  /// @brief Field Bones_49, offset: 0x6f0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_49;

  /// @brief Field Bones_50, offset: 0x714, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_50;

  /// @brief Field Bones_51, offset: 0x738, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_51;

  /// @brief Field Bones_52, offset: 0x75c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_52;

  /// @brief Field Bones_53, offset: 0x780, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_53;

  /// @brief Field Bones_54, offset: 0x7a4, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_54;

  /// @brief Field Bones_55, offset: 0x7c8, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_55;

  /// @brief Field Bones_56, offset: 0x7ec, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_56;

  /// @brief Field Bones_57, offset: 0x810, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_57;

  /// @brief Field Bones_58, offset: 0x834, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_58;

  /// @brief Field Bones_59, offset: 0x858, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_59;

  /// @brief Field Bones_60, offset: 0x87c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_60;

  /// @brief Field Bones_61, offset: 0x8a0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_61;

  /// @brief Field Bones_62, offset: 0x8c4, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_62;

  /// @brief Field Bones_63, offset: 0x8e8, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_63;

  /// @brief Field Bones_64, offset: 0x90c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_64;

  /// @brief Field Bones_65, offset: 0x930, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_65;

  /// @brief Field Bones_66, offset: 0x954, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_66;

  /// @brief Field Bones_67, offset: 0x978, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_67;

  /// @brief Field Bones_68, offset: 0x99c, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_68;

  /// @brief Field Bones_69, offset: 0x9c0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__Bone Bones_69;

  /// @brief Field BoneCapsules_0, offset: 0x9e4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_0;

  /// @brief Field BoneCapsules_1, offset: 0xa04, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_1;

  /// @brief Field BoneCapsules_2, offset: 0xa24, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_2;

  /// @brief Field BoneCapsules_3, offset: 0xa44, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_3;

  /// @brief Field BoneCapsules_4, offset: 0xa64, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_4;

  /// @brief Field BoneCapsules_5, offset: 0xa84, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_5;

  /// @brief Field BoneCapsules_6, offset: 0xaa4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_6;

  /// @brief Field BoneCapsules_7, offset: 0xac4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_7;

  /// @brief Field BoneCapsules_8, offset: 0xae4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_8;

  /// @brief Field BoneCapsules_9, offset: 0xb04, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_9;

  /// @brief Field BoneCapsules_10, offset: 0xb24, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_10;

  /// @brief Field BoneCapsules_11, offset: 0xb44, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_11;

  /// @brief Field BoneCapsules_12, offset: 0xb64, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_12;

  /// @brief Field BoneCapsules_13, offset: 0xb84, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_13;

  /// @brief Field BoneCapsules_14, offset: 0xba4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_14;

  /// @brief Field BoneCapsules_15, offset: 0xbc4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_15;

  /// @brief Field BoneCapsules_16, offset: 0xbe4, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_16;

  /// @brief Field BoneCapsules_17, offset: 0xc04, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_17;

  /// @brief Field BoneCapsules_18, offset: 0xc24, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__BoneCapsule BoneCapsules_18;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc44 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Skeleton2Internal, 0xc44>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MeshConstants
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7780))
// CS Name: ::OVRPlugin::MeshConstants
struct CORDL_TYPE __OVRPlugin__MeshConstants {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__MeshConstants_Unwrapped
  enum struct ____OVRPlugin__MeshConstants_Unwrapped : int32_t {
    __E_MaxVertices = static_cast<int32_t>(0xbb8),
    __E_MaxIndices = static_cast<int32_t>(0x4650),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__MeshConstants_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__MeshConstants_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__MeshConstants(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__MeshConstants();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaxVertices value: static_cast<int32_t>(0xbb8)
  static ::GlobalNamespace::__OVRPlugin__MeshConstants const MaxVertices;

  /// @brief Field MaxIndices value: static_cast<int32_t>(0x4650)
  static ::GlobalNamespace::__OVRPlugin__MeshConstants const MaxIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__MeshConstants, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MeshType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7781))
// CS Name: ::OVRPlugin::MeshType
struct CORDL_TYPE __OVRPlugin__MeshType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__MeshType_Unwrapped
  enum struct ____OVRPlugin__MeshType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__MeshType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__MeshType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__MeshType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__MeshType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__MeshType const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__MeshType const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__MeshType const HandRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__MeshType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Mesh
// SizeInfo { instance_size: 80, native_size: 204012, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7781)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7782))
// CS Name: ::OVRPlugin::Mesh*
class CORDL_TYPE __OVRPlugin__Mesh : public ::System::Object {
public:
  // Declarations
  /// @brief Field Type, offset 0x10, size 0x4
  __declspec(property(get = __get_Type, put = __set_Type))::GlobalNamespace::__OVRPlugin__MeshType Type;

  /// @brief Field NumVertices, offset 0x14, size 0x4
  __declspec(property(get = __get_NumVertices, put = __set_NumVertices)) uint32_t NumVertices;

  /// @brief Field NumIndices, offset 0x18, size 0x4
  __declspec(property(get = __get_NumIndices, put = __set_NumIndices)) uint32_t NumIndices;

  /// @brief Field VertexPositions, offset 0x20, size 0x8
  __declspec(property(get = __get_VertexPositions, put = __set_VertexPositions))::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> VertexPositions;

  /// @brief Field Indices, offset 0x28, size 0x8
  __declspec(property(get = __get_Indices, put = __set_Indices))::ArrayW<int16_t, ::Array<int16_t>*> Indices;

  /// @brief Field VertexNormals, offset 0x30, size 0x8
  __declspec(property(get = __get_VertexNormals, put = __set_VertexNormals))::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> VertexNormals;

  /// @brief Field VertexUV0, offset 0x38, size 0x8
  __declspec(property(get = __get_VertexUV0, put = __set_VertexUV0))::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f, ::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*> VertexUV0;

  /// @brief Field BlendIndices, offset 0x40, size 0x8
  __declspec(property(get = __get_BlendIndices, put = __set_BlendIndices))::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s, ::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*> BlendIndices;

  /// @brief Field BlendWeights, offset 0x48, size 0x8
  __declspec(property(get = __get_BlendWeights, put = __set_BlendWeights))::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f, ::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*> BlendWeights;

  constexpr ::GlobalNamespace::__OVRPlugin__MeshType& __get_Type();

  constexpr ::GlobalNamespace::__OVRPlugin__MeshType const& __get_Type() const;

  constexpr void __set_Type(::GlobalNamespace::__OVRPlugin__MeshType value);

  constexpr uint32_t& __get_NumVertices();

  constexpr uint32_t const& __get_NumVertices() const;

  constexpr void __set_NumVertices(uint32_t value);

  constexpr uint32_t& __get_NumIndices();

  constexpr uint32_t const& __get_NumIndices() const;

  constexpr void __set_NumIndices(uint32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>& __get_VertexPositions();

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> const& __get_VertexPositions() const;

  constexpr void __set_VertexPositions(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> value);

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __get_Indices();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __get_Indices() const;

  constexpr void __set_Indices(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*>& __get_VertexNormals();

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> const& __get_VertexNormals() const;

  constexpr void __set_VertexNormals(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f, ::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*>& __get_VertexUV0();

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f, ::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*> const& __get_VertexUV0() const;

  constexpr void __set_VertexUV0(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f, ::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s, ::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*>& __get_BlendIndices();

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s, ::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*> const& __get_BlendIndices() const;

  constexpr void __set_BlendIndices(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s, ::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f, ::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*>& __get_BlendWeights();

  constexpr ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f, ::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*> const& __get_BlendWeights() const;

  constexpr void __set_BlendWeights(::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f, ::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*> value);

  static inline ::GlobalNamespace::__OVRPlugin__Mesh* New_ctor();

  /// @brief Method .ctor addr 0x276d5f4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Mesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__Mesh(__OVRPlugin__Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Mesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__Mesh(__OVRPlugin__Mesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Mesh();

public:
  /// @brief Field Type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__MeshType ___Type;

  /// @brief Field NumVertices, offset: 0x14, size: 0x4, def value: None
  uint32_t ___NumVertices;

  /// @brief Field NumIndices, offset: 0x18, size: 0x4, def value: None
  uint32_t ___NumIndices;

  /// @brief Field VertexPositions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> ___VertexPositions;

  /// @brief Field Indices, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___Indices;

  /// @brief Field VertexNormals, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector3f, ::Array<::GlobalNamespace::__OVRPlugin__Vector3f>*> ___VertexNormals;

  /// @brief Field VertexUV0, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector2f, ::Array<::GlobalNamespace::__OVRPlugin__Vector2f>*> ___VertexUV0;

  /// @brief Field BlendIndices, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4s, ::Array<::GlobalNamespace::__OVRPlugin__Vector4s>*> ___BlendIndices;

  /// @brief Field BlendWeights, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__Vector4f, ::Array<::GlobalNamespace::__OVRPlugin__Vector4f>*> ___BlendWeights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Mesh, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceLocationFlags
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7783))
// CS Name: ::OVRPlugin::SpaceLocationFlags
struct CORDL_TYPE __OVRPlugin__SpaceLocationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____OVRPlugin__SpaceLocationFlags_Unwrapped
  enum struct ____OVRPlugin__SpaceLocationFlags_Unwrapped : uint64_t {
    __E_OrientationValid = static_cast<uint64_t>(0x1u),
    __E_PositionValid = static_cast<uint64_t>(0x2u),
    __E_OrientationTracked = static_cast<uint64_t>(0x4u),
    __E_PositionTracked = static_cast<uint64_t>(0x8u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceLocationFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceLocationFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceLocationFlags(uint64_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceLocationFlags();

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field OrientationValid value: static_cast<uint64_t>(0x1u)
  static ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags const OrientationValid;

  /// @brief Field PositionValid value: static_cast<uint64_t>(0x2u)
  static ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags const PositionValid;

  /// @brief Field OrientationTracked value: static_cast<uint64_t>(0x4u)
  static ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags const OrientationTracked;

  /// @brief Field PositionTracked value: static_cast<uint64_t>(0x8u)
  static ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags const PositionTracked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceLocationFlags, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceLocationf
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7784))
// CS Name: ::OVRPlugin::SpaceLocationf
struct CORDL_TYPE __OVRPlugin__SpaceLocationf {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "locationFlags", ty: "::GlobalNamespace::__OVRPlugin__SpaceLocationFlags", modifiers: "", def_value: None }, CppParam { name: "pose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceLocationf(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags locationFlags, ::GlobalNamespace::__OVRPlugin__Posef pose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceLocationf();

  /// @brief Field locationFlags, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags locationFlags;

  /// @brief Field pose, offset: 0x8, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef pose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceLocationf, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BodyJointLocation
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7783)), TypeDefinitionIndex(TypeDefinitionIndex(7726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7785))
// CS Name: ::OVRPlugin::BodyJointLocation
struct CORDL_TYPE __OVRPlugin__BodyJointLocation {
public:
  // Declarations
  __declspec(property(get = get_OrientationValid)) bool OrientationValid;

  __declspec(property(get = get_PositionValid)) bool PositionValid;

  __declspec(property(get = get_OrientationTracked)) bool OrientationTracked;

  __declspec(property(get = get_PositionTracked)) bool PositionTracked;

  /// @brief Method get_OrientationValid addr 0x276d5fc size 0xc virtual false final false
  inline bool get_OrientationValid();

  /// @brief Method get_PositionValid addr 0x276d608 size 0xc virtual false final false
  inline bool get_PositionValid();

  /// @brief Method get_OrientationTracked addr 0x276d614 size 0xc virtual false final false
  inline bool get_OrientationTracked();

  /// @brief Method get_PositionTracked addr 0x276d620 size 0xc virtual false final false
  inline bool get_PositionTracked();

  // Ctor Parameters [CppParam { name: "LocationFlags", ty: "::GlobalNamespace::__OVRPlugin__SpaceLocationFlags", modifiers: "", def_value: None }, CppParam { name: "Pose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BodyJointLocation(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags LocationFlags, ::GlobalNamespace::__OVRPlugin__Posef Pose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BodyJointLocation();

  /// @brief Field LocationFlags, offset: 0x0, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags LocationFlags;

  /// @brief Field Pose, offset: 0x8, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef Pose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BodyJointLocation, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BodyState
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7786))
// CS Name: ::OVRPlugin::BodyState
struct CORDL_TYPE __OVRPlugin__BodyState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "JointLocations", ty: "::ArrayW<::GlobalNamespace::__OVRPlugin__BodyJointLocation,::Array<::GlobalNamespace::__OVRPlugin__BodyJointLocation>*>", modifiers: "",
  // def_value: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "SkeletonChangedCount", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BodyState(::ArrayW<::GlobalNamespace::__OVRPlugin__BodyJointLocation, ::Array<::GlobalNamespace::__OVRPlugin__BodyJointLocation>*> JointLocations, float_t Confidence,
                                   uint32_t SkeletonChangedCount, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BodyState();

  /// @brief Field JointLocations, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__BodyJointLocation, ::Array<::GlobalNamespace::__OVRPlugin__BodyJointLocation>*> JointLocations;

  /// @brief Field Confidence, offset: 0x8, size: 0x4, def value: None
  float_t Confidence;

  /// @brief Field SkeletonChangedCount, offset: 0xc, size: 0x4, def value: None
  uint32_t SkeletonChangedCount;

  /// @brief Field Time, offset: 0x10, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BodyState, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BodyStateInternal
// SizeInfo { instance_size: 2824, native_size: 2824, calculated_instance_size: 2824, calculated_native_size: 2840, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686)), TypeDefinitionIndex(TypeDefinitionIndex(7785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7787))
// CS Name: ::OVRPlugin::BodyStateInternal
struct CORDL_TYPE __OVRPlugin__BodyStateInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsActive", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "SkeletonChangedCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "JointLocation_0", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_1", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_2", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_3", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_4", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_5", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_6", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_7", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_8", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_9", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_10", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_11", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_12", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_13", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_14", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_15", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_16", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_17", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_18", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_19", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_20", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_21", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_22", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_23", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_24", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_25", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_26", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_27", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_28", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_29", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_30", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_31", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_32", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_33", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_34", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_35", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_36", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_37", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_38", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_39", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_40", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_41", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_42", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_43", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_44", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_45", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_46", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_47", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_48", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_49", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_50", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_51", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_52", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_53", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_54", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_55", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_56", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_57", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_58", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_59", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_60", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_61", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_62", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_63", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_64", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_65", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_66", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_67", ty:
  // "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }, CppParam { name: "JointLocation_68", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "",
  // def_value: None }, CppParam { name: "JointLocation_69", ty: "::GlobalNamespace::__OVRPlugin__BodyJointLocation", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__BodyStateInternal(::GlobalNamespace::__OVRPlugin__Bool IsActive, float_t Confidence, uint32_t SkeletonChangedCount, double_t Time,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_0, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_1,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_2, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_3,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_4, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_5,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_6, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_7,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_8, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_9,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_10, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_11,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_12, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_13,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_14, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_15,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_16, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_17,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_18, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_19,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_20, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_21,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_22, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_23,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_24, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_25,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_26, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_27,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_28, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_29,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_30, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_31,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_32, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_33,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_34, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_35,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_36, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_37,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_38, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_39,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_40, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_41,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_42, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_43,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_44, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_45,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_46, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_47,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_48, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_49,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_50, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_51,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_52, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_53,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_54, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_55,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_56, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_57,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_58, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_59,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_60, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_61,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_62, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_63,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_64, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_65,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_66, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_67,
                                           ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_68, ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_69) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__BodyStateInternal();

  /// @brief Field IsActive, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsActive;

  /// @brief Field Confidence, offset: 0x4, size: 0x4, def value: None
  float_t Confidence;

  /// @brief Field SkeletonChangedCount, offset: 0x8, size: 0x4, def value: None
  uint32_t SkeletonChangedCount;

  /// @brief Field Time, offset: 0x10, size: 0x8, def value: None
  double_t Time;

  /// @brief Field JointLocation_0, offset: 0x18, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_0;

  /// @brief Field JointLocation_1, offset: 0x40, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_1;

  /// @brief Field JointLocation_2, offset: 0x68, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_2;

  /// @brief Field JointLocation_3, offset: 0x90, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_3;

  /// @brief Field JointLocation_4, offset: 0xb8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_4;

  /// @brief Field JointLocation_5, offset: 0xe0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_5;

  /// @brief Field JointLocation_6, offset: 0x108, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_6;

  /// @brief Field JointLocation_7, offset: 0x130, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_7;

  /// @brief Field JointLocation_8, offset: 0x158, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_8;

  /// @brief Field JointLocation_9, offset: 0x180, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_9;

  /// @brief Field JointLocation_10, offset: 0x1a8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_10;

  /// @brief Field JointLocation_11, offset: 0x1d0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_11;

  /// @brief Field JointLocation_12, offset: 0x1f8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_12;

  /// @brief Field JointLocation_13, offset: 0x220, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_13;

  /// @brief Field JointLocation_14, offset: 0x248, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_14;

  /// @brief Field JointLocation_15, offset: 0x270, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_15;

  /// @brief Field JointLocation_16, offset: 0x298, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_16;

  /// @brief Field JointLocation_17, offset: 0x2c0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_17;

  /// @brief Field JointLocation_18, offset: 0x2e8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_18;

  /// @brief Field JointLocation_19, offset: 0x310, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_19;

  /// @brief Field JointLocation_20, offset: 0x338, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_20;

  /// @brief Field JointLocation_21, offset: 0x360, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_21;

  /// @brief Field JointLocation_22, offset: 0x388, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_22;

  /// @brief Field JointLocation_23, offset: 0x3b0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_23;

  /// @brief Field JointLocation_24, offset: 0x3d8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_24;

  /// @brief Field JointLocation_25, offset: 0x400, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_25;

  /// @brief Field JointLocation_26, offset: 0x428, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_26;

  /// @brief Field JointLocation_27, offset: 0x450, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_27;

  /// @brief Field JointLocation_28, offset: 0x478, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_28;

  /// @brief Field JointLocation_29, offset: 0x4a0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_29;

  /// @brief Field JointLocation_30, offset: 0x4c8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_30;

  /// @brief Field JointLocation_31, offset: 0x4f0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_31;

  /// @brief Field JointLocation_32, offset: 0x518, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_32;

  /// @brief Field JointLocation_33, offset: 0x540, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_33;

  /// @brief Field JointLocation_34, offset: 0x568, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_34;

  /// @brief Field JointLocation_35, offset: 0x590, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_35;

  /// @brief Field JointLocation_36, offset: 0x5b8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_36;

  /// @brief Field JointLocation_37, offset: 0x5e0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_37;

  /// @brief Field JointLocation_38, offset: 0x608, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_38;

  /// @brief Field JointLocation_39, offset: 0x630, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_39;

  /// @brief Field JointLocation_40, offset: 0x658, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_40;

  /// @brief Field JointLocation_41, offset: 0x680, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_41;

  /// @brief Field JointLocation_42, offset: 0x6a8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_42;

  /// @brief Field JointLocation_43, offset: 0x6d0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_43;

  /// @brief Field JointLocation_44, offset: 0x6f8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_44;

  /// @brief Field JointLocation_45, offset: 0x720, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_45;

  /// @brief Field JointLocation_46, offset: 0x748, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_46;

  /// @brief Field JointLocation_47, offset: 0x770, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_47;

  /// @brief Field JointLocation_48, offset: 0x798, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_48;

  /// @brief Field JointLocation_49, offset: 0x7c0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_49;

  /// @brief Field JointLocation_50, offset: 0x7e8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_50;

  /// @brief Field JointLocation_51, offset: 0x810, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_51;

  /// @brief Field JointLocation_52, offset: 0x838, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_52;

  /// @brief Field JointLocation_53, offset: 0x860, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_53;

  /// @brief Field JointLocation_54, offset: 0x888, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_54;

  /// @brief Field JointLocation_55, offset: 0x8b0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_55;

  /// @brief Field JointLocation_56, offset: 0x8d8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_56;

  /// @brief Field JointLocation_57, offset: 0x900, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_57;

  /// @brief Field JointLocation_58, offset: 0x928, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_58;

  /// @brief Field JointLocation_59, offset: 0x950, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_59;

  /// @brief Field JointLocation_60, offset: 0x978, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_60;

  /// @brief Field JointLocation_61, offset: 0x9a0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_61;

  /// @brief Field JointLocation_62, offset: 0x9c8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_62;

  /// @brief Field JointLocation_63, offset: 0x9f0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_63;

  /// @brief Field JointLocation_64, offset: 0xa18, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_64;

  /// @brief Field JointLocation_65, offset: 0xa40, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_65;

  /// @brief Field JointLocation_66, offset: 0xa68, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_66;

  /// @brief Field JointLocation_67, offset: 0xa90, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_67;

  /// @brief Field JointLocation_68, offset: 0xab8, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_68;

  /// @brief Field JointLocation_69, offset: 0xae0, size: 0x28, def value: None
  ::GlobalNamespace::__OVRPlugin__BodyJointLocation JointLocation_69;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb08 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__BodyStateInternal, 0xb08>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyboardState
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7728)), TypeDefinitionIndex(TypeDefinitionIndex(7686)), TypeDefinitionIndex(TypeDefinitionIndex(7723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7788))
// CS Name: ::OVRPlugin::KeyboardState
struct CORDL_TYPE __OVRPlugin__KeyboardState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsActive", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "OrientationValid", ty:
  // "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "PositionValid", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam
  // { name: "OrientationTracked", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "PositionTracked", ty: "::GlobalNamespace::__OVRPlugin__Bool",
  // modifiers: "", def_value: None }, CppParam { name: "PoseState", ty: "::GlobalNamespace::__OVRPlugin__PoseStatef", modifiers: "", def_value: None }, CppParam { name: "ContrastParameters", ty:
  // "::GlobalNamespace::__OVRPlugin__Vector4f", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__KeyboardState(::GlobalNamespace::__OVRPlugin__Bool IsActive, ::GlobalNamespace::__OVRPlugin__Bool OrientationValid, ::GlobalNamespace::__OVRPlugin__Bool PositionValid,
                                       ::GlobalNamespace::__OVRPlugin__Bool OrientationTracked, ::GlobalNamespace::__OVRPlugin__Bool PositionTracked,
                                       ::GlobalNamespace::__OVRPlugin__PoseStatef PoseState, ::GlobalNamespace::__OVRPlugin__Vector4f ContrastParameters) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__KeyboardState();

  /// @brief Field IsActive, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsActive;

  /// @brief Field OrientationValid, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool OrientationValid;

  /// @brief Field PositionValid, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool PositionValid;

  /// @brief Field OrientationTracked, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool OrientationTracked;

  /// @brief Field PositionTracked, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool PositionTracked;

  /// @brief Field PoseState, offset: 0x18, size: 0x58, def value: None
  ::GlobalNamespace::__OVRPlugin__PoseStatef PoseState;

  /// @brief Field ContrastParameters, offset: 0x70, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector4f ContrastParameters;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__KeyboardState, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyboardDescriptionConstants
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7789))
// CS Name: ::OVRPlugin::KeyboardDescriptionConstants
struct CORDL_TYPE __OVRPlugin__KeyboardDescriptionConstants {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__KeyboardDescriptionConstants_Unwrapped
  enum struct ____OVRPlugin__KeyboardDescriptionConstants_Unwrapped : int32_t {
    __E_NameMaxLength = static_cast<int32_t>(0x80),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__KeyboardDescriptionConstants_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__KeyboardDescriptionConstants_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__KeyboardDescriptionConstants(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__KeyboardDescriptionConstants();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NameMaxLength value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRPlugin__KeyboardDescriptionConstants const NameMaxLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__KeyboardDescriptionConstants, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardPresentationStyles
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7790))
// CS Name: ::OVRPlugin::TrackedKeyboardPresentationStyles
struct CORDL_TYPE __OVRPlugin__TrackedKeyboardPresentationStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__TrackedKeyboardPresentationStyles_Unwrapped
  enum struct ____OVRPlugin__TrackedKeyboardPresentationStyles_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Opaque = static_cast<int32_t>(0x1),
    __E_KeyLabel = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__TrackedKeyboardPresentationStyles_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__TrackedKeyboardPresentationStyles_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TrackedKeyboardPresentationStyles(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TrackedKeyboardPresentationStyles();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const Unknown;

  /// @brief Field Opaque value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const Opaque;

  /// @brief Field KeyLabel value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const KeyLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7791))
// CS Name: ::OVRPlugin::TrackedKeyboardFlags
struct CORDL_TYPE __OVRPlugin__TrackedKeyboardFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__TrackedKeyboardFlags_Unwrapped
  enum struct ____OVRPlugin__TrackedKeyboardFlags_Unwrapped : int32_t {
    __E_Exists = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
    __E_Remote = static_cast<int32_t>(0x4),
    __E_Connected = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__TrackedKeyboardFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__TrackedKeyboardFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TrackedKeyboardFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TrackedKeyboardFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Exists value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags const Exists;

  /// @brief Field Local value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags const Local;

  /// @brief Field Remote value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags const Remote;

  /// @brief Field Connected value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags const Connected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardQueryFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7792))
// CS Name: ::OVRPlugin::TrackedKeyboardQueryFlags
struct CORDL_TYPE __OVRPlugin__TrackedKeyboardQueryFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__TrackedKeyboardQueryFlags_Unwrapped
  enum struct ____OVRPlugin__TrackedKeyboardQueryFlags_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x2),
    __E_Remote = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__TrackedKeyboardQueryFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__TrackedKeyboardQueryFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TrackedKeyboardQueryFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TrackedKeyboardQueryFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Local value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const Local;

  /// @brief Field Remote value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const Remote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyboardDescription
// SizeInfo { instance_size: 40, native_size: 160, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7722)), TypeDefinitionIndex(TypeDefinitionIndex(7791)), TypeDefinitionIndex(TypeDefinitionIndex(7790))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7793))
// CS Name: ::OVRPlugin::KeyboardDescription
struct CORDL_TYPE __OVRPlugin__KeyboardDescription {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Name", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "TrackedKeyboardId", ty: "uint64_t", modifiers: "",
  // def_value: None }, CppParam { name: "Dimensions", ty: "::GlobalNamespace::__OVRPlugin__Vector3f", modifiers: "", def_value: None }, CppParam { name: "KeyboardFlags", ty:
  // "::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedPresentationStyles", ty:
  // "::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__KeyboardDescription(::ArrayW<uint8_t, ::Array<uint8_t>*> Name, uint64_t TrackedKeyboardId, ::GlobalNamespace::__OVRPlugin__Vector3f Dimensions,
                                             ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags KeyboardFlags,
                                             ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles SupportedPresentationStyles) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__KeyboardDescription();

  /// @brief Field Name, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> Name;

  /// @brief Field TrackedKeyboardId, offset: 0x8, size: 0x8, def value: None
  uint64_t TrackedKeyboardId;

  /// @brief Field Dimensions, offset: 0x10, size: 0xc, def value: None
  ::GlobalNamespace::__OVRPlugin__Vector3f Dimensions;

  /// @brief Field KeyboardFlags, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags KeyboardFlags;

  /// @brief Field SupportedPresentationStyles, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles SupportedPresentationStyles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__KeyboardDescription, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceExpressionStatus
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7794))
// CS Name: ::OVRPlugin::FaceExpressionStatus
struct CORDL_TYPE __OVRPlugin__FaceExpressionStatus {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsEyeFollowingBlendshapesValid", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceExpressionStatus(bool IsValid, bool IsEyeFollowingBlendshapesValid) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceExpressionStatus();

  /// @brief Field IsValid, offset: 0x0, size: 0x1, def value: None
  bool IsValid;

  /// @brief Field IsEyeFollowingBlendshapesValid, offset: 0x1, size: 0x1, def value: None
  bool IsEyeFollowingBlendshapesValid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceExpressionStatus, 0x2>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceState
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7794))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7795))
// CS Name: ::OVRPlugin::FaceState
struct CORDL_TYPE __OVRPlugin__FaceState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ExpressionWeights", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeightConfidences", ty:
  // "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "Status", ty: "::GlobalNamespace::__OVRPlugin__FaceExpressionStatus", modifiers: "", def_value: None },
  // CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceState(::ArrayW<float_t, ::Array<float_t>*> ExpressionWeights, ::ArrayW<float_t, ::Array<float_t>*> ExpressionWeightConfidences,
                                   ::GlobalNamespace::__OVRPlugin__FaceExpressionStatus Status, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceState();

  /// @brief Field ExpressionWeights, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ExpressionWeights;

  /// @brief Field ExpressionWeightConfidences, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ExpressionWeightConfidences;

  /// @brief Field Status, offset: 0x10, size: 0x2, def value: None
  ::GlobalNamespace::__OVRPlugin__FaceExpressionStatus Status;

  /// @brief Field Time, offset: 0x18, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceState, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceExpressionStatusInternal
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7796))
// CS Name: ::OVRPlugin::FaceExpressionStatusInternal
struct CORDL_TYPE __OVRPlugin__FaceExpressionStatusInternal {
public:
  // Declarations
  /// @brief Method ToFaceExpressionStatus addr 0x276d62c size 0x1c virtual false final false
  inline ::GlobalNamespace::__OVRPlugin__FaceExpressionStatus ToFaceExpressionStatus();

  // Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }, CppParam { name: "IsEyeFollowingBlendshapesValid", ty:
  // "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceExpressionStatusInternal(::GlobalNamespace::__OVRPlugin__Bool IsValid, ::GlobalNamespace::__OVRPlugin__Bool IsEyeFollowingBlendshapesValid) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceExpressionStatusInternal();

  /// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsValid;

  /// @brief Field IsEyeFollowingBlendshapesValid, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool IsEyeFollowingBlendshapesValid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceStateInternal
// SizeInfo { instance_size: 280, native_size: 280, calculated_instance_size: 280, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7796))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7797))
// CS Name: ::OVRPlugin::FaceStateInternal
struct CORDL_TYPE __OVRPlugin__FaceStateInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ExpressionWeights_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_1", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "ExpressionWeights_2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_9", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_14", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_15", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_16", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_17", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_18", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_19", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_20", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_22", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_24", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_25", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_26", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_27", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_28", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_29", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_31", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_33", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_34", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_35", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_36", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_37", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_38", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_39", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_40", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_41", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_42", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_43", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_44", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_45", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_46", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_47", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_48", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_49", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_50", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_51", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_52", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_53", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_54", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_55", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_56", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_57", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_58", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_59", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_60", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_61", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_62", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeightConfidences_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeightConfidences_1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Status", ty: "::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal", modifiers: "",
  // def_value: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceStateInternal(float_t ExpressionWeights_0, float_t ExpressionWeights_1, float_t ExpressionWeights_2, float_t ExpressionWeights_3, float_t ExpressionWeights_4,
                                           float_t ExpressionWeights_5, float_t ExpressionWeights_6, float_t ExpressionWeights_7, float_t ExpressionWeights_8, float_t ExpressionWeights_9,
                                           float_t ExpressionWeights_10, float_t ExpressionWeights_11, float_t ExpressionWeights_12, float_t ExpressionWeights_13, float_t ExpressionWeights_14,
                                           float_t ExpressionWeights_15, float_t ExpressionWeights_16, float_t ExpressionWeights_17, float_t ExpressionWeights_18, float_t ExpressionWeights_19,
                                           float_t ExpressionWeights_20, float_t ExpressionWeights_21, float_t ExpressionWeights_22, float_t ExpressionWeights_23, float_t ExpressionWeights_24,
                                           float_t ExpressionWeights_25, float_t ExpressionWeights_26, float_t ExpressionWeights_27, float_t ExpressionWeights_28, float_t ExpressionWeights_29,
                                           float_t ExpressionWeights_30, float_t ExpressionWeights_31, float_t ExpressionWeights_32, float_t ExpressionWeights_33, float_t ExpressionWeights_34,
                                           float_t ExpressionWeights_35, float_t ExpressionWeights_36, float_t ExpressionWeights_37, float_t ExpressionWeights_38, float_t ExpressionWeights_39,
                                           float_t ExpressionWeights_40, float_t ExpressionWeights_41, float_t ExpressionWeights_42, float_t ExpressionWeights_43, float_t ExpressionWeights_44,
                                           float_t ExpressionWeights_45, float_t ExpressionWeights_46, float_t ExpressionWeights_47, float_t ExpressionWeights_48, float_t ExpressionWeights_49,
                                           float_t ExpressionWeights_50, float_t ExpressionWeights_51, float_t ExpressionWeights_52, float_t ExpressionWeights_53, float_t ExpressionWeights_54,
                                           float_t ExpressionWeights_55, float_t ExpressionWeights_56, float_t ExpressionWeights_57, float_t ExpressionWeights_58, float_t ExpressionWeights_59,
                                           float_t ExpressionWeights_60, float_t ExpressionWeights_61, float_t ExpressionWeights_62, float_t ExpressionWeightConfidences_0,
                                           float_t ExpressionWeightConfidences_1, ::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal Status, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceStateInternal();

  /// @brief Field ExpressionWeights_0, offset: 0x0, size: 0x4, def value: None
  float_t ExpressionWeights_0;

  /// @brief Field ExpressionWeights_1, offset: 0x4, size: 0x4, def value: None
  float_t ExpressionWeights_1;

  /// @brief Field ExpressionWeights_2, offset: 0x8, size: 0x4, def value: None
  float_t ExpressionWeights_2;

  /// @brief Field ExpressionWeights_3, offset: 0xc, size: 0x4, def value: None
  float_t ExpressionWeights_3;

  /// @brief Field ExpressionWeights_4, offset: 0x10, size: 0x4, def value: None
  float_t ExpressionWeights_4;

  /// @brief Field ExpressionWeights_5, offset: 0x14, size: 0x4, def value: None
  float_t ExpressionWeights_5;

  /// @brief Field ExpressionWeights_6, offset: 0x18, size: 0x4, def value: None
  float_t ExpressionWeights_6;

  /// @brief Field ExpressionWeights_7, offset: 0x1c, size: 0x4, def value: None
  float_t ExpressionWeights_7;

  /// @brief Field ExpressionWeights_8, offset: 0x20, size: 0x4, def value: None
  float_t ExpressionWeights_8;

  /// @brief Field ExpressionWeights_9, offset: 0x24, size: 0x4, def value: None
  float_t ExpressionWeights_9;

  /// @brief Field ExpressionWeights_10, offset: 0x28, size: 0x4, def value: None
  float_t ExpressionWeights_10;

  /// @brief Field ExpressionWeights_11, offset: 0x2c, size: 0x4, def value: None
  float_t ExpressionWeights_11;

  /// @brief Field ExpressionWeights_12, offset: 0x30, size: 0x4, def value: None
  float_t ExpressionWeights_12;

  /// @brief Field ExpressionWeights_13, offset: 0x34, size: 0x4, def value: None
  float_t ExpressionWeights_13;

  /// @brief Field ExpressionWeights_14, offset: 0x38, size: 0x4, def value: None
  float_t ExpressionWeights_14;

  /// @brief Field ExpressionWeights_15, offset: 0x3c, size: 0x4, def value: None
  float_t ExpressionWeights_15;

  /// @brief Field ExpressionWeights_16, offset: 0x40, size: 0x4, def value: None
  float_t ExpressionWeights_16;

  /// @brief Field ExpressionWeights_17, offset: 0x44, size: 0x4, def value: None
  float_t ExpressionWeights_17;

  /// @brief Field ExpressionWeights_18, offset: 0x48, size: 0x4, def value: None
  float_t ExpressionWeights_18;

  /// @brief Field ExpressionWeights_19, offset: 0x4c, size: 0x4, def value: None
  float_t ExpressionWeights_19;

  /// @brief Field ExpressionWeights_20, offset: 0x50, size: 0x4, def value: None
  float_t ExpressionWeights_20;

  /// @brief Field ExpressionWeights_21, offset: 0x54, size: 0x4, def value: None
  float_t ExpressionWeights_21;

  /// @brief Field ExpressionWeights_22, offset: 0x58, size: 0x4, def value: None
  float_t ExpressionWeights_22;

  /// @brief Field ExpressionWeights_23, offset: 0x5c, size: 0x4, def value: None
  float_t ExpressionWeights_23;

  /// @brief Field ExpressionWeights_24, offset: 0x60, size: 0x4, def value: None
  float_t ExpressionWeights_24;

  /// @brief Field ExpressionWeights_25, offset: 0x64, size: 0x4, def value: None
  float_t ExpressionWeights_25;

  /// @brief Field ExpressionWeights_26, offset: 0x68, size: 0x4, def value: None
  float_t ExpressionWeights_26;

  /// @brief Field ExpressionWeights_27, offset: 0x6c, size: 0x4, def value: None
  float_t ExpressionWeights_27;

  /// @brief Field ExpressionWeights_28, offset: 0x70, size: 0x4, def value: None
  float_t ExpressionWeights_28;

  /// @brief Field ExpressionWeights_29, offset: 0x74, size: 0x4, def value: None
  float_t ExpressionWeights_29;

  /// @brief Field ExpressionWeights_30, offset: 0x78, size: 0x4, def value: None
  float_t ExpressionWeights_30;

  /// @brief Field ExpressionWeights_31, offset: 0x7c, size: 0x4, def value: None
  float_t ExpressionWeights_31;

  /// @brief Field ExpressionWeights_32, offset: 0x80, size: 0x4, def value: None
  float_t ExpressionWeights_32;

  /// @brief Field ExpressionWeights_33, offset: 0x84, size: 0x4, def value: None
  float_t ExpressionWeights_33;

  /// @brief Field ExpressionWeights_34, offset: 0x88, size: 0x4, def value: None
  float_t ExpressionWeights_34;

  /// @brief Field ExpressionWeights_35, offset: 0x8c, size: 0x4, def value: None
  float_t ExpressionWeights_35;

  /// @brief Field ExpressionWeights_36, offset: 0x90, size: 0x4, def value: None
  float_t ExpressionWeights_36;

  /// @brief Field ExpressionWeights_37, offset: 0x94, size: 0x4, def value: None
  float_t ExpressionWeights_37;

  /// @brief Field ExpressionWeights_38, offset: 0x98, size: 0x4, def value: None
  float_t ExpressionWeights_38;

  /// @brief Field ExpressionWeights_39, offset: 0x9c, size: 0x4, def value: None
  float_t ExpressionWeights_39;

  /// @brief Field ExpressionWeights_40, offset: 0xa0, size: 0x4, def value: None
  float_t ExpressionWeights_40;

  /// @brief Field ExpressionWeights_41, offset: 0xa4, size: 0x4, def value: None
  float_t ExpressionWeights_41;

  /// @brief Field ExpressionWeights_42, offset: 0xa8, size: 0x4, def value: None
  float_t ExpressionWeights_42;

  /// @brief Field ExpressionWeights_43, offset: 0xac, size: 0x4, def value: None
  float_t ExpressionWeights_43;

  /// @brief Field ExpressionWeights_44, offset: 0xb0, size: 0x4, def value: None
  float_t ExpressionWeights_44;

  /// @brief Field ExpressionWeights_45, offset: 0xb4, size: 0x4, def value: None
  float_t ExpressionWeights_45;

  /// @brief Field ExpressionWeights_46, offset: 0xb8, size: 0x4, def value: None
  float_t ExpressionWeights_46;

  /// @brief Field ExpressionWeights_47, offset: 0xbc, size: 0x4, def value: None
  float_t ExpressionWeights_47;

  /// @brief Field ExpressionWeights_48, offset: 0xc0, size: 0x4, def value: None
  float_t ExpressionWeights_48;

  /// @brief Field ExpressionWeights_49, offset: 0xc4, size: 0x4, def value: None
  float_t ExpressionWeights_49;

  /// @brief Field ExpressionWeights_50, offset: 0xc8, size: 0x4, def value: None
  float_t ExpressionWeights_50;

  /// @brief Field ExpressionWeights_51, offset: 0xcc, size: 0x4, def value: None
  float_t ExpressionWeights_51;

  /// @brief Field ExpressionWeights_52, offset: 0xd0, size: 0x4, def value: None
  float_t ExpressionWeights_52;

  /// @brief Field ExpressionWeights_53, offset: 0xd4, size: 0x4, def value: None
  float_t ExpressionWeights_53;

  /// @brief Field ExpressionWeights_54, offset: 0xd8, size: 0x4, def value: None
  float_t ExpressionWeights_54;

  /// @brief Field ExpressionWeights_55, offset: 0xdc, size: 0x4, def value: None
  float_t ExpressionWeights_55;

  /// @brief Field ExpressionWeights_56, offset: 0xe0, size: 0x4, def value: None
  float_t ExpressionWeights_56;

  /// @brief Field ExpressionWeights_57, offset: 0xe4, size: 0x4, def value: None
  float_t ExpressionWeights_57;

  /// @brief Field ExpressionWeights_58, offset: 0xe8, size: 0x4, def value: None
  float_t ExpressionWeights_58;

  /// @brief Field ExpressionWeights_59, offset: 0xec, size: 0x4, def value: None
  float_t ExpressionWeights_59;

  /// @brief Field ExpressionWeights_60, offset: 0xf0, size: 0x4, def value: None
  float_t ExpressionWeights_60;

  /// @brief Field ExpressionWeights_61, offset: 0xf4, size: 0x4, def value: None
  float_t ExpressionWeights_61;

  /// @brief Field ExpressionWeights_62, offset: 0xf8, size: 0x4, def value: None
  float_t ExpressionWeights_62;

  /// @brief Field ExpressionWeightConfidences_0, offset: 0xfc, size: 0x4, def value: None
  float_t ExpressionWeightConfidences_0;

  /// @brief Field ExpressionWeightConfidences_1, offset: 0x100, size: 0x4, def value: None
  float_t ExpressionWeightConfidences_1;

  /// @brief Field Status, offset: 0x104, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal Status;

  /// @brief Field Time, offset: 0x110, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x118 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceStateInternal, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceState2Internal
// SizeInfo { instance_size: 280, native_size: 280, calculated_instance_size: 280, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7796))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7798))
// CS Name: ::OVRPlugin::FaceState2Internal
struct CORDL_TYPE __OVRPlugin__FaceState2Internal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ExpressionWeights_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_1", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "ExpressionWeights_2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_4", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_5", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_6", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_7", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_8", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_9", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_10", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_11", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_12", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_13", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_14", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_15", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_16", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_17", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_18", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_19", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_20", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_21", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_22", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_23", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_24", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_25", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_26", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_27", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_28", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_29", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_30", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_31", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_32", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_33", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_34", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_35", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_36", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_37", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_38", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_39", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_40", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_41", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_42", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_43", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_44", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_45", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_46", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_47", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_48", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_49", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_50", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_51", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_52", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_53", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_54", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_55", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_56", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_57", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_58", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_59", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_60", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeights_61", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeights_62", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ExpressionWeightConfidences_0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "ExpressionWeightConfidences_1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Status", ty: "::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal", modifiers: "",
  // def_value: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceState2Internal(float_t ExpressionWeights_0, float_t ExpressionWeights_1, float_t ExpressionWeights_2, float_t ExpressionWeights_3, float_t ExpressionWeights_4,
                                            float_t ExpressionWeights_5, float_t ExpressionWeights_6, float_t ExpressionWeights_7, float_t ExpressionWeights_8, float_t ExpressionWeights_9,
                                            float_t ExpressionWeights_10, float_t ExpressionWeights_11, float_t ExpressionWeights_12, float_t ExpressionWeights_13, float_t ExpressionWeights_14,
                                            float_t ExpressionWeights_15, float_t ExpressionWeights_16, float_t ExpressionWeights_17, float_t ExpressionWeights_18, float_t ExpressionWeights_19,
                                            float_t ExpressionWeights_20, float_t ExpressionWeights_21, float_t ExpressionWeights_22, float_t ExpressionWeights_23, float_t ExpressionWeights_24,
                                            float_t ExpressionWeights_25, float_t ExpressionWeights_26, float_t ExpressionWeights_27, float_t ExpressionWeights_28, float_t ExpressionWeights_29,
                                            float_t ExpressionWeights_30, float_t ExpressionWeights_31, float_t ExpressionWeights_32, float_t ExpressionWeights_33, float_t ExpressionWeights_34,
                                            float_t ExpressionWeights_35, float_t ExpressionWeights_36, float_t ExpressionWeights_37, float_t ExpressionWeights_38, float_t ExpressionWeights_39,
                                            float_t ExpressionWeights_40, float_t ExpressionWeights_41, float_t ExpressionWeights_42, float_t ExpressionWeights_43, float_t ExpressionWeights_44,
                                            float_t ExpressionWeights_45, float_t ExpressionWeights_46, float_t ExpressionWeights_47, float_t ExpressionWeights_48, float_t ExpressionWeights_49,
                                            float_t ExpressionWeights_50, float_t ExpressionWeights_51, float_t ExpressionWeights_52, float_t ExpressionWeights_53, float_t ExpressionWeights_54,
                                            float_t ExpressionWeights_55, float_t ExpressionWeights_56, float_t ExpressionWeights_57, float_t ExpressionWeights_58, float_t ExpressionWeights_59,
                                            float_t ExpressionWeights_60, float_t ExpressionWeights_61, float_t ExpressionWeights_62, float_t ExpressionWeightConfidences_0,
                                            float_t ExpressionWeightConfidences_1, ::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal Status, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceState2Internal();

  /// @brief Field ExpressionWeights_0, offset: 0x0, size: 0x4, def value: None
  float_t ExpressionWeights_0;

  /// @brief Field ExpressionWeights_1, offset: 0x4, size: 0x4, def value: None
  float_t ExpressionWeights_1;

  /// @brief Field ExpressionWeights_2, offset: 0x8, size: 0x4, def value: None
  float_t ExpressionWeights_2;

  /// @brief Field ExpressionWeights_3, offset: 0xc, size: 0x4, def value: None
  float_t ExpressionWeights_3;

  /// @brief Field ExpressionWeights_4, offset: 0x10, size: 0x4, def value: None
  float_t ExpressionWeights_4;

  /// @brief Field ExpressionWeights_5, offset: 0x14, size: 0x4, def value: None
  float_t ExpressionWeights_5;

  /// @brief Field ExpressionWeights_6, offset: 0x18, size: 0x4, def value: None
  float_t ExpressionWeights_6;

  /// @brief Field ExpressionWeights_7, offset: 0x1c, size: 0x4, def value: None
  float_t ExpressionWeights_7;

  /// @brief Field ExpressionWeights_8, offset: 0x20, size: 0x4, def value: None
  float_t ExpressionWeights_8;

  /// @brief Field ExpressionWeights_9, offset: 0x24, size: 0x4, def value: None
  float_t ExpressionWeights_9;

  /// @brief Field ExpressionWeights_10, offset: 0x28, size: 0x4, def value: None
  float_t ExpressionWeights_10;

  /// @brief Field ExpressionWeights_11, offset: 0x2c, size: 0x4, def value: None
  float_t ExpressionWeights_11;

  /// @brief Field ExpressionWeights_12, offset: 0x30, size: 0x4, def value: None
  float_t ExpressionWeights_12;

  /// @brief Field ExpressionWeights_13, offset: 0x34, size: 0x4, def value: None
  float_t ExpressionWeights_13;

  /// @brief Field ExpressionWeights_14, offset: 0x38, size: 0x4, def value: None
  float_t ExpressionWeights_14;

  /// @brief Field ExpressionWeights_15, offset: 0x3c, size: 0x4, def value: None
  float_t ExpressionWeights_15;

  /// @brief Field ExpressionWeights_16, offset: 0x40, size: 0x4, def value: None
  float_t ExpressionWeights_16;

  /// @brief Field ExpressionWeights_17, offset: 0x44, size: 0x4, def value: None
  float_t ExpressionWeights_17;

  /// @brief Field ExpressionWeights_18, offset: 0x48, size: 0x4, def value: None
  float_t ExpressionWeights_18;

  /// @brief Field ExpressionWeights_19, offset: 0x4c, size: 0x4, def value: None
  float_t ExpressionWeights_19;

  /// @brief Field ExpressionWeights_20, offset: 0x50, size: 0x4, def value: None
  float_t ExpressionWeights_20;

  /// @brief Field ExpressionWeights_21, offset: 0x54, size: 0x4, def value: None
  float_t ExpressionWeights_21;

  /// @brief Field ExpressionWeights_22, offset: 0x58, size: 0x4, def value: None
  float_t ExpressionWeights_22;

  /// @brief Field ExpressionWeights_23, offset: 0x5c, size: 0x4, def value: None
  float_t ExpressionWeights_23;

  /// @brief Field ExpressionWeights_24, offset: 0x60, size: 0x4, def value: None
  float_t ExpressionWeights_24;

  /// @brief Field ExpressionWeights_25, offset: 0x64, size: 0x4, def value: None
  float_t ExpressionWeights_25;

  /// @brief Field ExpressionWeights_26, offset: 0x68, size: 0x4, def value: None
  float_t ExpressionWeights_26;

  /// @brief Field ExpressionWeights_27, offset: 0x6c, size: 0x4, def value: None
  float_t ExpressionWeights_27;

  /// @brief Field ExpressionWeights_28, offset: 0x70, size: 0x4, def value: None
  float_t ExpressionWeights_28;

  /// @brief Field ExpressionWeights_29, offset: 0x74, size: 0x4, def value: None
  float_t ExpressionWeights_29;

  /// @brief Field ExpressionWeights_30, offset: 0x78, size: 0x4, def value: None
  float_t ExpressionWeights_30;

  /// @brief Field ExpressionWeights_31, offset: 0x7c, size: 0x4, def value: None
  float_t ExpressionWeights_31;

  /// @brief Field ExpressionWeights_32, offset: 0x80, size: 0x4, def value: None
  float_t ExpressionWeights_32;

  /// @brief Field ExpressionWeights_33, offset: 0x84, size: 0x4, def value: None
  float_t ExpressionWeights_33;

  /// @brief Field ExpressionWeights_34, offset: 0x88, size: 0x4, def value: None
  float_t ExpressionWeights_34;

  /// @brief Field ExpressionWeights_35, offset: 0x8c, size: 0x4, def value: None
  float_t ExpressionWeights_35;

  /// @brief Field ExpressionWeights_36, offset: 0x90, size: 0x4, def value: None
  float_t ExpressionWeights_36;

  /// @brief Field ExpressionWeights_37, offset: 0x94, size: 0x4, def value: None
  float_t ExpressionWeights_37;

  /// @brief Field ExpressionWeights_38, offset: 0x98, size: 0x4, def value: None
  float_t ExpressionWeights_38;

  /// @brief Field ExpressionWeights_39, offset: 0x9c, size: 0x4, def value: None
  float_t ExpressionWeights_39;

  /// @brief Field ExpressionWeights_40, offset: 0xa0, size: 0x4, def value: None
  float_t ExpressionWeights_40;

  /// @brief Field ExpressionWeights_41, offset: 0xa4, size: 0x4, def value: None
  float_t ExpressionWeights_41;

  /// @brief Field ExpressionWeights_42, offset: 0xa8, size: 0x4, def value: None
  float_t ExpressionWeights_42;

  /// @brief Field ExpressionWeights_43, offset: 0xac, size: 0x4, def value: None
  float_t ExpressionWeights_43;

  /// @brief Field ExpressionWeights_44, offset: 0xb0, size: 0x4, def value: None
  float_t ExpressionWeights_44;

  /// @brief Field ExpressionWeights_45, offset: 0xb4, size: 0x4, def value: None
  float_t ExpressionWeights_45;

  /// @brief Field ExpressionWeights_46, offset: 0xb8, size: 0x4, def value: None
  float_t ExpressionWeights_46;

  /// @brief Field ExpressionWeights_47, offset: 0xbc, size: 0x4, def value: None
  float_t ExpressionWeights_47;

  /// @brief Field ExpressionWeights_48, offset: 0xc0, size: 0x4, def value: None
  float_t ExpressionWeights_48;

  /// @brief Field ExpressionWeights_49, offset: 0xc4, size: 0x4, def value: None
  float_t ExpressionWeights_49;

  /// @brief Field ExpressionWeights_50, offset: 0xc8, size: 0x4, def value: None
  float_t ExpressionWeights_50;

  /// @brief Field ExpressionWeights_51, offset: 0xcc, size: 0x4, def value: None
  float_t ExpressionWeights_51;

  /// @brief Field ExpressionWeights_52, offset: 0xd0, size: 0x4, def value: None
  float_t ExpressionWeights_52;

  /// @brief Field ExpressionWeights_53, offset: 0xd4, size: 0x4, def value: None
  float_t ExpressionWeights_53;

  /// @brief Field ExpressionWeights_54, offset: 0xd8, size: 0x4, def value: None
  float_t ExpressionWeights_54;

  /// @brief Field ExpressionWeights_55, offset: 0xdc, size: 0x4, def value: None
  float_t ExpressionWeights_55;

  /// @brief Field ExpressionWeights_56, offset: 0xe0, size: 0x4, def value: None
  float_t ExpressionWeights_56;

  /// @brief Field ExpressionWeights_57, offset: 0xe4, size: 0x4, def value: None
  float_t ExpressionWeights_57;

  /// @brief Field ExpressionWeights_58, offset: 0xe8, size: 0x4, def value: None
  float_t ExpressionWeights_58;

  /// @brief Field ExpressionWeights_59, offset: 0xec, size: 0x4, def value: None
  float_t ExpressionWeights_59;

  /// @brief Field ExpressionWeights_60, offset: 0xf0, size: 0x4, def value: None
  float_t ExpressionWeights_60;

  /// @brief Field ExpressionWeights_61, offset: 0xf4, size: 0x4, def value: None
  float_t ExpressionWeights_61;

  /// @brief Field ExpressionWeights_62, offset: 0xf8, size: 0x4, def value: None
  float_t ExpressionWeights_62;

  /// @brief Field ExpressionWeightConfidences_0, offset: 0xfc, size: 0x4, def value: None
  float_t ExpressionWeightConfidences_0;

  /// @brief Field ExpressionWeightConfidences_1, offset: 0x100, size: 0x4, def value: None
  float_t ExpressionWeightConfidences_1;

  /// @brief Field Status, offset: 0x104, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal Status;

  /// @brief Field Time, offset: 0x110, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x118 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceState2Internal, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceRegionConfidence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7799))
// CS Name: ::OVRPlugin::FaceRegionConfidence
struct CORDL_TYPE __OVRPlugin__FaceRegionConfidence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__FaceRegionConfidence_Unwrapped
  enum struct ____OVRPlugin__FaceRegionConfidence_Unwrapped : int32_t {
    __E_Lower = static_cast<int32_t>(0x0),
    __E_Upper = static_cast<int32_t>(0x1),
    __E_Max = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__FaceRegionConfidence_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__FaceRegionConfidence_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceRegionConfidence(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceRegionConfidence();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Lower value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__FaceRegionConfidence const Lower;

  /// @brief Field Upper value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__FaceRegionConfidence const Upper;

  /// @brief Field Max value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__FaceRegionConfidence const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceRegionConfidence, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceExpression
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7800))
// CS Name: ::OVRPlugin::FaceExpression
struct CORDL_TYPE __OVRPlugin__FaceExpression {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__FaceExpression_Unwrapped
  enum struct ____OVRPlugin__FaceExpression_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0xffffffff),
    __E_Brow_Lowerer_L = static_cast<int32_t>(0x0),
    __E_Brow_Lowerer_R = static_cast<int32_t>(0x1),
    __E_Cheek_Puff_L = static_cast<int32_t>(0x2),
    __E_Cheek_Puff_R = static_cast<int32_t>(0x3),
    __E_Cheek_Raiser_L = static_cast<int32_t>(0x4),
    __E_Cheek_Raiser_R = static_cast<int32_t>(0x5),
    __E_Cheek_Suck_L = static_cast<int32_t>(0x6),
    __E_Cheek_Suck_R = static_cast<int32_t>(0x7),
    __E_Chin_Raiser_B = static_cast<int32_t>(0x8),
    __E_Chin_Raiser_T = static_cast<int32_t>(0x9),
    __E_Dimpler_L = static_cast<int32_t>(0xa),
    __E_Dimpler_R = static_cast<int32_t>(0xb),
    __E_Eyes_Closed_L = static_cast<int32_t>(0xc),
    __E_Eyes_Closed_R = static_cast<int32_t>(0xd),
    __E_Eyes_Look_Down_L = static_cast<int32_t>(0xe),
    __E_Eyes_Look_Down_R = static_cast<int32_t>(0xf),
    __E_Eyes_Look_Left_L = static_cast<int32_t>(0x10),
    __E_Eyes_Look_Left_R = static_cast<int32_t>(0x11),
    __E_Eyes_Look_Right_L = static_cast<int32_t>(0x12),
    __E_Eyes_Look_Right_R = static_cast<int32_t>(0x13),
    __E_Eyes_Look_Up_L = static_cast<int32_t>(0x14),
    __E_Eyes_Look_Up_R = static_cast<int32_t>(0x15),
    __E_Inner_Brow_Raiser_L = static_cast<int32_t>(0x16),
    __E_Inner_Brow_Raiser_R = static_cast<int32_t>(0x17),
    __E_Jaw_Drop = static_cast<int32_t>(0x18),
    __E_Jaw_Sideways_Left = static_cast<int32_t>(0x19),
    __E_Jaw_Sideways_Right = static_cast<int32_t>(0x1a),
    __E_Jaw_Thrust = static_cast<int32_t>(0x1b),
    __E_Lid_Tightener_L = static_cast<int32_t>(0x1c),
    __E_Lid_Tightener_R = static_cast<int32_t>(0x1d),
    __E_Lip_Corner_Depressor_L = static_cast<int32_t>(0x1e),
    __E_Lip_Corner_Depressor_R = static_cast<int32_t>(0x1f),
    __E_Lip_Corner_Puller_L = static_cast<int32_t>(0x20),
    __E_Lip_Corner_Puller_R = static_cast<int32_t>(0x21),
    __E_Lip_Funneler_LB = static_cast<int32_t>(0x22),
    __E_Lip_Funneler_LT = static_cast<int32_t>(0x23),
    __E_Lip_Funneler_RB = static_cast<int32_t>(0x24),
    __E_Lip_Funneler_RT = static_cast<int32_t>(0x25),
    __E_Lip_Pressor_L = static_cast<int32_t>(0x26),
    __E_Lip_Pressor_R = static_cast<int32_t>(0x27),
    __E_Lip_Pucker_L = static_cast<int32_t>(0x28),
    __E_Lip_Pucker_R = static_cast<int32_t>(0x29),
    __E_Lip_Stretcher_L = static_cast<int32_t>(0x2a),
    __E_Lip_Stretcher_R = static_cast<int32_t>(0x2b),
    __E_Lip_Suck_LB = static_cast<int32_t>(0x2c),
    __E_Lip_Suck_LT = static_cast<int32_t>(0x2d),
    __E_Lip_Suck_RB = static_cast<int32_t>(0x2e),
    __E_Lip_Suck_RT = static_cast<int32_t>(0x2f),
    __E_Lip_Tightener_L = static_cast<int32_t>(0x30),
    __E_Lip_Tightener_R = static_cast<int32_t>(0x31),
    __E_Lips_Toward = static_cast<int32_t>(0x32),
    __E_Lower_Lip_Depressor_L = static_cast<int32_t>(0x33),
    __E_Lower_Lip_Depressor_R = static_cast<int32_t>(0x34),
    __E_Mouth_Left = static_cast<int32_t>(0x35),
    __E_Mouth_Right = static_cast<int32_t>(0x36),
    __E_Nose_Wrinkler_L = static_cast<int32_t>(0x37),
    __E_Nose_Wrinkler_R = static_cast<int32_t>(0x38),
    __E_Outer_Brow_Raiser_L = static_cast<int32_t>(0x39),
    __E_Outer_Brow_Raiser_R = static_cast<int32_t>(0x3a),
    __E_Upper_Lid_Raiser_L = static_cast<int32_t>(0x3b),
    __E_Upper_Lid_Raiser_R = static_cast<int32_t>(0x3c),
    __E_Upper_Lip_Raiser_L = static_cast<int32_t>(0x3d),
    __E_Upper_Lip_Raiser_R = static_cast<int32_t>(0x3e),
    __E_Max = static_cast<int32_t>(0x3f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__FaceExpression_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__FaceExpression_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceExpression(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceExpression();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Invalid;

  /// @brief Field Brow_Lowerer_L value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Brow_Lowerer_L;

  /// @brief Field Brow_Lowerer_R value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Brow_Lowerer_R;

  /// @brief Field Cheek_Puff_L value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Cheek_Puff_L;

  /// @brief Field Cheek_Puff_R value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Cheek_Puff_R;

  /// @brief Field Cheek_Raiser_L value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Cheek_Raiser_L;

  /// @brief Field Cheek_Raiser_R value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Cheek_Raiser_R;

  /// @brief Field Cheek_Suck_L value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Cheek_Suck_L;

  /// @brief Field Cheek_Suck_R value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Cheek_Suck_R;

  /// @brief Field Chin_Raiser_B value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Chin_Raiser_B;

  /// @brief Field Chin_Raiser_T value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Chin_Raiser_T;

  /// @brief Field Dimpler_L value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Dimpler_L;

  /// @brief Field Dimpler_R value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Dimpler_R;

  /// @brief Field Eyes_Closed_L value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Closed_L;

  /// @brief Field Eyes_Closed_R value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Closed_R;

  /// @brief Field Eyes_Look_Down_L value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Down_L;

  /// @brief Field Eyes_Look_Down_R value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Down_R;

  /// @brief Field Eyes_Look_Left_L value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Left_L;

  /// @brief Field Eyes_Look_Left_R value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Left_R;

  /// @brief Field Eyes_Look_Right_L value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Right_L;

  /// @brief Field Eyes_Look_Right_R value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Right_R;

  /// @brief Field Eyes_Look_Up_L value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Up_L;

  /// @brief Field Eyes_Look_Up_R value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Eyes_Look_Up_R;

  /// @brief Field Inner_Brow_Raiser_L value: static_cast<int32_t>(0x16)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Inner_Brow_Raiser_L;

  /// @brief Field Inner_Brow_Raiser_R value: static_cast<int32_t>(0x17)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Inner_Brow_Raiser_R;

  /// @brief Field Jaw_Drop value: static_cast<int32_t>(0x18)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Jaw_Drop;

  /// @brief Field Jaw_Sideways_Left value: static_cast<int32_t>(0x19)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Jaw_Sideways_Left;

  /// @brief Field Jaw_Sideways_Right value: static_cast<int32_t>(0x1a)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Jaw_Sideways_Right;

  /// @brief Field Jaw_Thrust value: static_cast<int32_t>(0x1b)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Jaw_Thrust;

  /// @brief Field Lid_Tightener_L value: static_cast<int32_t>(0x1c)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lid_Tightener_L;

  /// @brief Field Lid_Tightener_R value: static_cast<int32_t>(0x1d)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lid_Tightener_R;

  /// @brief Field Lip_Corner_Depressor_L value: static_cast<int32_t>(0x1e)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Corner_Depressor_L;

  /// @brief Field Lip_Corner_Depressor_R value: static_cast<int32_t>(0x1f)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Corner_Depressor_R;

  /// @brief Field Lip_Corner_Puller_L value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Corner_Puller_L;

  /// @brief Field Lip_Corner_Puller_R value: static_cast<int32_t>(0x21)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Corner_Puller_R;

  /// @brief Field Lip_Funneler_LB value: static_cast<int32_t>(0x22)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Funneler_LB;

  /// @brief Field Lip_Funneler_LT value: static_cast<int32_t>(0x23)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Funneler_LT;

  /// @brief Field Lip_Funneler_RB value: static_cast<int32_t>(0x24)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Funneler_RB;

  /// @brief Field Lip_Funneler_RT value: static_cast<int32_t>(0x25)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Funneler_RT;

  /// @brief Field Lip_Pressor_L value: static_cast<int32_t>(0x26)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Pressor_L;

  /// @brief Field Lip_Pressor_R value: static_cast<int32_t>(0x27)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Pressor_R;

  /// @brief Field Lip_Pucker_L value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Pucker_L;

  /// @brief Field Lip_Pucker_R value: static_cast<int32_t>(0x29)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Pucker_R;

  /// @brief Field Lip_Stretcher_L value: static_cast<int32_t>(0x2a)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Stretcher_L;

  /// @brief Field Lip_Stretcher_R value: static_cast<int32_t>(0x2b)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Stretcher_R;

  /// @brief Field Lip_Suck_LB value: static_cast<int32_t>(0x2c)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Suck_LB;

  /// @brief Field Lip_Suck_LT value: static_cast<int32_t>(0x2d)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Suck_LT;

  /// @brief Field Lip_Suck_RB value: static_cast<int32_t>(0x2e)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Suck_RB;

  /// @brief Field Lip_Suck_RT value: static_cast<int32_t>(0x2f)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Suck_RT;

  /// @brief Field Lip_Tightener_L value: static_cast<int32_t>(0x30)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Tightener_L;

  /// @brief Field Lip_Tightener_R value: static_cast<int32_t>(0x31)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lip_Tightener_R;

  /// @brief Field Lips_Toward value: static_cast<int32_t>(0x32)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lips_Toward;

  /// @brief Field Lower_Lip_Depressor_L value: static_cast<int32_t>(0x33)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lower_Lip_Depressor_L;

  /// @brief Field Lower_Lip_Depressor_R value: static_cast<int32_t>(0x34)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Lower_Lip_Depressor_R;

  /// @brief Field Mouth_Left value: static_cast<int32_t>(0x35)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Mouth_Left;

  /// @brief Field Mouth_Right value: static_cast<int32_t>(0x36)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Mouth_Right;

  /// @brief Field Nose_Wrinkler_L value: static_cast<int32_t>(0x37)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Nose_Wrinkler_L;

  /// @brief Field Nose_Wrinkler_R value: static_cast<int32_t>(0x38)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Nose_Wrinkler_R;

  /// @brief Field Outer_Brow_Raiser_L value: static_cast<int32_t>(0x39)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Outer_Brow_Raiser_L;

  /// @brief Field Outer_Brow_Raiser_R value: static_cast<int32_t>(0x3a)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Outer_Brow_Raiser_R;

  /// @brief Field Upper_Lid_Raiser_L value: static_cast<int32_t>(0x3b)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Upper_Lid_Raiser_L;

  /// @brief Field Upper_Lid_Raiser_R value: static_cast<int32_t>(0x3c)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Upper_Lid_Raiser_R;

  /// @brief Field Upper_Lip_Raiser_L value: static_cast<int32_t>(0x3d)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Upper_Lip_Raiser_L;

  /// @brief Field Upper_Lip_Raiser_R value: static_cast<int32_t>(0x3e)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Upper_Lip_Raiser_R;

  /// @brief Field Max value: static_cast<int32_t>(0x3f)
  static ::GlobalNamespace::__OVRPlugin__FaceExpression const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceExpression, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FaceConstants
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7801))
// CS Name: ::OVRPlugin::FaceConstants
struct CORDL_TYPE __OVRPlugin__FaceConstants {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__FaceConstants_Unwrapped
  enum struct ____OVRPlugin__FaceConstants_Unwrapped : int32_t {
    __E_MaxFaceExpressions = static_cast<int32_t>(0x3f),
    __E_MaxFaceRegionConfidences = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__FaceConstants_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__FaceConstants_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__FaceConstants(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__FaceConstants();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MaxFaceExpressions value: static_cast<int32_t>(0x3f)
  static ::GlobalNamespace::__OVRPlugin__FaceConstants const MaxFaceExpressions;

  /// @brief Field MaxFaceRegionConfidences value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__FaceConstants const MaxFaceRegionConfidences;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__FaceConstants, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeGazeState
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686)), TypeDefinitionIndex(TypeDefinitionIndex(7726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7802))
// CS Name: ::OVRPlugin::EyeGazeState
struct CORDL_TYPE __OVRPlugin__EyeGazeState {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method get_IsValid addr 0x276d648 size 0x10 virtual false final false
  inline bool get_IsValid();

  // Ctor Parameters [CppParam { name: "Pose", ty: "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "_isValid", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__EyeGazeState(::GlobalNamespace::__OVRPlugin__Posef Pose, float_t Confidence, ::GlobalNamespace::__OVRPlugin__Bool _isValid) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__EyeGazeState();

  /// @brief Field Pose, offset: 0x0, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef Pose;

  /// @brief Field Confidence, offset: 0x1c, size: 0x4, def value: None
  float_t Confidence;

  /// @brief Field _isValid, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool _isValid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__EyeGazeState, 0x24>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeGazesState
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7803))
// CS Name: ::OVRPlugin::EyeGazesState
struct CORDL_TYPE __OVRPlugin__EyeGazesState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "EyeGazes", ty: "::ArrayW<::GlobalNamespace::__OVRPlugin__EyeGazeState,::Array<::GlobalNamespace::__OVRPlugin__EyeGazeState>*>", modifiers: "", def_value: None
  // }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__EyeGazesState(::ArrayW<::GlobalNamespace::__OVRPlugin__EyeGazeState, ::Array<::GlobalNamespace::__OVRPlugin__EyeGazeState>*> EyeGazes, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__EyeGazesState();

  /// @brief Field EyeGazes, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__EyeGazeState, ::Array<::GlobalNamespace::__OVRPlugin__EyeGazeState>*> EyeGazes;

  /// @brief Field Time, offset: 0x8, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__EyeGazesState, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EyeGazesStateInternal
// SizeInfo { instance_size: 80, native_size: 80, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7802))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7804))
// CS Name: ::OVRPlugin::EyeGazesStateInternal
struct CORDL_TYPE __OVRPlugin__EyeGazesStateInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "EyeGazes_0", ty: "::GlobalNamespace::__OVRPlugin__EyeGazeState", modifiers: "", def_value: None }, CppParam { name: "EyeGazes_1", ty:
  // "::GlobalNamespace::__OVRPlugin__EyeGazeState", modifiers: "", def_value: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__EyeGazesStateInternal(::GlobalNamespace::__OVRPlugin__EyeGazeState EyeGazes_0, ::GlobalNamespace::__OVRPlugin__EyeGazeState EyeGazes_1, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__EyeGazesStateInternal();

  /// @brief Field EyeGazes_0, offset: 0x0, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeGazeState EyeGazes_0;

  /// @brief Field EyeGazes_1, offset: 0x24, size: 0x24, def value: None
  ::GlobalNamespace::__OVRPlugin__EyeGazeState EyeGazes_1;

  /// @brief Field Time, offset: 0x48, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7805))
// CS Name: ::OVRPlugin::ColorSpace
struct CORDL_TYPE __OVRPlugin__ColorSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__ColorSpace_Unwrapped
  enum struct ____OVRPlugin__ColorSpace_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Unmanaged = static_cast<int32_t>(0x1),
    __E_Rec_2020 = static_cast<int32_t>(0x2),
    __E_Rec_709 = static_cast<int32_t>(0x3),
    __E_Rift_CV1 = static_cast<int32_t>(0x4),
    __E_Rift_S = static_cast<int32_t>(0x5),
    __E_Quest = static_cast<int32_t>(0x6),
    __E_P3 = static_cast<int32_t>(0x7),
    __E_Adobe_RGB = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__ColorSpace_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__ColorSpace_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__ColorSpace(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__ColorSpace();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Unknown;

  /// @brief Field Unmanaged value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Unmanaged;

  /// @brief Field Rec_2020 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Rec_2020;

  /// @brief Field Rec_709 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Rec_709;

  /// @brief Field Rift_CV1 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Rift_CV1;

  /// @brief Field Rift_S value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Rift_S;

  /// @brief Field Quest value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Quest;

  /// @brief Field P3 value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const P3;

  /// @brief Field Adobe_RGB value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__ColorSpace const Adobe_RGB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__ColorSpace, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7806))
// CS Name: ::OVRPlugin::EventType
struct CORDL_TYPE __OVRPlugin__EventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__EventType_Unwrapped
  enum struct ____OVRPlugin__EventType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_DisplayRefreshRateChanged = static_cast<int32_t>(0x1),
    __E_SpatialAnchorCreateComplete = static_cast<int32_t>(0x31),
    __E_SpaceSetComponentStatusComplete = static_cast<int32_t>(0x32),
    __E_SpaceQueryResults = static_cast<int32_t>(0x33),
    __E_SpaceQueryComplete = static_cast<int32_t>(0x34),
    __E_SpaceSaveComplete = static_cast<int32_t>(0x35),
    __E_SpaceEraseComplete = static_cast<int32_t>(0x36),
    __E_SpaceShareResult = static_cast<int32_t>(0x38),
    __E_SpaceListSaveResult = static_cast<int32_t>(0x39),
    __E_SceneCaptureComplete = static_cast<int32_t>(0x64),
    __E_VirtualKeyboardCommitText = static_cast<int32_t>(0xc9),
    __E_VirtualKeyboardBackspace = static_cast<int32_t>(0xca),
    __E_VirtualKeyboardEnter = static_cast<int32_t>(0xcb),
    __E_VirtualKeyboardShown = static_cast<int32_t>(0xcc),
    __E_VirtualKeyboardHidden = static_cast<int32_t>(0xcd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__EventType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__EventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__EventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__EventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__EventType const Unknown;

  /// @brief Field DisplayRefreshRateChanged value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__EventType const DisplayRefreshRateChanged;

  /// @brief Field SpatialAnchorCreateComplete value: static_cast<int32_t>(0x31)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpatialAnchorCreateComplete;

  /// @brief Field SpaceSetComponentStatusComplete value: static_cast<int32_t>(0x32)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceSetComponentStatusComplete;

  /// @brief Field SpaceQueryResults value: static_cast<int32_t>(0x33)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceQueryResults;

  /// @brief Field SpaceQueryComplete value: static_cast<int32_t>(0x34)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceQueryComplete;

  /// @brief Field SpaceSaveComplete value: static_cast<int32_t>(0x35)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceSaveComplete;

  /// @brief Field SpaceEraseComplete value: static_cast<int32_t>(0x36)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceEraseComplete;

  /// @brief Field SpaceShareResult value: static_cast<int32_t>(0x38)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceShareResult;

  /// @brief Field SpaceListSaveResult value: static_cast<int32_t>(0x39)
  static ::GlobalNamespace::__OVRPlugin__EventType const SpaceListSaveResult;

  /// @brief Field SceneCaptureComplete value: static_cast<int32_t>(0x64)
  static ::GlobalNamespace::__OVRPlugin__EventType const SceneCaptureComplete;

  /// @brief Field VirtualKeyboardCommitText value: static_cast<int32_t>(0xc9)
  static ::GlobalNamespace::__OVRPlugin__EventType const VirtualKeyboardCommitText;

  /// @brief Field VirtualKeyboardBackspace value: static_cast<int32_t>(0xca)
  static ::GlobalNamespace::__OVRPlugin__EventType const VirtualKeyboardBackspace;

  /// @brief Field VirtualKeyboardEnter value: static_cast<int32_t>(0xcb)
  static ::GlobalNamespace::__OVRPlugin__EventType const VirtualKeyboardEnter;

  /// @brief Field VirtualKeyboardShown value: static_cast<int32_t>(0xcc)
  static ::GlobalNamespace::__OVRPlugin__EventType const VirtualKeyboardShown;

  /// @brief Field VirtualKeyboardHidden value: static_cast<int32_t>(0xcd)
  static ::GlobalNamespace::__OVRPlugin__EventType const VirtualKeyboardHidden;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__EventType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EventDataBuffer
// SizeInfo { instance_size: 16, native_size: 4004, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7806))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7807))
// CS Name: ::OVRPlugin::EventDataBuffer
struct CORDL_TYPE __OVRPlugin__EventDataBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::__OVRPlugin__EventType", modifiers: "", def_value: None }, CppParam { name: "EventData", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__EventDataBuffer(::GlobalNamespace::__OVRPlugin__EventType EventType, ::ArrayW<uint8_t, ::Array<uint8_t>*> EventData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__EventDataBuffer();

  /// @brief Field EventType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__EventType EventType;

  /// @brief Field EventData, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> EventData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__EventDataBuffer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RenderModelProperties
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7808))
// CS Name: ::OVRPlugin::RenderModelProperties
struct CORDL_TYPE __OVRPlugin__RenderModelProperties {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ModelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ModelKey", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "VendorId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ModelVersion", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__RenderModelProperties(::StringW ModelName, uint64_t ModelKey, uint32_t VendorId, uint32_t ModelVersion) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__RenderModelProperties();

  /// @brief Field ModelName, offset: 0x0, size: 0x8, def value: None
  ::StringW ModelName;

  /// @brief Field ModelKey, offset: 0x8, size: 0x8, def value: None
  uint64_t ModelKey;

  /// @brief Field VendorId, offset: 0x10, size: 0x4, def value: None
  uint32_t VendorId;

  /// @brief Field ModelVersion, offset: 0x14, size: 0x4, def value: None
  uint32_t ModelVersion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__RenderModelProperties, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RenderModelPropertiesInternal
// SizeInfo { instance_size: 24, native_size: 80, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7809))
// CS Name: ::OVRPlugin::RenderModelPropertiesInternal
struct CORDL_TYPE __OVRPlugin__RenderModelPropertiesInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "ModelName", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "ModelKey", ty: "uint64_t", modifiers: "", def_value:
  // None }, CppParam { name: "VendorId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ModelVersion", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__RenderModelPropertiesInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> ModelName, uint64_t ModelKey, uint32_t VendorId, uint32_t ModelVersion) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__RenderModelPropertiesInternal();

  /// @brief Field ModelName, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ModelName;

  /// @brief Field ModelKey, offset: 0x8, size: 0x8, def value: None
  uint64_t ModelKey;

  /// @brief Field VendorId, offset: 0x10, size: 0x4, def value: None
  uint32_t VendorId;

  /// @brief Field ModelVersion, offset: 0x14, size: 0x4, def value: None
  uint32_t ModelVersion;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__RenderModelPropertiesInternal, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RenderModelFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7810))
// CS Name: ::OVRPlugin::RenderModelFlags
struct CORDL_TYPE __OVRPlugin__RenderModelFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__RenderModelFlags_Unwrapped
  enum struct ____OVRPlugin__RenderModelFlags_Unwrapped : int32_t {
    __E_SupportsGltf20Subset1 = static_cast<int32_t>(0x1),
    __E_SupportsGltf20Subset2 = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__RenderModelFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__RenderModelFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__RenderModelFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__RenderModelFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SupportsGltf20Subset1 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__RenderModelFlags const SupportsGltf20Subset1;

  /// @brief Field SupportsGltf20Subset2 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__RenderModelFlags const SupportsGltf20Subset2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__RenderModelFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardLocationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7811))
// CS Name: ::OVRPlugin::VirtualKeyboardLocationType
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardLocationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__VirtualKeyboardLocationType_Unwrapped
  enum struct ____OVRPlugin__VirtualKeyboardLocationType_Unwrapped : int32_t {
    __E_Custom = static_cast<int32_t>(0x0),
    __E_Far = static_cast<int32_t>(0x1),
    __E_Direct = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__VirtualKeyboardLocationType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__VirtualKeyboardLocationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardLocationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardLocationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Custom value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType const Custom;

  /// @brief Field Far value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType const Far;

  /// @brief Field Direct value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType const Direct;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardSpaceCreateInfo
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7811)), TypeDefinitionIndex(TypeDefinitionIndex(7726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7812))
// CS Name: ::OVRPlugin::VirtualKeyboardSpaceCreateInfo
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardSpaceCreateInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "locationType", ty: "::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType", modifiers: "", def_value: None }, CppParam { name: "pose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardSpaceCreateInfo(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType locationType, ::GlobalNamespace::__OVRPlugin__Posef pose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardSpaceCreateInfo();

  /// @brief Field locationType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType locationType;

  /// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef pose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardSpaceCreateInfo, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardLocationInfo
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7726)), TypeDefinitionIndex(TypeDefinitionIndex(7811))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7813))
// CS Name: ::OVRPlugin::VirtualKeyboardLocationInfo
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardLocationInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "locationType", ty: "::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType", modifiers: "", def_value: None }, CppParam { name: "pose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardLocationInfo(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType locationType, ::GlobalNamespace::__OVRPlugin__Posef pose, float_t scale) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardLocationInfo();

  /// @brief Field locationType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType locationType;

  /// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef pose;

  /// @brief Field scale, offset: 0x20, size: 0x4, def value: None
  float_t scale;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo, 0x24>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardCreateInfo
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7814))
// CS Name: ::OVRPlugin::VirtualKeyboardCreateInfo
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardCreateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardCreateInfo();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardCreateInfo, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardInputSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7815))
// CS Name: ::OVRPlugin::VirtualKeyboardInputSource
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardInputSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__VirtualKeyboardInputSource_Unwrapped
  enum struct ____OVRPlugin__VirtualKeyboardInputSource_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_ControllerRayLeft = static_cast<int32_t>(0x1),
    __E_ControllerRayRight = static_cast<int32_t>(0x2),
    __E_HandRayLeft = static_cast<int32_t>(0x3),
    __E_HandRayRight = static_cast<int32_t>(0x4),
    __E_ControllerDirectLeft = static_cast<int32_t>(0x5),
    __E_ControllerDirectRight = static_cast<int32_t>(0x6),
    __E_HandDirectIndexTipLeft = static_cast<int32_t>(0x7),
    __E_HandDirectIndexTipRight = static_cast<int32_t>(0x8),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__VirtualKeyboardInputSource_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__VirtualKeyboardInputSource_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardInputSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardInputSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const Invalid;

  /// @brief Field ControllerRayLeft value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const ControllerRayLeft;

  /// @brief Field ControllerRayRight value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const ControllerRayRight;

  /// @brief Field HandRayLeft value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const HandRayLeft;

  /// @brief Field HandRayRight value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const HandRayRight;

  /// @brief Field ControllerDirectLeft value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const ControllerDirectLeft;

  /// @brief Field ControllerDirectRight value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const ControllerDirectRight;

  /// @brief Field HandDirectIndexTipLeft value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const HandDirectIndexTipLeft;

  /// @brief Field HandDirectIndexTipRight value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const HandDirectIndexTipRight;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardInputStateFlags
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7816))
// CS Name: ::OVRPlugin::VirtualKeyboardInputStateFlags
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardInputStateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____OVRPlugin__VirtualKeyboardInputStateFlags_Unwrapped
  enum struct ____OVRPlugin__VirtualKeyboardInputStateFlags_Unwrapped : uint64_t {
    __E_IsPressed = static_cast<uint64_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__VirtualKeyboardInputStateFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__VirtualKeyboardInputStateFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardInputStateFlags(uint64_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardInputStateFlags();

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field IsPressed value: static_cast<uint64_t>(0x1u)
  static ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags const IsPressed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardInputInfo
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7815)), TypeDefinitionIndex(TypeDefinitionIndex(7816)), TypeDefinitionIndex(TypeDefinitionIndex(7726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7817))
// CS Name: ::OVRPlugin::VirtualKeyboardInputInfo
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardInputInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "inputSource", ty: "::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource", modifiers: "", def_value: None }, CppParam { name: "inputPose", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "inputState", ty: "::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags", modifiers: "",
  // def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardInputInfo(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource inputSource, ::GlobalNamespace::__OVRPlugin__Posef inputPose,
                                                  ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags inputState) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardInputInfo();

  /// @brief Field inputSource, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource inputSource;

  /// @brief Field inputPose, offset: 0x4, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef inputPose;

  /// @brief Field inputState, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags inputState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardModelAnimationState
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7818))
// CS Name: ::OVRPlugin::VirtualKeyboardModelAnimationState
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardModelAnimationState {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "AnimationIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Fraction", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardModelAnimationState(int32_t AnimationIndex, float_t Fraction) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardModelAnimationState();

  /// @brief Field AnimationIndex, offset: 0x0, size: 0x4, def value: None
  int32_t AnimationIndex;

  /// @brief Field Fraction, offset: 0x4, size: 0x4, def value: None
  float_t Fraction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardModelAnimationStates
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7819))
// CS Name: ::OVRPlugin::VirtualKeyboardModelAnimationStates
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardModelAnimationStates {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "States", ty:
  // "::ArrayW<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState,::Array<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState>*>", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardModelAnimationStates(
      ::ArrayW<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState, ::Array<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState>*> States) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardModelAnimationStates();

  /// @brief Field States, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState, ::Array<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState>*> States;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStates, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardModelAnimationStatesInternal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7820))
// CS Name: ::OVRPlugin::VirtualKeyboardModelAnimationStatesInternal
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardModelAnimationStatesInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "StateCapacityInput", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "StateCountOutput", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "StatesBuffer", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardModelAnimationStatesInternal(uint32_t StateCapacityInput, uint32_t StateCountOutput, void* StatesBuffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardModelAnimationStatesInternal();

  /// @brief Field StateCapacityInput, offset: 0x0, size: 0x4, def value: None
  uint32_t StateCapacityInput;

  /// @brief Field StateCountOutput, offset: 0x4, size: 0x4, def value: None
  uint32_t StateCountOutput;

  /// @brief Field StatesBuffer, offset: 0x8, size: 0x8, def value: None
  void* StatesBuffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStatesInternal, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardTextureIds
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7821))
// CS Name: ::OVRPlugin::VirtualKeyboardTextureIds
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardTextureIds {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "TextureIds", ty: "::ArrayW<uint64_t,::Array<uint64_t>*>", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardTextureIds(::ArrayW<uint64_t, ::Array<uint64_t>*> TextureIds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardTextureIds();

  /// @brief Field TextureIds, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> TextureIds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIds, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardTextureIdsInternal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7822))
// CS Name: ::OVRPlugin::VirtualKeyboardTextureIdsInternal
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardTextureIdsInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "TextureIdCapacityInput", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TextureIdCountOutput", ty: "uint32_t", modifiers: "", def_value:
  // None }, CppParam { name: "TextureIdsBuffer", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardTextureIdsInternal(uint32_t TextureIdCapacityInput, uint32_t TextureIdCountOutput, void* TextureIdsBuffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardTextureIdsInternal();

  /// @brief Field TextureIdCapacityInput, offset: 0x0, size: 0x4, def value: None
  uint32_t TextureIdCapacityInput;

  /// @brief Field TextureIdCountOutput, offset: 0x4, size: 0x4, def value: None
  uint32_t TextureIdCountOutput;

  /// @brief Field TextureIdsBuffer, offset: 0x8, size: 0x8, def value: None
  void* TextureIdsBuffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIdsInternal, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardTextureData
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7823))
// CS Name: ::OVRPlugin::VirtualKeyboardTextureData
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardTextureData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "TextureWidth", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TextureHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "BufferCapacityInput", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "BufferCountOutput", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buffer",
  // ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardTextureData(uint32_t TextureWidth, uint32_t TextureHeight, uint32_t BufferCapacityInput, uint32_t BufferCountOutput, void* Buffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardTextureData();

  /// @brief Field TextureWidth, offset: 0x0, size: 0x4, def value: None
  uint32_t TextureWidth;

  /// @brief Field TextureHeight, offset: 0x4, size: 0x4, def value: None
  uint32_t TextureHeight;

  /// @brief Field BufferCapacityInput, offset: 0x8, size: 0x4, def value: None
  uint32_t BufferCapacityInput;

  /// @brief Field BufferCountOutput, offset: 0xc, size: 0x4, def value: None
  uint32_t BufferCountOutput;

  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  void* Buffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualKeyboardModelVisibility
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7824))
// CS Name: ::OVRPlugin::VirtualKeyboardModelVisibility
struct CORDL_TYPE __OVRPlugin__VirtualKeyboardModelVisibility {
public:
  // Declarations
  __declspec(property(get = get_Visible, put = set_Visible)) bool Visible;

  /// @brief Method get_Visible addr 0x276d658 size 0x10 virtual false final false
  inline bool get_Visible();

  /// @brief Method set_Visible addr 0x276d668 size 0xc virtual false final false
  inline void set_Visible(bool value);

  // Ctor Parameters [CppParam { name: "_visible", ty: "::GlobalNamespace::__OVRPlugin__Bool", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__VirtualKeyboardModelVisibility(::GlobalNamespace::__OVRPlugin__Bool _visible) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__VirtualKeyboardModelVisibility();

  /// @brief Field _visible, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__Bool _visible;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelVisibility, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InsightPassthroughColorMapType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7825))
// CS Name: ::OVRPlugin::InsightPassthroughColorMapType
struct CORDL_TYPE __OVRPlugin__InsightPassthroughColorMapType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__InsightPassthroughColorMapType_Unwrapped
  enum struct ____OVRPlugin__InsightPassthroughColorMapType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MonoToRgba = static_cast<int32_t>(0x1),
    __E_MonoToMono = static_cast<int32_t>(0x2),
    __E_BrightnessContrastSaturation = static_cast<int32_t>(0x4),
    __E_ColorLut = static_cast<int32_t>(0x6),
    __E_InterpolatedColorLut = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__InsightPassthroughColorMapType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__InsightPassthroughColorMapType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__InsightPassthroughColorMapType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__InsightPassthroughColorMapType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const None;

  /// @brief Field MonoToRgba value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const MonoToRgba;

  /// @brief Field MonoToMono value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const MonoToMono;

  /// @brief Field BrightnessContrastSaturation value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const BrightnessContrastSaturation;

  /// @brief Field ColorLut value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const ColorLut;

  /// @brief Field InterpolatedColorLut value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const InterpolatedColorLut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InsightPassthroughStyleFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7826))
// CS Name: ::OVRPlugin::InsightPassthroughStyleFlags
struct CORDL_TYPE __OVRPlugin__InsightPassthroughStyleFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__InsightPassthroughStyleFlags_Unwrapped
  enum struct ____OVRPlugin__InsightPassthroughStyleFlags_Unwrapped : int32_t {
    __E_HasTextureOpacityFactor = static_cast<int32_t>(0x1),
    __E_HasEdgeColor = static_cast<int32_t>(0x2),
    __E_HasTextureColorMap = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__InsightPassthroughStyleFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__InsightPassthroughStyleFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__InsightPassthroughStyleFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__InsightPassthroughStyleFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HasTextureOpacityFactor value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags const HasTextureOpacityFactor;

  /// @brief Field HasEdgeColor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags const HasEdgeColor;

  /// @brief Field HasTextureColorMap value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags const HasTextureColorMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InsightPassthroughStyle
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7826)), TypeDefinitionIndex(TypeDefinitionIndex(7755)), TypeDefinitionIndex(TypeDefinitionIndex(2603)),
// TypeDefinitionIndex(TypeDefinitionIndex(7825))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7827)) CS Name: ::OVRPlugin::InsightPassthroughStyle
struct CORDL_TYPE __OVRPlugin__InsightPassthroughStyle {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags", modifiers: "", def_value: None }, CppParam { name: "TextureOpacityFactor", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "EdgeColor", ty: "::GlobalNamespace::__OVRPlugin__Colorf", modifiers: "", def_value: None }, CppParam { name: "TextureColorMapType",
  // ty: "::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType", modifiers: "", def_value: None }, CppParam { name: "TextureColorMapDataSize", ty: "uint32_t", modifiers: "", def_value: None
  // }, CppParam { name: "TextureColorMapData", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__InsightPassthroughStyle(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags Flags, float_t TextureOpacityFactor, ::GlobalNamespace::__OVRPlugin__Colorf EdgeColor,
                                                 ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType TextureColorMapType, uint32_t TextureColorMapDataSize,
                                                 void* TextureColorMapData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__InsightPassthroughStyle();

  /// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags Flags;

  /// @brief Field TextureOpacityFactor, offset: 0x4, size: 0x4, def value: None
  float_t TextureOpacityFactor;

  /// @brief Field EdgeColor, offset: 0x8, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Colorf EdgeColor;

  /// @brief Field TextureColorMapType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType TextureColorMapType;

  /// @brief Field TextureColorMapDataSize, offset: 0x1c, size: 0x4, def value: None
  uint32_t TextureColorMapDataSize;

  /// @brief Field TextureColorMapData, offset: 0x20, size: 0x8, def value: None
  void* TextureColorMapData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InsightPassthroughStyle2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7826)), TypeDefinitionIndex(TypeDefinitionIndex(7825)), TypeDefinitionIndex(TypeDefinitionIndex(2603)),
// TypeDefinitionIndex(TypeDefinitionIndex(7755))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7828)) CS Name: ::OVRPlugin::InsightPassthroughStyle2
struct CORDL_TYPE __OVRPlugin__InsightPassthroughStyle2 {
public:
  // Declarations
  /// @brief Method CopyTo addr 0x276d674 size 0x24 virtual false final false
  inline void CopyTo(ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle> target);

  // Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags", modifiers: "", def_value: None }, CppParam { name: "TextureOpacityFactor", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "EdgeColor", ty: "::GlobalNamespace::__OVRPlugin__Colorf", modifiers: "", def_value: None }, CppParam { name: "TextureColorMapType",
  // ty: "::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType", modifiers: "", def_value: None }, CppParam { name: "TextureColorMapDataSize", ty: "uint32_t", modifiers: "", def_value: None
  // }, CppParam { name: "TextureColorMapData", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "LutSource", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "LutTarget", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "LutWeight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__InsightPassthroughStyle2(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags Flags, float_t TextureOpacityFactor, ::GlobalNamespace::__OVRPlugin__Colorf EdgeColor,
                                                  ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType TextureColorMapType, uint32_t TextureColorMapDataSize, void* TextureColorMapData,
                                                  uint64_t LutSource, uint64_t LutTarget, float_t LutWeight) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__InsightPassthroughStyle2();

  /// @brief Field Flags, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags Flags;

  /// @brief Field TextureOpacityFactor, offset: 0x4, size: 0x4, def value: None
  float_t TextureOpacityFactor;

  /// @brief Field EdgeColor, offset: 0x8, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__Colorf EdgeColor;

  /// @brief Field TextureColorMapType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType TextureColorMapType;

  /// @brief Field TextureColorMapDataSize, offset: 0x1c, size: 0x4, def value: None
  uint32_t TextureColorMapDataSize;

  /// @brief Field TextureColorMapData, offset: 0x20, size: 0x8, def value: None
  void* TextureColorMapData;

  /// @brief Field LutSource, offset: 0x28, size: 0x8, def value: None
  uint64_t LutSource;

  /// @brief Field LutTarget, offset: 0x30, size: 0x8, def value: None
  uint64_t LutTarget;

  /// @brief Field LutWeight, offset: 0x38, size: 0x4, def value: None
  float_t LutWeight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughColorLutChannels
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7829))
// CS Name: ::OVRPlugin::PassthroughColorLutChannels
struct CORDL_TYPE __OVRPlugin__PassthroughColorLutChannels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__PassthroughColorLutChannels_Unwrapped
  enum struct ____OVRPlugin__PassthroughColorLutChannels_Unwrapped : int32_t {
    __E_Rgb = static_cast<int32_t>(0x1),
    __E_Rgba = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PassthroughColorLutChannels_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PassthroughColorLutChannels_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughColorLutChannels(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughColorLutChannels();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Rgb value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels const Rgb;

  /// @brief Field Rgba value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels const Rgba;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughColorLutData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7830))
// CS Name: ::OVRPlugin::PassthroughColorLutData
struct CORDL_TYPE __OVRPlugin__PassthroughColorLutData {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "BufferSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Buffer", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughColorLutData(uint32_t BufferSize, void* Buffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughColorLutData();

  /// @brief Field BufferSize, offset: 0x0, size: 0x4, def value: None
  uint32_t BufferSize;

  /// @brief Field Buffer, offset: 0x8, size: 0x8, def value: None
  void* Buffer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InsightPassthroughKeyboardHandsIntensity
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7831))
// CS Name: ::OVRPlugin::InsightPassthroughKeyboardHandsIntensity
struct CORDL_TYPE __OVRPlugin__InsightPassthroughKeyboardHandsIntensity {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "LeftHandIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RightHandIntensity", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__InsightPassthroughKeyboardHandsIntensity(float_t LeftHandIntensity, float_t RightHandIntensity) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__InsightPassthroughKeyboardHandsIntensity();

  /// @brief Field LeftHandIntensity, offset: 0x0, size: 0x4, def value: None
  float_t LeftHandIntensity;

  /// @brief Field RightHandIntensity, offset: 0x4, size: 0x4, def value: None
  float_t RightHandIntensity;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__InsightPassthroughKeyboardHandsIntensity, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughCapabilityFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7832))
// CS Name: ::OVRPlugin::PassthroughCapabilityFlags
struct CORDL_TYPE __OVRPlugin__PassthroughCapabilityFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__PassthroughCapabilityFlags_Unwrapped
  enum struct ____OVRPlugin__PassthroughCapabilityFlags_Unwrapped : int32_t {
    __E_Passthrough = static_cast<int32_t>(0x1),
    __E_Color = static_cast<int32_t>(0x2),
    __E_Depth = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PassthroughCapabilityFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PassthroughCapabilityFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughCapabilityFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughCapabilityFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Passthrough value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags const Passthrough;

  /// @brief Field Color value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags const Color;

  /// @brief Field Depth value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags const Depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughCapabilityFields
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7833))
// CS Name: ::OVRPlugin::PassthroughCapabilityFields
struct CORDL_TYPE __OVRPlugin__PassthroughCapabilityFields {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__PassthroughCapabilityFields_Unwrapped
  enum struct ____OVRPlugin__PassthroughCapabilityFields_Unwrapped : int32_t {
    __E_Flags = static_cast<int32_t>(0x1),
    __E_MaxColorLutResolution = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PassthroughCapabilityFields_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PassthroughCapabilityFields_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughCapabilityFields(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughCapabilityFields();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Flags value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields const Flags;

  /// @brief Field MaxColorLutResolution value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields const MaxColorLutResolution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughCapabilities
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7832)), TypeDefinitionIndex(TypeDefinitionIndex(7833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7834))
// CS Name: ::OVRPlugin::PassthroughCapabilities
struct CORDL_TYPE __OVRPlugin__PassthroughCapabilities {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Fields", ty: "::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields", modifiers: "", def_value: None }, CppParam { name: "Flags", ty:
  // "::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags", modifiers: "", def_value: None }, CppParam { name: "MaxColorLutResolution", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughCapabilities(::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields Fields, ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags Flags,
                                                 uint32_t MaxColorLutResolution) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughCapabilities();

  /// @brief Field Fields, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields Fields;

  /// @brief Field Flags, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags Flags;

  /// @brief Field MaxColorLutResolution, offset: 0x8, size: 0x4, def value: None
  uint32_t MaxColorLutResolution;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughCapabilities, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceComponentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7835))
// CS Name: ::OVRPlugin::SpaceComponentType
struct CORDL_TYPE __OVRPlugin__SpaceComponentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SpaceComponentType_Unwrapped
  enum struct ____OVRPlugin__SpaceComponentType_Unwrapped : int32_t {
    __E_Locatable = static_cast<int32_t>(0x0),
    __E_Storable = static_cast<int32_t>(0x1),
    __E_Sharable = static_cast<int32_t>(0x2),
    __E_Bounded2D = static_cast<int32_t>(0x3),
    __E_Bounded3D = static_cast<int32_t>(0x4),
    __E_SemanticLabels = static_cast<int32_t>(0x5),
    __E_RoomLayout = static_cast<int32_t>(0x6),
    __E_SpaceContainer = static_cast<int32_t>(0x7),
    __E_TriangleMesh = static_cast<int32_t>(0x3b9ee4c8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceComponentType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceComponentType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceComponentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceComponentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Locatable value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const Locatable;

  /// @brief Field Storable value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const Storable;

  /// @brief Field Sharable value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const Sharable;

  /// @brief Field Bounded2D value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const Bounded2D;

  /// @brief Field Bounded3D value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const Bounded3D;

  /// @brief Field SemanticLabels value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const SemanticLabels;

  /// @brief Field RoomLayout value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const RoomLayout;

  /// @brief Field SpaceContainer value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const SpaceContainer;

  /// @brief Field TriangleMesh value: static_cast<int32_t>(0x3b9ee4c8)
  static ::GlobalNamespace::__OVRPlugin__SpaceComponentType const TriangleMesh;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceComponentType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceStorageLocation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7836))
// CS Name: ::OVRPlugin::SpaceStorageLocation
struct CORDL_TYPE __OVRPlugin__SpaceStorageLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SpaceStorageLocation_Unwrapped
  enum struct ____OVRPlugin__SpaceStorageLocation_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_Local = static_cast<int32_t>(0x1),
    __E_Cloud = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceStorageLocation_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceStorageLocation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceStorageLocation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceStorageLocation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation const Invalid;

  /// @brief Field Local value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation const Local;

  /// @brief Field Cloud value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation const Cloud;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceStorageLocation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceStoragePersistenceMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7837))
// CS Name: ::OVRPlugin::SpaceStoragePersistenceMode
struct CORDL_TYPE __OVRPlugin__SpaceStoragePersistenceMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SpaceStoragePersistenceMode_Unwrapped
  enum struct ____OVRPlugin__SpaceStoragePersistenceMode_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_Indefinite = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceStoragePersistenceMode_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceStoragePersistenceMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceStoragePersistenceMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceStoragePersistenceMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode const Invalid;

  /// @brief Field Indefinite value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode const Indefinite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryActionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7838))
// CS Name: ::OVRPlugin::SpaceQueryActionType
struct CORDL_TYPE __OVRPlugin__SpaceQueryActionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SpaceQueryActionType_Unwrapped
  enum struct ____OVRPlugin__SpaceQueryActionType_Unwrapped : int32_t {
    __E_Load = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceQueryActionType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceQueryActionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceQueryActionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceQueryActionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Load value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType const Load;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceQueryActionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7839))
// CS Name: ::OVRPlugin::SpaceQueryType
struct CORDL_TYPE __OVRPlugin__SpaceQueryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SpaceQueryType_Unwrapped
  enum struct ____OVRPlugin__SpaceQueryType_Unwrapped : int32_t {
    __E_Action = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceQueryType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceQueryType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceQueryType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceQueryType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Action value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SpaceQueryType const Action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceQueryType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryFilterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7840))
// CS Name: ::OVRPlugin::SpaceQueryFilterType
struct CORDL_TYPE __OVRPlugin__SpaceQueryFilterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__SpaceQueryFilterType_Unwrapped
  enum struct ____OVRPlugin__SpaceQueryFilterType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Ids = static_cast<int32_t>(0x1),
    __E_Components = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__SpaceQueryFilterType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__SpaceQueryFilterType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceQueryFilterType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceQueryFilterType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType const None;

  /// @brief Field Ids value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType const Ids;

  /// @brief Field Components value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType const Components;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpatialAnchorCreateInfo
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7699)), TypeDefinitionIndex(TypeDefinitionIndex(7726))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7841))
// CS Name: ::OVRPlugin::SpatialAnchorCreateInfo
struct CORDL_TYPE __OVRPlugin__SpatialAnchorCreateInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "BaseTracking", ty: "::GlobalNamespace::__OVRPlugin__TrackingOrigin", modifiers: "", def_value: None }, CppParam { name: "PoseInSpace", ty:
  // "::GlobalNamespace::__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpatialAnchorCreateInfo(::GlobalNamespace::__OVRPlugin__TrackingOrigin BaseTracking, ::GlobalNamespace::__OVRPlugin__Posef PoseInSpace, double_t Time) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpatialAnchorCreateInfo();

  /// @brief Field BaseTracking, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__TrackingOrigin BaseTracking;

  /// @brief Field PoseInSpace, offset: 0x4, size: 0x1c, def value: None
  ::GlobalNamespace::__OVRPlugin__Posef PoseInSpace;

  /// @brief Field Time, offset: 0x20, size: 0x8, def value: None
  double_t Time;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpatialAnchorCreateInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceFilterInfoIds
// SizeInfo { instance_size: 16, native_size: 16388, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7842))
// CS Name: ::OVRPlugin::SpaceFilterInfoIds
struct CORDL_TYPE __OVRPlugin__SpaceFilterInfoIds {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Ids", ty: "::ArrayW<::System::Guid,::Array<::System::Guid>*>", modifiers: "", def_value: None }, CppParam { name: "NumIds", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr __OVRPlugin__SpaceFilterInfoIds(::ArrayW<::System::Guid, ::Array<::System::Guid>*> Ids, int32_t NumIds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceFilterInfoIds();

  /// @brief Field Ids, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Guid, ::Array<::System::Guid>*> Ids;

  /// @brief Field NumIds, offset: 0x8, size: 0x4, def value: None
  int32_t NumIds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceFilterInfoComponents
// SizeInfo { instance_size: 16, native_size: 68, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7843))
// CS Name: ::OVRPlugin::SpaceFilterInfoComponents
struct CORDL_TYPE __OVRPlugin__SpaceFilterInfoComponents {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Components", ty: "::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType,::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>", modifiers: "",
  // def_value: None }, CppParam { name: "NumComponents", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceFilterInfoComponents(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> Components,
                                                   int32_t NumComponents) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceFilterInfoComponents();

  /// @brief Field Components, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> Components;

  /// @brief Field NumComponents, offset: 0x8, size: 0x4, def value: None
  int32_t NumComponents;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryInfo
// SizeInfo { instance_size: 64, native_size: 16488, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7838)), TypeDefinitionIndex(TypeDefinitionIndex(7836)), TypeDefinitionIndex(TypeDefinitionIndex(7842)),
// TypeDefinitionIndex(TypeDefinitionIndex(7843)), TypeDefinitionIndex(TypeDefinitionIndex(7839)), TypeDefinitionIndex(TypeDefinitionIndex(7840))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7844))
// CS Name: ::OVRPlugin::SpaceQueryInfo
struct CORDL_TYPE __OVRPlugin__SpaceQueryInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "QueryType", ty: "::GlobalNamespace::__OVRPlugin__SpaceQueryType", modifiers: "", def_value: None }, CppParam { name: "MaxQuerySpaces", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "Location", ty: "::GlobalNamespace::__OVRPlugin__SpaceStorageLocation",
  // modifiers: "", def_value: None }, CppParam { name: "ActionType", ty: "::GlobalNamespace::__OVRPlugin__SpaceQueryActionType", modifiers: "", def_value: None }, CppParam { name: "FilterType", ty:
  // "::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType", modifiers: "", def_value: None }, CppParam { name: "IdInfo", ty: "::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds", modifiers: "",
  // def_value: None }, CppParam { name: "ComponentsInfo", ty: "::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceQueryInfo(::GlobalNamespace::__OVRPlugin__SpaceQueryType QueryType, int32_t MaxQuerySpaces, double_t Timeout,
                                        ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation Location, ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType ActionType,
                                        ::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType FilterType, ::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds IdInfo,
                                        ::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents ComponentsInfo) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceQueryInfo();

  /// @brief Field QueryType, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceQueryType QueryType;

  /// @brief Field MaxQuerySpaces, offset: 0x4, size: 0x4, def value: None
  int32_t MaxQuerySpaces;

  /// @brief Field Timeout, offset: 0x8, size: 0x8, def value: None
  double_t Timeout;

  /// @brief Field Location, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation Location;

  /// @brief Field ActionType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType ActionType;

  /// @brief Field FilterType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType FilterType;

  /// @brief Field IdInfo, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds IdInfo;

  /// @brief Field ComponentsInfo, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents ComponentsInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceQueryInfo, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceQueryResult
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7845))
// CS Name: ::OVRPlugin::SpaceQueryResult
struct CORDL_TYPE __OVRPlugin__SpaceQueryResult {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceQueryResult(uint64_t space, ::System::Guid uuid) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceQueryResult();

  /// @brief Field space, offset: 0x0, size: 0x8, def value: None
  uint64_t space;

  /// @brief Field uuid, offset: 0x8, size: 0x10, def value: None
  ::System::Guid uuid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceQueryResult, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MrcActivationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7846))
// CS Name: ::OVRPlugin::Media::MrcActivationMode
struct CORDL_TYPE __OVRPlugin__Media__MrcActivationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Media__MrcActivationMode_Unwrapped
  enum struct ____OVRPlugin__Media__MrcActivationMode_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_Disabled = static_cast<int32_t>(0x1),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Media__MrcActivationMode_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Media__MrcActivationMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Media__MrcActivationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Media__MrcActivationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Automatic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode const Automatic;

  /// @brief Field Disabled value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode const Disabled;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformCameraMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7847))
// CS Name: ::OVRPlugin::Media::PlatformCameraMode
struct CORDL_TYPE __OVRPlugin__Media__PlatformCameraMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Media__PlatformCameraMode_Unwrapped
  enum struct ____OVRPlugin__Media__PlatformCameraMode_Unwrapped : int32_t {
    __E_Disabled = static_cast<int32_t>(0xffffffff),
    __E_Initialized = static_cast<int32_t>(0x0),
    __E_UserControlled = static_cast<int32_t>(0x1),
    __E_SmartNavigated = static_cast<int32_t>(0x2),
    __E_StabilizedPoV = static_cast<int32_t>(0x3),
    __E_RemoteDroneControlled = static_cast<int32_t>(0x4),
    __E_RemoteSpatialMapped = static_cast<int32_t>(0x5),
    __E_SpectatorMode = static_cast<int32_t>(0x6),
    __E_MobileMRC = static_cast<int32_t>(0x7),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Media__PlatformCameraMode_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Media__PlatformCameraMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Media__PlatformCameraMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Media__PlatformCameraMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Disabled value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const Disabled;

  /// @brief Field Initialized value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const Initialized;

  /// @brief Field UserControlled value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const UserControlled;

  /// @brief Field SmartNavigated value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const SmartNavigated;

  /// @brief Field StabilizedPoV value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const StabilizedPoV;

  /// @brief Field RemoteDroneControlled value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const RemoteDroneControlled;

  /// @brief Field RemoteSpatialMapped value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const RemoteSpatialMapped;

  /// @brief Field SpectatorMode value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const SpectatorMode;

  /// @brief Field MobileMRC value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const MobileMRC;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::InputVideoBufferType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7848))
// CS Name: ::OVRPlugin::Media::InputVideoBufferType
struct CORDL_TYPE __OVRPlugin__Media__InputVideoBufferType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__Media__InputVideoBufferType_Unwrapped
  enum struct ____OVRPlugin__Media__InputVideoBufferType_Unwrapped : int32_t {
    __E_Memory = static_cast<int32_t>(0x0),
    __E_TextureHandle = static_cast<int32_t>(0x1),
    __E_EnumSize = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Media__InputVideoBufferType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Media__InputVideoBufferType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Media__InputVideoBufferType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Media__InputVideoBufferType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Memory value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType const Memory;

  /// @brief Field TextureHandle value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType const TextureHandle;

  /// @brief Field EnumSize value: static_cast<int32_t>(0x7fffffff)
  static ::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType const EnumSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Media
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7849))
// CS Name: ::OVRPlugin::Media*
class CORDL_TYPE __OVRPlugin__Media : public ::System::Object {
public:
  // Declarations
  using InputVideoBufferType = ::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType;

  using PlatformCameraMode = ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode;

  using MrcActivationMode = ::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode;

  /// @brief Field cachedTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedTexture, put = setStaticF_cachedTexture))::UnityEngine::Texture2D* cachedTexture;

  static inline void setStaticF_cachedTexture(::UnityEngine::Texture2D* value);

  static inline ::UnityEngine::Texture2D* getStaticF_cachedTexture();

  /// @brief Method Initialize addr 0x276d698 size 0xc0 virtual false final false
  static inline bool Initialize();

  /// @brief Method Shutdown addr 0x276d7c0 size 0xc0 virtual false final false
  static inline bool Shutdown();

  /// @brief Method GetInitialized addr 0x276d8e8 size 0xd4 virtual false final false
  static inline bool GetInitialized();

  /// @brief Method Update addr 0x276da38 size 0xc0 virtual false final false
  static inline bool Update();

  /// @brief Method GetMrcActivationMode addr 0x276db60 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode GetMrcActivationMode();

  /// @brief Method SetMrcActivationMode addr 0x276dca8 size 0xc8 virtual false final false
  static inline bool SetMrcActivationMode(::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode mode);

  /// @brief Method SetPlatformInitialized addr 0x276ddec size 0xc0 virtual false final false
  static inline bool SetPlatformInitialized();

  /// @brief Method GetPlatformCameraMode addr 0x276df14 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode GetPlatformCameraMode();

  /// @brief Method SetPlatformCameraMode addr 0x276e05c size 0xc8 virtual false final false
  static inline bool SetPlatformCameraMode(::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode mode);

  /// @brief Method IsMrcEnabled addr 0x276e1a0 size 0xd0 virtual false final false
  static inline bool IsMrcEnabled();

  /// @brief Method IsMrcActivated addr 0x276e2ec size 0xd0 virtual false final false
  static inline bool IsMrcActivated();

  /// @brief Method UseMrcDebugCamera addr 0x276e438 size 0xd0 virtual false final false
  static inline bool UseMrcDebugCamera();

  /// @brief Method SetMrcInputVideoBufferType addr 0x276e584 size 0xc8 virtual false final false
  static inline bool SetMrcInputVideoBufferType(::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType videoBufferType);

  /// @brief Method GetMrcInputVideoBufferType addr 0x276e6c8 size 0xc8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType GetMrcInputVideoBufferType();

  /// @brief Method SetMrcFrameSize addr 0x276e80c size 0xd8 virtual false final false
  static inline bool SetMrcFrameSize(int32_t frameWidth, int32_t frameHeight);

  /// @brief Method GetMrcFrameSize addr 0x276e968 size 0xe0 virtual false final false
  static inline void GetMrcFrameSize(ByRef<int32_t> frameWidth, ByRef<int32_t> frameHeight);

  /// @brief Method SetMrcAudioSampleRate addr 0x276eacc size 0xc8 virtual false final false
  static inline bool SetMrcAudioSampleRate(int32_t sampleRate);

  /// @brief Method GetMrcAudioSampleRate addr 0x276ec10 size 0xc4 virtual false final false
  static inline int32_t GetMrcAudioSampleRate();

  /// @brief Method SetMrcFrameImageFlipped addr 0x276ed50 size 0xcc virtual false final false
  static inline bool SetMrcFrameImageFlipped(bool imageFlipped);

  /// @brief Method GetMrcFrameImageFlipped addr 0x276ee98 size 0xcc virtual false final false
  static inline bool GetMrcFrameImageFlipped();

  /// @brief Method EncodeMrcFrame addr 0x276efe0 size 0x354 virtual false final false
  static inline bool EncodeMrcFrame(void* textureHandle, void* fgTextureHandle, ::ArrayW<float_t, ::Array<float_t>*> audioData, int32_t audioFrames, int32_t audioChannels, double_t timestamp,
                                    double_t poseTime, ByRef<int32_t> outSyncId);

  /// @brief Method EncodeMrcFrame addr 0x276f644 size 0x4e8 virtual false final false
  static inline bool EncodeMrcFrame(::UnityEngine::RenderTexture* frame, ::ArrayW<float_t, ::Array<float_t>*> audioData, int32_t audioFrames, int32_t audioChannels, double_t timestamp,
                                    double_t poseTime, ByRef<int32_t> outSyncId);

  /// @brief Method SyncMrcFrame addr 0x276fb2c size 0xc8 virtual false final false
  static inline bool SyncMrcFrame(int32_t syncId);

  /// @brief Method SetAvailableQueueIndexVulkan addr 0x276fc70 size 0xc8 virtual false final false
  static inline bool SetAvailableQueueIndexVulkan(uint32_t queueIndexVk);

  /// @brief Method SetMrcHeadsetControllerPose addr 0x276fdb4 size 0x14c virtual false final false
  static inline bool SetMrcHeadsetControllerPose(::GlobalNamespace::__OVRPlugin__Posef headsetPose, ::GlobalNamespace::__OVRPlugin__Posef leftControllerPose,
                                                 ::GlobalNamespace::__OVRPlugin__Posef rightControllerPose);

  /// @brief Method IsCastingToRemoteClient addr 0x276ffc4 size 0xd4 virtual false final false
  static inline bool IsCastingToRemoteClient();

  static inline ::GlobalNamespace::__OVRPlugin__Media* New_ctor();

  /// @brief Method .ctor addr 0x2770114 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Media", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__Media(__OVRPlugin__Media&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Media", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__Media(__OVRPlugin__Media const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Media();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Media, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceContainerInternal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7850))
// CS Name: ::OVRPlugin::SpaceContainerInternal
struct CORDL_TYPE __OVRPlugin__SpaceContainerInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "uuidCapacityInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uuidCountOutput", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "uuids", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceContainerInternal(int32_t uuidCapacityInput, int32_t uuidCountOutput, void* uuids) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceContainerInternal();

  /// @brief Field uuidCapacityInput, offset: 0x0, size: 0x4, def value: None
  int32_t uuidCapacityInput;

  /// @brief Field uuidCountOutput, offset: 0x4, size: 0x4, def value: None
  int32_t uuidCountOutput;

  /// @brief Field uuids, offset: 0x8, size: 0x8, def value: None
  void* uuids;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceContainerInternal, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SpaceSemanticLabelInternal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7851))
// CS Name: ::OVRPlugin::SpaceSemanticLabelInternal
struct CORDL_TYPE __OVRPlugin__SpaceSemanticLabelInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "byteCapacityInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "byteCountOutput", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "labels", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SpaceSemanticLabelInternal(int32_t byteCapacityInput, int32_t byteCountOutput, void* labels) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SpaceSemanticLabelInternal();

  /// @brief Field byteCapacityInput, offset: 0x0, size: 0x4, def value: None
  int32_t byteCapacityInput;

  /// @brief Field byteCountOutput, offset: 0x4, size: 0x4, def value: None
  int32_t byteCountOutput;

  /// @brief Field labels, offset: 0x8, size: 0x8, def value: None
  void* labels;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SpaceSemanticLabelInternal, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomLayout
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7852))
// CS Name: ::OVRPlugin::RoomLayout
struct CORDL_TYPE __OVRPlugin__RoomLayout {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "floorUuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ceilingUuid", ty: "::System::Guid", modifiers: "", def_value: None },
  // CppParam { name: "wallUuids", ty: "::ArrayW<::System::Guid,::Array<::System::Guid>*>", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__RoomLayout(::System::Guid floorUuid, ::System::Guid ceilingUuid, ::ArrayW<::System::Guid, ::Array<::System::Guid>*> wallUuids) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__RoomLayout();

  /// @brief Field floorUuid, offset: 0x0, size: 0x10, def value: None
  ::System::Guid floorUuid;

  /// @brief Field ceilingUuid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ceilingUuid;

  /// @brief Field wallUuids, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Guid, ::Array<::System::Guid>*> wallUuids;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__RoomLayout, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomLayoutInternal
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7853))
// CS Name: ::OVRPlugin::RoomLayoutInternal
struct CORDL_TYPE __OVRPlugin__RoomLayoutInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "floorUuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ceilingUuid", ty: "::System::Guid", modifiers: "", def_value: None },
  // CppParam { name: "wallUuidCapacityInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wallUuidCountOutput", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "wallUuids", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__RoomLayoutInternal(::System::Guid floorUuid, ::System::Guid ceilingUuid, int32_t wallUuidCapacityInput, int32_t wallUuidCountOutput, void* wallUuids) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__RoomLayoutInternal();

  /// @brief Field floorUuid, offset: 0x0, size: 0x10, def value: None
  ::System::Guid floorUuid;

  /// @brief Field ceilingUuid, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ceilingUuid;

  /// @brief Field wallUuidCapacityInput, offset: 0x20, size: 0x4, def value: None
  int32_t wallUuidCapacityInput;

  /// @brief Field wallUuidCountOutput, offset: 0x24, size: 0x4, def value: None
  int32_t wallUuidCountOutput;

  /// @brief Field wallUuids, offset: 0x28, size: 0x8, def value: None
  void* wallUuids;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__RoomLayoutInternal, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PolygonalBoundary2DInternal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7854))
// CS Name: ::OVRPlugin::PolygonalBoundary2DInternal
struct CORDL_TYPE __OVRPlugin__PolygonalBoundary2DInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "vertexCapacityInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCountOutput", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "vertices", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PolygonalBoundary2DInternal(int32_t vertexCapacityInput, int32_t vertexCountOutput, void* vertices) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PolygonalBoundary2DInternal();

  /// @brief Field vertexCapacityInput, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCapacityInput;

  /// @brief Field vertexCountOutput, offset: 0x4, size: 0x4, def value: None
  int32_t vertexCountOutput;

  /// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
  void* vertices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PolygonalBoundary2DInternal, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SceneCaptureRequestInternal
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7855))
// CS Name: ::OVRPlugin::SceneCaptureRequestInternal
struct CORDL_TYPE __OVRPlugin__SceneCaptureRequestInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "requestByteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__SceneCaptureRequestInternal(int32_t requestByteCount, ::StringW request) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__SceneCaptureRequestInternal();

  /// @brief Field requestByteCount, offset: 0x0, size: 0x4, def value: None
  int32_t requestByteCount;

  /// @brief Field request, offset: 0x8, size: 0x8, def value: None
  ::StringW request;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__SceneCaptureRequestInternal, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PinnedArray`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3336))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7856))
// CS Name: ::OVRPlugin::PinnedArray`1<T>
struct CORDL_TYPE __OVRPlugin__PinnedArray_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void* op_Implicit_void_(::GlobalNamespace::__OVRPlugin__PinnedArray_1<T> pinnedArray);

  // Ctor Parameters [CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PinnedArray_1(::System::Runtime::InteropServices::GCHandle _handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PinnedArray_1();

  /// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle _handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TriangleMeshInternal
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7857))
// CS Name: ::OVRPlugin::TriangleMeshInternal
struct CORDL_TYPE __OVRPlugin__TriangleMeshInternal {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "vertexCapacityInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexCountOutput", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "vertices", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "indexCapacityInput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "indexCountOutput", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "void*", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__TriangleMeshInternal(int32_t vertexCapacityInput, int32_t vertexCountOutput, void* vertices, int32_t indexCapacityInput, int32_t indexCountOutput, void* indices) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__TriangleMeshInternal();

  /// @brief Field vertexCapacityInput, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCapacityInput;

  /// @brief Field vertexCountOutput, offset: 0x4, size: 0x4, def value: None
  int32_t vertexCountOutput;

  /// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
  void* vertices;

  /// @brief Field indexCapacityInput, offset: 0x10, size: 0x4, def value: None
  int32_t indexCapacityInput;

  /// @brief Field indexCountOutput, offset: 0x14, size: 0x4, def value: None
  int32_t indexCountOutput;

  /// @brief Field indices, offset: 0x18, size: 0x8, def value: None
  void* indices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__TriangleMeshInternal, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughPreferenceFields
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7858))
// CS Name: ::OVRPlugin::PassthroughPreferenceFields
struct CORDL_TYPE __OVRPlugin__PassthroughPreferenceFields {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPlugin__PassthroughPreferenceFields_Unwrapped
  enum struct ____OVRPlugin__PassthroughPreferenceFields_Unwrapped : int32_t {
    __E_Flags = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PassthroughPreferenceFields_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PassthroughPreferenceFields_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughPreferenceFields(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughPreferenceFields();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Flags value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields const Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughPreferenceFlags
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7859))
// CS Name: ::OVRPlugin::PassthroughPreferenceFlags
struct CORDL_TYPE __OVRPlugin__PassthroughPreferenceFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int64_t;

  /// @brief Nested struct ____OVRPlugin__PassthroughPreferenceFlags_Unwrapped
  enum struct ____OVRPlugin__PassthroughPreferenceFlags_Unwrapped : int64_t {
    __E_DefaultToActive = static_cast<int64_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__PassthroughPreferenceFlags_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__PassthroughPreferenceFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughPreferenceFlags(int64_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughPreferenceFlags();

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  int64_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field DefaultToActive value: static_cast<int64_t>(0x1)
  static ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags const DefaultToActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PassthroughPreferences
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7859)), TypeDefinitionIndex(TypeDefinitionIndex(7858))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7860))
// CS Name: ::OVRPlugin::PassthroughPreferences
struct CORDL_TYPE __OVRPlugin__PassthroughPreferences {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Fields", ty: "::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields", modifiers: "", def_value: None }, CppParam { name: "Flags", ty:
  // "::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__PassthroughPreferences(::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields Fields, ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags Flags) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__PassthroughPreferences();

  /// @brief Field Fields, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields Fields;

  /// @brief Field Flags, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags Flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__PassthroughPreferences, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Ktx
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7861))
// CS Name: ::OVRPlugin::Ktx*
class CORDL_TYPE __OVRPlugin__Ktx : public ::System::Object {
public:
  // Declarations
  /// @brief Method LoadKtxFromMemory addr 0x277011c size 0x174 virtual false final false
  static inline void* LoadKtxFromMemory(void* dataPtr, uint32_t length);

  /// @brief Method GetKtxTextureWidth addr 0x2770324 size 0x13c virtual false final false
  static inline uint32_t GetKtxTextureWidth(void* texture);

  /// @brief Method GetKtxTextureHeight addr 0x27704e4 size 0x13c virtual false final false
  static inline uint32_t GetKtxTextureHeight(void* texture);

  /// @brief Method TranscodeKtxTexture addr 0x27706a4 size 0x13c virtual false final false
  static inline bool TranscodeKtxTexture(void* texture, uint32_t format);

  /// @brief Method GetKtxTextureSize addr 0x2770864 size 0x13c virtual false final false
  static inline uint32_t GetKtxTextureSize(void* texture);

  /// @brief Method GetKtxTextureData addr 0x2770a24 size 0x144 virtual false final false
  static inline bool GetKtxTextureData(void* texture, void* textureData, uint32_t bufferSize);

  /// @brief Method DestroyKtxTexture addr 0x2770bfc size 0x12c virtual false final false
  static inline bool DestroyKtxTexture(void* texture);

  static inline ::GlobalNamespace::__OVRPlugin__Ktx* New_ctor();

  /// @brief Method .ctor addr 0x2770da4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Ktx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__Ktx(__OVRPlugin__Ktx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Ktx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__Ktx(__OVRPlugin__Ktx const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Ktx();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Ktx, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UnityOpenXR
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7862))
// CS Name: ::OVRPlugin::UnityOpenXR*
class CORDL_TYPE __OVRPlugin__UnityOpenXR : public ::System::Object {
public:
  // Declarations
  /// @brief Field Enabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_Enabled, put = setStaticF_Enabled)) bool Enabled;

  static inline void setStaticF_Enabled(bool value);

  static inline bool getStaticF_Enabled();

  /// @brief Method SetClientVersion addr 0x2770dac size 0xf0 virtual false final false
  static inline void SetClientVersion();

  /// @brief Method HookGetInstanceProcAddr addr 0x2770f30 size 0xc4 virtual false final false
  static inline void* HookGetInstanceProcAddr(void* func);

  /// @brief Method OnInstanceCreate addr 0x2771070 size 0xc8 virtual false final false
  static inline bool OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method OnInstanceDestroy addr 0x27711b4 size 0xc0 virtual false final false
  static inline void OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method OnSessionCreate addr 0x27712f0 size 0xc0 virtual false final false
  static inline void OnSessionCreate(uint64_t xrSession);

  /// @brief Method OnAppSpaceChange addr 0x277142c size 0xc0 virtual false final false
  static inline void OnAppSpaceChange(uint64_t xrSpace);

  /// @brief Method OnSessionStateChange addr 0x2771568 size 0xd4 virtual false final false
  static inline void OnSessionStateChange(int32_t oldState, int32_t newState);

  /// @brief Method OnSessionBegin addr 0x27716c0 size 0xc0 virtual false final false
  static inline void OnSessionBegin(uint64_t xrSession);

  /// @brief Method OnSessionEnd addr 0x27717fc size 0xc0 virtual false final false
  static inline void OnSessionEnd(uint64_t xrSession);

  /// @brief Method OnSessionExiting addr 0x2771938 size 0xc0 virtual false final false
  static inline void OnSessionExiting(uint64_t xrSession);

  /// @brief Method OnSessionDestroy addr 0x2771a74 size 0xc0 virtual false final false
  static inline void OnSessionDestroy(uint64_t xrSession);

  static inline ::GlobalNamespace::__OVRPlugin__UnityOpenXR* New_ctor();

  /// @brief Method .ctor addr 0x2771bb0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__UnityOpenXR", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__UnityOpenXR(__OVRPlugin__UnityOpenXR&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__UnityOpenXR", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__UnityOpenXR(__OVRPlugin__UnityOpenXR const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__UnityOpenXR();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__UnityOpenXR, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ResultType
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7863))
// CS Name: ::OVRPlugin::Qpl::ResultType
struct CORDL_TYPE __OVRPlugin__Qpl__ResultType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct ____OVRPlugin__Qpl__ResultType_Unwrapped
  enum struct ____OVRPlugin__Qpl__ResultType_Unwrapped : int16_t {
    __E_Success = static_cast<int16_t>(0x2),
    __E_Fail = static_cast<int16_t>(0x3),
    __E_Cancel = static_cast<int16_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPlugin__Qpl__ResultType_Unwrapped() const noexcept {
    return static_cast<____OVRPlugin__Qpl__ResultType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr __OVRPlugin__Qpl__ResultType(int16_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Qpl__ResultType();

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field Success value: static_cast<int16_t>(0x2)
  static ::GlobalNamespace::__OVRPlugin__Qpl__ResultType const Success;

  /// @brief Field Fail value: static_cast<int16_t>(0x3)
  static ::GlobalNamespace::__OVRPlugin__Qpl__ResultType const Fail;

  /// @brief Field Cancel value: static_cast<int16_t>(0x4)
  static ::GlobalNamespace::__OVRPlugin__Qpl__ResultType const Cancel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Qpl__ResultType, 0x2>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::Qpl
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7864))
// CS Name: ::OVRPlugin::Qpl*
class CORDL_TYPE __OVRPlugin__Qpl : public ::System::Object {
public:
  // Declarations
  using ResultType = ::GlobalNamespace::__OVRPlugin__Qpl__ResultType;

  /// @brief Method MarkerStart addr 0x2771bb8 size 0xdc virtual false final false
  static inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerEnd addr 0x2771d28 size 0xf0 virtual false final false
  static inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached addr 0x2771eb4 size 0xf0 virtual false final false
  static inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerAnnotation addr 0x2772040 size 0xf0 virtual false final false
  static inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method CreateMarkerHandle addr 0x27721f8 size 0xdc virtual false final false
  static inline bool CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle addr 0x2772370 size 0xc8 virtual false final false
  static inline bool DestroyMarkerHandle(int32_t nameHandle);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Qpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__Qpl(__OVRPlugin__Qpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__Qpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__Qpl(__OVRPlugin__Qpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__Qpl();

public:
  /// @brief Field DefaultInstanceKey offset 0xffffffff size 0x4
  static constexpr int32_t DefaultInstanceKey{ static_cast<int32_t>(0x0) };

  /// @brief Field AutoSetTimestampMs offset 0xffffffff size 0x8
  static constexpr int64_t AutoSetTimestampMs{ static_cast<int64_t>(0xffffffffffffffff) };

  /// @brief Field AutoSetTimeoutMs offset 0xffffffff size 0x4
  static constexpr int32_t AutoSetTimeoutMs{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__Qpl, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_0_1_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7865))
// CS Name: ::OVRPlugin::OVRP_0_1_0*
class CORDL_TYPE __OVRPlugin__OVRP_0_1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetEyeTextureSize addr 0x27724b4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Sizei ovrp_GetEyeTextureSize(::GlobalNamespace::__OVRPlugin__Eye eyeId);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_0_1_0(__OVRPlugin__OVRP_0_1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_0_1_0(__OVRPlugin__OVRP_0_1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_0_1_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_0_1_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_0_1_1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7866))
// CS Name: ::OVRPlugin::OVRP_0_1_1*
class CORDL_TYPE __OVRPlugin__OVRP_0_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetOverlayQuad2 addr 0x27725b4 size 0xe4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetOverlayQuad2(::GlobalNamespace::__OVRPlugin__Bool onTop, ::GlobalNamespace::__OVRPlugin__Bool headLocked, void* texture, void* device,
                                                                          ::GlobalNamespace::__OVRPlugin__Posef pose, ::GlobalNamespace::__OVRPlugin__Vector3f scale);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_0_1_1(__OVRPlugin__OVRP_0_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_0_1_1(__OVRPlugin__OVRP_0_1_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_0_1_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_0_1_1, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_0_1_2
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7867))
// CS Name: ::OVRPlugin::OVRP_0_1_2*
class CORDL_TYPE __OVRPlugin__OVRP_0_1_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetNodePose addr 0x277271c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetNodePose(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_SetControllerVibration addr 0x27727a0 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetControllerVibration(uint32_t controllerMask, float_t frequency, float_t amplitude);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_0_1_2(__OVRPlugin__OVRP_0_1_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_0_1_2(__OVRPlugin__OVRP_0_1_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_0_1_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_0_1_2, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_0_1_3
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7868))
// CS Name: ::OVRPlugin::OVRP_0_1_3*
class CORDL_TYPE __OVRPlugin__OVRP_0_1_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetNodeVelocity addr 0x27728b8 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetNodeVelocity(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetNodeAcceleration addr 0x277293c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetNodeAcceleration(::GlobalNamespace::__OVRPlugin__Node nodeId);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_0_1_3(__OVRPlugin__OVRP_0_1_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_1_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_0_1_3(__OVRPlugin__OVRP_0_1_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_0_1_3();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_0_1_3, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_0_5_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7869))
// CS Name: ::OVRPlugin::OVRP_0_5_0*
class CORDL_TYPE __OVRPlugin__OVRP_0_5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_0_5_0(__OVRPlugin__OVRP_0_5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_0_5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_0_5_0(__OVRPlugin__OVRP_0_5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_0_5_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_0_5_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_0_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7870))
// CS Name: ::OVRPlugin::OVRP_1_0_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetTrackingOriginType addr 0x2772ac8 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__TrackingOrigin ovrp_GetTrackingOriginType();

  /// @brief Method ovrp_SetTrackingOriginType addr 0x2772b30 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetTrackingOriginType(::GlobalNamespace::__OVRPlugin__TrackingOrigin originType);

  /// @brief Method ovrp_GetTrackingCalibratedOrigin addr 0x2772bac size 0x74 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetTrackingCalibratedOrigin();

  /// @brief Method ovrp_RecenterTrackingOrigin addr 0x2772c20 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_RecenterTrackingOrigin(uint32_t flags);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_0_0(__OVRPlugin__OVRP_1_0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_0_0(__OVRPlugin__OVRP_1_0_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_0_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_0_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_1_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7871))
// CS Name: ::OVRPlugin::OVRP_1_1_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetInitialized addr 0x2772d20 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetInitialized();

  /// @brief Method _ovrp_GetVersion addr 0x2772d88 size 0x68 virtual false final false
  static inline void* _ovrp_GetVersion();

  /// @brief Method ovrp_GetVersion addr 0x2772df0 size 0x84 virtual false final false
  static inline ::StringW ovrp_GetVersion();

  /// @brief Method _ovrp_GetNativeSDKVersion addr 0x2772e74 size 0x68 virtual false final false
  static inline void* _ovrp_GetNativeSDKVersion();

  /// @brief Method ovrp_GetNativeSDKVersion addr 0x2772edc size 0x84 virtual false final false
  static inline ::StringW ovrp_GetNativeSDKVersion();

  /// @brief Method ovrp_GetAudioOutId addr 0x2772f60 size 0x68 virtual false final false
  static inline void* ovrp_GetAudioOutId();

  /// @brief Method ovrp_GetAudioInId addr 0x2772fc8 size 0x68 virtual false final false
  static inline void* ovrp_GetAudioInId();

  /// @brief Method ovrp_GetEyeTextureScale addr 0x2773030 size 0x64 virtual false final false
  static inline float_t ovrp_GetEyeTextureScale();

  /// @brief Method ovrp_SetEyeTextureScale addr 0x2773094 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetEyeTextureScale(float_t value);

  /// @brief Method ovrp_GetTrackingOrientationSupported addr 0x2773110 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetTrackingOrientationSupported();

  /// @brief Method ovrp_GetTrackingOrientationEnabled addr 0x2773178 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetTrackingOrientationEnabled();

  /// @brief Method ovrp_SetTrackingOrientationEnabled addr 0x27731e0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetTrackingOrientationEnabled(::GlobalNamespace::__OVRPlugin__Bool value);

  /// @brief Method ovrp_GetTrackingPositionSupported addr 0x277325c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetTrackingPositionSupported();

  /// @brief Method ovrp_GetTrackingPositionEnabled addr 0x27732c4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetTrackingPositionEnabled();

  /// @brief Method ovrp_SetTrackingPositionEnabled addr 0x277332c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetTrackingPositionEnabled(::GlobalNamespace::__OVRPlugin__Bool value);

  /// @brief Method ovrp_GetNodePresent addr 0x27733a8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetNodePresent(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetNodeOrientationTracked addr 0x2773424 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetNodeOrientationTracked(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetNodePositionTracked addr 0x27734a0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetNodePositionTracked(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetNodeFrustum addr 0x277351c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Frustumf ovrp_GetNodeFrustum(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetControllerState addr 0x2773598 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState ovrp_GetControllerState(uint32_t controllerMask);

  /// @brief Method ovrp_GetSystemCpuLevel addr 0x277361c size 0x68 virtual false final false
  static inline int32_t ovrp_GetSystemCpuLevel();

  /// @brief Method ovrp_SetSystemCpuLevel addr 0x2773684 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetSystemCpuLevel(int32_t value);

  /// @brief Method ovrp_GetSystemGpuLevel addr 0x2773700 size 0x68 virtual false final false
  static inline int32_t ovrp_GetSystemGpuLevel();

  /// @brief Method ovrp_SetSystemGpuLevel addr 0x2773768 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetSystemGpuLevel(int32_t value);

  /// @brief Method ovrp_GetSystemPowerSavingMode addr 0x27737e4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetSystemPowerSavingMode();

  /// @brief Method ovrp_GetSystemDisplayFrequency addr 0x277384c size 0x64 virtual false final false
  static inline float_t ovrp_GetSystemDisplayFrequency();

  /// @brief Method ovrp_GetSystemVSyncCount addr 0x27738b0 size 0x68 virtual false final false
  static inline int32_t ovrp_GetSystemVSyncCount();

  /// @brief Method ovrp_GetSystemVolume addr 0x2773918 size 0x64 virtual false final false
  static inline float_t ovrp_GetSystemVolume();

  /// @brief Method ovrp_GetSystemBatteryStatus addr 0x277397c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BatteryStatus ovrp_GetSystemBatteryStatus();

  /// @brief Method ovrp_GetSystemBatteryLevel addr 0x27739e4 size 0x64 virtual false final false
  static inline float_t ovrp_GetSystemBatteryLevel();

  /// @brief Method ovrp_GetSystemBatteryTemperature addr 0x2773a48 size 0x64 virtual false final false
  static inline float_t ovrp_GetSystemBatteryTemperature();

  /// @brief Method _ovrp_GetSystemProductName addr 0x2773aac size 0x68 virtual false final false
  static inline void* _ovrp_GetSystemProductName();

  /// @brief Method ovrp_GetSystemProductName addr 0x2773b14 size 0x84 virtual false final false
  static inline ::StringW ovrp_GetSystemProductName();

  /// @brief Method ovrp_ShowSystemUI addr 0x2773b98 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_ShowSystemUI(::GlobalNamespace::__OVRPlugin__PlatformUI ui);

  /// @brief Method ovrp_GetAppMonoscopic addr 0x2773c14 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetAppMonoscopic();

  /// @brief Method ovrp_SetAppMonoscopic addr 0x2773c7c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetAppMonoscopic(::GlobalNamespace::__OVRPlugin__Bool value);

  /// @brief Method ovrp_GetAppHasVrFocus addr 0x2773cf8 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetAppHasVrFocus();

  /// @brief Method ovrp_GetAppShouldQuit addr 0x2773d60 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetAppShouldQuit();

  /// @brief Method ovrp_GetAppShouldRecenter addr 0x2773dc8 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetAppShouldRecenter();

  /// @brief Method _ovrp_GetAppLatencyTimings addr 0x2773e30 size 0x68 virtual false final false
  static inline void* _ovrp_GetAppLatencyTimings();

  /// @brief Method ovrp_GetAppLatencyTimings addr 0x2773e98 size 0x84 virtual false final false
  static inline ::StringW ovrp_GetAppLatencyTimings();

  /// @brief Method ovrp_GetUserPresent addr 0x2773f1c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetUserPresent();

  /// @brief Method ovrp_GetUserIPD addr 0x2773f84 size 0x64 virtual false final false
  static inline float_t ovrp_GetUserIPD();

  /// @brief Method ovrp_SetUserIPD addr 0x2773fe8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetUserIPD(float_t value);

  /// @brief Method ovrp_GetUserEyeDepth addr 0x2774064 size 0x64 virtual false final false
  static inline float_t ovrp_GetUserEyeDepth();

  /// @brief Method ovrp_SetUserEyeDepth addr 0x27740c8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetUserEyeDepth(float_t value);

  /// @brief Method ovrp_GetUserEyeHeight addr 0x2774144 size 0x64 virtual false final false
  static inline float_t ovrp_GetUserEyeHeight();

  /// @brief Method ovrp_SetUserEyeHeight addr 0x27741a8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetUserEyeHeight(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_1_0(__OVRPlugin__OVRP_1_1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_1_0(__OVRPlugin__OVRP_1_1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_1_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_1_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_2_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7872))
// CS Name: ::OVRPlugin::OVRP_1_2_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetSystemVSyncCount addr 0x27742a8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetSystemVSyncCount(int32_t vsyncCount);

  /// @brief Method ovrpi_SetTrackingCalibratedOrigin addr 0x2774324 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrpi_SetTrackingCalibratedOrigin();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_2_0(__OVRPlugin__OVRP_1_2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_2_0(__OVRPlugin__OVRP_1_2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_2_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_2_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_3_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7873))
// CS Name: ::OVRPlugin::OVRP_1_3_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetEyeOcclusionMeshEnabled addr 0x2774410 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetEyeOcclusionMeshEnabled();

  /// @brief Method ovrp_SetEyeOcclusionMeshEnabled addr 0x2774478 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetEyeOcclusionMeshEnabled(::GlobalNamespace::__OVRPlugin__Bool value);

  /// @brief Method ovrp_GetSystemHeadphonesPresent addr 0x27744f4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetSystemHeadphonesPresent();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_3_0(__OVRPlugin__OVRP_1_3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_3_0(__OVRPlugin__OVRP_1_3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_3_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_3_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_5_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7874))
// CS Name: ::OVRPlugin::OVRP_1_5_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetSystemRegion addr 0x27745e0 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SystemRegion ovrp_GetSystemRegion();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_5_0(__OVRPlugin__OVRP_1_5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_5_0(__OVRPlugin__OVRP_1_5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_5_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_5_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_6_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7875))
// CS Name: ::OVRPlugin::OVRP_1_6_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetTrackingIPDEnabled addr 0x27746cc size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetTrackingIPDEnabled();

  /// @brief Method ovrp_SetTrackingIPDEnabled addr 0x2774734 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetTrackingIPDEnabled(::GlobalNamespace::__OVRPlugin__Bool value);

  /// @brief Method ovrp_GetControllerHapticsDesc addr 0x27747b0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__HapticsDesc ovrp_GetControllerHapticsDesc(uint32_t controllerMask);

  /// @brief Method ovrp_GetControllerHapticsState addr 0x2774834 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__HapticsState ovrp_GetControllerHapticsState(uint32_t controllerMask);

  /// @brief Method ovrp_SetControllerHaptics addr 0x27748b0 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetControllerHaptics(uint32_t controllerMask, ::GlobalNamespace::__OVRPlugin__HapticsBuffer hapticsBuffer);

  /// @brief Method ovrp_SetOverlayQuad3 addr 0x2774944 size 0xec virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetOverlayQuad3(uint32_t flags, void* textureLeft, void* textureRight, void* device, ::GlobalNamespace::__OVRPlugin__Posef pose,
                                                                          ::GlobalNamespace::__OVRPlugin__Vector3f scale, int32_t layerIndex);

  /// @brief Method ovrp_GetEyeRecommendedResolutionScale addr 0x2774a30 size 0x64 virtual false final false
  static inline float_t ovrp_GetEyeRecommendedResolutionScale();

  /// @brief Method ovrp_GetAppCpuStartToGpuEndTime addr 0x2774a94 size 0x64 virtual false final false
  static inline float_t ovrp_GetAppCpuStartToGpuEndTime();

  /// @brief Method ovrp_GetSystemRecommendedMSAALevel addr 0x2774af8 size 0x68 virtual false final false
  static inline int32_t ovrp_GetSystemRecommendedMSAALevel();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_6_0(__OVRPlugin__OVRP_1_6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_6_0(__OVRPlugin__OVRP_1_6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_6_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_6_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_7_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7876))
// CS Name: ::OVRPlugin::OVRP_1_7_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetAppChromaticCorrection addr 0x2774be4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetAppChromaticCorrection();

  /// @brief Method ovrp_SetAppChromaticCorrection addr 0x2774c4c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetAppChromaticCorrection(::GlobalNamespace::__OVRPlugin__Bool value);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_7_0(__OVRPlugin__OVRP_1_7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_7_0(__OVRPlugin__OVRP_1_7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_7_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_7_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_8_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7877))
// CS Name: ::OVRPlugin::OVRP_1_8_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetBoundaryConfigured addr 0x2774d4c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetBoundaryConfigured();

  /// @brief Method ovrp_TestBoundaryNode addr 0x2774db4 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BoundaryTestResult ovrp_TestBoundaryNode(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method ovrp_TestBoundaryPoint addr 0x2774e48 size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BoundaryTestResult ovrp_TestBoundaryPoint(::GlobalNamespace::__OVRPlugin__Vector3f point, ::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method ovrp_GetBoundaryGeometry addr 0x2774ef4 size 0xa0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BoundaryGeometry ovrp_GetBoundaryGeometry(::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method ovrp_GetBoundaryDimensions addr 0x2774f94 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f ovrp_GetBoundaryDimensions(::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method ovrp_GetBoundaryVisible addr 0x2775010 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetBoundaryVisible();

  /// @brief Method ovrp_SetBoundaryVisible addr 0x2775078 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetBoundaryVisible(::GlobalNamespace::__OVRPlugin__Bool value);

  /// @brief Method ovrp_Update2 addr 0x27750f4 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_Update2(int32_t stateId, int32_t frameIndex, double_t predictionSeconds);

  /// @brief Method ovrp_GetNodePose2 addr 0x2775188 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetNodePose2(int32_t stateId, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetNodeVelocity2 addr 0x277521c size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetNodeVelocity2(int32_t stateId, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetNodeAcceleration2 addr 0x27752b0 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef ovrp_GetNodeAcceleration2(int32_t stateId, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_8_0(__OVRPlugin__OVRP_1_8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_8_0(__OVRPlugin__OVRP_1_8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_8_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_8_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_9_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7878))
// CS Name: ::OVRPlugin::OVRP_1_9_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetSystemHeadsetType addr 0x27753c8 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SystemHeadset ovrp_GetSystemHeadsetType();

  /// @brief Method ovrp_GetActiveController addr 0x2775430 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Controller ovrp_GetActiveController();

  /// @brief Method ovrp_GetConnectedControllers addr 0x2775498 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Controller ovrp_GetConnectedControllers();

  /// @brief Method ovrp_GetBoundaryGeometry2 addr 0x2775500 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetBoundaryGeometry2(::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType, void* points, ByRef<int32_t> pointsCount);

  /// @brief Method ovrp_GetAppPerfStats addr 0x2775594 size 0x88 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__AppPerfStats ovrp_GetAppPerfStats();

  /// @brief Method ovrp_ResetAppPerfStats addr 0x277561c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_ResetAppPerfStats();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_9_0(__OVRPlugin__OVRP_1_9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_9_0(__OVRPlugin__OVRP_1_9_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_9_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_9_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_10_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7879))
// CS Name: ::OVRPlugin::OVRP_1_10_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_10_0(__OVRPlugin__OVRP_1_10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_10_0(__OVRPlugin__OVRP_1_10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_10_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_10_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_11_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7880))
// CS Name: ::OVRPlugin::OVRP_1_11_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetDesiredEyeTextureFormat addr 0x277578c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_SetDesiredEyeTextureFormat(::GlobalNamespace::__OVRPlugin__EyeTextureFormat value);

  /// @brief Method ovrp_GetDesiredEyeTextureFormat addr 0x2775808 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__EyeTextureFormat ovrp_GetDesiredEyeTextureFormat();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_11_0(__OVRPlugin__OVRP_1_11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_11_0(__OVRPlugin__OVRP_1_11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_11_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_11_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_12_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7881))
// CS Name: ::OVRPlugin::OVRP_1_12_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetAppFramerate addr 0x27758f4 size 0x64 virtual false final false
  static inline float_t ovrp_GetAppFramerate();

  /// @brief Method ovrp_GetNodePoseState addr 0x2775958 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__PoseStatef ovrp_GetNodePoseState(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method ovrp_GetControllerState2 addr 0x27759ec size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState2 ovrp_GetControllerState2(uint32_t controllerMask);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_12_0(__OVRPlugin__OVRP_1_12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_12_0(__OVRPlugin__OVRP_1_12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_12_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_12_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_15_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7882))
// CS Name: ::OVRPlugin::OVRP_1_15_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_InitializeMixedReality addr 0x2775af4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_InitializeMixedReality();

  /// @brief Method ovrp_ShutdownMixedReality addr 0x2775b5c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_ShutdownMixedReality();

  /// @brief Method ovrp_GetMixedRealityInitialized addr 0x2775bc4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetMixedRealityInitialized();

  /// @brief Method ovrp_UpdateExternalCamera addr 0x2775c2c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_UpdateExternalCamera();

  /// @brief Method ovrp_GetExternalCameraCount addr 0x2775c94 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetExternalCameraCount(ByRef<int32_t> cameraCount);

  /// @brief Method ovrp_GetExternalCameraName addr 0x2775d10 size 0x110 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetExternalCameraName(int32_t cameraId, ::ArrayW<char16_t, ::Array<char16_t>*> cameraName);

  /// @brief Method ovrp_GetExternalCameraIntrinsics addr 0x2775e20 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetExternalCameraIntrinsics(int32_t cameraId, ByRef<::GlobalNamespace::__OVRPlugin__CameraIntrinsics> cameraIntrinsics);

  /// @brief Method ovrp_GetExternalCameraExtrinsics addr 0x2775ea4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetExternalCameraExtrinsics(int32_t cameraId, ByRef<::GlobalNamespace::__OVRPlugin__CameraExtrinsics> cameraExtrinsics);

  /// @brief Method ovrp_CalculateLayerDesc addr 0x2775f28 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CalculateLayerDesc(::GlobalNamespace::__OVRPlugin__OverlayShape shape, ::GlobalNamespace::__OVRPlugin__LayerLayout layout,
                                                                               ByRef<::GlobalNamespace::__OVRPlugin__Sizei> textureSize, int32_t mipLevels, int32_t sampleCount,
                                                                               ::GlobalNamespace::__OVRPlugin__EyeTextureFormat format, int32_t layerFlags,
                                                                               ByRef<::GlobalNamespace::__OVRPlugin__LayerDescInternal> layerDesc);

  /// @brief Method ovrp_EnqueueSetupLayer addr 0x2775ff4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_EnqueueSetupLayer(ByRef<::GlobalNamespace::__OVRPlugin__LayerDescInternal> desc, void* layerId);

  /// @brief Method ovrp_EnqueueDestroyLayer addr 0x2776078 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_EnqueueDestroyLayer(void* layerId);

  /// @brief Method ovrp_GetLayerTextureStageCount addr 0x27760f4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLayerTextureStageCount(int32_t layerId, ByRef<int32_t> layerTextureStageCount);

  /// @brief Method ovrp_GetLayerTexturePtr addr 0x2776178 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLayerTexturePtr(int32_t layerId, int32_t stage, ::GlobalNamespace::__OVRPlugin__Eye eyeId, ByRef<void*> textureHandle);

  /// @brief Method ovrp_EnqueueSubmitLayer addr 0x2776214 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_EnqueueSubmitLayer(uint32_t flags, void* textureLeft, void* textureRight, int32_t layerId, int32_t frameIndex,
                                                                               ByRef<::GlobalNamespace::__OVRPlugin__Posef> pose, ByRef<::GlobalNamespace::__OVRPlugin__Vector3f> scale,
                                                                               int32_t layerIndex);

  /// @brief Method ovrp_GetNodeFrustum2 addr 0x27762e0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNodeFrustum2(::GlobalNamespace::__OVRPlugin__Node nodeId, ByRef<::GlobalNamespace::__OVRPlugin__Frustumf2> nodeFrustum);

  /// @brief Method ovrp_GetEyeTextureArrayEnabled addr 0x2776364 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetEyeTextureArrayEnabled();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_15_0(__OVRPlugin__OVRP_1_15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_15_0(__OVRPlugin__OVRP_1_15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_15_0();

public:
  /// @brief Field OVRP_EXTERNAL_CAMERA_NAME_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t OVRP_EXTERNAL_CAMERA_NAME_SIZE{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_15_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_16_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7883))
// CS Name: ::OVRPlugin::OVRP_1_16_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_UpdateCameraDevices addr 0x2776450 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_UpdateCameraDevices();

  /// @brief Method ovrp_IsCameraDeviceAvailable addr 0x27764b8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_IsCameraDeviceAvailable(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice);

  /// @brief Method ovrp_SetCameraDevicePreferredColorFrameSize addr 0x2776534 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetCameraDevicePreferredColorFrameSize(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice,
                                                                                                   ::GlobalNamespace::__OVRPlugin__Sizei preferredColorFrameSize);

  /// @brief Method ovrp_OpenCameraDevice addr 0x27765b8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_OpenCameraDevice(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice);

  /// @brief Method ovrp_CloseCameraDevice addr 0x2776634 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CloseCameraDevice(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice);

  /// @brief Method ovrp_HasCameraDeviceOpened addr 0x27766b0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_HasCameraDeviceOpened(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice);

  /// @brief Method ovrp_IsCameraDeviceColorFrameAvailable addr 0x277672c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_IsCameraDeviceColorFrameAvailable(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice);

  /// @brief Method ovrp_GetCameraDeviceColorFrameSize addr 0x27767a8 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetCameraDeviceColorFrameSize(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice,
                                                                                          ByRef<::GlobalNamespace::__OVRPlugin__Sizei> colorFrameSize);

  /// @brief Method ovrp_GetCameraDeviceColorFrameBgraPixels addr 0x277682c size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetCameraDeviceColorFrameBgraPixels(::GlobalNamespace::__OVRPlugin__CameraDevice cameraDevice, ByRef<void*> colorFrameBgraPixels,
                                                                                                ByRef<int32_t> colorFrameRowPitch);

  /// @brief Method ovrp_GetControllerState4 addr 0x27768c0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetControllerState4(uint32_t controllerMask, ByRef<::GlobalNamespace::__OVRPlugin__ControllerState4> controllerState);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_16_0(__OVRPlugin__OVRP_1_16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_16_0(__OVRPlugin__OVRP_1_16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_16_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_16_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_17_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7884))
// CS Name: ::OVRPlugin::OVRP_1_17_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_17_0(__OVRPlugin__OVRP_1_17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_17_0(__OVRPlugin__OVRP_1_17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_17_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_17_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_18_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7885))
// CS Name: ::OVRPlugin::OVRP_1_18_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetHandNodePoseStateLatency addr 0x2776a4c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetHandNodePoseStateLatency(double_t latencyInSeconds);

  /// @brief Method ovrp_GetHandNodePoseStateLatency addr 0x2776ac8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetHandNodePoseStateLatency(ByRef<double_t> latencyInSeconds);

  /// @brief Method ovrp_GetAppHasInputFocus addr 0x2776b44 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetAppHasInputFocus(ByRef<::GlobalNamespace::__OVRPlugin__Bool> appHasInputFocus);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_18_0(__OVRPlugin__OVRP_1_18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_18_0(__OVRPlugin__OVRP_1_18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_18_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_18_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_19_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7886))
// CS Name: ::OVRPlugin::OVRP_1_19_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_19_0(__OVRPlugin__OVRP_1_19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_19_0(__OVRPlugin__OVRP_1_19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_19_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_19_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_21_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7887))
// CS Name: ::OVRPlugin::OVRP_1_21_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetTiledMultiResSupported addr 0x2776cc8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetTiledMultiResSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> foveationSupported);

  /// @brief Method ovrp_GetTiledMultiResLevel addr 0x2776d44 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetTiledMultiResLevel(ByRef<::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel> level);

  /// @brief Method ovrp_SetTiledMultiResLevel addr 0x2776dc0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetTiledMultiResLevel(::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel level);

  /// @brief Method ovrp_GetGPUUtilSupported addr 0x2776e3c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetGPUUtilSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> gpuUtilSupported);

  /// @brief Method ovrp_GetGPUUtilLevel addr 0x2776eb8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetGPUUtilLevel(ByRef<float_t> gpuUtil);

  /// @brief Method ovrp_GetSystemDisplayFrequency2 addr 0x2776f34 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSystemDisplayFrequency2(ByRef<float_t> systemDisplayFrequency);

  /// @brief Method ovrp_GetSystemDisplayAvailableFrequencies addr 0x2776fb0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSystemDisplayAvailableFrequencies(void* systemDisplayAvailableFrequencies, ByRef<int32_t> numFrequencies);

  /// @brief Method ovrp_SetSystemDisplayFrequency addr 0x2777034 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetSystemDisplayFrequency(float_t requestedFrequency);

  /// @brief Method ovrp_GetAppAsymmetricFov addr 0x27770b0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetAppAsymmetricFov(ByRef<::GlobalNamespace::__OVRPlugin__Bool> useAsymmetricFov);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_21_0(__OVRPlugin__OVRP_1_21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_21_0(__OVRPlugin__OVRP_1_21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_21_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_21_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_28_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7888))
// CS Name: ::OVRPlugin::OVRP_1_28_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetDominantHand addr 0x27771b0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetDominantHand(ByRef<::GlobalNamespace::__OVRPlugin__Handedness> dominantHand);

  /// @brief Method ovrp_SendEvent addr 0x277722c size 0xb4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SendEvent(::StringW name, ::StringW param);

  /// @brief Method ovrp_EnqueueSetupLayer2 addr 0x27772e0 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_EnqueueSetupLayer2(ByRef<::GlobalNamespace::__OVRPlugin__LayerDescInternal> desc, int32_t compositionDepth, void* layerId);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_28_0(__OVRPlugin__OVRP_1_28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_28_0(__OVRPlugin__OVRP_1_28_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_28_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_28_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_29_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7889))
// CS Name: ::OVRPlugin::OVRP_1_29_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetLayerAndroidSurfaceObject addr 0x27773f8 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLayerAndroidSurfaceObject(int32_t layerId, ByRef<void*> surfaceObject);

  /// @brief Method ovrp_SetHeadPoseModifier addr 0x277747c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetHeadPoseModifier(ByRef<::GlobalNamespace::__OVRPlugin__Quatf> relativeRotation,
                                                                                ByRef<::GlobalNamespace::__OVRPlugin__Vector3f> relativeTranslation);

  /// @brief Method ovrp_GetHeadPoseModifier addr 0x2777500 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetHeadPoseModifier(ByRef<::GlobalNamespace::__OVRPlugin__Quatf> relativeRotation,
                                                                                ByRef<::GlobalNamespace::__OVRPlugin__Vector3f> relativeTranslation);

  /// @brief Method ovrp_GetNodePoseStateRaw addr 0x2777584 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNodePoseStateRaw(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex, ::GlobalNamespace::__OVRPlugin__Node nodeId,
                                                                                ByRef<::GlobalNamespace::__OVRPlugin__PoseStatef> nodePoseState);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_29_0(__OVRPlugin__OVRP_1_29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_29_0(__OVRPlugin__OVRP_1_29_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_29_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_29_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_30_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7890))
// CS Name: ::OVRPlugin::OVRP_1_30_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetCurrentTrackingTransformPose addr 0x27776a4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetCurrentTrackingTransformPose(ByRef<::GlobalNamespace::__OVRPlugin__Posef> trackingTransformPose);

  /// @brief Method ovrp_GetTrackingTransformRawPose addr 0x2777720 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetTrackingTransformRawPose(ByRef<::GlobalNamespace::__OVRPlugin__Posef> trackingTransformRawPose);

  /// @brief Method ovrp_SendEvent2 addr 0x277779c size 0xd8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SendEvent2(::StringW name, ::StringW param, ::StringW source);

  /// @brief Method ovrp_IsPerfMetricsSupported addr 0x2777874 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_IsPerfMetricsSupported(::GlobalNamespace::__OVRPlugin__PerfMetrics perfMetrics, ByRef<::GlobalNamespace::__OVRPlugin__Bool> isSupported);

  /// @brief Method ovrp_GetPerfMetricsFloat addr 0x27778f8 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetPerfMetricsFloat(::GlobalNamespace::__OVRPlugin__PerfMetrics perfMetrics, ByRef<float_t> value);

  /// @brief Method ovrp_GetPerfMetricsInt addr 0x277797c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetPerfMetricsInt(::GlobalNamespace::__OVRPlugin__PerfMetrics perfMetrics, ByRef<int32_t> value);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_30_0(__OVRPlugin__OVRP_1_30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_30_0(__OVRPlugin__OVRP_1_30_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_30_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_30_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_31_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7891))
// CS Name: ::OVRPlugin::OVRP_1_31_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetTimeInSeconds addr 0x2777a84 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetTimeInSeconds(ByRef<double_t> value);

  /// @brief Method ovrp_SetColorScaleAndOffset addr 0x2777b00 size 0xdc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset,
                                                                                   ::GlobalNamespace::__OVRPlugin__Bool applyToAllLayers);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_31_0(__OVRPlugin__OVRP_1_31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_31_0(__OVRPlugin__OVRP_1_31_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_31_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_31_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_32_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7892))
// CS Name: ::OVRPlugin::OVRP_1_32_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_AddCustomMetadata addr 0x2777c60 size 0xb4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_AddCustomMetadata(::StringW name, ::StringW param);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_32_0(__OVRPlugin__OVRP_1_32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_32_0(__OVRPlugin__OVRP_1_32_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_32_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_32_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_34_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7893))
// CS Name: ::OVRPlugin::OVRP_1_34_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_EnqueueSubmitLayer2 addr 0x2777d98 size 0xfc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_EnqueueSubmitLayer2(uint32_t flags, void* textureLeft, void* textureRight, int32_t layerId, int32_t frameIndex,
                                                                                ByRef<::GlobalNamespace::__OVRPlugin__Posef> pose, ByRef<::GlobalNamespace::__OVRPlugin__Vector3f> scale,
                                                                                int32_t layerIndex, ::GlobalNamespace::__OVRPlugin__Bool overrideTextureRectMatrix,
                                                                                ByRef<::GlobalNamespace::__OVRPlugin__TextureRectMatrixf> textureRectMatrix,
                                                                                ::GlobalNamespace::__OVRPlugin__Bool overridePerLayerColorScaleAndOffset, ByRef<::UnityEngine::Vector4> colorScale,
                                                                                ByRef<::UnityEngine::Vector4> colorOffset);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_34_0(__OVRPlugin__OVRP_1_34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_34_0(__OVRPlugin__OVRP_1_34_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_34_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_34_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_35_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7894))
// CS Name: ::OVRPlugin::OVRP_1_35_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_35_0(__OVRPlugin__OVRP_1_35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_35_0(__OVRPlugin__OVRP_1_35_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_35_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_35_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_36_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7895))
// CS Name: ::OVRPlugin::OVRP_1_36_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_36_0(__OVRPlugin__OVRP_1_36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_36_0(__OVRPlugin__OVRP_1_36_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_36_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_36_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_37_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7896))
// CS Name: ::OVRPlugin::OVRP_1_37_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_37_0(__OVRPlugin__OVRP_1_37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_37_0(__OVRPlugin__OVRP_1_37_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_37_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_37_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_38_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7897))
// CS Name: ::OVRPlugin::OVRP_1_38_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_38_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetTrackingTransformRelativePose addr 0x27780a4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetTrackingTransformRelativePose(ByRef<::GlobalNamespace::__OVRPlugin__Posef> trackingTransformRelativePose,
                                                                                             ::GlobalNamespace::__OVRPlugin__TrackingOrigin trackingOrigin);

  /// @brief Method ovrp_Media_Initialize addr 0x276d758 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_Initialize();

  /// @brief Method ovrp_Media_Shutdown addr 0x276d880 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_Shutdown();

  /// @brief Method ovrp_Media_GetInitialized addr 0x276d9bc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetInitialized(ByRef<::GlobalNamespace::__OVRPlugin__Bool> initialized);

  /// @brief Method ovrp_Media_Update addr 0x276daf8 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_Update();

  /// @brief Method ovrp_Media_GetMrcActivationMode addr 0x276dc2c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetMrcActivationMode(ByRef<::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode> activationMode);

  /// @brief Method ovrp_Media_SetMrcActivationMode addr 0x276dd70 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetMrcActivationMode(::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode activationMode);

  /// @brief Method ovrp_Media_IsMrcEnabled addr 0x276e270 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_IsMrcEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> mrcEnabled);

  /// @brief Method ovrp_Media_IsMrcActivated addr 0x276e3bc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_IsMrcActivated(ByRef<::GlobalNamespace::__OVRPlugin__Bool> mrcActivated);

  /// @brief Method ovrp_Media_UseMrcDebugCamera addr 0x276e508 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_UseMrcDebugCamera(ByRef<::GlobalNamespace::__OVRPlugin__Bool> useMrcDebugCamera);

  /// @brief Method ovrp_Media_SetMrcInputVideoBufferType addr 0x276e64c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetMrcInputVideoBufferType(::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType inputVideoBufferType);

  /// @brief Method ovrp_Media_GetMrcInputVideoBufferType addr 0x276e790 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetMrcInputVideoBufferType(ByRef<::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType> inputVideoBufferType);

  /// @brief Method ovrp_Media_SetMrcFrameSize addr 0x276e8e4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetMrcFrameSize(int32_t frameWidth, int32_t frameHeight);

  /// @brief Method ovrp_Media_GetMrcFrameSize addr 0x276ea48 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetMrcFrameSize(ByRef<int32_t> frameWidth, ByRef<int32_t> frameHeight);

  /// @brief Method ovrp_Media_SetMrcAudioSampleRate addr 0x276eb94 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetMrcAudioSampleRate(int32_t sampleRate);

  /// @brief Method ovrp_Media_GetMrcAudioSampleRate addr 0x276ecd4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetMrcAudioSampleRate(ByRef<int32_t> sampleRate);

  /// @brief Method ovrp_Media_SetMrcFrameImageFlipped addr 0x276ee1c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetMrcFrameImageFlipped(::GlobalNamespace::__OVRPlugin__Bool flipped);

  /// @brief Method ovrp_Media_GetMrcFrameImageFlipped addr 0x276ef64 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetMrcFrameImageFlipped(ByRef<::GlobalNamespace::__OVRPlugin__Bool> flipped);

  /// @brief Method ovrp_Media_EncodeMrcFrame addr 0x276f3f8 size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_EncodeMrcFrame(void* rawBuffer, void* audioDataPtr, int32_t audioDataLen, int32_t audioChannels, double_t timestamp,
                                                                                 ByRef<int32_t> outSyncId);

  /// @brief Method ovrp_Media_EncodeMrcFrameWithDualTextures addr 0x276f580 size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_EncodeMrcFrameWithDualTextures(void* backgroundTextureHandle, void* foregroundTextureHandle, void* audioData, int32_t audioDataLen,
                                                                                                 int32_t audioChannels, double_t timestamp, ByRef<int32_t> outSyncId);

  /// @brief Method ovrp_Media_SyncMrcFrame addr 0x276fbf4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SyncMrcFrame(int32_t syncId);

  /// @brief Method ovrp_SetDeveloperMode addr 0x2778128 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetDeveloperMode(::GlobalNamespace::__OVRPlugin__Bool active);

  /// @brief Method ovrp_GetNodeOrientationValid addr 0x27781a4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNodeOrientationValid(::GlobalNamespace::__OVRPlugin__Node nodeId, ByRef<::GlobalNamespace::__OVRPlugin__Bool> nodeOrientationValid);

  /// @brief Method ovrp_GetNodePositionValid addr 0x2778228 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNodePositionValid(::GlobalNamespace::__OVRPlugin__Node nodeId, ByRef<::GlobalNamespace::__OVRPlugin__Bool> nodePositionValid);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_38_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_38_0(__OVRPlugin__OVRP_1_38_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_38_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_38_0(__OVRPlugin__OVRP_1_38_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_38_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_38_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_39_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7898))
// CS Name: ::OVRPlugin::OVRP_1_39_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_39_0(__OVRPlugin__OVRP_1_39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_39_0(__OVRPlugin__OVRP_1_39_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_39_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_39_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_40_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7899))
// CS Name: ::OVRPlugin::OVRP_1_40_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_40_0(__OVRPlugin__OVRP_1_40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_40_0(__OVRPlugin__OVRP_1_40_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_40_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_40_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_41_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7900))
// CS Name: ::OVRPlugin::OVRP_1_41_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_41_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_41_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_41_0(__OVRPlugin__OVRP_1_41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_41_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_41_0(__OVRPlugin__OVRP_1_41_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_41_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_41_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_42_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7901))
// CS Name: ::OVRPlugin::OVRP_1_42_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_42_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetAdaptiveGpuPerformanceScale2 addr 0x27784bc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetAdaptiveGpuPerformanceScale2(ByRef<float_t> adaptiveGpuPerformanceScale);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_42_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_42_0(__OVRPlugin__OVRP_1_42_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_42_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_42_0(__OVRPlugin__OVRP_1_42_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_42_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_42_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_43_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7902))
// CS Name: ::OVRPlugin::OVRP_1_43_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_43_0(__OVRPlugin__OVRP_1_43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_43_0(__OVRPlugin__OVRP_1_43_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_43_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_43_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_44_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7903))
// CS Name: ::OVRPlugin::OVRP_1_44_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_44_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetHandTrackingEnabled addr 0x2778640 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetHandTrackingEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> handTrackingEnabled);

  /// @brief Method ovrp_GetHandState addr 0x27786bc size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetHandState(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Hand hand,
                                                                         ByRef<::GlobalNamespace::__OVRPlugin__HandStateInternal> handState);

  /// @brief Method ovrp_GetSkeleton addr 0x2778750 size 0xc0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSkeleton(::GlobalNamespace::__OVRPlugin__SkeletonType skeletonType, ByRef<::GlobalNamespace::__OVRPlugin__Skeleton> skeleton);

  /// @brief Method ovrp_GetMesh addr 0x2778810 size 0x80 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetMesh(::GlobalNamespace::__OVRPlugin__MeshType meshType, void* meshPtr);

  /// @brief Method ovrp_OverrideExternalCameraFov addr 0x2778890 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_OverrideExternalCameraFov(int32_t cameraId, ::GlobalNamespace::__OVRPlugin__Bool useOverriddenFov,
                                                                                      ByRef<::GlobalNamespace::__OVRPlugin__Fovf> fov);

  /// @brief Method ovrp_GetUseOverriddenExternalCameraFov addr 0x2778924 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetUseOverriddenExternalCameraFov(int32_t cameraId, ByRef<::GlobalNamespace::__OVRPlugin__Bool> useOverriddenFov);

  /// @brief Method ovrp_OverrideExternalCameraStaticPose addr 0x27789a8 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_OverrideExternalCameraStaticPose(int32_t cameraId, ::GlobalNamespace::__OVRPlugin__Bool useOverriddenPose,
                                                                                             ByRef<::GlobalNamespace::__OVRPlugin__Posef> poseInStageOrigin);

  /// @brief Method ovrp_GetUseOverriddenExternalCameraStaticPose addr 0x2778a3c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetUseOverriddenExternalCameraStaticPose(int32_t cameraId, ByRef<::GlobalNamespace::__OVRPlugin__Bool> useOverriddenStaticPose);

  /// @brief Method ovrp_ResetDefaultExternalCamera addr 0x2778ac0 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_ResetDefaultExternalCamera();

  /// @brief Method ovrp_SetDefaultExternalCamera addr 0x2778b28 size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetDefaultExternalCamera(::StringW cameraName, ByRef<::GlobalNamespace::__OVRPlugin__CameraIntrinsics> cameraIntrinsics,
                                                                                     ByRef<::GlobalNamespace::__OVRPlugin__CameraExtrinsics> cameraExtrinsics);

  /// @brief Method ovrp_GetLocalTrackingSpaceRecenterCount addr 0x2778bd4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLocalTrackingSpaceRecenterCount(ByRef<int32_t> recenterCount);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_44_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_44_0(__OVRPlugin__OVRP_1_44_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_44_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_44_0(__OVRPlugin__OVRP_1_44_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_44_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_44_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_45_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7904))
// CS Name: ::OVRPlugin::OVRP_1_45_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetSystemHmd3DofModeEnabled addr 0x2778cd4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSystemHmd3DofModeEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> enabled);

  /// @brief Method ovrp_Media_SetAvailableQueueIndexVulkan addr 0x276fd38 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetAvailableQueueIndexVulkan(uint32_t queueIndexVk);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_45_0(__OVRPlugin__OVRP_1_45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_45_0(__OVRPlugin__OVRP_1_45_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_45_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_45_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_46_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7905))
// CS Name: ::OVRPlugin::OVRP_1_46_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_46_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetTiledMultiResDynamic addr 0x2778dd4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetTiledMultiResDynamic(ByRef<::GlobalNamespace::__OVRPlugin__Bool> isDynamic);

  /// @brief Method ovrp_SetTiledMultiResDynamic addr 0x2778e50 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetTiledMultiResDynamic(::GlobalNamespace::__OVRPlugin__Bool isDynamic);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_46_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_46_0(__OVRPlugin__OVRP_1_46_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_46_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_46_0(__OVRPlugin__OVRP_1_46_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_46_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_46_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_47_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7906))
// CS Name: ::OVRPlugin::OVRP_1_47_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_47_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_47_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_47_0(__OVRPlugin__OVRP_1_47_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_47_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_47_0(__OVRPlugin__OVRP_1_47_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_47_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_47_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_48_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7907))
// CS Name: ::OVRPlugin::OVRP_1_48_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetExternalCameraProperties addr 0x2778fd4 size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetExternalCameraProperties(::StringW cameraName, ByRef<::GlobalNamespace::__OVRPlugin__CameraIntrinsics> cameraIntrinsics,
                                                                                        ByRef<::GlobalNamespace::__OVRPlugin__CameraExtrinsics> cameraExtrinsics);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_48_0(__OVRPlugin__OVRP_1_48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_48_0(__OVRPlugin__OVRP_1_48_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_48_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_48_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_49_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7908))
// CS Name: ::OVRPlugin::OVRP_1_49_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetClientColorDesc addr 0x2779104 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetClientColorDesc(::GlobalNamespace::__OVRPlugin__ColorSpace colorSpace);

  /// @brief Method ovrp_GetHmdColorDesc addr 0x2779180 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetHmdColorDesc(ByRef<::GlobalNamespace::__OVRPlugin__ColorSpace> colorSpace);

  /// @brief Method ovrp_Media_EncodeMrcFrameWithPoseTime addr 0x276f334 size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_EncodeMrcFrameWithPoseTime(void* rawBuffer, void* audioDataPtr, int32_t audioDataLen, int32_t audioChannels, double_t timestamp,
                                                                                             double_t poseTime, ByRef<int32_t> outSyncId);

  /// @brief Method ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime addr 0x276f4b4 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(void* backgroundTextureHandle, void* foregroundTextureHandle, void* audioData,
                                                                                                         int32_t audioDataLen, int32_t audioChannels, double_t timestamp, double_t poseTime,
                                                                                                         ByRef<int32_t> outSyncId);

  /// @brief Method ovrp_Media_SetHeadsetControllerPose addr 0x276ff00 size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetHeadsetControllerPose(::GlobalNamespace::__OVRPlugin__Posef headsetPose, ::GlobalNamespace::__OVRPlugin__Posef leftControllerPose,
                                                                                           ::GlobalNamespace::__OVRPlugin__Posef rightControllerPose);

  /// @brief Method ovrp_Media_EnumerateCameraAnchorHandles addr 0x27791fc size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_EnumerateCameraAnchorHandles(ByRef<int32_t> anchorCount, ByRef<void*> CameraAnchorHandle);

  /// @brief Method ovrp_Media_GetCurrentCameraAnchorHandle addr 0x2779280 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetCurrentCameraAnchorHandle(ByRef<void*> anchorHandle);

  /// @brief Method ovrp_Media_GetCameraAnchorName addr 0x27792fc size 0x110 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetCameraAnchorName(void* anchorHandle, ::ArrayW<char16_t, ::Array<char16_t>*> cameraName);

  /// @brief Method ovrp_Media_GetCameraAnchorHandle addr 0x277940c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetCameraAnchorHandle(void* anchorName, ByRef<void*> anchorHandle);

  /// @brief Method ovrp_Media_GetCameraAnchorType addr 0x2779490 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetCameraAnchorType(void* anchorHandle, ByRef<::GlobalNamespace::__OVRPlugin__CameraAnchorType> anchorType);

  /// @brief Method ovrp_Media_CreateCustomCameraAnchor addr 0x2779514 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_CreateCustomCameraAnchor(void* anchorName, ByRef<void*> anchorHandle);

  /// @brief Method ovrp_Media_DestroyCustomCameraAnchor addr 0x2779598 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_DestroyCustomCameraAnchor(void* anchorHandle);

  /// @brief Method ovrp_Media_GetCustomCameraAnchorPose addr 0x2779614 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetCustomCameraAnchorPose(void* anchorHandle, ByRef<::GlobalNamespace::__OVRPlugin__Posef> pose);

  /// @brief Method ovrp_Media_SetCustomCameraAnchorPose addr 0x2779698 size 0x90 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetCustomCameraAnchorPose(void* anchorHandle, ::GlobalNamespace::__OVRPlugin__Posef pose);

  /// @brief Method ovrp_Media_GetCameraMinMaxDistance addr 0x2779728 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetCameraMinMaxDistance(void* anchorHandle, ByRef<double_t> minDistance, ByRef<double_t> maxDistance);

  /// @brief Method ovrp_Media_SetCameraMinMaxDistance addr 0x27797bc size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetCameraMinMaxDistance(void* anchorHandle, double_t minDistance, double_t maxDistance);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_49_0(__OVRPlugin__OVRP_1_49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_49_0(__OVRPlugin__OVRP_1_49_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_49_0();

public:
  /// @brief Field OVRP_ANCHOR_NAME_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t OVRP_ANCHOR_NAME_SIZE{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_49_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_50_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7909))
// CS Name: ::OVRPlugin::OVRP_1_50_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_50_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_50_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_50_0(__OVRPlugin__OVRP_1_50_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_50_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_50_0(__OVRPlugin__OVRP_1_50_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_50_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_50_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_51_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7910))
// CS Name: ::OVRPlugin::OVRP_1_51_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_51_0(__OVRPlugin__OVRP_1_51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_51_0(__OVRPlugin__OVRP_1_51_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_51_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_51_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_52_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7911))
// CS Name: ::OVRPlugin::OVRP_1_52_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_52_0(__OVRPlugin__OVRP_1_52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_52_0(__OVRPlugin__OVRP_1_52_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_52_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_52_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_53_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7912))
// CS Name: ::OVRPlugin::OVRP_1_53_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_53_0(__OVRPlugin__OVRP_1_53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_53_0(__OVRPlugin__OVRP_1_53_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_53_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_53_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_54_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7913))
// CS Name: ::OVRPlugin::OVRP_1_54_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_Media_SetPlatformInitialized addr 0x276deac size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetPlatformInitialized();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_54_0(__OVRPlugin__OVRP_1_54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_54_0(__OVRPlugin__OVRP_1_54_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_54_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_54_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_55_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7914))
// CS Name: ::OVRPlugin::OVRP_1_55_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_55_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetSkeleton2 addr 0x2779b68 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSkeleton2(::GlobalNamespace::__OVRPlugin__SkeletonType skeletonType, ByRef<::GlobalNamespace::__OVRPlugin__Skeleton2Internal> skeleton);

  /// @brief Method ovrp_PollEvent addr 0x2779bec size 0xe0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_PollEvent(ByRef<::GlobalNamespace::__OVRPlugin__EventDataBuffer> eventDataBuffer);

  /// @brief Method ovrp_GetNativeXrApiType addr 0x2779ccc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNativeXrApiType(ByRef<::GlobalNamespace::__OVRPlugin__XrApi> xrApi);

  /// @brief Method ovrp_GetNativeOpenXRHandles addr 0x2779d48 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNativeOpenXRHandles(ByRef<uint64_t> xrInstance, ByRef<uint64_t> xrSession);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_55_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_55_0(__OVRPlugin__OVRP_1_55_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_55_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_55_0(__OVRPlugin__OVRP_1_55_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_55_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_55_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_55_1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7915))
// CS Name: ::OVRPlugin::OVRP_1_55_1*
class CORDL_TYPE __OVRPlugin__OVRP_1_55_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_PollEvent2 addr 0x2779e50 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_PollEvent2(ByRef<::GlobalNamespace::__OVRPlugin__EventType> eventType, ByRef<void*> eventData);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_55_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_55_1(__OVRPlugin__OVRP_1_55_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_55_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_55_1(__OVRPlugin__OVRP_1_55_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_55_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_55_1, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_56_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7916))
// CS Name: ::OVRPlugin::OVRP_1_56_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_56_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_56_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_56_0(__OVRPlugin__OVRP_1_56_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_56_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_56_0(__OVRPlugin__OVRP_1_56_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_56_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_56_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_57_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7917))
// CS Name: ::OVRPlugin::OVRP_1_57_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_57_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_Media_GetPlatformCameraMode addr 0x276dfe0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_GetPlatformCameraMode(ByRef<::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode> platformCameraMode);

  /// @brief Method ovrp_Media_SetPlatformCameraMode addr 0x276e124 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_SetPlatformCameraMode(::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode platformCameraMode);

  /// @brief Method ovrp_SetEyeFovPremultipliedAlphaMode addr 0x2779fdc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetEyeFovPremultipliedAlphaMode(::GlobalNamespace::__OVRPlugin__Bool enabled);

  /// @brief Method ovrp_GetEyeFovPremultipliedAlphaMode addr 0x277a058 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetEyeFovPremultipliedAlphaMode(ByRef<::GlobalNamespace::__OVRPlugin__Bool> enabled);

  /// @brief Method ovrp_SetKeyboardOverlayUV addr 0x277a0d4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetKeyboardOverlayUV(::GlobalNamespace::__OVRPlugin__Vector2f uv);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_57_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_57_0(__OVRPlugin__OVRP_1_57_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_57_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_57_0(__OVRPlugin__OVRP_1_57_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_57_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_57_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_58_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7918))
// CS Name: ::OVRPlugin::OVRP_1_58_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_58_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_58_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_58_0(__OVRPlugin__OVRP_1_58_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_58_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_58_0(__OVRPlugin__OVRP_1_58_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_58_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_58_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_59_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7919))
// CS Name: ::OVRPlugin::OVRP_1_59_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_59_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_59_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_59_0(__OVRPlugin__OVRP_1_59_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_59_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_59_0(__OVRPlugin__OVRP_1_59_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_59_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_59_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_60_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7920))
// CS Name: ::OVRPlugin::OVRP_1_60_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_60_0(__OVRPlugin__OVRP_1_60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_60_0(__OVRPlugin__OVRP_1_60_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_60_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_60_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_61_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7921))
// CS Name: ::OVRPlugin::OVRP_1_61_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_61_0(__OVRPlugin__OVRP_1_61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_61_0(__OVRPlugin__OVRP_1_61_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_61_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_61_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_62_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7922))
// CS Name: ::OVRPlugin::OVRP_1_62_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_62_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_62_0(__OVRPlugin__OVRP_1_62_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_62_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_62_0(__OVRPlugin__OVRP_1_62_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_62_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_62_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_63_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7923))
// CS Name: ::OVRPlugin::OVRP_1_63_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_63_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_InitializeInsightPassthrough addr 0x277a470 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_InitializeInsightPassthrough();

  /// @brief Method ovrp_ShutdownInsightPassthrough addr 0x277a4d8 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_ShutdownInsightPassthrough();

  /// @brief Method ovrp_GetInsightPassthroughInitialized addr 0x277a540 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ovrp_GetInsightPassthroughInitialized();

  /// @brief Method ovrp_SetInsightPassthroughStyle addr 0x277a5a8 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetInsightPassthroughStyle(int32_t layerId, ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle style);

  /// @brief Method ovrp_CreateInsightTriangleMesh addr 0x277a63c size 0xb4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CreateInsightTriangleMesh(int32_t layerId, void* vertices, int32_t vertexCount, void* triangles, int32_t triangleCount,
                                                                                      ByRef<uint64_t> meshHandle);

  /// @brief Method ovrp_DestroyInsightTriangleMesh addr 0x277a6f0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DestroyInsightTriangleMesh(uint64_t meshHandle);

  /// @brief Method ovrp_AddInsightPassthroughSurfaceGeometry addr 0x277a76c size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_AddInsightPassthroughSurfaceGeometry(int32_t layerId, uint64_t meshHandle, ::UnityEngine::Matrix4x4 T_world_model,
                                                                                                 ByRef<uint64_t> geometryInstanceHandle);

  /// @brief Method ovrp_DestroyInsightPassthroughGeometryInstance addr 0x277a818 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DestroyInsightPassthroughGeometryInstance(uint64_t geometryInstanceHandle);

  /// @brief Method ovrp_UpdateInsightPassthroughGeometryTransform addr 0x277a894 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_UpdateInsightPassthroughGeometryTransform(uint64_t geometryInstanceHandle, ::UnityEngine::Matrix4x4 T_world_model);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_63_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_63_0(__OVRPlugin__OVRP_1_63_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_63_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_63_0(__OVRPlugin__OVRP_1_63_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_63_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_63_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_64_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7924))
// CS Name: ::OVRPlugin::OVRP_1_64_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_64_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_LocateSpace addr 0x277a9ac size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_LocateSpace(ByRef<::GlobalNamespace::__OVRPlugin__Posef> location, ByRef<uint64_t> space,
                                                                        ::GlobalNamespace::__OVRPlugin__TrackingOrigin trackingOrigin);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_64_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_64_0(__OVRPlugin__OVRP_1_64_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_64_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_64_0(__OVRPlugin__OVRP_1_64_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_64_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_64_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_65_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7925))
// CS Name: ::OVRPlugin::OVRP_1_65_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_65_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_KtxLoadFromMemory addr 0x2770290 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxLoadFromMemory(ByRef<void*> data, uint32_t length, ByRef<void*> texture);

  /// @brief Method ovrp_KtxTextureWidth addr 0x2770460 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxTextureWidth(void* texture, ByRef<uint32_t> width);

  /// @brief Method ovrp_KtxTextureHeight addr 0x2770620 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxTextureHeight(void* texture, ByRef<uint32_t> height);

  /// @brief Method ovrp_KtxTranscode addr 0x27707e0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxTranscode(void* texture, uint32_t format);

  /// @brief Method ovrp_KtxGetTextureData addr 0x2770b68 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxGetTextureData(void* texture, void* data, uint32_t bufferSize);

  /// @brief Method ovrp_KtxTextureSize addr 0x27709a0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxTextureSize(void* texture, ByRef<uint32_t> size);

  /// @brief Method ovrp_KtxDestroy addr 0x2770d28 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_KtxDestroy(void* texture);

  /// @brief Method ovrp_DestroySpace addr 0x277aac4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DestroySpace(ByRef<uint64_t> space);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_65_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_65_0(__OVRPlugin__OVRP_1_65_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_65_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_65_0(__OVRPlugin__OVRP_1_65_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_65_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_65_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_66_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7926))
// CS Name: ::OVRPlugin::OVRP_1_66_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_66_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetInsightPassthroughInitializationState addr 0x277abc4 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetInsightPassthroughInitializationState();

  /// @brief Method ovrp_Media_IsCastingToRemoteClient addr 0x2770098 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_Media_IsCastingToRemoteClient(ByRef<::GlobalNamespace::__OVRPlugin__Bool> isCasting);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_66_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_66_0(__OVRPlugin__OVRP_1_66_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_66_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_66_0(__OVRPlugin__OVRP_1_66_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_66_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_66_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_67_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7927))
// CS Name: ::OVRPlugin::OVRP_1_67_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_67_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_67_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_67_0(__OVRPlugin__OVRP_1_67_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_67_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_67_0(__OVRPlugin__OVRP_1_67_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_67_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_67_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_68_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7928))
// CS Name: ::OVRPlugin::OVRP_1_68_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_68_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_LoadRenderModel addr 0x277ad34 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_LoadRenderModel(uint64_t modelKey, uint32_t bufferInputCapacity, ByRef<uint32_t> bufferCountOutput, void* buffer);

  /// @brief Method ovrp_GetRenderModelPaths addr 0x277add0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetRenderModelPaths(uint32_t index, void* path);

  /// @brief Method ovrp_GetRenderModelProperties addr 0x277ae54 size 0xf8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetRenderModelProperties(::StringW path, ByRef<::GlobalNamespace::__OVRPlugin__RenderModelPropertiesInternal> properties);

  /// @brief Method ovrp_SetInsightPassthroughKeyboardHandsIntensity addr 0x277af4c size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetInsightPassthroughKeyboardHandsIntensity(int32_t layerId,
                                                                                                        ::GlobalNamespace::__OVRPlugin__InsightPassthroughKeyboardHandsIntensity intensity);

  /// @brief Method ovrp_StartKeyboardTracking addr 0x277afe0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StartKeyboardTracking(uint64_t trackedKeyboardId);

  /// @brief Method ovrp_StopKeyboardTracking addr 0x277b05c size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StopKeyboardTracking();

  /// @brief Method ovrp_GetSystemKeyboardDescription addr 0x277b0c4 size 0xf4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSystemKeyboardDescription(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags keyboardQueryFlags,
                                                                                         ByRef<::GlobalNamespace::__OVRPlugin__KeyboardDescription> keyboardDescription);

  /// @brief Method ovrp_GetKeyboardState addr 0x277b1b8 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetKeyboardState(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex,
                                                                             ByRef<::GlobalNamespace::__OVRPlugin__KeyboardState> keyboardState);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_68_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_68_0(__OVRPlugin__OVRP_1_68_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_68_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_68_0(__OVRPlugin__OVRP_1_68_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_68_0();

public:
  /// @brief Field OVRP_RENDER_MODEL_MAX_PATH_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t OVRP_RENDER_MODEL_MAX_PATH_LENGTH{ static_cast<int32_t>(0x100) };

  /// @brief Field OVRP_RENDER_MODEL_MAX_NAME_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t OVRP_RENDER_MODEL_MAX_NAME_LENGTH{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_68_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_69_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7929))
// CS Name: ::OVRPlugin::OVRP_1_69_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_69_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetNodePoseStateImmediate addr 0x277b2d0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNodePoseStateImmediate(::GlobalNamespace::__OVRPlugin__Node nodeId, ByRef<::GlobalNamespace::__OVRPlugin__PoseStatef> nodePoseState);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_69_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_69_0(__OVRPlugin__OVRP_1_69_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_69_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_69_0(__OVRPlugin__OVRP_1_69_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_69_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_69_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_70_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7930))
// CS Name: ::OVRPlugin::OVRP_1_70_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_70_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetLogCallback2 addr 0x277b3d8 size 0x80 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetLogCallback2(::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType* logCallback);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_70_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_70_0(__OVRPlugin__OVRP_1_70_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_70_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_70_0(__OVRPlugin__OVRP_1_70_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_70_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_70_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_71_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7931))
// CS Name: ::OVRPlugin::OVRP_1_71_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_71_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_IsInsightPassthroughSupported addr 0x277b4dc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_IsInsightPassthroughSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> supported);

  /// @brief Method ovrp_UnityOpenXR_SetClientVersion addr 0x2770e9c size 0x94 virtual false final false
  static inline void ovrp_UnityOpenXR_SetClientVersion(int32_t majorVersion, int32_t minorVersion, int32_t patchVersion);

  /// @brief Method ovrp_UnityOpenXR_HookGetInstanceProcAddr addr 0x2770ff4 size 0x7c virtual false final false
  static inline void* ovrp_UnityOpenXR_HookGetInstanceProcAddr(void* func);

  /// @brief Method ovrp_UnityOpenXR_OnInstanceCreate addr 0x2771138 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_UnityOpenXR_OnInstanceCreate(uint64_t xrInstance);

  /// @brief Method ovrp_UnityOpenXR_OnInstanceDestroy addr 0x2771274 size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnInstanceDestroy(uint64_t xrInstance);

  /// @brief Method ovrp_UnityOpenXR_OnSessionCreate addr 0x27713b0 size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnSessionCreate(uint64_t xrSession);

  /// @brief Method ovrp_UnityOpenXR_OnAppSpaceChange addr 0x27714ec size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnAppSpaceChange(uint64_t xrSpace);

  /// @brief Method ovrp_UnityOpenXR_OnSessionStateChange addr 0x277163c size 0x84 virtual false final false
  static inline void ovrp_UnityOpenXR_OnSessionStateChange(int32_t oldState, int32_t newState);

  /// @brief Method ovrp_UnityOpenXR_OnSessionBegin addr 0x2771780 size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnSessionBegin(uint64_t xrSession);

  /// @brief Method ovrp_UnityOpenXR_OnSessionEnd addr 0x27718bc size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnSessionEnd(uint64_t xrSession);

  /// @brief Method ovrp_UnityOpenXR_OnSessionExiting addr 0x27719f8 size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnSessionExiting(uint64_t xrSession);

  /// @brief Method ovrp_UnityOpenXR_OnSessionDestroy addr 0x2771b34 size 0x7c virtual false final false
  static inline void ovrp_UnityOpenXR_OnSessionDestroy(uint64_t xrSession);

  /// @brief Method ovrp_SetSuggestedCpuPerformanceLevel addr 0x277b558 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetSuggestedCpuPerformanceLevel(::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel perfLevel);

  /// @brief Method ovrp_GetSuggestedCpuPerformanceLevel addr 0x277b5d4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSuggestedCpuPerformanceLevel(ByRef<::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel> perfLevel);

  /// @brief Method ovrp_SetSuggestedGpuPerformanceLevel addr 0x277b650 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetSuggestedGpuPerformanceLevel(::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel perfLevel);

  /// @brief Method ovrp_GetSuggestedGpuPerformanceLevel addr 0x277b6cc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSuggestedGpuPerformanceLevel(ByRef<::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel> perfLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_71_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_71_0(__OVRPlugin__OVRP_1_71_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_71_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_71_0(__OVRPlugin__OVRP_1_71_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_71_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_71_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_72_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7932))
// CS Name: ::OVRPlugin::OVRP_1_72_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_72_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_CreateSpatialAnchor addr 0x277b7cc size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CreateSpatialAnchor(ByRef<::GlobalNamespace::__OVRPlugin__SpatialAnchorCreateInfo> createInfo, ByRef<uint64_t> requestId);

  /// @brief Method ovrp_SetSpaceComponentStatus addr 0x277b850 size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetSpaceComponentStatus(ByRef<uint64_t> space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType,
                                                                                    ::GlobalNamespace::__OVRPlugin__Bool enable, double_t timeout, ByRef<uint64_t> requestId);

  /// @brief Method ovrp_GetSpaceComponentStatus addr 0x277b8fc size 0x98 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceComponentStatus(ByRef<uint64_t> space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType,
                                                                                    ByRef<::GlobalNamespace::__OVRPlugin__Bool> enabled, ByRef<::GlobalNamespace::__OVRPlugin__Bool> changePending);

  /// @brief Method ovrp_EnumerateSpaceSupportedComponents addr 0x277b994 size 0xa4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result
  ovrp_EnumerateSpaceSupportedComponents(ByRef<uint64_t> space, uint32_t componentTypesCapacityInput, ByRef<uint32_t> componentTypesCountOutput,
                                         ByRef<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>> componentTypes);

  /// @brief Method ovrp_SaveSpace addr 0x277ba38 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SaveSpace(ByRef<uint64_t> space, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location,
                                                                      ::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode mode, ByRef<uint64_t> requestId);

  /// @brief Method ovrp_QuerySpaces addr 0x277bad4 size 0xdc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QuerySpaces(ByRef<::GlobalNamespace::__OVRPlugin__SpaceQueryInfo> queryInfo, ByRef<uint64_t> requestId);

  /// @brief Method ovrp_RetrieveSpaceQueryResults addr 0x277bbb0 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_RetrieveSpaceQueryResults(ByRef<uint64_t> requestId, uint32_t resultCapacityInput, ByRef<uint32_t> resultCountOutput, void* results);

  /// @brief Method ovrp_EraseSpace addr 0x277bc4c size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_EraseSpace(ByRef<uint64_t> space, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location, ByRef<uint64_t> requestId);

  /// @brief Method ovrp_GetSpaceContainer addr 0x277bce0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceContainer(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__SpaceContainerInternal> containerInternal);

  /// @brief Method ovrp_GetSpaceBoundingBox2D addr 0x277bd64 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceBoundingBox2D(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__Rectf> rect);

  /// @brief Method ovrp_GetSpaceBoundingBox3D addr 0x277bde8 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceBoundingBox3D(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__Boundsf> bounds);

  /// @brief Method ovrp_GetSpaceSemanticLabels addr 0x277be6c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceSemanticLabels(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__SpaceSemanticLabelInternal> labelsInternal);

  /// @brief Method ovrp_GetSpaceRoomLayout addr 0x277bef0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceRoomLayout(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__RoomLayoutInternal> roomLayoutInternal);

  /// @brief Method ovrp_GetSpaceBoundary2D addr 0x277bf74 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceBoundary2D(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__PolygonalBoundary2DInternal> boundaryInternal);

  /// @brief Method ovrp_RequestSceneCapture addr 0x277bff8 size 0xdc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_RequestSceneCapture(ByRef<::GlobalNamespace::__OVRPlugin__SceneCaptureRequestInternal> request, ByRef<uint64_t> requestId);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_72_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_72_0(__OVRPlugin__OVRP_1_72_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_72_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_72_0(__OVRPlugin__OVRP_1_72_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_72_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_72_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_73_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7933))
// CS Name: ::OVRPlugin::OVRP_1_73_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_73_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_73_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_73_0(__OVRPlugin__OVRP_1_73_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_73_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_73_0(__OVRPlugin__OVRP_1_73_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_73_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_73_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_74_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7934))
// CS Name: ::OVRPlugin::OVRP_1_74_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_74_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetSpaceUuid addr 0x277c1dc size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceUuid(ByRef<uint64_t> space, ByRef<::System::Guid> uuid);

  /// @brief Method ovrp_CreateVirtualKeyboard addr 0x277c260 size 0x6c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CreateVirtualKeyboard(::GlobalNamespace::__OVRPlugin__VirtualKeyboardCreateInfo createInfo);

  /// @brief Method ovrp_DestroyVirtualKeyboard addr 0x277c2cc size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DestroyVirtualKeyboard();

  /// @brief Method ovrp_SendVirtualKeyboardInput addr 0x277c334 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SendVirtualKeyboardInput(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputInfo inputInfo,
                                                                                     ByRef<::GlobalNamespace::__OVRPlugin__Posef> interactorRootPose);

  /// @brief Method ovrp_ChangeVirtualKeyboardTextContext addr 0x277c3c8 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_ChangeVirtualKeyboardTextContext(::StringW textContext);

  /// @brief Method ovrp_CreateVirtualKeyboardSpace addr 0x277c45c size 0x8c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CreateVirtualKeyboardSpace(::GlobalNamespace::__OVRPlugin__VirtualKeyboardSpaceCreateInfo createInfo, ByRef<uint64_t> keyboardSpace);

  /// @brief Method ovrp_SuggestVirtualKeyboardLocation addr 0x277c4e8 size 0x8c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SuggestVirtualKeyboardLocation(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo locationInfo);

  /// @brief Method ovrp_GetVirtualKeyboardScale addr 0x277c574 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetVirtualKeyboardScale(ByRef<float_t> location);

  /// @brief Method ovrp_GetRenderModelProperties2 addr 0x277c5f0 size 0x100 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetRenderModelProperties2(::StringW path, ::GlobalNamespace::__OVRPlugin__RenderModelFlags flags,
                                                                                      ByRef<::GlobalNamespace::__OVRPlugin__RenderModelPropertiesInternal> properties);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_74_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_74_0(__OVRPlugin__OVRP_1_74_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_74_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_74_0(__OVRPlugin__OVRP_1_74_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_74_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_74_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_75_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7935))
// CS Name: ::OVRPlugin::OVRP_1_75_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_75_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_75_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_75_0(__OVRPlugin__OVRP_1_75_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_75_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_75_0(__OVRPlugin__OVRP_1_75_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_75_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_75_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_76_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7936))
// CS Name: ::OVRPlugin::OVRP_1_76_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_76_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetNodePoseStateAtTime addr 0x277c7f8 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetNodePoseStateAtTime(double_t time, ::GlobalNamespace::__OVRPlugin__Node nodeId,
                                                                                   ByRef<::GlobalNamespace::__OVRPlugin__PoseStatef> nodePoseState);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_76_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_76_0(__OVRPlugin__OVRP_1_76_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_76_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_76_0(__OVRPlugin__OVRP_1_76_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_76_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_76_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_78_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7937))
// CS Name: ::OVRPlugin::OVRP_1_78_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_78_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetPassthroughCapabilityFlags addr 0x277c910 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetPassthroughCapabilityFlags(ByRef<::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags> capabilityFlags);

  /// @brief Method ovrp_GetFoveationEyeTrackedSupported addr 0x277c98c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetFoveationEyeTrackedSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> foveationSupported);

  /// @brief Method ovrp_GetFoveationEyeTracked addr 0x277ca08 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetFoveationEyeTracked(ByRef<::GlobalNamespace::__OVRPlugin__Bool> isEyeTrackedFoveation);

  /// @brief Method ovrp_SetFoveationEyeTracked addr 0x277ca84 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetFoveationEyeTracked(::GlobalNamespace::__OVRPlugin__Bool isEyeTrackedFoveation);

  /// @brief Method ovrp_StartFaceTracking addr 0x277cb00 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StartFaceTracking();

  /// @brief Method ovrp_StopFaceTracking addr 0x277cb68 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StopFaceTracking();

  /// @brief Method ovrp_StartBodyTracking addr 0x277cbd0 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StartBodyTracking();

  /// @brief Method ovrp_StopBodyTracking addr 0x277cc38 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StopBodyTracking();

  /// @brief Method ovrp_StartEyeTracking addr 0x277cca0 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StartEyeTracking();

  /// @brief Method ovrp_StopEyeTracking addr 0x277cd08 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_StopEyeTracking();

  /// @brief Method ovrp_GetEyeTrackingSupported addr 0x277cd70 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetEyeTrackingSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> eyeTrackingSupported);

  /// @brief Method ovrp_GetFaceTrackingSupported addr 0x277cdec size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetFaceTrackingSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> faceTrackingSupported);

  /// @brief Method ovrp_GetBodyTrackingEnabled addr 0x277ce68 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetBodyTrackingEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> value);

  /// @brief Method ovrp_GetBodyTrackingSupported addr 0x277cee4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetBodyTrackingSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> value);

  /// @brief Method ovrp_GetBodyState addr 0x277cf60 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetBodyState(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex,
                                                                         ByRef<::GlobalNamespace::__OVRPlugin__BodyStateInternal> bodyState);

  /// @brief Method ovrp_GetFaceTrackingEnabled addr 0x277cff4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetFaceTrackingEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> faceTrackingEnabled);

  /// @brief Method ovrp_GetFaceState addr 0x277d070 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetFaceState(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex,
                                                                         ByRef<::GlobalNamespace::__OVRPlugin__FaceStateInternal> faceState);

  /// @brief Method ovrp_GetEyeTrackingEnabled addr 0x277d104 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetEyeTrackingEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> eyeTrackingEnabled);

  /// @brief Method ovrp_GetEyeGazesState addr 0x277d180 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetEyeGazesState(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex,
                                                                             ByRef<::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal> eyeGazesState);

  /// @brief Method ovrp_GetControllerState5 addr 0x277d214 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetControllerState5(uint32_t controllerMask, ByRef<::GlobalNamespace::__OVRPlugin__ControllerState5> controllerState);

  /// @brief Method ovrp_SetControllerLocalizedVibration addr 0x277d298 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetControllerLocalizedVibration(::GlobalNamespace::__OVRPlugin__Controller controllerMask,
                                                                                            ::GlobalNamespace::__OVRPlugin__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude);

  /// @brief Method ovrp_GetLocalDimmingSupported addr 0x277d334 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLocalDimmingSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> localDimmingSupported);

  /// @brief Method ovrp_SetLocalDimming addr 0x277d3b0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetLocalDimming(::GlobalNamespace::__OVRPlugin__Bool localDimmingMode);

  /// @brief Method ovrp_GetLocalDimming addr 0x277d42c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLocalDimming(ByRef<::GlobalNamespace::__OVRPlugin__Bool> localDimmingMode);

  /// @brief Method ovrp_GetCurrentInteractionProfile addr 0x277d4a8 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetCurrentInteractionProfile(::GlobalNamespace::__OVRPlugin__Hand hand,
                                                                                         ByRef<::GlobalNamespace::__OVRPlugin__InteractionProfile> interactionProfile);

  /// @brief Method ovrp_SetControllerHapticsAmplitudeEnvelope addr 0x277d52c size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRPlugin__Controller controllerMask,
                                                                                                  ::GlobalNamespace::__OVRPlugin__HapticsAmplitudeEnvelopeVibration hapticsVibration);

  /// @brief Method ovrp_SetControllerHapticsPcm addr 0x277d5c0 size 0x8c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetControllerHapticsPcm(::GlobalNamespace::__OVRPlugin__Controller controllerMask,
                                                                                    ::GlobalNamespace::__OVRPlugin__HapticsPcmVibration hapticsVibration);

  /// @brief Method ovrp_GetControllerSampleRateHz addr 0x277d64c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetControllerSampleRateHz(::GlobalNamespace::__OVRPlugin__Controller controller, ByRef<float_t> sampleRateHz);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_78_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_78_0(__OVRPlugin__OVRP_1_78_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_78_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_78_0(__OVRPlugin__OVRP_1_78_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_78_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_78_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_79_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7938))
// CS Name: ::OVRPlugin::OVRP_1_79_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_79_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_ShareSpaces addr 0x277d754 size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_ShareSpaces(::cordl_internals::Ptr<uint64_t> spaces, uint32_t numSpaces, ::cordl_internals::Ptr<uint64_t> userHandles, uint32_t numUsers,
                                                                        ByRef<uint64_t> requestId);

  /// @brief Method ovrp_SaveSpaceList addr 0x277d800 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SaveSpaceList(::cordl_internals::Ptr<uint64_t> spaces, uint32_t numSpaces, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location,
                                                                          ByRef<uint64_t> requestId);

  /// @brief Method ovrp_GetSpaceUserId addr 0x277d89c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceUserId(ByRef<uint64_t> spaceUserHandle, ByRef<uint64_t> spaceUserId);

  /// @brief Method ovrp_CreateSpaceUser addr 0x277d920 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CreateSpaceUser(ByRef<uint64_t> spaceUserId, ByRef<uint64_t> spaceUserHandle);

  /// @brief Method ovrp_DestroySpaceUser addr 0x277d9a4 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DestroySpaceUser(ByRef<uint64_t> userHandle);

  /// @brief Method ovrp_LocateSpace2 addr 0x277da20 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_LocateSpace2(ByRef<::GlobalNamespace::__OVRPlugin__SpaceLocationf> location, ByRef<uint64_t> space,
                                                                         ::GlobalNamespace::__OVRPlugin__TrackingOrigin trackingOrigin);

  /// @brief Method ovrp_DeclareUser addr 0x277dab4 size 0x80 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DeclareUser(ByRef<uint64_t> userId, ByRef<uint64_t> userHandle);

  /// @brief Method ovrp_QplMarkerStart addr 0x2771c94 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QplMarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method ovrp_QplMarkerEnd addr 0x2771e18 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QplMarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method ovrp_QplMarkerPointCached addr 0x2771fa4 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QplMarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method ovrp_QplMarkerAnnotation addr 0x2772130 size 0xc8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QplMarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method ovrp_QplCreateMarkerHandle addr 0x27722d4 size 0x9c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QplCreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle);

  /// @brief Method ovrp_QplDestroyMarkerHandle addr 0x2772438 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_QplDestroyMarkerHandle(int32_t nameHandle);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_79_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_79_0(__OVRPlugin__OVRP_1_79_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_79_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_79_0(__OVRPlugin__OVRP_1_79_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_79_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_79_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_81_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7939))
// CS Name: ::OVRPlugin::OVRP_1_81_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_81_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_81_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_81_0(__OVRPlugin__OVRP_1_81_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_81_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_81_0(__OVRPlugin__OVRP_1_81_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_81_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_81_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_82_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7940))
// CS Name: ::OVRPlugin::OVRP_1_82_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_82_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetSpaceTriangleMesh addr 0x277dc3c size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetSpaceTriangleMesh(ByRef<uint64_t> space, ByRef<::GlobalNamespace::__OVRPlugin__TriangleMeshInternal> triangleMeshInternal);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_82_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_82_0(__OVRPlugin__OVRP_1_82_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_82_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_82_0(__OVRPlugin__OVRP_1_82_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_82_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_82_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_83_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7941))
// CS Name: ::OVRPlugin::OVRP_1_83_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_83_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetControllerState6 addr 0x277dd44 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetControllerState6(uint32_t controllerMask, ByRef<::GlobalNamespace::__OVRPlugin__ControllerState6> controllerState);

  /// @brief Method ovrp_GetVirtualKeyboardModelAnimationStates addr 0x277ddc8 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetVirtualKeyboardModelAnimationStates(ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStatesInternal> animationStates);

  /// @brief Method ovrp_GetVirtualKeyboardDirtyTextures addr 0x277de44 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetVirtualKeyboardDirtyTextures(ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIdsInternal> textureIds);

  /// @brief Method ovrp_GetVirtualKeyboardTextureData addr 0x277dec0 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetVirtualKeyboardTextureData(uint64_t textureId, ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureData> textureData);

  /// @brief Method ovrp_SetVirtualKeyboardModelVisibility addr 0x277df44 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetVirtualKeyboardModelVisibility(ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelVisibility> visibility);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_83_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_83_0(__OVRPlugin__OVRP_1_83_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_83_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_83_0(__OVRPlugin__OVRP_1_83_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_83_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_83_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_84_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7942))
// CS Name: ::OVRPlugin::OVRP_1_84_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_84_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_CreatePassthroughColorLut addr 0x277e044 size 0xac virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_CreatePassthroughColorLut(::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels channels, uint32_t resolution,
                                                                                      ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData data, ByRef<uint64_t> colorLut);

  /// @brief Method ovrp_DestroyPassthroughColorLut addr 0x277e0f0 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_DestroyPassthroughColorLut(uint64_t colorLut);

  /// @brief Method ovrp_UpdatePassthroughColorLut addr 0x277e16c size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_UpdatePassthroughColorLut(uint64_t colorLut, ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData data);

  /// @brief Method ovrp_SetInsightPassthroughStyle2 addr 0x277e200 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetInsightPassthroughStyle2(int32_t layerId, ByRef<::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2> style);

  /// @brief Method ovrp_GetLayerRecommendedResolution addr 0x277e284 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetLayerRecommendedResolution(int32_t layerId, ByRef<::GlobalNamespace::__OVRPlugin__Sizei> recommendedDimensions);

  /// @brief Method ovrp_GetEyeLayerRecommendedResolution addr 0x277e308 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetEyeLayerRecommendedResolution(ByRef<::GlobalNamespace::__OVRPlugin__Sizei> recommendedDimensions);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_84_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_84_0(__OVRPlugin__OVRP_1_84_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_84_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_84_0(__OVRPlugin__OVRP_1_84_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_84_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_84_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_85_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7943))
// CS Name: ::OVRPlugin::OVRP_1_85_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_85_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_OnEditorShutdown addr 0x277e408 size 0x68 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_OnEditorShutdown();

  /// @brief Method ovrp_GetPassthroughCapabilities addr 0x277e470 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetPassthroughCapabilities(ByRef<::GlobalNamespace::__OVRPlugin__PassthroughCapabilities> capabilityFlags);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_85_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_85_0(__OVRPlugin__OVRP_1_85_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_85_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_85_0(__OVRPlugin__OVRP_1_85_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_85_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_85_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_86_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7944))
// CS Name: ::OVRPlugin::OVRP_1_86_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_86_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetControllerDrivenHandPoses addr 0x277e570 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetControllerDrivenHandPoses(::GlobalNamespace::__OVRPlugin__Bool controllerDrivenHandPoses);

  /// @brief Method ovrp_IsControllerDrivenHandPosesEnabled addr 0x277e5ec size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_IsControllerDrivenHandPosesEnabled(ByRef<::GlobalNamespace::__OVRPlugin__Bool> enabled);

  /// @brief Method ovrp_AreHandPosesGeneratedByControllerData addr 0x277e668 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_AreHandPosesGeneratedByControllerData(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Node nodeId,
                                                                                                  ByRef<::GlobalNamespace::__OVRPlugin__Bool> isGeneratedByControllerData);

  /// @brief Method ovrp_SetMultimodalHandsControllersSupported addr 0x277e6fc size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetMultimodalHandsControllersSupported(::GlobalNamespace::__OVRPlugin__Bool supported);

  /// @brief Method ovrp_IsMultimodalHandsControllersSupported addr 0x277e778 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_IsMultimodalHandsControllersSupported(ByRef<::GlobalNamespace::__OVRPlugin__Bool> supported);

  /// @brief Method ovrp_GetCurrentDetachedInteractionProfile addr 0x277e7f4 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetCurrentDetachedInteractionProfile(::GlobalNamespace::__OVRPlugin__Hand hand,
                                                                                                 ByRef<::GlobalNamespace::__OVRPlugin__InteractionProfile> interactionProfile);

  /// @brief Method ovrp_GetControllerIsInHand addr 0x277e878 size 0x94 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetControllerIsInHand(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Node nodeId,
                                                                                  ByRef<::GlobalNamespace::__OVRPlugin__Bool> isInHand);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_86_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_86_0(__OVRPlugin__OVRP_1_86_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_86_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_86_0(__OVRPlugin__OVRP_1_86_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_86_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_86_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_87_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7945))
// CS Name: ::OVRPlugin::OVRP_1_87_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_87_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_GetPassthroughPreferences addr 0x277e990 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_GetPassthroughPreferences(ByRef<::GlobalNamespace::__OVRPlugin__PassthroughPreferences> preferences);

  /// @brief Method ovrp_SetEyeBufferSharpenType addr 0x277ea0c size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetEyeBufferSharpenType(::GlobalNamespace::__OVRPlugin__LayerSharpenType sharpenType);

  /// @brief Method ovrp_SetControllerDrivenHandPosesAreNatural addr 0x277ea88 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetControllerDrivenHandPosesAreNatural(::GlobalNamespace::__OVRPlugin__Bool controllerDrivenHandPosesAreNatural);

  /// @brief Method ovrp_AreControllerDrivenHandPosesNatural addr 0x277eb04 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_AreControllerDrivenHandPosesNatural(ByRef<::GlobalNamespace::__OVRPlugin__Bool> natural);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_87_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_87_0(__OVRPlugin__OVRP_1_87_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_87_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_87_0(__OVRPlugin__OVRP_1_87_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_87_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_87_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRP_1_88_0
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7946))
// CS Name: ::OVRPlugin::OVRP_1_88_0*
class CORDL_TYPE __OVRPlugin__OVRP_1_88_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_version, put = setStaticF_version))::System::Version* version;

  static inline void setStaticF_version(::System::Version* value);

  static inline ::System::Version* getStaticF_version();

  /// @brief Method ovrp_SetSimultaneousHandsAndControllersEnabled addr 0x277ec04 size 0x7c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ovrp_SetSimultaneousHandsAndControllersEnabled(::GlobalNamespace::__OVRPlugin__Bool enabled);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_88_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPlugin__OVRP_1_88_0(__OVRPlugin__OVRP_1_88_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPlugin__OVRP_1_88_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPlugin__OVRP_1_88_0(__OVRPlugin__OVRP_1_88_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPlugin__OVRP_1_88_0();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPlugin__OVRP_1_88_0, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPlugin
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4774 }), TypeDefinitionIndex(TypeDefinitionIndex(7777)),
// TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(7779)), TypeDefinitionIndex(TypeDefinitionIndex(7797)), TypeDefinitionIndex(TypeDefinitionIndex(7772)),
// TypeDefinitionIndex(TypeDefinitionIndex(7804)), TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(7692))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(7947)) CS Name: ::OVRPlugin*
class CORDL_TYPE OVRPlugin : public ::System::Object {
public:
  // Declarations
  using OVRP_1_88_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_88_0;

  using OVRP_1_87_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_87_0;

  using OVRP_1_86_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_86_0;

  using OVRP_1_85_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_85_0;

  using OVRP_1_84_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_84_0;

  using OVRP_1_83_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_83_0;

  using OVRP_1_82_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_82_0;

  using OVRP_1_81_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_81_0;

  using OVRP_1_79_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_79_0;

  using OVRP_1_78_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_78_0;

  using OVRP_1_76_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_76_0;

  using OVRP_1_75_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_75_0;

  using OVRP_1_74_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_74_0;

  using OVRP_1_73_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_73_0;

  using OVRP_1_72_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_72_0;

  using OVRP_1_71_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_71_0;

  using OVRP_1_70_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_70_0;

  using OVRP_1_69_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_69_0;

  using OVRP_1_68_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_68_0;

  using OVRP_1_67_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_67_0;

  using OVRP_1_66_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_66_0;

  using OVRP_1_65_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_65_0;

  using OVRP_1_64_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_64_0;

  using OVRP_1_63_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_63_0;

  using OVRP_1_62_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_62_0;

  using OVRP_1_61_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_61_0;

  using OVRP_1_60_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_60_0;

  using OVRP_1_59_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_59_0;

  using OVRP_1_58_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_58_0;

  using OVRP_1_57_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_57_0;

  using OVRP_1_56_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_56_0;

  using OVRP_1_55_1 = ::GlobalNamespace::__OVRPlugin__OVRP_1_55_1;

  using OVRP_1_55_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_55_0;

  using OVRP_1_54_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_54_0;

  using OVRP_1_53_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_53_0;

  using OVRP_1_52_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_52_0;

  using OVRP_1_51_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_51_0;

  using OVRP_1_50_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_50_0;

  using OVRP_1_49_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_49_0;

  using OVRP_1_48_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_48_0;

  using OVRP_1_47_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_47_0;

  using OVRP_1_46_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_46_0;

  using OVRP_1_45_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_45_0;

  using OVRP_1_44_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_44_0;

  using OVRP_1_43_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_43_0;

  using OVRP_1_42_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_42_0;

  using OVRP_1_41_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_41_0;

  using OVRP_1_40_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_40_0;

  using OVRP_1_39_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_39_0;

  using OVRP_1_38_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_38_0;

  using OVRP_1_37_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_37_0;

  using OVRP_1_36_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_36_0;

  using OVRP_1_35_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_35_0;

  using OVRP_1_34_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_34_0;

  using OVRP_1_32_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_32_0;

  using OVRP_1_31_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_31_0;

  using OVRP_1_30_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_30_0;

  using OVRP_1_29_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_29_0;

  using OVRP_1_28_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_28_0;

  using OVRP_1_21_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_21_0;

  using OVRP_1_19_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_19_0;

  using OVRP_1_18_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_18_0;

  using OVRP_1_17_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_17_0;

  using OVRP_1_16_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_16_0;

  using OVRP_1_15_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_15_0;

  using OVRP_1_12_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_12_0;

  using OVRP_1_11_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_11_0;

  using OVRP_1_10_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_10_0;

  using OVRP_1_9_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_9_0;

  using OVRP_1_8_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_8_0;

  using OVRP_1_7_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_7_0;

  using OVRP_1_6_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_6_0;

  using OVRP_1_5_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_5_0;

  using OVRP_1_3_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_3_0;

  using OVRP_1_2_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_2_0;

  using OVRP_1_1_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_1_0;

  using OVRP_1_0_0 = ::GlobalNamespace::__OVRPlugin__OVRP_1_0_0;

  using OVRP_0_5_0 = ::GlobalNamespace::__OVRPlugin__OVRP_0_5_0;

  using OVRP_0_1_3 = ::GlobalNamespace::__OVRPlugin__OVRP_0_1_3;

  using OVRP_0_1_2 = ::GlobalNamespace::__OVRPlugin__OVRP_0_1_2;

  using OVRP_0_1_1 = ::GlobalNamespace::__OVRPlugin__OVRP_0_1_1;

  using OVRP_0_1_0 = ::GlobalNamespace::__OVRPlugin__OVRP_0_1_0;

  using Qpl = ::GlobalNamespace::__OVRPlugin__Qpl;

  using UnityOpenXR = ::GlobalNamespace::__OVRPlugin__UnityOpenXR;

  using Ktx = ::GlobalNamespace::__OVRPlugin__Ktx;

  using PassthroughPreferences = ::GlobalNamespace::__OVRPlugin__PassthroughPreferences;

  using PassthroughPreferenceFlags = ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags;

  using PassthroughPreferenceFields = ::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields;

  using TriangleMeshInternal = ::GlobalNamespace::__OVRPlugin__TriangleMeshInternal;

  template <typename T> using PinnedArray_1 = ::GlobalNamespace::__OVRPlugin__PinnedArray_1<T>;

  using SceneCaptureRequestInternal = ::GlobalNamespace::__OVRPlugin__SceneCaptureRequestInternal;

  using PolygonalBoundary2DInternal = ::GlobalNamespace::__OVRPlugin__PolygonalBoundary2DInternal;

  using RoomLayoutInternal = ::GlobalNamespace::__OVRPlugin__RoomLayoutInternal;

  using RoomLayout = ::GlobalNamespace::__OVRPlugin__RoomLayout;

  using SpaceSemanticLabelInternal = ::GlobalNamespace::__OVRPlugin__SpaceSemanticLabelInternal;

  using SpaceContainerInternal = ::GlobalNamespace::__OVRPlugin__SpaceContainerInternal;

  using Media = ::GlobalNamespace::__OVRPlugin__Media;

  using SpaceQueryResult = ::GlobalNamespace::__OVRPlugin__SpaceQueryResult;

  using SpaceQueryInfo = ::GlobalNamespace::__OVRPlugin__SpaceQueryInfo;

  using SpaceFilterInfoComponents = ::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents;

  using SpaceFilterInfoIds = ::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds;

  using SpatialAnchorCreateInfo = ::GlobalNamespace::__OVRPlugin__SpatialAnchorCreateInfo;

  using SpaceQueryFilterType = ::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType;

  using SpaceQueryType = ::GlobalNamespace::__OVRPlugin__SpaceQueryType;

  using SpaceQueryActionType = ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType;

  using SpaceStoragePersistenceMode = ::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode;

  using SpaceStorageLocation = ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation;

  using SpaceComponentType = ::GlobalNamespace::__OVRPlugin__SpaceComponentType;

  using PassthroughCapabilities = ::GlobalNamespace::__OVRPlugin__PassthroughCapabilities;

  using PassthroughCapabilityFields = ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields;

  using PassthroughCapabilityFlags = ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags;

  using InsightPassthroughKeyboardHandsIntensity = ::GlobalNamespace::__OVRPlugin__InsightPassthroughKeyboardHandsIntensity;

  using PassthroughColorLutData = ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData;

  using PassthroughColorLutChannels = ::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels;

  using InsightPassthroughStyle2 = ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2;

  using InsightPassthroughStyle = ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle;

  using InsightPassthroughStyleFlags = ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags;

  using InsightPassthroughColorMapType = ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType;

  using VirtualKeyboardModelVisibility = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelVisibility;

  using VirtualKeyboardTextureData = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureData;

  using VirtualKeyboardTextureIdsInternal = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIdsInternal;

  using VirtualKeyboardTextureIds = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIds;

  using VirtualKeyboardModelAnimationStatesInternal = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStatesInternal;

  using VirtualKeyboardModelAnimationStates = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStates;

  using VirtualKeyboardModelAnimationState = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState;

  using VirtualKeyboardInputInfo = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputInfo;

  using VirtualKeyboardInputStateFlags = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags;

  using VirtualKeyboardInputSource = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource;

  using VirtualKeyboardCreateInfo = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardCreateInfo;

  using VirtualKeyboardLocationInfo = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo;

  using VirtualKeyboardSpaceCreateInfo = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardSpaceCreateInfo;

  using VirtualKeyboardLocationType = ::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType;

  using RenderModelFlags = ::GlobalNamespace::__OVRPlugin__RenderModelFlags;

  using RenderModelPropertiesInternal = ::GlobalNamespace::__OVRPlugin__RenderModelPropertiesInternal;

  using RenderModelProperties = ::GlobalNamespace::__OVRPlugin__RenderModelProperties;

  using EventDataBuffer = ::GlobalNamespace::__OVRPlugin__EventDataBuffer;

  using EventType = ::GlobalNamespace::__OVRPlugin__EventType;

  using ColorSpace = ::GlobalNamespace::__OVRPlugin__ColorSpace;

  using EyeGazesStateInternal = ::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal;

  using EyeGazesState = ::GlobalNamespace::__OVRPlugin__EyeGazesState;

  using EyeGazeState = ::GlobalNamespace::__OVRPlugin__EyeGazeState;

  using FaceConstants = ::GlobalNamespace::__OVRPlugin__FaceConstants;

  using FaceExpression = ::GlobalNamespace::__OVRPlugin__FaceExpression;

  using FaceRegionConfidence = ::GlobalNamespace::__OVRPlugin__FaceRegionConfidence;

  using FaceState2Internal = ::GlobalNamespace::__OVRPlugin__FaceState2Internal;

  using FaceStateInternal = ::GlobalNamespace::__OVRPlugin__FaceStateInternal;

  using FaceExpressionStatusInternal = ::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal;

  using FaceState = ::GlobalNamespace::__OVRPlugin__FaceState;

  using FaceExpressionStatus = ::GlobalNamespace::__OVRPlugin__FaceExpressionStatus;

  using KeyboardDescription = ::GlobalNamespace::__OVRPlugin__KeyboardDescription;

  using TrackedKeyboardQueryFlags = ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags;

  using TrackedKeyboardFlags = ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags;

  using TrackedKeyboardPresentationStyles = ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles;

  using KeyboardDescriptionConstants = ::GlobalNamespace::__OVRPlugin__KeyboardDescriptionConstants;

  using KeyboardState = ::GlobalNamespace::__OVRPlugin__KeyboardState;

  using BodyStateInternal = ::GlobalNamespace::__OVRPlugin__BodyStateInternal;

  using BodyState = ::GlobalNamespace::__OVRPlugin__BodyState;

  using BodyJointLocation = ::GlobalNamespace::__OVRPlugin__BodyJointLocation;

  using SpaceLocationf = ::GlobalNamespace::__OVRPlugin__SpaceLocationf;

  using SpaceLocationFlags = ::GlobalNamespace::__OVRPlugin__SpaceLocationFlags;

  using Mesh = ::GlobalNamespace::__OVRPlugin__Mesh;

  using MeshType = ::GlobalNamespace::__OVRPlugin__MeshType;

  using MeshConstants = ::GlobalNamespace::__OVRPlugin__MeshConstants;

  using Skeleton2Internal = ::GlobalNamespace::__OVRPlugin__Skeleton2Internal;

  using Skeleton2 = ::GlobalNamespace::__OVRPlugin__Skeleton2;

  using Skeleton = ::GlobalNamespace::__OVRPlugin__Skeleton;

  using SkeletonType = ::GlobalNamespace::__OVRPlugin__SkeletonType;

  using SkeletonConstants = ::GlobalNamespace::__OVRPlugin__SkeletonConstants;

  using Bone = ::GlobalNamespace::__OVRPlugin__Bone;

  using BoneCapsule = ::GlobalNamespace::__OVRPlugin__BoneCapsule;

  using HandStateInternal = ::GlobalNamespace::__OVRPlugin__HandStateInternal;

  using HandState = ::GlobalNamespace::__OVRPlugin__HandState;

  using HandFingerPinch = ::GlobalNamespace::__OVRPlugin__HandFingerPinch;

  using HandFinger = ::GlobalNamespace::__OVRPlugin__HandFinger;

  using BoneId = ::GlobalNamespace::__OVRPlugin__BoneId;

  using HandStatus = ::GlobalNamespace::__OVRPlugin__HandStatus;

  using Hand = ::GlobalNamespace::__OVRPlugin__Hand;

  using TrackingConfidence = ::GlobalNamespace::__OVRPlugin__TrackingConfidence;

  using LayerSubmit = ::GlobalNamespace::__OVRPlugin__LayerSubmit;

  using BlendFactor = ::GlobalNamespace::__OVRPlugin__BlendFactor;

  using LayerDescInternal = ::GlobalNamespace::__OVRPlugin__LayerDescInternal;

  using LayerDesc = ::GlobalNamespace::__OVRPlugin__LayerDesc;

  using LayerFlags = ::GlobalNamespace::__OVRPlugin__LayerFlags;

  using LayerLayout = ::GlobalNamespace::__OVRPlugin__LayerLayout;

  using CameraExtrinsics = ::GlobalNamespace::__OVRPlugin__CameraExtrinsics;

  using CameraIntrinsics = ::GlobalNamespace::__OVRPlugin__CameraIntrinsics;

  using Fovf = ::GlobalNamespace::__OVRPlugin__Fovf;

  using Colorf = ::GlobalNamespace::__OVRPlugin__Colorf;

  using BoundaryGeometry = ::GlobalNamespace::__OVRPlugin__BoundaryGeometry;

  using BoundaryTestResult = ::GlobalNamespace::__OVRPlugin__BoundaryTestResult;

  using BoundaryType = ::GlobalNamespace::__OVRPlugin__BoundaryType;

  using Frustumf2 = ::GlobalNamespace::__OVRPlugin__Frustumf2;

  using Frustumf = ::GlobalNamespace::__OVRPlugin__Frustumf;

  using Boundsf = ::GlobalNamespace::__OVRPlugin__Boundsf;

  using Rectf = ::GlobalNamespace::__OVRPlugin__Rectf;

  using Recti = ::GlobalNamespace::__OVRPlugin__Recti;

  using Vector2i = ::GlobalNamespace::__OVRPlugin__Vector2i;

  using Size3f = ::GlobalNamespace::__OVRPlugin__Size3f;

  using Sizef = ::GlobalNamespace::__OVRPlugin__Sizef;

  using Sizei = ::GlobalNamespace::__OVRPlugin__Sizei;

  using AppPerfStats = ::GlobalNamespace::__OVRPlugin__AppPerfStats;

  using AppPerfFrameStats = ::GlobalNamespace::__OVRPlugin__AppPerfFrameStats;

  using HapticsConstants = ::GlobalNamespace::__OVRPlugin__HapticsConstants;

  using HapticsPcmVibration = ::GlobalNamespace::__OVRPlugin__HapticsPcmVibration;

  using HapticsAmplitudeEnvelopeVibration = ::GlobalNamespace::__OVRPlugin__HapticsAmplitudeEnvelopeVibration;

  using HapticsDesc = ::GlobalNamespace::__OVRPlugin__HapticsDesc;

  using HapticsState = ::GlobalNamespace::__OVRPlugin__HapticsState;

  using HapticsBuffer = ::GlobalNamespace::__OVRPlugin__HapticsBuffer;

  using ControllerState = ::GlobalNamespace::__OVRPlugin__ControllerState;

  using ControllerState2 = ::GlobalNamespace::__OVRPlugin__ControllerState2;

  using ControllerState4 = ::GlobalNamespace::__OVRPlugin__ControllerState4;

  using ControllerState5 = ::GlobalNamespace::__OVRPlugin__ControllerState5;

  using ControllerState6 = ::GlobalNamespace::__OVRPlugin__ControllerState6;

  using HapticsLocation = ::GlobalNamespace::__OVRPlugin__HapticsLocation;

  using PoseStatef = ::GlobalNamespace::__OVRPlugin__PoseStatef;

  using TextureRectMatrixf = ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf;

  using Posef = ::GlobalNamespace::__OVRPlugin__Posef;

  using Quatf = ::GlobalNamespace::__OVRPlugin__Quatf;

  using Vector4s = ::GlobalNamespace::__OVRPlugin__Vector4s;

  using Vector4f = ::GlobalNamespace::__OVRPlugin__Vector4f;

  using Vector3f = ::GlobalNamespace::__OVRPlugin__Vector3f;

  using Vector2f = ::GlobalNamespace::__OVRPlugin__Vector2f;

  using OverlayFlag = ::GlobalNamespace::__OVRPlugin__OverlayFlag;

  using CameraDeviceIntrinsicsParameters = ::GlobalNamespace::__OVRPlugin__CameraDeviceIntrinsicsParameters;

  using FeatureType = ::GlobalNamespace::__OVRPlugin__FeatureType;

  using ProcessorPerformanceLevel = ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel;

  using PerfMetrics = ::GlobalNamespace::__OVRPlugin__PerfMetrics;

  using TiledMultiResLevel = ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel;

  using FixedFoveatedRenderingLevel = ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel;

  using FoveatedRenderingLevel = ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel;

  using CameraDeviceDepthQuality = ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality;

  using CameraDeviceDepthSensingMode = ::GlobalNamespace::__OVRPlugin__CameraDeviceDepthSensingMode;

  using CameraDevice = ::GlobalNamespace::__OVRPlugin__CameraDevice;

  using Step = ::GlobalNamespace::__OVRPlugin__Step;

  using LayerSharpenType = ::GlobalNamespace::__OVRPlugin__LayerSharpenType;

  using LayerSuperSamplingType = ::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType;

  using OverlayShape = ::GlobalNamespace::__OVRPlugin__OverlayShape;

  using SystemHeadset = ::GlobalNamespace::__OVRPlugin__SystemHeadset;

  using SystemRegion = ::GlobalNamespace::__OVRPlugin__SystemRegion;

  using PlatformUI = ::GlobalNamespace::__OVRPlugin__PlatformUI;

  using EyeTextureFormat = ::GlobalNamespace::__OVRPlugin__EyeTextureFormat;

  using BatteryStatus = ::GlobalNamespace::__OVRPlugin__BatteryStatus;

  using RecenterFlags = ::GlobalNamespace::__OVRPlugin__RecenterFlags;

  using TrackingOrigin = ::GlobalNamespace::__OVRPlugin__TrackingOrigin;

  using Handedness = ::GlobalNamespace::__OVRPlugin__Handedness;

  using InteractionProfile = ::GlobalNamespace::__OVRPlugin__InteractionProfile;

  using Controller = ::GlobalNamespace::__OVRPlugin__Controller;

  using Node = ::GlobalNamespace::__OVRPlugin__Node;

  using Tracker = ::GlobalNamespace::__OVRPlugin__Tracker;

  using Eye = ::GlobalNamespace::__OVRPlugin__Eye;

  using XrApi = ::GlobalNamespace::__OVRPlugin__XrApi;

  using CameraAnchorType = ::GlobalNamespace::__OVRPlugin__CameraAnchorType;

  using CameraStatus = ::GlobalNamespace::__OVRPlugin__CameraStatus;

  using LogCallback2DelegateType = ::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType;

  using LogLevel = ::GlobalNamespace::__OVRPlugin__LogLevel;

  using Result = ::GlobalNamespace::__OVRPlugin__Result;

  using Bool = ::GlobalNamespace::__OVRPlugin__Bool;

  using GUID = ::GlobalNamespace::__OVRPlugin__GUID;

  /// @brief Field wrapperVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wrapperVersion, put = setStaticF_wrapperVersion))::System::Version* wrapperVersion;

  /// @brief Field _version, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__version, put = setStaticF__version))::System::Version* _version;

  /// @brief Field _nativeSDKVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nativeSDKVersion, put = setStaticF__nativeSDKVersion))::System::Version* _nativeSDKVersion;

  /// @brief Field MAX_CPU_CORES, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_CPU_CORES, put = setStaticF_MAX_CPU_CORES)) int32_t MAX_CPU_CORES;

  /// @brief Field _nativeXrApi, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nativeXrApi, put = setStaticF__nativeXrApi))::System::Nullable_1<::GlobalNamespace::__OVRPlugin__XrApi> _nativeXrApi;

  /// @brief Field _nativeAudioOutGuid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nativeAudioOutGuid, put = setStaticF__nativeAudioOutGuid))::GlobalNamespace::__OVRPlugin__GUID* _nativeAudioOutGuid;

  /// @brief Field _cachedAudioOutGuid, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF__cachedAudioOutGuid, put = setStaticF__cachedAudioOutGuid))::System::Guid _cachedAudioOutGuid;

  /// @brief Field _cachedAudioOutString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cachedAudioOutString, put = setStaticF__cachedAudioOutString))::StringW _cachedAudioOutString;

  /// @brief Field _nativeAudioInGuid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nativeAudioInGuid, put = setStaticF__nativeAudioInGuid))::GlobalNamespace::__OVRPlugin__GUID* _nativeAudioInGuid;

  /// @brief Field _cachedAudioInGuid, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF__cachedAudioInGuid, put = setStaticF__cachedAudioInGuid))::System::Guid _cachedAudioInGuid;

  /// @brief Field _cachedAudioInString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cachedAudioInString, put = setStaticF__cachedAudioInString))::StringW _cachedAudioInString;

  /// @brief Field perfStatWarningPrinted, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_perfStatWarningPrinted, put = setStaticF_perfStatWarningPrinted)) bool perfStatWarningPrinted;

  /// @brief Field resetPerfStatWarningPrinted, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_resetPerfStatWarningPrinted, put = setStaticF_resetPerfStatWarningPrinted)) bool resetPerfStatWarningPrinted;

  /// @brief Field _nativeSystemDisplayFrequenciesAvailable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nativeSystemDisplayFrequenciesAvailable,
                             put = setStaticF__nativeSystemDisplayFrequenciesAvailable))::GlobalNamespace::OVRNativeBuffer* _nativeSystemDisplayFrequenciesAvailable;

  /// @brief Field _cachedSystemDisplayFrequenciesAvailable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cachedSystemDisplayFrequenciesAvailable,
                             put = setStaticF__cachedSystemDisplayFrequenciesAvailable))::ArrayW<float_t, ::Array<float_t>*> _cachedSystemDisplayFrequenciesAvailable;

  /// @brief Field cachedHandState, offset 0xffffffff, size 0x200
  static __declspec(property(get = getStaticF_cachedHandState, put = setStaticF_cachedHandState))::GlobalNamespace::__OVRPlugin__HandStateInternal cachedHandState;

  /// @brief Field cachedSkeleton, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_cachedSkeleton, put = setStaticF_cachedSkeleton))::GlobalNamespace::__OVRPlugin__Skeleton cachedSkeleton;

  /// @brief Field cachedSkeleton2, offset 0xffffffff, size 0xc44
  static __declspec(property(get = getStaticF_cachedSkeleton2, put = setStaticF_cachedSkeleton2))::GlobalNamespace::__OVRPlugin__Skeleton2Internal cachedSkeleton2;

  /// @brief Field cachedFaceState, offset 0xffffffff, size 0x118
  static __declspec(property(get = getStaticF_cachedFaceState, put = setStaticF_cachedFaceState))::GlobalNamespace::__OVRPlugin__FaceStateInternal cachedFaceState;

  /// @brief Field cachedEyeGazesState, offset 0xffffffff, size 0x50
  static __declspec(property(get = getStaticF_cachedEyeGazesState, put = setStaticF_cachedEyeGazesState))::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal cachedEyeGazesState;

  /// @brief Field _versionZero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__versionZero, put = setStaticF__versionZero))::System::Version* _versionZero;

  static inline void setStaticF_wrapperVersion(::System::Version* value);

  static inline ::System::Version* getStaticF_wrapperVersion();

  static inline void setStaticF__version(::System::Version* value);

  static inline ::System::Version* getStaticF__version();

  static inline void setStaticF__nativeSDKVersion(::System::Version* value);

  static inline ::System::Version* getStaticF__nativeSDKVersion();

  static inline void setStaticF_MAX_CPU_CORES(int32_t value);

  static inline int32_t getStaticF_MAX_CPU_CORES();

  static inline void setStaticF__nativeXrApi(::System::Nullable_1<::GlobalNamespace::__OVRPlugin__XrApi> value);

  static inline ::System::Nullable_1<::GlobalNamespace::__OVRPlugin__XrApi> getStaticF__nativeXrApi();

  static inline void setStaticF__nativeAudioOutGuid(::GlobalNamespace::__OVRPlugin__GUID* value);

  static inline ::GlobalNamespace::__OVRPlugin__GUID* getStaticF__nativeAudioOutGuid();

  static inline void setStaticF__cachedAudioOutGuid(::System::Guid value);

  static inline ::System::Guid getStaticF__cachedAudioOutGuid();

  static inline void setStaticF__cachedAudioOutString(::StringW value);

  static inline ::StringW getStaticF__cachedAudioOutString();

  static inline void setStaticF__nativeAudioInGuid(::GlobalNamespace::__OVRPlugin__GUID* value);

  static inline ::GlobalNamespace::__OVRPlugin__GUID* getStaticF__nativeAudioInGuid();

  static inline void setStaticF__cachedAudioInGuid(::System::Guid value);

  static inline ::System::Guid getStaticF__cachedAudioInGuid();

  static inline void setStaticF__cachedAudioInString(::StringW value);

  static inline ::StringW getStaticF__cachedAudioInString();

  static inline void setStaticF_perfStatWarningPrinted(bool value);

  static inline bool getStaticF_perfStatWarningPrinted();

  static inline void setStaticF_resetPerfStatWarningPrinted(bool value);

  static inline bool getStaticF_resetPerfStatWarningPrinted();

  static inline void setStaticF__nativeSystemDisplayFrequenciesAvailable(::GlobalNamespace::OVRNativeBuffer* value);

  static inline ::GlobalNamespace::OVRNativeBuffer* getStaticF__nativeSystemDisplayFrequenciesAvailable();

  static inline void setStaticF__cachedSystemDisplayFrequenciesAvailable(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__cachedSystemDisplayFrequenciesAvailable();

  static inline void setStaticF_cachedHandState(::GlobalNamespace::__OVRPlugin__HandStateInternal value);

  static inline ::GlobalNamespace::__OVRPlugin__HandStateInternal getStaticF_cachedHandState();

  static inline void setStaticF_cachedSkeleton(::GlobalNamespace::__OVRPlugin__Skeleton value);

  static inline ::GlobalNamespace::__OVRPlugin__Skeleton getStaticF_cachedSkeleton();

  static inline void setStaticF_cachedSkeleton2(::GlobalNamespace::__OVRPlugin__Skeleton2Internal value);

  static inline ::GlobalNamespace::__OVRPlugin__Skeleton2Internal getStaticF_cachedSkeleton2();

  static inline void setStaticF_cachedFaceState(::GlobalNamespace::__OVRPlugin__FaceStateInternal value);

  static inline ::GlobalNamespace::__OVRPlugin__FaceStateInternal getStaticF_cachedFaceState();

  static inline void setStaticF_cachedEyeGazesState(::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal value);

  static inline ::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal getStaticF_cachedEyeGazesState();

  static inline void setStaticF__versionZero(::System::Version* value);

  static inline ::System::Version* getStaticF__versionZero();

  /// @brief Method get_version addr 0x27542f4 size 0x560 virtual false final false
  static inline ::System::Version* get_version();

  /// @brief Method get_nativeSDKVersion addr 0x2754854 size 0x2bc virtual false final false
  static inline ::System::Version* get_nativeSDKVersion();

  /// @brief Method IsSuccess addr 0x2754b10 size 0xc virtual false final false
  static inline bool IsSuccess(::GlobalNamespace::__OVRPlugin__Result result);

  /// @brief Method SetLogCallback2 addr 0x2754b1c size 0x108 virtual false final false
  static inline void SetLogCallback2(::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType* logCallback);

  /// @brief Method IsPassthroughShape addr 0x2754c24 size 0x30 virtual false final false
  static inline bool IsPassthroughShape(::GlobalNamespace::__OVRPlugin__OverlayShape shape);

  /// @brief Method IsPositionValid addr 0x2754c54 size 0x8 virtual false final false
  static inline bool IsPositionValid(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags value);

  /// @brief Method IsOrientationValid addr 0x2754c5c size 0x8 virtual false final false
  static inline bool IsOrientationValid(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags value);

  /// @brief Method IsPositionTracked addr 0x2754c64 size 0x8 virtual false final false
  static inline bool IsPositionTracked(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags value);

  /// @brief Method IsOrientationTracked addr 0x2754c6c size 0x8 virtual false final false
  static inline bool IsOrientationTracked(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags value);

  /// @brief Method GuidToUuidString addr 0x2754c74 size 0x17c virtual false final false
  static inline ::StringW GuidToUuidString(::System::Guid guid);

  /// @brief Method get_initialized addr 0x2754df0 size 0x5c virtual false final false
  static inline bool get_initialized();

  /// @brief Method get_nativeXrApi addr 0x2754e4c size 0x19c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__XrApi get_nativeXrApi();

  /// @brief Method get_chromatic addr 0x2754fe8 size 0xd8 virtual false final false
  static inline bool get_chromatic();

  /// @brief Method set_chromatic addr 0x27550c0 size 0xf8 virtual false final false
  static inline void set_chromatic(bool value);

  /// @brief Method get_monoscopic addr 0x27551c0 size 0x90 virtual false final false
  static inline bool get_monoscopic();

  /// @brief Method set_monoscopic addr 0x2755250 size 0xa4 virtual false final false
  static inline void set_monoscopic(bool value);

  /// @brief Method get_rotation addr 0x27552f4 size 0x90 virtual false final false
  static inline bool get_rotation();

  /// @brief Method set_rotation addr 0x2755384 size 0xa4 virtual false final false
  static inline void set_rotation(bool value);

  /// @brief Method get_position addr 0x2755428 size 0x90 virtual false final false
  static inline bool get_position();

  /// @brief Method set_position addr 0x27554b8 size 0xa4 virtual false final false
  static inline void set_position(bool value);

  /// @brief Method get_useIPDInPositionTracking addr 0x275555c size 0xd8 virtual false final false
  static inline bool get_useIPDInPositionTracking();

  /// @brief Method set_useIPDInPositionTracking addr 0x2755634 size 0xf8 virtual false final false
  static inline void set_useIPDInPositionTracking(bool value);

  /// @brief Method get_positionSupported addr 0x275572c size 0x90 virtual false final false
  static inline bool get_positionSupported();

  /// @brief Method get_positionTracked addr 0x27557bc size 0x94 virtual false final false
  static inline bool get_positionTracked();

  /// @brief Method get_powerSaving addr 0x2755850 size 0x90 virtual false final false
  static inline bool get_powerSaving();

  /// @brief Method get_hmdPresent addr 0x27558e0 size 0x94 virtual false final false
  static inline bool get_hmdPresent();

  /// @brief Method get_userPresent addr 0x2755974 size 0x90 virtual false final false
  static inline bool get_userPresent();

  /// @brief Method get_headphonesPresent addr 0x2755a04 size 0x90 virtual false final false
  static inline bool get_headphonesPresent();

  /// @brief Method get_recommendedMSAALevel addr 0x2755a94 size 0xd4 virtual false final false
  static inline int32_t get_recommendedMSAALevel();

  /// @brief Method get_systemRegion addr 0x2755b68 size 0xd4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SystemRegion get_systemRegion();

  /// @brief Method get_audioOutId addr 0x2755c3c size 0x314 virtual false final false
  static inline ::StringW get_audioOutId();

  /// @brief Method get_audioInId addr 0x2755f58 size 0x314 virtual false final false
  static inline ::StringW get_audioInId();

  /// @brief Method get_hasVrFocus addr 0x275626c size 0x5c virtual false final false
  static inline bool get_hasVrFocus();

  /// @brief Method get_hasInputFocus addr 0x27562c8 size 0xdc virtual false final false
  static inline bool get_hasInputFocus();

  /// @brief Method get_shouldQuit addr 0x27563a4 size 0x5c virtual false final false
  static inline bool get_shouldQuit();

  /// @brief Method get_shouldRecenter addr 0x2756400 size 0x5c virtual false final false
  static inline bool get_shouldRecenter();

  /// @brief Method get_productName addr 0x275645c size 0x50 virtual false final false
  static inline ::StringW get_productName();

  /// @brief Method get_latency addr 0x27564ac size 0xa8 virtual false final false
  static inline ::StringW get_latency();

  /// @brief Method get_eyeDepth addr 0x2756554 size 0x8c virtual false final false
  static inline float_t get_eyeDepth();

  /// @brief Method set_eyeDepth addr 0x27565e0 size 0x60 virtual false final false
  static inline void set_eyeDepth(float_t value);

  /// @brief Method get_eyeHeight addr 0x2756640 size 0x50 virtual false final false
  static inline float_t get_eyeHeight();

  /// @brief Method set_eyeHeight addr 0x2756690 size 0x60 virtual false final false
  static inline void set_eyeHeight(float_t value);

  /// @brief Method get_batteryLevel addr 0x27566f0 size 0x50 virtual false final false
  static inline float_t get_batteryLevel();

  /// @brief Method get_batteryTemperature addr 0x2756740 size 0x50 virtual false final false
  static inline float_t get_batteryTemperature();

  /// @brief Method get_suggestedCpuPerfLevel addr 0x2756790 size 0xd0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel get_suggestedCpuPerfLevel();

  /// @brief Method set_suggestedCpuPerfLevel addr 0x2756860 size 0xc0 virtual false final false
  static inline void set_suggestedCpuPerfLevel(::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel value);

  /// @brief Method get_suggestedGpuPerfLevel addr 0x2756920 size 0xd0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel get_suggestedGpuPerfLevel();

  /// @brief Method set_suggestedGpuPerfLevel addr 0x27569f0 size 0xc0 virtual false final false
  static inline void set_suggestedGpuPerfLevel(::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel value);

  /// @brief Method get_cpuLevel addr 0x2756ab0 size 0x50 virtual false final false
  static inline int32_t get_cpuLevel();

  /// @brief Method set_cpuLevel addr 0x2756b00 size 0x58 virtual false final false
  static inline void set_cpuLevel(int32_t value);

  /// @brief Method get_gpuLevel addr 0x2756b58 size 0x50 virtual false final false
  static inline int32_t get_gpuLevel();

  /// @brief Method set_gpuLevel addr 0x2756ba8 size 0x58 virtual false final false
  static inline void set_gpuLevel(int32_t value);

  /// @brief Method get_vsyncCount addr 0x2756c00 size 0x50 virtual false final false
  static inline int32_t get_vsyncCount();

  /// @brief Method set_vsyncCount addr 0x2756c50 size 0x58 virtual false final false
  static inline void set_vsyncCount(int32_t value);

  /// @brief Method get_systemVolume addr 0x2756ca8 size 0x50 virtual false final false
  static inline float_t get_systemVolume();

  /// @brief Method get_ipd addr 0x2756cf8 size 0x50 virtual false final false
  static inline float_t get_ipd();

  /// @brief Method set_ipd addr 0x2756d48 size 0x60 virtual false final false
  static inline void set_ipd(float_t value);

  /// @brief Method get_occlusionMesh addr 0x2756da8 size 0x90 virtual false final false
  static inline bool get_occlusionMesh();

  /// @brief Method set_occlusionMesh addr 0x2756e38 size 0xa4 virtual false final false
  static inline void set_occlusionMesh(bool value);

  /// @brief Method get_batteryStatus addr 0x2756edc size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BatteryStatus get_batteryStatus();

  /// @brief Method GetEyeFrustum addr 0x2756f2c size 0x58 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Frustumf GetEyeFrustum(::GlobalNamespace::__OVRPlugin__Eye eyeId);

  /// @brief Method GetEyeTextureSize addr 0x2756f84 size 0x58 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Sizei GetEyeTextureSize(::GlobalNamespace::__OVRPlugin__Eye eyeId);

  /// @brief Method GetTrackerPose addr 0x2756fdc size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef GetTrackerPose(::GlobalNamespace::__OVRPlugin__Tracker trackerId);

  /// @brief Method GetTrackerFrustum addr 0x2757288 size 0x58 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Frustumf GetTrackerFrustum(::GlobalNamespace::__OVRPlugin__Tracker trackerId);

  /// @brief Method ShowUI addr 0x27572e0 size 0x64 virtual false final false
  static inline bool ShowUI(::GlobalNamespace::__OVRPlugin__PlatformUI ui);

  /// @brief Method EnqueueSubmitLayer addr 0x2757344 size 0x568 virtual false final false
  static inline bool EnqueueSubmitLayer(bool onTop, bool headLocked, bool noDepthBufferTesting, void* leftTexture, void* rightTexture, int32_t layerId, int32_t frameIndex,
                                        ::GlobalNamespace::__OVRPlugin__Posef pose, ::GlobalNamespace::__OVRPlugin__Vector3f scale, int32_t layerIndex,
                                        ::GlobalNamespace::__OVRPlugin__OverlayShape shape, bool overrideTextureRectMatrix, ::GlobalNamespace::__OVRPlugin__TextureRectMatrixf textureRectMatrix,
                                        bool overridePerLayerColorScaleAndOffset, ::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool expensiveSuperSample, bool bicubic,
                                        bool efficientSuperSample, bool efficientSharpen, bool expensiveSharpen, bool hidden, bool secureContent, bool automaticFiltering);

  /// @brief Method CalculateLayerDesc addr 0x27578ac size 0x198 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__LayerDesc CalculateLayerDesc(::GlobalNamespace::__OVRPlugin__OverlayShape shape, ::GlobalNamespace::__OVRPlugin__LayerLayout layout,
                                                                             ::GlobalNamespace::__OVRPlugin__Sizei textureSize, int32_t mipLevels, int32_t sampleCount,
                                                                             ::GlobalNamespace::__OVRPlugin__EyeTextureFormat format, int32_t layerFlags);

  /// @brief Method EnqueueSetupLayer addr 0x2757a44 size 0x208 virtual false final false
  static inline bool EnqueueSetupLayer(::GlobalNamespace::__OVRPlugin__LayerDesc desc, int32_t compositionDepth, void* layerID);

  /// @brief Method EnqueueDestroyLayer addr 0x2757c4c size 0xe0 virtual false final false
  static inline bool EnqueueDestroyLayer(void* layerID);

  /// @brief Method GetLayerTexture addr 0x2757d2c size 0x124 virtual false final false
  static inline void* GetLayerTexture(int32_t layerId, int32_t stage, ::GlobalNamespace::__OVRPlugin__Eye eyeId);

  /// @brief Method GetLayerTextureStageCount addr 0x2757e50 size 0xfc virtual false final false
  static inline int32_t GetLayerTextureStageCount(int32_t layerId);

  /// @brief Method GetLayerAndroidSurfaceObject addr 0x2757f4c size 0x10c virtual false final false
  static inline void* GetLayerAndroidSurfaceObject(int32_t layerId);

  /// @brief Method UpdateNodePhysicsPoses addr 0x2758058 size 0xdc virtual false final false
  static inline bool UpdateNodePhysicsPoses(int32_t frameIndex, double_t predictionSeconds);

  /// @brief Method GetNodePose addr 0x2757060 size 0x228 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef GetNodePose(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__Step stepId);

  /// @brief Method GetNodeVelocity addr 0x2758134 size 0x20c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f GetNodeVelocity(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__Step stepId);

  /// @brief Method GetNodeAngularVelocity addr 0x2758340 size 0x150 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f GetNodeAngularVelocity(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__Step stepId);

  /// @brief Method GetNodeAcceleration addr 0x2758490 size 0x20c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f GetNodeAcceleration(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__Step stepId);

  /// @brief Method GetNodeAngularAcceleration addr 0x275869c size 0x150 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f GetNodeAngularAcceleration(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__Step stepId);

  /// @brief Method GetNodePresent addr 0x27587ec size 0x64 virtual false final false
  static inline bool GetNodePresent(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetNodeOrientationTracked addr 0x2758850 size 0x64 virtual false final false
  static inline bool GetNodeOrientationTracked(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetNodeOrientationValid addr 0x27588b4 size 0x104 virtual false final false
  static inline bool GetNodeOrientationValid(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetNodePositionTracked addr 0x27589b8 size 0x64 virtual false final false
  static inline bool GetNodePositionTracked(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetNodePositionValid addr 0x2758a1c size 0x104 virtual false final false
  static inline bool GetNodePositionValid(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetNodePoseStateRaw addr 0x2758b20 size 0x238 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__PoseStatef GetNodePoseStateRaw(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__Step stepId);

  /// @brief Method GetNodePoseStateAtTime addr 0x2758d58 size 0x138 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__PoseStatef GetNodePoseStateAtTime(double_t time, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetNodePoseStateImmediate addr 0x2758e90 size 0x128 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__PoseStatef GetNodePoseStateImmediate(::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method AreHandPosesGeneratedByControllerData addr 0x2758fb8 size 0xf4 virtual false final false
  static inline bool AreHandPosesGeneratedByControllerData(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method SetSimultaneousHandsAndControllersEnabled addr 0x27590ac size 0xcc virtual false final false
  static inline bool SetSimultaneousHandsAndControllersEnabled(bool enabled);

  /// @brief Method GetControllerIsInHand addr 0x2759178 size 0xf0 virtual false final false
  static inline bool GetControllerIsInHand(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Node nodeId);

  /// @brief Method GetCurrentTrackingTransformPose addr 0x2759268 size 0x120 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef GetCurrentTrackingTransformPose();

  /// @brief Method GetTrackingTransformRawPose addr 0x2759388 size 0x120 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef GetTrackingTransformRawPose();

  /// @brief Method GetTrackingTransformRelativePose addr 0x27594a8 size 0x160 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef GetTrackingTransformRelativePose(::GlobalNamespace::__OVRPlugin__TrackingOrigin trackingOrigin);

  /// @brief Method GetControllerState addr 0x2759608 size 0x84 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState GetControllerState(uint32_t controllerMask);

  /// @brief Method GetControllerState2 addr 0x275968c size 0x144 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState2 GetControllerState2(uint32_t controllerMask);

  /// @brief Method GetControllerState4 addr 0x27597d0 size 0x15c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState4 GetControllerState4(uint32_t controllerMask);

  /// @brief Method GetControllerState5 addr 0x275992c size 0x164 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState5 GetControllerState5(uint32_t controllerMask);

  /// @brief Method GetControllerState6 addr 0x2759a90 size 0x168 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ControllerState6 GetControllerState6(uint32_t controllerMask);

  /// @brief Method GetCurrentInteractionProfile addr 0x2759bf8 size 0xd4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__InteractionProfile GetCurrentInteractionProfile(::GlobalNamespace::__OVRPlugin__Hand hand);

  /// @brief Method GetCurrentDetachedInteractionProfile addr 0x2759ccc size 0xd4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__InteractionProfile GetCurrentDetachedInteractionProfile(::GlobalNamespace::__OVRPlugin__Hand hand);

  /// @brief Method SetControllerVibration addr 0x2759da0 size 0x7c virtual false final false
  static inline bool SetControllerVibration(uint32_t controllerMask, float_t frequency, float_t amplitude);

  /// @brief Method SetControllerLocalizedVibration addr 0x2759e1c size 0xf0 virtual false final false
  static inline bool SetControllerLocalizedVibration(::GlobalNamespace::__OVRPlugin__Controller controllerMask, ::GlobalNamespace::__OVRPlugin__HapticsLocation hapticsLocationMask, float_t frequency,
                                                     float_t amplitude);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope addr 0x2759f0c size 0xe0 virtual false final false
  static inline bool SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRPlugin__Controller controllerMask,
                                                           ::GlobalNamespace::__OVRPlugin__HapticsAmplitudeEnvelopeVibration hapticsVibration);

  /// @brief Method SetControllerHapticsPcm addr 0x2759fec size 0xf0 virtual false final false
  static inline bool SetControllerHapticsPcm(::GlobalNamespace::__OVRPlugin__Controller controllerMask, ::GlobalNamespace::__OVRPlugin__HapticsPcmVibration hapticsVibration);

  /// @brief Method GetControllerSampleRateHz addr 0x275a0dc size 0xdc virtual false final false
  static inline bool GetControllerSampleRateHz(::GlobalNamespace::__OVRPlugin__Controller controllerMask, ByRef<float_t> sampleRateHz);

  /// @brief Method GetControllerHapticsDesc addr 0x275a1b8 size 0xec virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__HapticsDesc GetControllerHapticsDesc(uint32_t controllerMask);

  /// @brief Method GetControllerHapticsState addr 0x275a2a4 size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__HapticsState GetControllerHapticsState(uint32_t controllerMask);

  /// @brief Method SetControllerHaptics addr 0x275a368 size 0xe0 virtual false final false
  static inline bool SetControllerHaptics(uint32_t controllerMask, ::GlobalNamespace::__OVRPlugin__HapticsBuffer hapticsBuffer);

  /// @brief Method GetEyeRecommendedResolutionScale addr 0x275a448 size 0xbc virtual false final false
  static inline float_t GetEyeRecommendedResolutionScale();

  /// @brief Method GetAppCpuStartToGpuEndTime addr 0x275a504 size 0xbc virtual false final false
  static inline float_t GetAppCpuStartToGpuEndTime();

  /// @brief Method GetBoundaryConfigured addr 0x275a5c0 size 0xc0 virtual false final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method TestBoundaryNode addr 0x275a680 size 0xec virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BoundaryTestResult TestBoundaryNode(::GlobalNamespace::__OVRPlugin__Node nodeId, ::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method TestBoundaryPoint addr 0x275a76c size 0x10c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BoundaryTestResult TestBoundaryPoint(::GlobalNamespace::__OVRPlugin__Vector3f point, ::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method GetBoundaryGeometry addr 0x275a878 size 0xec virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__BoundaryGeometry GetBoundaryGeometry(::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method GetBoundaryGeometry2 addr 0x275a964 size 0xe4 virtual false final false
  static inline bool GetBoundaryGeometry2(::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType, void* points, ByRef<int32_t> pointsCount);

  /// @brief Method GetAppPerfStats addr 0x275aa48 size 0x178 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__AppPerfStats GetAppPerfStats();

  /// @brief Method ResetAppPerfStats addr 0x275abc0 size 0x164 virtual false final false
  static inline bool ResetAppPerfStats();

  /// @brief Method GetAppFramerate addr 0x275ad24 size 0xbc virtual false final false
  static inline float_t GetAppFramerate();

  /// @brief Method SetHandNodePoseStateLatency addr 0x275ade0 size 0xd0 virtual false final false
  static inline bool SetHandNodePoseStateLatency(double_t latencyInSeconds);

  /// @brief Method GetHandNodePoseStateLatency addr 0x275aeb0 size 0xd0 virtual false final false
  static inline double_t GetHandNodePoseStateLatency();

  /// @brief Method SetControllerDrivenHandPoses addr 0x275af80 size 0xcc virtual false final false
  static inline bool SetControllerDrivenHandPoses(bool controllerDrivenHandPoses);

  /// @brief Method SetControllerDrivenHandPosesAreNatural addr 0x275b04c size 0xcc virtual false final false
  static inline bool SetControllerDrivenHandPosesAreNatural(bool controllerDrivenHandPosesAreNatural);

  /// @brief Method IsControllerDrivenHandPosesEnabled addr 0x275b118 size 0xd4 virtual false final false
  static inline bool IsControllerDrivenHandPosesEnabled();

  /// @brief Method AreControllerDrivenHandPosesNatural addr 0x275b1ec size 0xd4 virtual false final false
  static inline bool AreControllerDrivenHandPosesNatural();

  /// @brief Method GetDesiredEyeTextureFormat addr 0x275b2c0 size 0xc0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__EyeTextureFormat GetDesiredEyeTextureFormat();

  /// @brief Method SetDesiredEyeTextureFormat addr 0x275b380 size 0xc8 virtual false final false
  static inline bool SetDesiredEyeTextureFormat(::GlobalNamespace::__OVRPlugin__EyeTextureFormat value);

  /// @brief Method InitializeMixedReality addr 0x275b448 size 0xd4 virtual false final false
  static inline bool InitializeMixedReality();

  /// @brief Method ShutdownMixedReality addr 0x275b51c size 0xd4 virtual false final false
  static inline bool ShutdownMixedReality();

  /// @brief Method IsMixedRealityInitialized addr 0x275b5f0 size 0xd4 virtual false final false
  static inline bool IsMixedRealityInitialized();

  /// @brief Method GetExternalCameraCount addr 0x275b6c4 size 0xe4 virtual false final false
  static inline int32_t GetExternalCameraCount();

  /// @brief Method UpdateExternalCamera addr 0x275b7a8 size 0xd4 virtual false final false
  static inline bool UpdateExternalCamera();

  /// @brief Method GetMixedRealityCameraInfo addr 0x275b87c size 0x134 virtual false final false
  static inline bool GetMixedRealityCameraInfo(int32_t cameraId, ByRef<::GlobalNamespace::__OVRPlugin__CameraExtrinsics> cameraExtrinsics,
                                               ByRef<::GlobalNamespace::__OVRPlugin__CameraIntrinsics> cameraIntrinsics);

  /// @brief Method OverrideExternalCameraFov addr 0x275b9b0 size 0xf0 virtual false final false
  static inline bool OverrideExternalCameraFov(int32_t cameraId, bool useOverriddenFov, ::GlobalNamespace::__OVRPlugin__Fovf fov);

  /// @brief Method GetUseOverriddenExternalCameraFov addr 0x275baa0 size 0xec virtual false final false
  static inline bool GetUseOverriddenExternalCameraFov(int32_t cameraId);

  /// @brief Method OverrideExternalCameraStaticPose addr 0x275bb8c size 0xe4 virtual false final false
  static inline bool OverrideExternalCameraStaticPose(int32_t cameraId, bool useOverriddenPose, ::GlobalNamespace::__OVRPlugin__Posef poseInStageOrigin);

  /// @brief Method GetUseOverriddenExternalCameraStaticPose addr 0x275bc70 size 0xec virtual false final false
  static inline bool GetUseOverriddenExternalCameraStaticPose(int32_t cameraId);

  /// @brief Method ResetDefaultExternalCamera addr 0x275bd5c size 0xc0 virtual false final false
  static inline bool ResetDefaultExternalCamera();

  /// @brief Method SetDefaultExternalCamera addr 0x275be1c size 0xe0 virtual false final false
  static inline bool SetDefaultExternalCamera(::StringW cameraName, ByRef<::GlobalNamespace::__OVRPlugin__CameraIntrinsics> cameraIntrinsics,
                                              ByRef<::GlobalNamespace::__OVRPlugin__CameraExtrinsics> cameraExtrinsics);

  /// @brief Method SetExternalCameraProperties addr 0x275befc size 0xe0 virtual false final false
  static inline bool SetExternalCameraProperties(::StringW cameraName, ByRef<::GlobalNamespace::__OVRPlugin__CameraIntrinsics> cameraIntrinsics,
                                                 ByRef<::GlobalNamespace::__OVRPlugin__CameraExtrinsics> cameraExtrinsics);

  /// @brief Method SetMultimodalHandsControllersSupported addr 0x275bfdc size 0xe4 virtual false final false
  static inline bool SetMultimodalHandsControllersSupported(bool value);

  /// @brief Method IsMultimodalHandsControllersSupported addr 0x275c0c0 size 0xd4 virtual false final false
  static inline bool IsMultimodalHandsControllersSupported();

  /// @brief Method IsInsightPassthroughSupported addr 0x275c194 size 0x16c virtual false final false
  static inline bool IsInsightPassthroughSupported();

  /// @brief Method InitializeInsightPassthrough addr 0x275c300 size 0xc0 virtual false final false
  static inline bool InitializeInsightPassthrough();

  /// @brief Method ShutdownInsightPassthrough addr 0x275c3c0 size 0xc0 virtual false final false
  static inline bool ShutdownInsightPassthrough();

  /// @brief Method IsInsightPassthroughInitialized addr 0x275c480 size 0xc0 virtual false final false
  static inline bool IsInsightPassthroughInitialized();

  /// @brief Method GetInsightPassthroughInitializationState addr 0x275c540 size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetInsightPassthroughInitializationState();

  /// @brief Method CreateInsightTriangleMesh addr 0x27504d8 size 0x1a8 virtual false final false
  static inline bool CreateInsightTriangleMesh(int32_t layerId, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<int32_t, ::Array<int32_t>*> triangles,
                                               ByRef<uint64_t> meshHandle);

  /// @brief Method DestroyInsightTriangleMesh addr 0x274eca8 size 0xc8 virtual false final false
  static inline bool DestroyInsightTriangleMesh(uint64_t meshHandle);

  /// @brief Method AddInsightPassthroughSurfaceGeometry addr 0x2750680 size 0x124 virtual false final false
  static inline bool AddInsightPassthroughSurfaceGeometry(int32_t layerId, uint64_t meshHandle, ::UnityEngine::Matrix4x4 T_world_model, ByRef<uint64_t> geometryInstanceHandle);

  /// @brief Method DestroyInsightPassthroughGeometryInstance addr 0x274ebe0 size 0xc8 virtual false final false
  static inline bool DestroyInsightPassthroughGeometryInstance(uint64_t geometryInstanceHandle);

  /// @brief Method UpdateInsightPassthroughGeometryTransform addr 0x2750ef8 size 0x108 virtual false final false
  static inline bool UpdateInsightPassthroughGeometryTransform(uint64_t geometryInstanceHandle, ::UnityEngine::Matrix4x4 transform);

  /// @brief Method SetInsightPassthroughStyle addr 0x27517a8 size 0x214 virtual false final false
  static inline bool SetInsightPassthroughStyle(int32_t layerId, ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2 style);

  /// @brief Method SetInsightPassthroughStyle addr 0x275c5fc size 0x118 virtual false final false
  static inline bool SetInsightPassthroughStyle(int32_t layerId, ::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle style);

  /// @brief Method CreatePassthroughColorLut addr 0x275c714 size 0x120 virtual false final false
  static inline bool CreatePassthroughColorLut(::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels channels, uint32_t resolution, ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData data,
                                               ByRef<uint64_t> colorLut);

  /// @brief Method DestroyPassthroughColorLut addr 0x275c834 size 0xe8 virtual false final false
  static inline bool DestroyPassthroughColorLut(uint64_t colorLut);

  /// @brief Method UpdatePassthroughColorLut addr 0x275c91c size 0x100 virtual false final false
  static inline bool UpdatePassthroughColorLut(uint64_t colorLut, ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData data);

  /// @brief Method SetInsightPassthroughKeyboardHandsIntensity addr 0x275ca1c size 0xe0 virtual false final false
  static inline bool SetInsightPassthroughKeyboardHandsIntensity(int32_t layerId, ::GlobalNamespace::__OVRPlugin__InsightPassthroughKeyboardHandsIntensity intensity);

  /// @brief Method GetPassthroughCapabilityFlags addr 0x275cafc size 0x1b4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags GetPassthroughCapabilityFlags();

  /// @brief Method GetPassthroughCapabilities addr 0x275ccb0 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetPassthroughCapabilities(ByRef<::GlobalNamespace::__OVRPlugin__PassthroughCapabilities> outCapabilities);

  /// @brief Method GetBoundaryDimensions addr 0x275cd7c size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Vector3f GetBoundaryDimensions(::GlobalNamespace::__OVRPlugin__BoundaryType boundaryType);

  /// @brief Method GetBoundaryVisible addr 0x275ce40 size 0xc0 virtual false final false
  static inline bool GetBoundaryVisible();

  /// @brief Method SetBoundaryVisible addr 0x275cf00 size 0xe4 virtual false final false
  static inline bool SetBoundaryVisible(bool value);

  /// @brief Method GetSystemHeadsetType addr 0x275cfe4 size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__SystemHeadset GetSystemHeadsetType();

  /// @brief Method GetActiveController addr 0x275d0a0 size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Controller GetActiveController();

  /// @brief Method GetConnectedControllers addr 0x275d15c size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Controller GetConnectedControllers();

  /// @brief Method ToBool addr 0x27551b8 size 0x8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Bool ToBool(bool b);

  /// @brief Method GetTrackingOriginType addr 0x275d218 size 0x50 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__TrackingOrigin GetTrackingOriginType();

  /// @brief Method SetTrackingOriginType addr 0x275d268 size 0x64 virtual false final false
  static inline bool SetTrackingOriginType(::GlobalNamespace::__OVRPlugin__TrackingOrigin originType);

  /// @brief Method GetTrackingCalibratedOrigin addr 0x275d2cc size 0x74 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef GetTrackingCalibratedOrigin();

  /// @brief Method SetTrackingCalibratedOrigin addr 0x275d340 size 0x5c virtual false final false
  static inline bool SetTrackingCalibratedOrigin();

  /// @brief Method RecenterTrackingOrigin addr 0x275d39c size 0x64 virtual false final false
  static inline bool RecenterTrackingOrigin(::GlobalNamespace::__OVRPlugin__RecenterFlags flags);

  /// @brief Method get_foveatedRenderingSupported addr 0x275d400 size 0x74 virtual false final false
  static inline bool get_foveatedRenderingSupported();

  /// @brief Method get_eyeTrackedFoveatedRenderingSupported addr 0x275d544 size 0xcc virtual false final false
  static inline bool get_eyeTrackedFoveatedRenderingSupported();

  /// @brief Method get_eyeTrackedFoveatedRenderingEnabled addr 0x275d610 size 0xec virtual false final false
  static inline bool get_eyeTrackedFoveatedRenderingEnabled();

  /// @brief Method set_eyeTrackedFoveatedRenderingEnabled addr 0x275d6fc size 0xe8 virtual false final false
  static inline void set_eyeTrackedFoveatedRenderingEnabled(bool value);

  /// @brief Method get_fixedFoveatedRenderingSupported addr 0x275d474 size 0xd0 virtual false final false
  static inline bool get_fixedFoveatedRenderingSupported();

  /// @brief Method get_foveatedRenderingLevel addr 0x275d7e4 size 0xe4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel get_foveatedRenderingLevel();

  /// @brief Method set_foveatedRenderingLevel addr 0x275d8c8 size 0xe4 virtual false final false
  static inline void set_foveatedRenderingLevel(::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel value);

  /// @brief Method get_fixedFoveatedRenderingLevel addr 0x275d9ac size 0x4c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel get_fixedFoveatedRenderingLevel();

  /// @brief Method set_fixedFoveatedRenderingLevel addr 0x275d9f8 size 0x54 virtual false final false
  static inline void set_fixedFoveatedRenderingLevel(::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel value);

  /// @brief Method get_useDynamicFoveatedRendering addr 0x275da4c size 0xf0 virtual false final false
  static inline bool get_useDynamicFoveatedRendering();

  /// @brief Method set_useDynamicFoveatedRendering addr 0x275db3c size 0xe8 virtual false final false
  static inline void set_useDynamicFoveatedRendering(bool value);

  /// @brief Method get_useDynamicFixedFoveatedRendering addr 0x275dc24 size 0x4c virtual false final false
  static inline bool get_useDynamicFixedFoveatedRendering();

  /// @brief Method set_useDynamicFixedFoveatedRendering addr 0x275dc70 size 0x54 virtual false final false
  static inline void set_useDynamicFixedFoveatedRendering(bool value);

  /// @brief Method get_tiledMultiResSupported addr 0x275dcc4 size 0x4c virtual false final false
  static inline bool get_tiledMultiResSupported();

  /// @brief Method get_tiledMultiResLevel addr 0x275dd10 size 0x4c virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__TiledMultiResLevel get_tiledMultiResLevel();

  /// @brief Method set_tiledMultiResLevel addr 0x275dd5c size 0x54 virtual false final false
  static inline void set_tiledMultiResLevel(::GlobalNamespace::__OVRPlugin__TiledMultiResLevel value);

  /// @brief Method get_gpuUtilSupported addr 0x275ddb0 size 0xd0 virtual false final false
  static inline bool get_gpuUtilSupported();

  /// @brief Method get_gpuUtilLevel addr 0x275de80 size 0xf0 virtual false final false
  static inline float_t get_gpuUtilLevel();

  /// @brief Method get_systemDisplayFrequenciesAvailable addr 0x275df70 size 0x2a4 virtual false final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> get_systemDisplayFrequenciesAvailable();

  /// @brief Method get_systemDisplayFrequency addr 0x275e214 size 0x14c virtual false final false
  static inline float_t get_systemDisplayFrequency();

  /// @brief Method set_systemDisplayFrequency addr 0x275e360 size 0xcc virtual false final false
  static inline void set_systemDisplayFrequency(float_t value);

  /// @brief Method get_eyeFovPremultipliedAlphaModeEnabled addr 0x275e42c size 0xd0 virtual false final false
  static inline bool get_eyeFovPremultipliedAlphaModeEnabled();

  /// @brief Method set_eyeFovPremultipliedAlphaModeEnabled addr 0x275e4fc size 0xe0 virtual false final false
  static inline void set_eyeFovPremultipliedAlphaModeEnabled(bool value);

  /// @brief Method GetNodeFrustum2 addr 0x275e5dc size 0xe0 virtual false final false
  static inline bool GetNodeFrustum2(::GlobalNamespace::__OVRPlugin__Node nodeId, ByRef<::GlobalNamespace::__OVRPlugin__Frustumf2> frustum);

  /// @brief Method get_AsymmetricFovEnabled addr 0x275e6bc size 0xd4 virtual false final false
  static inline bool get_AsymmetricFovEnabled();

  /// @brief Method get_EyeTextureArrayEnabled addr 0x275e790 size 0xc0 virtual false final false
  static inline bool get_EyeTextureArrayEnabled();

  /// @brief Method get_localDimmingSupported addr 0x275e850 size 0xd4 virtual false final false
  static inline bool get_localDimmingSupported();

  /// @brief Method get_localDimming addr 0x275e924 size 0xf4 virtual false final false
  static inline bool get_localDimming();

  /// @brief Method set_localDimming addr 0x275ea18 size 0xe8 virtual false final false
  static inline void set_localDimming(bool value);

  /// @brief Method GetDominantHand addr 0x275eb00 size 0xcc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Handedness GetDominantHand();

  /// @brief Method SendEvent addr 0x275ebcc size 0x194 virtual false final false
  static inline bool SendEvent(::StringW name, ::StringW param, ::StringW source);

  /// @brief Method SetHeadPoseModifier addr 0x275ed60 size 0xd8 virtual false final false
  static inline bool SetHeadPoseModifier(ByRef<::GlobalNamespace::__OVRPlugin__Quatf> relativeRotation, ByRef<::GlobalNamespace::__OVRPlugin__Vector3f> relativeTranslation);

  /// @brief Method GetHeadPoseModifier addr 0x275ee38 size 0x14c virtual false final false
  static inline bool GetHeadPoseModifier(ByRef<::GlobalNamespace::__OVRPlugin__Quatf> relativeRotation, ByRef<::GlobalNamespace::__OVRPlugin__Vector3f> relativeTranslation);

  /// @brief Method IsPerfMetricsSupported addr 0x275ef84 size 0xe0 virtual false final false
  static inline bool IsPerfMetricsSupported(::GlobalNamespace::__OVRPlugin__PerfMetrics perfMetrics);

  /// @brief Method GetPerfMetricsFloat addr 0x275f064 size 0x104 virtual false final false
  static inline ::System::Nullable_1<float_t> GetPerfMetricsFloat(::GlobalNamespace::__OVRPlugin__PerfMetrics perfMetrics);

  /// @brief Method GetPerfMetricsInt addr 0x275f168 size 0x104 virtual false final false
  static inline ::System::Nullable_1<int32_t> GetPerfMetricsInt(::GlobalNamespace::__OVRPlugin__PerfMetrics perfMetrics);

  /// @brief Method GetTimeInSeconds addr 0x275f26c size 0xcc virtual false final false
  static inline double_t GetTimeInSeconds();

  /// @brief Method SetColorScaleAndOffset addr 0x275f338 size 0x164 virtual false final false
  static inline bool SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset, bool applyToAllLayers);

  /// @brief Method AddCustomMetadata addr 0x275f49c size 0xd8 virtual false final false
  static inline bool AddCustomMetadata(::StringW name, ::StringW param);

  /// @brief Method SetDeveloperMode addr 0x275f574 size 0xc8 virtual false final false
  static inline bool SetDeveloperMode(::GlobalNamespace::__OVRPlugin__Bool active);

  /// @brief Method GetAdaptiveGPUPerformanceScale addr 0x275f63c size 0xd8 virtual false final false
  static inline float_t GetAdaptiveGPUPerformanceScale();

  /// @brief Method GetHandTrackingEnabled addr 0x275f714 size 0xd4 virtual false final false
  static inline bool GetHandTrackingEnabled();

  /// @brief Method GetHandState addr 0x275f7e8 size 0x6a4 virtual false final false
  static inline bool GetHandState(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRPlugin__Hand hand, ByRef<::GlobalNamespace::__OVRPlugin__HandState> handState);

  /// @brief Method IsValidBone addr 0x275fe8c size 0x28 virtual false final false
  static inline bool IsValidBone(::GlobalNamespace::__OVRPlugin__BoneId bone, ::GlobalNamespace::__OVRPlugin__SkeletonType skeletonType);

  /// @brief Method GetSkeleton addr 0x275feb4 size 0xe0 virtual false final false
  static inline bool GetSkeleton(::GlobalNamespace::__OVRPlugin__SkeletonType skeletonType, ByRef<::GlobalNamespace::__OVRPlugin__Skeleton> skeleton);

  /// @brief Method GetSkeleton2 addr 0x275ff94 size 0x2310 virtual false final false
  static inline bool GetSkeleton2(::GlobalNamespace::__OVRPlugin__SkeletonType skeletonType, ByRef<::GlobalNamespace::__OVRPlugin__Skeleton2> skeleton);

  /// @brief Method get_bodyTrackingSupported addr 0x2753308 size 0xd0 virtual false final false
  static inline bool get_bodyTrackingSupported();

  /// @brief Method get_bodyTrackingEnabled addr 0x27622a4 size 0xd0 virtual false final false
  static inline bool get_bodyTrackingEnabled();

  /// @brief Method GetBodyState addr 0x2762374 size 0x221c virtual false final false
  static inline bool GetBodyState(::GlobalNamespace::__OVRPlugin__Step stepId, ByRef<::GlobalNamespace::__OVRPlugin__BodyState> bodyState);

  /// @brief Method GetMesh addr 0x2764590 size 0x1cc virtual false final false
  static inline bool GetMesh(::GlobalNamespace::__OVRPlugin__MeshType meshType, ByRef<::GlobalNamespace::__OVRPlugin__Mesh*> mesh);

  /// @brief Method StartKeyboardTracking addr 0x276475c size 0xc8 virtual false final false
  static inline bool StartKeyboardTracking(uint64_t trackedKeyboardId);

  /// @brief Method StopKeyboardTracking addr 0x2764824 size 0xc0 virtual false final false
  static inline bool StopKeyboardTracking();

  /// @brief Method GetKeyboardState addr 0x27648e4 size 0xf0 virtual false final false
  static inline bool GetKeyboardState(::GlobalNamespace::__OVRPlugin__Step stepId, ByRef<::GlobalNamespace::__OVRPlugin__KeyboardState> keyboardState);

  /// @brief Method GetSystemKeyboardDescription addr 0x27649d4 size 0xe4 virtual false final false
  static inline bool GetSystemKeyboardDescription(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags keyboardQueryFlags,
                                                  ByRef<::GlobalNamespace::__OVRPlugin__KeyboardDescription> keyboardDescription);

  /// @brief Method CreateVirtualKeyboard addr 0x2764ab8 size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result CreateVirtualKeyboard(::GlobalNamespace::__OVRPlugin__VirtualKeyboardCreateInfo createInfo);

  /// @brief Method DestroyVirtualKeyboard addr 0x2764b74 size 0xbc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result DestroyVirtualKeyboard();

  /// @brief Method SendVirtualKeyboardInput addr 0x2764c30 size 0xf8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result SendVirtualKeyboardInput(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputInfo inputInfo,
                                                                                ByRef<::GlobalNamespace::__OVRPlugin__Posef> interactorRootPose);

  /// @brief Method ChangeVirtualKeyboardTextContext addr 0x2764d28 size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ChangeVirtualKeyboardTextContext(::StringW textContext);

  /// @brief Method CreateVirtualKeyboardSpace addr 0x2764dec size 0xec virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result CreateVirtualKeyboardSpace(::GlobalNamespace::__OVRPlugin__VirtualKeyboardSpaceCreateInfo createInfo, ByRef<uint64_t> keyboardSpace);

  /// @brief Method SuggestVirtualKeyboardLocation addr 0x2764ed8 size 0xe8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result SuggestVirtualKeyboardLocation(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo locationInfo);

  /// @brief Method GetVirtualKeyboardScale addr 0x2764fc0 size 0xc8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetVirtualKeyboardScale(ByRef<float_t> scale);

  /// @brief Method GetVirtualKeyboardModelAnimationStates addr 0x2765088 size 0x494 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetVirtualKeyboardModelAnimationStates(ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStates> animationStates);

  /// @brief Method GetVirtualKeyboardDirtyTextures addr 0x276551c size 0x2dc virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetVirtualKeyboardDirtyTextures(ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIds> textureIds);

  /// @brief Method GetVirtualKeyboardTextureData addr 0x27657f8 size 0xd8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetVirtualKeyboardTextureData(uint64_t textureId, ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureData> textureData);

  /// @brief Method SetVirtualKeyboardModelVisibility addr 0x27658d0 size 0xc4 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result SetVirtualKeyboardModelVisibility(ByRef<::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelVisibility> visibility);

  /// @brief Method get_faceTrackingEnabled addr 0x2765994 size 0xd0 virtual false final false
  static inline bool get_faceTrackingEnabled();

  /// @brief Method get_faceTrackingSupported addr 0x2753238 size 0xd0 virtual false final false
  static inline bool get_faceTrackingSupported();

  /// @brief Method GetFaceStateInternal addr 0x2765a64 size 0x57c virtual false final false
  static inline bool GetFaceStateInternal(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex, ByRef<::GlobalNamespace::__OVRPlugin__FaceState> faceState);

  /// @brief Method GetFaceState addr 0x2765fe0 size 0x150 virtual false final false
  static inline bool GetFaceState(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex, ByRef<::GlobalNamespace::__OVRPlugin__FaceState> faceState);

  /// @brief Method get_eyeTrackingEnabled addr 0x2766130 size 0xd0 virtual false final false
  static inline bool get_eyeTrackingEnabled();

  /// @brief Method get_eyeTrackingSupported addr 0x27533d8 size 0xd0 virtual false final false
  static inline bool get_eyeTrackingSupported();

  /// @brief Method GetEyeGazesState addr 0x2766200 size 0x274 virtual false final false
  static inline bool GetEyeGazesState(::GlobalNamespace::__OVRPlugin__Step stepId, int32_t frameIndex, ByRef<::GlobalNamespace::__OVRPlugin__EyeGazesState> eyeGazesState);

  /// @brief Method StartEyeTracking addr 0x2766474 size 0xc0 virtual false final false
  static inline bool StartEyeTracking();

  /// @brief Method StopEyeTracking addr 0x2766534 size 0xc0 virtual false final false
  static inline bool StopEyeTracking();

  /// @brief Method StartFaceTracking addr 0x27665f4 size 0xc0 virtual false final false
  static inline bool StartFaceTracking();

  /// @brief Method StopFaceTracking addr 0x27666b4 size 0xc0 virtual false final false
  static inline bool StopFaceTracking();

  /// @brief Method StartBodyTracking addr 0x2766774 size 0xc0 virtual false final false
  static inline bool StartBodyTracking();

  /// @brief Method StopBodyTracking addr 0x2766834 size 0xc0 virtual false final false
  static inline bool StopBodyTracking();

  /// @brief Method GetLocalTrackingSpaceRecenterCount addr 0x27668f4 size 0xd0 virtual false final false
  static inline int32_t GetLocalTrackingSpaceRecenterCount();

  /// @brief Method GetSystemHmd3DofModeEnabled addr 0x27669c4 size 0xd4 virtual false final false
  static inline bool GetSystemHmd3DofModeEnabled();

  /// @brief Method SetClientColorDesc addr 0x2766a98 size 0x114 virtual false final false
  static inline bool SetClientColorDesc(::GlobalNamespace::__OVRPlugin__ColorSpace colorSpace);

  /// @brief Method GetHmdColorDesc addr 0x2766bac size 0x130 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__ColorSpace GetHmdColorDesc();

  /// @brief Method PollEvent addr 0x2766cdc size 0x218 virtual false final false
  static inline bool PollEvent(ByRef<::GlobalNamespace::__OVRPlugin__EventDataBuffer> eventDataBuffer);

  /// @brief Method GetNativeOpenXRInstance addr 0x2766ef4 size 0xdc virtual false final false
  static inline uint64_t GetNativeOpenXRInstance();

  /// @brief Method GetNativeOpenXRSession addr 0x2766fd0 size 0xdc virtual false final false
  static inline uint64_t GetNativeOpenXRSession();

  /// @brief Method SetKeyboardOverlayUV addr 0x27670ac size 0xd8 virtual false final false
  static inline bool SetKeyboardOverlayUV(::GlobalNamespace::__OVRPlugin__Vector2f uv);

  /// @brief Method CreateSpatialAnchor addr 0x2767184 size 0xdc virtual false final false
  static inline bool CreateSpatialAnchor(::GlobalNamespace::__OVRPlugin__SpatialAnchorCreateInfo createInfo, ByRef<uint64_t> requestId);

  /// @brief Method SetSpaceComponentStatus addr 0x2767260 size 0x1e4 virtual false final false
  static inline bool SetSpaceComponentStatus(uint64_t space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, bool enable, double_t timeout, ByRef<uint64_t> requestId);

  /// @brief Method GetSpaceComponentStatus addr 0x2767444 size 0x88 virtual false final false
  static inline bool GetSpaceComponentStatus(uint64_t space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, ByRef<bool> enabled, ByRef<bool> changePending);

  /// @brief Method GetSpaceComponentStatusInternal addr 0x27674cc size 0x114 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetSpaceComponentStatusInternal(uint64_t space, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, ByRef<bool> enabled,
                                                                                       ByRef<bool> changePending);

  /// @brief Method EnumerateSpaceSupportedComponents addr 0x27675e0 size 0xf0 virtual false final false
  static inline bool EnumerateSpaceSupportedComponents(uint64_t space, ByRef<uint32_t> numSupportedComponents,
                                                       ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> supportedComponents);

  /// @brief Method SaveSpace addr 0x27676d0 size 0xf4 virtual false final false
  static inline bool SaveSpace(uint64_t space, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location, ::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode mode,
                               ByRef<uint64_t> requestId);

  /// @brief Method EraseSpace addr 0x27677c4 size 0x194 virtual false final false
  static inline bool EraseSpace(uint64_t space, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location, ByRef<uint64_t> requestId);

  /// @brief Method GetSpaceUuid addr 0x2767958 size 0xdc virtual false final false
  static inline bool GetSpaceUuid(uint64_t space, ByRef<::System::Guid> uuid);

  /// @brief Method QuerySpaces addr 0x2767a34 size 0x21c virtual false final false
  static inline bool QuerySpaces(::GlobalNamespace::__OVRPlugin__SpaceQueryInfo queryInfo, ByRef<uint64_t> requestId);

  /// @brief Method RetrieveSpaceQueryResults addr 0x2767c50 size 0x1b4 virtual false final false
  static inline bool RetrieveSpaceQueryResults(uint64_t requestId, ByRef<::Unity::Collections::NativeArray_1<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>> results,
                                               ::Unity::Collections::Allocator allocator);

  /// @brief Method RetrieveSpaceQueryResults addr 0x2767e04 size 0x38c virtual false final false
  static inline bool RetrieveSpaceQueryResults(uint64_t requestId,
                                               ByRef<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceQueryResult, ::Array<::GlobalNamespace::__OVRPlugin__SpaceQueryResult>*>> results);

  /// @brief Method SaveSpaceList addr 0x2768190 size 0x124 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result SaveSpaceList(::Unity::Collections::NativeArray_1<uint64_t> spaces, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location,
                                                                     ByRef<uint64_t> requestId);

  /// @brief Method GetSpaceUserId addr 0x27682b4 size 0xdc virtual false final false
  static inline bool GetSpaceUserId(uint64_t spaceUserHandle, ByRef<uint64_t> spaceUserId);

  /// @brief Method CreateSpaceUser addr 0x2768390 size 0xdc virtual false final false
  static inline bool CreateSpaceUser(uint64_t spaceUserId, ByRef<uint64_t> spaceUserHandle);

  /// @brief Method DestroySpaceUser addr 0x276846c size 0xc8 virtual false final false
  static inline bool DestroySpaceUser(uint64_t spaceUserHandle);

  /// @brief Method ShareSpaces addr 0x2768534 size 0x140 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result ShareSpaces(::Unity::Collections::NativeArray_1<uint64_t> spaces, ::Unity::Collections::NativeArray_1<uint64_t> userHandles,
                                                                   ByRef<uint64_t> requestId);

  /// @brief Method TryLocateSpace addr 0x2768674 size 0x1e0 virtual false final false
  static inline bool TryLocateSpace(uint64_t space, ::GlobalNamespace::__OVRPlugin__TrackingOrigin baseOrigin, ByRef<::GlobalNamespace::__OVRPlugin__Posef> pose);

  /// @brief Method LocateSpace addr 0x2768854 size 0xd0 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Posef LocateSpace(uint64_t space, ::GlobalNamespace::__OVRPlugin__TrackingOrigin baseOrigin);

  /// @brief Method TryLocateSpace addr 0x2768924 size 0x168 virtual false final false
  static inline bool TryLocateSpace(uint64_t space, ::GlobalNamespace::__OVRPlugin__TrackingOrigin baseOrigin, ByRef<::GlobalNamespace::__OVRPlugin__Posef> pose,
                                    ByRef<::GlobalNamespace::__OVRPlugin__SpaceLocationFlags> locationFlags);

  /// @brief Method DestroySpace addr 0x2768a8c size 0xc8 virtual false final false
  static inline bool DestroySpace(uint64_t space);

  /// @brief Method GetSpaceContainer addr 0x2768b54 size 0x274 virtual false final false
  static inline bool GetSpaceContainer(uint64_t space, ByRef<::ArrayW<::System::Guid, ::Array<::System::Guid>*>> containerUuids);

  /// @brief Method GetSpaceBoundingBox2D addr 0x2768dc8 size 0xdc virtual false final false
  static inline bool GetSpaceBoundingBox2D(uint64_t space, ByRef<::GlobalNamespace::__OVRPlugin__Rectf> rect);

  /// @brief Method GetSpaceBoundingBox3D addr 0x2768ea4 size 0xe0 virtual false final false
  static inline bool GetSpaceBoundingBox3D(uint64_t space, ByRef<::GlobalNamespace::__OVRPlugin__Boundsf> bounds);

  /// @brief Method GetSpaceSemanticLabels addr 0x2768f84 size 0x190 virtual false final false
  static inline bool GetSpaceSemanticLabels(uint64_t space, ByRef<::StringW> labels);

  /// @brief Method GetSpaceRoomLayout addr 0x2769114 size 0x250 virtual false final false
  static inline bool GetSpaceRoomLayout(uint64_t space, ByRef<::GlobalNamespace::__OVRPlugin__RoomLayout> roomLayout);

  /// @brief Method GetSpaceBoundary2DCount addr 0x2769364 size 0xec virtual false final false
  static inline bool GetSpaceBoundary2DCount(uint64_t space, ByRef<int32_t> count);

  /// @brief Method GetSpaceBoundary2D addr 0x2769450 size 0x84 virtual false final false
  static inline bool GetSpaceBoundary2D(uint64_t space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> boundary);

  /// @brief Method GetSpaceBoundary2D addr 0x27694d4 size 0x128 virtual false final false
  static inline bool GetSpaceBoundary2D(uint64_t space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> boundary, ByRef<int32_t> count);

  /// @brief Method GetSpaceBoundary2D addr 0x27695fc size 0x1a0 virtual false final false
  static inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetSpaceBoundary2D(uint64_t space, ::Unity::Collections::Allocator allocator);

  /// @brief Method GetSpaceBoundary2D addr 0x276979c size 0x318 virtual false final false
  static inline bool GetSpaceBoundary2D(uint64_t space, ByRef<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>> boundary);

  /// @brief Method RequestSceneCapture addr 0x2769ab4 size 0x120 virtual false final false
  static inline bool RequestSceneCapture(::StringW requestString, ByRef<uint64_t> requestId);

  /// @brief Method GetSpaceTriangleMeshCounts addr 0x2769bd4 size 0x1c0 virtual false final false
  static inline bool GetSpaceTriangleMeshCounts(uint64_t space, ByRef<int32_t> vertexCount, ByRef<int32_t> triangleCount);

  /// @brief Method GetSpaceTriangleMesh addr 0x2769d94 size 0x200 virtual false final false
  static inline bool GetSpaceTriangleMesh(uint64_t space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> vertices, ::Unity::Collections::NativeArray_1<int32_t> triangles);

  /// @brief Method GetLayerRecommendedResolution addr 0x2769f94 size 0xdc virtual false final false
  static inline bool GetLayerRecommendedResolution(int32_t layerId, ByRef<::GlobalNamespace::__OVRPlugin__Sizei> recommendedSize);

  /// @brief Method GetEyeLayerRecommendedResolution addr 0x276a070 size 0xcc virtual false final false
  static inline bool GetEyeLayerRecommendedResolution(ByRef<::GlobalNamespace::__OVRPlugin__Sizei> recommendedSize);

  /// @brief Method GetRenderModelPaths addr 0x276a13c size 0x22c virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetRenderModelPaths();

  /// @brief Method GetRenderModelProperties addr 0x276a368 size 0x1a4 virtual false final false
  static inline bool GetRenderModelProperties(::StringW modelPath, ByRef<::GlobalNamespace::__OVRPlugin__RenderModelProperties> modelProperties);

  /// @brief Method LoadRenderModel addr 0x276a50c size 0x200 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> LoadRenderModel(uint64_t modelKey);

  /// @brief Method OnEditorShutdown addr 0x276a70c size 0xb8 virtual false final false
  static inline void OnEditorShutdown();

  /// @brief Method GetPassthroughPreferences addr 0x276a7c4 size 0xc8 virtual false final false
  static inline ::GlobalNamespace::__OVRPlugin__Result GetPassthroughPreferences(ByRef<::GlobalNamespace::__OVRPlugin__PassthroughPreferences> preferences);

  /// @brief Method SetEyeBufferSharpenType addr 0x276a88c size 0xc8 virtual false final false
  static inline bool SetEyeBufferSharpenType(::GlobalNamespace::__OVRPlugin__LayerSharpenType sharpenType);

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlugin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPlugin(OVRPlugin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPlugin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPlugin(OVRPlugin const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPlugin();

public:
  /// @brief Field isSupportedPlatform offset 0xffffffff size 0x1
  static constexpr bool isSupportedPlatform{ true };

  /// @brief Field OverlayShapeFlagShift offset 0xffffffff size 0x4
  static constexpr int32_t OverlayShapeFlagShift{ static_cast<int32_t>(0x4) };

  /// @brief Field AppPerfFrameStatsMaxCount offset 0xffffffff size 0x4
  static constexpr int32_t AppPerfFrameStatsMaxCount{ static_cast<int32_t>(0x5) };

  /// @brief Field EventDataBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t EventDataBufferSize{ static_cast<int32_t>(0xfa0) };

  /// @brief Field RENDER_MODEL_NULL_KEY offset 0xffffffff size 0x4
  static constexpr int32_t RENDER_MODEL_NULL_KEY{ static_cast<int32_t>(0x0) };

  /// @brief Field SpaceFilterInfoIdsMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t SpaceFilterInfoIdsMaxSize{ static_cast<int32_t>(0x400) };

  /// @brief Field SpaceFilterInfoComponentsMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t SpaceFilterInfoComponentsMaxSize{ static_cast<int32_t>(0x10) };

  /// @brief Field SpatialEntityMaxQueryResultsPerEvent offset 0xffffffff size 0x4
  static constexpr int32_t SpatialEntityMaxQueryResultsPerEvent{ static_cast<int32_t>(0x80) };

  /// @brief Field pluginName offset 0xffffffff size 0x8
  static constexpr ::ConstString pluginName{ u"OVRPlugin" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPlugin, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BatteryStatus, "", "OVRPlugin/BatteryStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BlendFactor, "", "OVRPlugin/BlendFactor");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BoneId, "", "OVRPlugin/BoneId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Bool, "", "OVRPlugin/Bool");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BoundaryType, "", "OVRPlugin/BoundaryType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraAnchorType, "", "OVRPlugin/CameraAnchorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraDevice, "", "OVRPlugin/CameraDevice");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraDeviceDepthQuality, "", "OVRPlugin/CameraDeviceDepthQuality");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraDeviceDepthSensingMode, "", "OVRPlugin/CameraDeviceDepthSensingMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraStatus, "", "OVRPlugin/CameraStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ColorSpace, "", "OVRPlugin/ColorSpace");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Controller, "", "OVRPlugin/Controller");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__EventType, "", "OVRPlugin/EventType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Eye, "", "OVRPlugin/Eye");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__EyeTextureFormat, "", "OVRPlugin/EyeTextureFormat");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceConstants, "", "OVRPlugin/FaceConstants");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceExpression, "", "OVRPlugin/FaceExpression");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceRegionConfidence, "", "OVRPlugin/FaceRegionConfidence");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FeatureType, "", "OVRPlugin/FeatureType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FixedFoveatedRenderingLevel, "", "OVRPlugin/FixedFoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FoveatedRenderingLevel, "", "OVRPlugin/FoveatedRenderingLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Hand, "", "OVRPlugin/Hand");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HandFinger, "", "OVRPlugin/HandFinger");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HandFingerPinch, "", "OVRPlugin/HandFingerPinch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HandStatus, "", "OVRPlugin/HandStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Handedness, "", "OVRPlugin/Handedness");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsConstants, "", "OVRPlugin/HapticsConstants");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsLocation, "", "OVRPlugin/HapticsLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType, "", "OVRPlugin/InsightPassthroughColorMapType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyleFlags, "", "OVRPlugin/InsightPassthroughStyleFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__InteractionProfile, "", "OVRPlugin/InteractionProfile");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__KeyboardDescriptionConstants, "", "OVRPlugin/KeyboardDescriptionConstants");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerFlags, "", "OVRPlugin/LayerFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerLayout, "", "OVRPlugin/LayerLayout");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerSharpenType, "", "OVRPlugin/LayerSharpenType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerSuperSamplingType, "", "OVRPlugin/LayerSuperSamplingType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LogLevel, "", "OVRPlugin/LogLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Media__InputVideoBufferType, "", "OVRPlugin/Media/InputVideoBufferType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Media__MrcActivationMode, "", "OVRPlugin/Media/MrcActivationMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Media__PlatformCameraMode, "", "OVRPlugin/Media/PlatformCameraMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__MeshConstants, "", "OVRPlugin/MeshConstants");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__MeshType, "", "OVRPlugin/MeshType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Node, "", "OVRPlugin/Node");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OverlayFlag, "", "OVRPlugin/OverlayFlag");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OverlayShape, "", "OVRPlugin/OverlayShape");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFields, "", "OVRPlugin/PassthroughCapabilityFields");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughCapabilityFlags, "", "OVRPlugin/PassthroughCapabilityFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughColorLutChannels, "", "OVRPlugin/PassthroughColorLutChannels");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFields, "", "OVRPlugin/PassthroughPreferenceFields");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughPreferenceFlags, "", "OVRPlugin/PassthroughPreferenceFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PerfMetrics, "", "OVRPlugin/PerfMetrics");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PlatformUI, "", "OVRPlugin/PlatformUI");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ProcessorPerformanceLevel, "", "OVRPlugin/ProcessorPerformanceLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Qpl__ResultType, "", "OVRPlugin/Qpl/ResultType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__RecenterFlags, "", "OVRPlugin/RecenterFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__RenderModelFlags, "", "OVRPlugin/RenderModelFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Result, "", "OVRPlugin/Result");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SkeletonConstants, "", "OVRPlugin/SkeletonConstants");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SkeletonType, "", "OVRPlugin/SkeletonType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceComponentType, "", "OVRPlugin/SpaceComponentType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceLocationFlags, "", "OVRPlugin/SpaceLocationFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType, "", "OVRPlugin/SpaceQueryActionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceQueryFilterType, "", "OVRPlugin/SpaceQueryFilterType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceQueryType, "", "OVRPlugin/SpaceQueryType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceStorageLocation, "", "OVRPlugin/SpaceStorageLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceStoragePersistenceMode, "", "OVRPlugin/SpaceStoragePersistenceMode");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Step, "", "OVRPlugin/Step");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SystemHeadset, "", "OVRPlugin/SystemHeadset");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SystemRegion, "", "OVRPlugin/SystemRegion");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TiledMultiResLevel, "", "OVRPlugin/TiledMultiResLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags, "", "OVRPlugin/TrackedKeyboardFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles, "", "OVRPlugin/TrackedKeyboardPresentationStyles");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags, "", "OVRPlugin/TrackedKeyboardQueryFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Tracker, "", "OVRPlugin/Tracker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TrackingConfidence, "", "OVRPlugin/TrackingConfidence");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TrackingOrigin, "", "OVRPlugin/TrackingOrigin");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputSource, "", "OVRPlugin/VirtualKeyboardInputSource");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputStateFlags, "", "OVRPlugin/VirtualKeyboardInputStateFlags");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationType, "", "OVRPlugin/VirtualKeyboardLocationType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__XrApi, "", "OVRPlugin/XrApi");
NEED_NO_BOX(::GlobalNamespace::OVRPlugin);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin*, "", "OVRPlugin");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__GUID);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__GUID*, "", "OVRPlugin/GUID");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__Ktx);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Ktx*, "", "OVRPlugin/Ktx");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LogCallback2DelegateType*, "", "OVRPlugin/LogCallback2DelegateType");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__Media);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Media*, "", "OVRPlugin/Media");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__Mesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Mesh*, "", "OVRPlugin/Mesh");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_0_1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_0_1_0*, "", "OVRPlugin/OVRP_0_1_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_0_1_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_0_1_1*, "", "OVRPlugin/OVRP_0_1_1");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_0_1_2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_0_1_2*, "", "OVRPlugin/OVRP_0_1_2");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_0_1_3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_0_1_3*, "", "OVRPlugin/OVRP_0_1_3");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_0_5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_0_5_0*, "", "OVRPlugin/OVRP_0_5_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_0_0*, "", "OVRPlugin/OVRP_1_0_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_10_0*, "", "OVRPlugin/OVRP_1_10_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_11_0*, "", "OVRPlugin/OVRP_1_11_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_12_0*, "", "OVRPlugin/OVRP_1_12_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_15_0*, "", "OVRPlugin/OVRP_1_15_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_16_0*, "", "OVRPlugin/OVRP_1_16_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_17_0*, "", "OVRPlugin/OVRP_1_17_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_18_0*, "", "OVRPlugin/OVRP_1_18_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_19_0*, "", "OVRPlugin/OVRP_1_19_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_1_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_1_0*, "", "OVRPlugin/OVRP_1_1_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_21_0*, "", "OVRPlugin/OVRP_1_21_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_28_0*, "", "OVRPlugin/OVRP_1_28_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_29_0*, "", "OVRPlugin/OVRP_1_29_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_2_0*, "", "OVRPlugin/OVRP_1_2_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_30_0*, "", "OVRPlugin/OVRP_1_30_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_31_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_31_0*, "", "OVRPlugin/OVRP_1_31_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_32_0*, "", "OVRPlugin/OVRP_1_32_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_34_0*, "", "OVRPlugin/OVRP_1_34_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_35_0*, "", "OVRPlugin/OVRP_1_35_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_36_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_36_0*, "", "OVRPlugin/OVRP_1_36_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_37_0*, "", "OVRPlugin/OVRP_1_37_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_38_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_38_0*, "", "OVRPlugin/OVRP_1_38_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_39_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_39_0*, "", "OVRPlugin/OVRP_1_39_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_3_0*, "", "OVRPlugin/OVRP_1_3_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_40_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_40_0*, "", "OVRPlugin/OVRP_1_40_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_41_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_41_0*, "", "OVRPlugin/OVRP_1_41_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_42_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_42_0*, "", "OVRPlugin/OVRP_1_42_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_43_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_43_0*, "", "OVRPlugin/OVRP_1_43_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_44_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_44_0*, "", "OVRPlugin/OVRP_1_44_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_45_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_45_0*, "", "OVRPlugin/OVRP_1_45_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_46_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_46_0*, "", "OVRPlugin/OVRP_1_46_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_47_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_47_0*, "", "OVRPlugin/OVRP_1_47_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_48_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_48_0*, "", "OVRPlugin/OVRP_1_48_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_49_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_49_0*, "", "OVRPlugin/OVRP_1_49_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_50_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_50_0*, "", "OVRPlugin/OVRP_1_50_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_51_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_51_0*, "", "OVRPlugin/OVRP_1_51_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_52_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_52_0*, "", "OVRPlugin/OVRP_1_52_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_53_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_53_0*, "", "OVRPlugin/OVRP_1_53_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_54_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_54_0*, "", "OVRPlugin/OVRP_1_54_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_55_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_55_0*, "", "OVRPlugin/OVRP_1_55_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_55_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_55_1*, "", "OVRPlugin/OVRP_1_55_1");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_56_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_56_0*, "", "OVRPlugin/OVRP_1_56_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_57_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_57_0*, "", "OVRPlugin/OVRP_1_57_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_58_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_58_0*, "", "OVRPlugin/OVRP_1_58_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_59_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_59_0*, "", "OVRPlugin/OVRP_1_59_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_5_0*, "", "OVRPlugin/OVRP_1_5_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_60_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_60_0*, "", "OVRPlugin/OVRP_1_60_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_61_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_61_0*, "", "OVRPlugin/OVRP_1_61_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_62_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_62_0*, "", "OVRPlugin/OVRP_1_62_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_63_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_63_0*, "", "OVRPlugin/OVRP_1_63_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_64_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_64_0*, "", "OVRPlugin/OVRP_1_64_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_65_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_65_0*, "", "OVRPlugin/OVRP_1_65_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_66_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_66_0*, "", "OVRPlugin/OVRP_1_66_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_67_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_67_0*, "", "OVRPlugin/OVRP_1_67_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_68_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_68_0*, "", "OVRPlugin/OVRP_1_68_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_69_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_69_0*, "", "OVRPlugin/OVRP_1_69_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_6_0*, "", "OVRPlugin/OVRP_1_6_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_70_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_70_0*, "", "OVRPlugin/OVRP_1_70_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_71_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_71_0*, "", "OVRPlugin/OVRP_1_71_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_72_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_72_0*, "", "OVRPlugin/OVRP_1_72_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_73_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_73_0*, "", "OVRPlugin/OVRP_1_73_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_74_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_74_0*, "", "OVRPlugin/OVRP_1_74_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_75_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_75_0*, "", "OVRPlugin/OVRP_1_75_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_76_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_76_0*, "", "OVRPlugin/OVRP_1_76_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_78_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_78_0*, "", "OVRPlugin/OVRP_1_78_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_79_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_79_0*, "", "OVRPlugin/OVRP_1_79_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_7_0*, "", "OVRPlugin/OVRP_1_7_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_81_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_81_0*, "", "OVRPlugin/OVRP_1_81_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_82_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_82_0*, "", "OVRPlugin/OVRP_1_82_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_83_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_83_0*, "", "OVRPlugin/OVRP_1_83_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_84_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_84_0*, "", "OVRPlugin/OVRP_1_84_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_85_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_85_0*, "", "OVRPlugin/OVRP_1_85_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_86_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_86_0*, "", "OVRPlugin/OVRP_1_86_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_87_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_87_0*, "", "OVRPlugin/OVRP_1_87_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_88_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_88_0*, "", "OVRPlugin/OVRP_1_88_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_8_0*, "", "OVRPlugin/OVRP_1_8_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__OVRP_1_9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__OVRP_1_9_0*, "", "OVRPlugin/OVRP_1_9_0");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__Qpl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Qpl*, "", "OVRPlugin/Qpl");
NEED_NO_BOX(::GlobalNamespace::__OVRPlugin__UnityOpenXR);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__UnityOpenXR*, "", "OVRPlugin/UnityOpenXR");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__AppPerfFrameStats, "", "OVRPlugin/AppPerfFrameStats");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__AppPerfStats, "", "OVRPlugin/AppPerfStats");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BodyJointLocation, "", "OVRPlugin/BodyJointLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BodyState, "", "OVRPlugin/BodyState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BodyStateInternal, "", "OVRPlugin/BodyStateInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Bone, "", "OVRPlugin/Bone");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BoneCapsule, "", "OVRPlugin/BoneCapsule");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BoundaryGeometry, "", "OVRPlugin/BoundaryGeometry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__BoundaryTestResult, "", "OVRPlugin/BoundaryTestResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Boundsf, "", "OVRPlugin/Boundsf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraDeviceIntrinsicsParameters, "", "OVRPlugin/CameraDeviceIntrinsicsParameters");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraExtrinsics, "", "OVRPlugin/CameraExtrinsics");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__CameraIntrinsics, "", "OVRPlugin/CameraIntrinsics");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Colorf, "", "OVRPlugin/Colorf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ControllerState, "", "OVRPlugin/ControllerState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ControllerState2, "", "OVRPlugin/ControllerState2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ControllerState4, "", "OVRPlugin/ControllerState4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ControllerState5, "", "OVRPlugin/ControllerState5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__ControllerState6, "", "OVRPlugin/ControllerState6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__EventDataBuffer, "", "OVRPlugin/EventDataBuffer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__EyeGazeState, "", "OVRPlugin/EyeGazeState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__EyeGazesState, "", "OVRPlugin/EyeGazesState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__EyeGazesStateInternal, "", "OVRPlugin/EyeGazesStateInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceExpressionStatus, "", "OVRPlugin/FaceExpressionStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceExpressionStatusInternal, "", "OVRPlugin/FaceExpressionStatusInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceState, "", "OVRPlugin/FaceState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceState2Internal, "", "OVRPlugin/FaceState2Internal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__FaceStateInternal, "", "OVRPlugin/FaceStateInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Fovf, "", "OVRPlugin/Fovf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Frustumf, "", "OVRPlugin/Frustumf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Frustumf2, "", "OVRPlugin/Frustumf2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HandState, "", "OVRPlugin/HandState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HandStateInternal, "", "OVRPlugin/HandStateInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsAmplitudeEnvelopeVibration, "", "OVRPlugin/HapticsAmplitudeEnvelopeVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsBuffer, "", "OVRPlugin/HapticsBuffer");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsDesc, "", "OVRPlugin/HapticsDesc");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsPcmVibration, "", "OVRPlugin/HapticsPcmVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__HapticsState, "", "OVRPlugin/HapticsState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__InsightPassthroughKeyboardHandsIntensity, "", "OVRPlugin/InsightPassthroughKeyboardHandsIntensity");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle, "", "OVRPlugin/InsightPassthroughStyle");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__InsightPassthroughStyle2, "", "OVRPlugin/InsightPassthroughStyle2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__KeyboardDescription, "", "OVRPlugin/KeyboardDescription");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__KeyboardState, "", "OVRPlugin/KeyboardState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerDesc, "", "OVRPlugin/LayerDesc");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerDescInternal, "", "OVRPlugin/LayerDescInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__LayerSubmit, "", "OVRPlugin/LayerSubmit");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughCapabilities, "", "OVRPlugin/PassthroughCapabilities");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData, "", "OVRPlugin/PassthroughColorLutData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PassthroughPreferences, "", "OVRPlugin/PassthroughPreferences");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRPlugin__PinnedArray_1, "", "OVRPlugin/PinnedArray`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PolygonalBoundary2DInternal, "", "OVRPlugin/PolygonalBoundary2DInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__PoseStatef, "", "OVRPlugin/PoseStatef");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Posef, "", "OVRPlugin/Posef");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Quatf, "", "OVRPlugin/Quatf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Rectf, "", "OVRPlugin/Rectf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Recti, "", "OVRPlugin/Recti");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__RenderModelProperties, "", "OVRPlugin/RenderModelProperties");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__RenderModelPropertiesInternal, "", "OVRPlugin/RenderModelPropertiesInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__RoomLayout, "", "OVRPlugin/RoomLayout");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__RoomLayoutInternal, "", "OVRPlugin/RoomLayoutInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SceneCaptureRequestInternal, "", "OVRPlugin/SceneCaptureRequestInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Size3f, "", "OVRPlugin/Size3f");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Sizef, "", "OVRPlugin/Sizef");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Sizei, "", "OVRPlugin/Sizei");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Skeleton, "", "OVRPlugin/Skeleton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Skeleton2, "", "OVRPlugin/Skeleton2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Skeleton2Internal, "", "OVRPlugin/Skeleton2Internal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceContainerInternal, "", "OVRPlugin/SpaceContainerInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceFilterInfoComponents, "", "OVRPlugin/SpaceFilterInfoComponents");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceFilterInfoIds, "", "OVRPlugin/SpaceFilterInfoIds");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceLocationf, "", "OVRPlugin/SpaceLocationf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceQueryInfo, "", "OVRPlugin/SpaceQueryInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceQueryResult, "", "OVRPlugin/SpaceQueryResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpaceSemanticLabelInternal, "", "OVRPlugin/SpaceSemanticLabelInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__SpatialAnchorCreateInfo, "", "OVRPlugin/SpatialAnchorCreateInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TextureRectMatrixf, "", "OVRPlugin/TextureRectMatrixf");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__TriangleMeshInternal, "", "OVRPlugin/TriangleMeshInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Vector2f, "", "OVRPlugin/Vector2f");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Vector2i, "", "OVRPlugin/Vector2i");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Vector3f, "", "OVRPlugin/Vector3f");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Vector4f, "", "OVRPlugin/Vector4f");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__Vector4s, "", "OVRPlugin/Vector4s");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardCreateInfo, "", "OVRPlugin/VirtualKeyboardCreateInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardInputInfo, "", "OVRPlugin/VirtualKeyboardInputInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardLocationInfo, "", "OVRPlugin/VirtualKeyboardLocationInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationState, "", "OVRPlugin/VirtualKeyboardModelAnimationState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStates, "", "OVRPlugin/VirtualKeyboardModelAnimationStates");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelAnimationStatesInternal, "", "OVRPlugin/VirtualKeyboardModelAnimationStatesInternal");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardModelVisibility, "", "OVRPlugin/VirtualKeyboardModelVisibility");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardSpaceCreateInfo, "", "OVRPlugin/VirtualKeyboardSpaceCreateInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureData, "", "OVRPlugin/VirtualKeyboardTextureData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIds, "", "OVRPlugin/VirtualKeyboardTextureIds");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPlugin__VirtualKeyboardTextureIdsInternal, "", "OVRPlugin/VirtualKeyboardTextureIdsInternal");
