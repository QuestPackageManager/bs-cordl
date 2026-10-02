#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrStructureType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrStructureType)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, "UnityEngine.XR.OpenXR.NativeTypes", "XrStructureType");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
struct CORDL_TYPE XrStructureType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __XrStructureType_Unwrapped
  enum struct __XrStructureType_Unwrapped : uint32_t {
    __E_XR_TYPE_UNKNOWN = static_cast<uint32_t>(0x0u),
    __E_Unknown = static_cast<uint32_t>(0x0u),
    __E_ApiLayerProperties = static_cast<uint32_t>(0x1u),
    __E_ExtensionProperties = static_cast<uint32_t>(0x2u),
    __E_InstanceCreateInfo = static_cast<uint32_t>(0x3u),
    __E_SystemGetInfo = static_cast<uint32_t>(0x4u),
    __E_SystemProperties = static_cast<uint32_t>(0x5u),
    __E_ViewLocateInfo = static_cast<uint32_t>(0x6u),
    __E_XrView = static_cast<uint32_t>(0x7u),
    __E_SessionCreateInfo = static_cast<uint32_t>(0x8u),
    __E_XR_TYPE_SWAPCHAIN_CREATE_INFO = static_cast<uint32_t>(0x9u),
    __E_SwapchainCreateInfo = static_cast<uint32_t>(0x9u),
    __E_SessionBeginInfo = static_cast<uint32_t>(0xau),
    __E_ViewState = static_cast<uint32_t>(0xbu),
    __E_FrameEndInfo = static_cast<uint32_t>(0xcu),
    __E_HapticVibration = static_cast<uint32_t>(0xdu),
    __E_EventDataBuffer = static_cast<uint32_t>(0x10u),
    __E_EventDataInstanceLossPending = static_cast<uint32_t>(0x11u),
    __E_EventDataSessionStateChanged = static_cast<uint32_t>(0x12u),
    __E_ActionStateBoolean = static_cast<uint32_t>(0x17u),
    __E_ActionStateFloat = static_cast<uint32_t>(0x18u),
    __E_ActionStateVector2f = static_cast<uint32_t>(0x19u),
    __E_ActionStatePose = static_cast<uint32_t>(0x1bu),
    __E_ActionSetCreateInfo = static_cast<uint32_t>(0x1cu),
    __E_ActionCreateInfo = static_cast<uint32_t>(0x1du),
    __E_InstanceProperties = static_cast<uint32_t>(0x20u),
    __E_FrameWaitInfo = static_cast<uint32_t>(0x21u),
    __E_XR_TYPE_COMPOSITION_LAYER_PROJECTION = static_cast<uint32_t>(0x23u),
    __E_CompositionLayerProjection = static_cast<uint32_t>(0x23u),
    __E_XR_TYPE_COMPOSITION_LAYER_QUAD = static_cast<uint32_t>(0x24u),
    __E_CompositionLayerQuad = static_cast<uint32_t>(0x24u),
    __E_ReferenceSpaceCreateInfo = static_cast<uint32_t>(0x25u),
    __E_ActionSpaceCreateInfo = static_cast<uint32_t>(0x26u),
    __E_EventDataReferenceSpaceChangePending = static_cast<uint32_t>(0x28u),
    __E_ViewConfigurationView = static_cast<uint32_t>(0x29u),
    __E_SpaceLocation = static_cast<uint32_t>(0x2au),
    __E_SpaceVelocity = static_cast<uint32_t>(0x2bu),
    __E_FrameState = static_cast<uint32_t>(0x2cu),
    __E_ViewConfigurationProperties = static_cast<uint32_t>(0x2du),
    __E_FrameBeginInfo = static_cast<uint32_t>(0x2eu),
    __E_XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW = static_cast<uint32_t>(0x30u),
    __E_CompositionLayerProjectionView = static_cast<uint32_t>(0x30u),
    __E_EventDataEventsLost = static_cast<uint32_t>(0x31u),
    __E_InteractionProfileSuggestedBinding = static_cast<uint32_t>(0x33u),
    __E_EventDataInteractionProfileChanged = static_cast<uint32_t>(0x34u),
    __E_InteractionProfileState = static_cast<uint32_t>(0x35u),
    __E_SwapchainImageAcquireInfo = static_cast<uint32_t>(0x37u),
    __E_SwapchainImageWaitInfo = static_cast<uint32_t>(0x38u),
    __E_SwapchainImageReleaseInfo = static_cast<uint32_t>(0x39u),
    __E_ActionStateGetInfo = static_cast<uint32_t>(0x3au),
    __E_HapticActionInfo = static_cast<uint32_t>(0x3bu),
    __E_SessionActionSetsAttachInfo = static_cast<uint32_t>(0x3cu),
    __E_ActionsSyncInfo = static_cast<uint32_t>(0x3du),
    __E_BoundSourcesForActionEnumerateInfo = static_cast<uint32_t>(0x3eu),
    __E_InputSourceLocalizedNameGetInfo = static_cast<uint32_t>(0x3fu),
    __E_SpacesLocateInfo = static_cast<uint32_t>(0x3ba1f9d8u),
    __E_SpaceLocations = static_cast<uint32_t>(0x3ba1f9d9u),
    __E_SpaceVelocities = static_cast<uint32_t>(0x3ba1f9dau),
    __E_XR_TYPE_COMPOSITION_LAYER_CUBE_KHR = static_cast<uint32_t>(0x3b9ae170u),
    __E_CompositionLayerCubeKHR = static_cast<uint32_t>(0x3b9ae170u),
    __E_InstanceCreateInfoAndroidKHR = static_cast<uint32_t>(0x3b9ae940u),
    __E_CompositionLayerDepthInfoKHR = static_cast<uint32_t>(0x3b9af110u),
    __E_VulkanSwapchainFormatListCreateInfoKHR = static_cast<uint32_t>(0x3b9b00b0u),
    __E_EventDataPerfSettingsEXT = static_cast<uint32_t>(0x3b9b0498u),
    __E_XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR = static_cast<uint32_t>(0x3b9b0c68u),
    __E_CompositionLayerCylinderKHR = static_cast<uint32_t>(0x3b9b0c68u),
    __E_XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR = static_cast<uint32_t>(0x3b9b1050u),
    __E_CompositionLayerEquirectKHR = static_cast<uint32_t>(0x3b9b1050u),
    __E_DebugUtilsObjectNameInfoEXT = static_cast<uint32_t>(0x3b9b1438u),
    __E_DebugUtilsMessengerCallbackDataEXT = static_cast<uint32_t>(0x3b9b1439u),
    __E_DebugUtilsMessengerCreateInfoEXT = static_cast<uint32_t>(0x3b9b143au),
    __E_DebugUtilsLabelEXT = static_cast<uint32_t>(0x3b9b143bu),
    __E_GraphicsBindingOpenGLWin32KHR = static_cast<uint32_t>(0x3b9b23d8u),
    __E_GraphicsBindingOpenGLXlibKHR = static_cast<uint32_t>(0x3b9b23d9u),
    __E_GraphicsBindingOpenGLXcbKHR = static_cast<uint32_t>(0x3b9b23dau),
    __E_GraphicsBindingOpenGLWaylandKHR = static_cast<uint32_t>(0x3b9b23dbu),
    __E_SwapchainImageOpenGLKHR = static_cast<uint32_t>(0x3b9b23dcu),
    __E_GraphicsRequirementsOpenGLKHR = static_cast<uint32_t>(0x3b9b23ddu),
    __E_GraphicsBindingOpenGLESAndroidKHR = static_cast<uint32_t>(0x3b9b27c1u),
    __E_SwapchainImageOpenGLESKHR = static_cast<uint32_t>(0x3b9b27c2u),
    __E_GraphicsRequirementsOpenGLESKHR = static_cast<uint32_t>(0x3b9b27c3u),
    __E_GraphicsBindingVulkanKHR = static_cast<uint32_t>(0x3b9b2ba8u),
    __E_SwapchainImageVulkanKHR = static_cast<uint32_t>(0x3b9b2ba9u),
    __E_GraphicsRequirementsVulkanKHR = static_cast<uint32_t>(0x3b9b2baau),
    __E_GraphicsBindingD3D11KHR = static_cast<uint32_t>(0x3b9b3378u),
    __E_SwapchainImageD3D11KHR = static_cast<uint32_t>(0x3b9b3379u),
    __E_GraphicsRequirementsD3D11KHR = static_cast<uint32_t>(0x3b9b337au),
    __E_GraphicsBindingD3D12KHR = static_cast<uint32_t>(0x3b9b3760u),
    __E_SwapchainImageD3D12KHR = static_cast<uint32_t>(0x3b9b3761u),
    __E_GraphicsRequirementsD3D12KHR = static_cast<uint32_t>(0x3b9b3762u),
    __E_GraphicsBindingMetalKHR = static_cast<uint32_t>(0x3b9b3b48u),
    __E_SwapchainImageMetalKHR = static_cast<uint32_t>(0x3b9b3b49u),
    __E_GraphicsRequirementsMetalKHR = static_cast<uint32_t>(0x3b9b3b4au),
    __E_SystemEyeGazeInteractionPropertiesEXT = static_cast<uint32_t>(0x3b9b3f30u),
    __E_EyeGazeSampleTimeEXT = static_cast<uint32_t>(0x3b9b3f31u),
    __E_VisibilityMaskKHR = static_cast<uint32_t>(0x3b9b4318u),
    __E_EventDataVisibilityMaskChangedKHR = static_cast<uint32_t>(0x3b9b4319u),
    __E_SessionCreateInfoOverlayEXTX = static_cast<uint32_t>(0x3b9b4ae8u),
    __E_EventDataMainSessionVisibilityChangedEXTX = static_cast<uint32_t>(0x3b9b4aebu),
    __E_CompositionLayerColorScaleBiasKHR = static_cast<uint32_t>(0x3b9b4ed0u),
    __E_SpatialAnchorCreateInfoMSFT = static_cast<uint32_t>(0x3b9b6258u),
    __E_SpatialAnchorSpaceCreateInfoMSFT = static_cast<uint32_t>(0x3b9b6259u),
    __E_CompositionLayerImageLayoutFB = static_cast<uint32_t>(0x3b9b6640u),
    __E_CompositionLayerAlphaBlendFB = static_cast<uint32_t>(0x3b9b6a29u),
    __E_ViewConfigurationDepthRangeEXT = static_cast<uint32_t>(0x3b9b7db0u),
    __E_GraphicsBindingEGLMNDX = static_cast<uint32_t>(0x3b9b8584u),
    __E_SpatialGraphNodeSpaceCreateInfoMSFT = static_cast<uint32_t>(0x3b9b8968u),
    __E_SpatialGraphStaticNodeBindingCreateInfoMSFT = static_cast<uint32_t>(0x3b9b8969u),
    __E_SpatialGraphNodeBindingPropertiesGetInfoMSFT = static_cast<uint32_t>(0x3b9b896au),
    __E_SpatialGraphNodeBindingPropertiesMSFT = static_cast<uint32_t>(0x3b9b896bu),
    __E_SystemHandTrackingPropertiesEXT = static_cast<uint32_t>(0x3b9b9138u),
    __E_HandTrackerCreateInfoEXT = static_cast<uint32_t>(0x3b9b9139u),
    __E_HandJointsLocateInfoEXT = static_cast<uint32_t>(0x3b9b913au),
    __E_HandJointLocationsEXT = static_cast<uint32_t>(0x3b9b913bu),
    __E_HandJointVelocitiesEXT = static_cast<uint32_t>(0x3b9b913cu),
    __E_SystemHandTrackingMeshPropertiesMSFT = static_cast<uint32_t>(0x3b9b9520u),
    __E_HandMeshSpaceCreateInfoMSFT = static_cast<uint32_t>(0x3b9b9521u),
    __E_HandMeshUpdateInfoMSFT = static_cast<uint32_t>(0x3b9b9522u),
    __E_HandMeshMSFT = static_cast<uint32_t>(0x3b9b9523u),
    __E_HandPoseTypeInfoMSFT = static_cast<uint32_t>(0x3b9b9524u),
    __E_SecondaryViewConfigurationSessionBeginInfoMSFT = static_cast<uint32_t>(0x3b9b9908u),
    __E_SecondaryViewConfigurationStateMSFT = static_cast<uint32_t>(0x3b9b9909u),
    __E_SecondaryViewConfigurationFrameStateMSFT = static_cast<uint32_t>(0x3b9b990au),
    __E_SecondaryViewConfigurationFrameEndInfoMSFT = static_cast<uint32_t>(0x3b9b990bu),
    __E_SecondaryViewConfigurationLayerInfoMSFT = static_cast<uint32_t>(0x3b9b990cu),
    __E_SecondaryViewConfigurationSwapchainCreateInfoMSFT = static_cast<uint32_t>(0x3b9b990du),
    __E_ControllerModelKeyStateMSFT = static_cast<uint32_t>(0x3b9ba0d8u),
    __E_ControllerModelNodePropertiesMSFT = static_cast<uint32_t>(0x3b9ba0d9u),
    __E_ControllerModelPropertiesMSFT = static_cast<uint32_t>(0x3b9ba0dau),
    __E_ControllerModelNodeStateMSFT = static_cast<uint32_t>(0x3b9ba0dbu),
    __E_ControllerModelStateMSFT = static_cast<uint32_t>(0x3b9ba0dcu),
    __E_ViewConfigurationViewFovEPIC = static_cast<uint32_t>(0x3b9bb078u),
    __E_HolographicWindowAttachmentMSFT = static_cast<uint32_t>(0x3b9bc018u),
    __E_CompositionLayerReprojectionInfoMSFT = static_cast<uint32_t>(0x3b9bcbd0u),
    __E_CompositionLayerReprojectionPlaneOverrideMSFT = static_cast<uint32_t>(0x3b9bcbd1u),
    __E_AndroidSurfaceSwapchainCreateInfoFB = static_cast<uint32_t>(0x3b9bdb70u),
    __E_CompositionLayerSecureContentFB = static_cast<uint32_t>(0x3b9be340u),
    __E_BodyTrackerCreateInfoFB = static_cast<uint32_t>(0x3b9bf2e1u),
    __E_BodyJointsLocateInfoFB = static_cast<uint32_t>(0x3b9bf2e2u),
    __E_SystemBodyTrackingPropertiesFB = static_cast<uint32_t>(0x3b9bf2e4u),
    __E_BodyJointLocationsFB = static_cast<uint32_t>(0x3b9bf2e5u),
    __E_BodySkeletonFB = static_cast<uint32_t>(0x3b9bf2e6u),
    __E_InteractionProfileDpadBindingEXT = static_cast<uint32_t>(0x3b9bfab0u),
    __E_InteractionProfileAnalogThresholdVALVE = static_cast<uint32_t>(0x3b9bfe98u),
    __E_HandJointsMotionRangeInfoEXT = static_cast<uint32_t>(0x3b9c0280u),
    __E_LoaderInitInfoAndroidKHR = static_cast<uint32_t>(0x3b9c25a8u),
    __E_VulkanInstanceCreateInfoKHR = static_cast<uint32_t>(0x3b9c2990u),
    __E_VulkanDeviceCreateInfoKHR = static_cast<uint32_t>(0x3b9c2991u),
    __E_VulkanGraphicsDeviceGetInfoKHR = static_cast<uint32_t>(0x3b9c2993u),
    __E_XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR = static_cast<uint32_t>(0x3b9c2d78u),
    __E_CompositionLayerEquirect2KHR = static_cast<uint32_t>(0x3b9c2d78u),
    __E_SceneObserverCreateInfoMSFT = static_cast<uint32_t>(0x3b9c44e8u),
    __E_SceneCreateInfoMSFT = static_cast<uint32_t>(0x3b9c44e9u),
    __E_NewSceneComputeInfoMSFT = static_cast<uint32_t>(0x3b9c44eau),
    __E_VisualMeshComputeLodInfoMSFT = static_cast<uint32_t>(0x3b9c44ebu),
    __E_SceneComponentsMSFT = static_cast<uint32_t>(0x3b9c44ecu),
    __E_SceneComponentsGetInfoMSFT = static_cast<uint32_t>(0x3b9c44edu),
    __E_SceneComponentLocationsMSFT = static_cast<uint32_t>(0x3b9c44eeu),
    __E_SceneComponentsLocateInfoMSFT = static_cast<uint32_t>(0x3b9c44efu),
    __E_SceneObjectsMSFT = static_cast<uint32_t>(0x3b9c44f0u),
    __E_SceneComponentParentFilterInfoMSFT = static_cast<uint32_t>(0x3b9c44f1u),
    __E_SceneObjectTypesFilterInfoMSFT = static_cast<uint32_t>(0x3b9c44f2u),
    __E_ScenePlanesMSFT = static_cast<uint32_t>(0x3b9c44f3u),
    __E_ScenePlaneAlignmentFilterInfoMSFT = static_cast<uint32_t>(0x3b9c44f4u),
    __E_SceneMeshesMSFT = static_cast<uint32_t>(0x3b9c44f5u),
    __E_SceneMeshBuffersGetInfoMSFT = static_cast<uint32_t>(0x3b9c44f6u),
    __E_SceneMeshBuffersMSFT = static_cast<uint32_t>(0x3b9c44f7u),
    __E_SceneMeshVertexBufferMSFT = static_cast<uint32_t>(0x3b9c44f8u),
    __E_SceneMeshIndicesUint32MSFT = static_cast<uint32_t>(0x3b9c44f9u),
    __E_SceneMeshIndicesUint16MSFT = static_cast<uint32_t>(0x3b9c44fau),
    __E_SerializedSceneFragmentDataGetInfoMSFT = static_cast<uint32_t>(0x3b9c48d0u),
    __E_SceneDeserializeInfoMSFT = static_cast<uint32_t>(0x3b9c48d1u),
    __E_EventDataDisplayRefreshRateChangedFB = static_cast<uint32_t>(0x3b9c5488u),
    __E_ViveTrackerPathsHTCX = static_cast<uint32_t>(0x3b9c5c58u),
    __E_EventDataViveTrackerConnectedHTCX = static_cast<uint32_t>(0x3b9c5c59u),
    __E_SystemFacialTrackingPropertiesHTC = static_cast<uint32_t>(0x3b9c6040u),
    __E_FacialTrackerCreateInfoHTC = static_cast<uint32_t>(0x3b9c6041u),
    __E_FacialExpressionsHTC = static_cast<uint32_t>(0x3b9c6042u),
    __E_SystemColorSpacePropertiesFB = static_cast<uint32_t>(0x3b9c6fe0u),
    __E_HandTrackingMeshFB = static_cast<uint32_t>(0x3b9c77b1u),
    __E_HandTrackingScaleFB = static_cast<uint32_t>(0x3b9c77b3u),
    __E_HandTrackingAimStateFB = static_cast<uint32_t>(0x3b9c7b99u),
    __E_HandTrackingCapsulesStateFB = static_cast<uint32_t>(0x3b9c7f80u),
    __E_SystemSpatialEntityPropertiesFB = static_cast<uint32_t>(0x3b9c836cu),
    __E_SpatialAnchorCreateInfoFB = static_cast<uint32_t>(0x3b9c836bu),
    __E_SpaceComponentStatusSetInfoFB = static_cast<uint32_t>(0x3b9c836fu),
    __E_SpaceComponentStatusFB = static_cast<uint32_t>(0x3b9c8369u),
    __E_EventDataSpatialAnchorCreateCompleteFB = static_cast<uint32_t>(0x3b9c836du),
    __E_EventDataSpaceSetStatusCompleteFB = static_cast<uint32_t>(0x3b9c836eu),
    __E_FoveationProfileCreateInfoFB = static_cast<uint32_t>(0x3b9c8750u),
    __E_SwapchainCreateInfoFoveationFB = static_cast<uint32_t>(0x3b9c8751u),
    __E_SwapchainStateFoveationFB = static_cast<uint32_t>(0x3b9c8752u),
    __E_FoveationLevelProfileCreateInfoFB = static_cast<uint32_t>(0x3b9c8b38u),
    __E_KeyboardSpaceCreateInfoFB = static_cast<uint32_t>(0x3b9c8f29u),
    __E_KeyboardTrackingQueryFB = static_cast<uint32_t>(0x3b9c8f24u),
    __E_SystemKeyboardTrackingPropertiesFB = static_cast<uint32_t>(0x3b9c8f22u),
    __E_TriangleMeshCreateInfoFB = static_cast<uint32_t>(0x3b9c9309u),
    __E_SystemPassthroughPropertiesFB = static_cast<uint32_t>(0x3b9c96f0u),
    __E_PassthroughCreateInfoFB = static_cast<uint32_t>(0x3b9c96f1u),
    __E_PassthroughLayerCreateInfoFB = static_cast<uint32_t>(0x3b9c96f2u),
    __E_CompositionLayerPassthroughFB = static_cast<uint32_t>(0x3b9c96f3u),
    __E_GeometryInstanceCreateInfoFB = static_cast<uint32_t>(0x3b9c96f4u),
    __E_GeometryInstanceTransformFB = static_cast<uint32_t>(0x3b9c96f5u),
    __E_SystemPassthroughProperties2FB = static_cast<uint32_t>(0x3b9c96f6u),
    __E_PassthroughStyleFB = static_cast<uint32_t>(0x3b9c9704u),
    __E_PassthroughColorMapMonoToRgbaFB = static_cast<uint32_t>(0x3b9c9705u),
    __E_PassthroughColorMapMonoToMonoFB = static_cast<uint32_t>(0x3b9c9706u),
    __E_PassthroughBrightnessContrastSaturationFB = static_cast<uint32_t>(0x3b9c9707u),
    __E_EventDataPassthroughStateChangedFB = static_cast<uint32_t>(0x3b9c970eu),
    __E_RenderModelPathInfoFB = static_cast<uint32_t>(0x3b9c9ad8u),
    __E_RenderModelPropertiesFB = static_cast<uint32_t>(0x3b9c9ad9u),
    __E_RenderModelBufferFB = static_cast<uint32_t>(0x3b9c9adau),
    __E_RenderModelLoadInfoFB = static_cast<uint32_t>(0x3b9c9adbu),
    __E_SystemRenderModelPropertiesFB = static_cast<uint32_t>(0x3b9c9adcu),
    __E_RenderModelCapabilitiesRequestFB = static_cast<uint32_t>(0x3b9c9addu),
    __E_BindingModificationsKHR = static_cast<uint32_t>(0x3b9c9ec0u),
    __E_ViewLocateFoveatedRenderingVARJO = static_cast<uint32_t>(0x3b9ca2a8u),
    __E_FoveatedViewConfigurationViewVARJO = static_cast<uint32_t>(0x3b9ca2a9u),
    __E_SystemFoveatedRenderingPropertiesVARJO = static_cast<uint32_t>(0x3b9ca2aau),
    __E_CompositionLayerDepthTestVARJO = static_cast<uint32_t>(0x3b9ca690u),
    __E_SystemMarkerTrackingPropertiesVARJO = static_cast<uint32_t>(0x3b9cae60u),
    __E_EventDataMarkerTrackingUpdateVARJO = static_cast<uint32_t>(0x3b9cae61u),
    __E_MarkerSpaceCreateInfoVARJO = static_cast<uint32_t>(0x3b9cae62u),
    __E_FrameEndInfoML = static_cast<uint32_t>(0x3b9cd958u),
    __E_GlobalDimmerFrameEndInfoML = static_cast<uint32_t>(0x3b9cdd40u),
    __E_CoordinateSpaceCreateInfoML = static_cast<uint32_t>(0x3b9ce128u),
    __E_SystemMarkerUnderstandingPropertiesML = static_cast<uint32_t>(0x3b9ce510u),
    __E_MarkerDetectorCreateInfoML = static_cast<uint32_t>(0x3b9ce511u),
    __E_MarkerDetectorArucoInfoML = static_cast<uint32_t>(0x3b9ce512u),
    __E_MarkerDetectorSizeInfoML = static_cast<uint32_t>(0x3b9ce513u),
    __E_MarkerDetectorAprilTagInfoML = static_cast<uint32_t>(0x3b9ce514u),
    __E_MarkerDetectorCustomProfileInfoML = static_cast<uint32_t>(0x3b9ce515u),
    __E_MarkerDetectorSnapshotInfoML = static_cast<uint32_t>(0x3b9ce516u),
    __E_MarkerDetectorStateML = static_cast<uint32_t>(0x3b9ce517u),
    __E_MarkerSpaceCreateInfoML = static_cast<uint32_t>(0x3b9ce518u),
    __E_LocalizationMapML = static_cast<uint32_t>(0x3b9ce8f8u),
    __E_EventDataLocalizationChangedML = static_cast<uint32_t>(0x3b9ce8f9u),
    __E_MapLocalizationRequestInfoML = static_cast<uint32_t>(0x3b9ce8fau),
    __E_LocalizationMapImportInfoML = static_cast<uint32_t>(0x3b9ce8fbu),
    __E_LocalizationEnableEventsInfoML = static_cast<uint32_t>(0x3b9ce8fcu),
    __E_SpatialAnchorsCreateInfoFromPoseML = static_cast<uint32_t>(0x3b9cece0u),
    __E_CreateSpatialAnchorsCompletionML = static_cast<uint32_t>(0x3b9cece1u),
    __E_SpatialAnchorStateML = static_cast<uint32_t>(0x3b9cece2u),
    __E_SpatialAnchorsCreateStorageInfoML = static_cast<uint32_t>(0x3b9cf0c8u),
    __E_SpatialAnchorsQueryInfoRadiusML = static_cast<uint32_t>(0x3b9cf0c9u),
    __E_SpatialAnchorsQueryCompletionML = static_cast<uint32_t>(0x3b9cf0cau),
    __E_SpatialAnchorsCreateInfoFromUuidsML = static_cast<uint32_t>(0x3b9cf0cbu),
    __E_SpatialAnchorsPublishInfoML = static_cast<uint32_t>(0x3b9cf0ccu),
    __E_SpatialAnchorsPublishCompletionML = static_cast<uint32_t>(0x3b9cf0cdu),
    __E_SpatialAnchorsDeleteInfoML = static_cast<uint32_t>(0x3b9cf0ceu),
    __E_SpatialAnchorsDeleteCompletionML = static_cast<uint32_t>(0x3b9cf0cfu),
    __E_SpatialAnchorsUpdateExpirationInfoML = static_cast<uint32_t>(0x3b9cf0d0u),
    __E_SpatialAnchorsUpdateExpirationCompletionML = static_cast<uint32_t>(0x3b9cf0d1u),
    __E_SpatialAnchorsPublishCompletionDetailsML = static_cast<uint32_t>(0x3b9cf0d2u),
    __E_SpatialAnchorsDeleteCompletionDetailsML = static_cast<uint32_t>(0x3b9cf0d3u),
    __E_SpatialAnchorsUpdateExpirationCompletionDetailsML = static_cast<uint32_t>(0x3b9cf0d4u),
    __E_EventDataHeadsetFitChangedML = static_cast<uint32_t>(0x3ba1fdc0u),
    __E_EventDataEyeCalibrationChangedML = static_cast<uint32_t>(0x3ba1fdc1u),
    __E_UserCalibrationEnableEventsInfoML = static_cast<uint32_t>(0x3ba1fdc2u),
    __E_SpatialAnchorPersistenceInfoMSFT = static_cast<uint32_t>(0x3b9cf4b0u),
    __E_SpatialAnchorFromPersistedAnchorCreateInfoMSFT = static_cast<uint32_t>(0x3b9cf4b1u),
    __E_SceneMarkersMSFT = static_cast<uint32_t>(0x3b9d0838u),
    __E_SceneMarkerTypeFilterMSFT = static_cast<uint32_t>(0x3b9d0839u),
    __E_SceneMarkerQRCodesMSFT = static_cast<uint32_t>(0x3b9d083au),
    __E_SpaceQueryInfoFB = static_cast<uint32_t>(0x3b9d2b61u),
    __E_SpaceQueryResultsFB = static_cast<uint32_t>(0x3b9d2b62u),
    __E_SpaceStorageLocationFilterInfoFB = static_cast<uint32_t>(0x3b9d2b63u),
    __E_SpaceUuidFilterInfoFB = static_cast<uint32_t>(0x3b9d2b96u),
    __E_SpaceComponentFilterInfoFB = static_cast<uint32_t>(0x3b9d2b94u),
    __E_EventDataSpaceQueryResultsAvailableFB = static_cast<uint32_t>(0x3b9d2bc7u),
    __E_EventDataSpaceQueryCompleteFB = static_cast<uint32_t>(0x3b9d2bc8u),
    __E_SpaceSaveInfoFB = static_cast<uint32_t>(0x3b9d3330u),
    __E_SpaceEraseInfoFB = static_cast<uint32_t>(0x3b9d3331u),
    __E_EventDataSpaceSaveCompleteFB = static_cast<uint32_t>(0x3b9d339au),
    __E_EventDataSpaceEraseCompleteFB = static_cast<uint32_t>(0x3b9d339bu),
    __E_SwapchainImageFoveationVulkanFB = static_cast<uint32_t>(0x3b9d3b00u),
    __E_SwapchainStateAndroidSurfaceDimensionsFB = static_cast<uint32_t>(0x3b9d3ee8u),
    __E_SwapchainStateSamplerOpenGLESFB = static_cast<uint32_t>(0x3b9d42d0u),
    __E_SwapchainStateSamplerVulkanFB = static_cast<uint32_t>(0x3b9d46b8u),
    __E_SpaceShareInfoFB = static_cast<uint32_t>(0x3b9d5e29u),
    __E_EventDataSpaceShareCompleteFB = static_cast<uint32_t>(0x3b9d5e2au),
    __E_CompositionLayerSpaceWarpInfoFB = static_cast<uint32_t>(0x3b9d65f8u),
    __E_SystemSpaceWarpPropertiesFB = static_cast<uint32_t>(0x3b9d65f9u),
    __E_HapticAmplitudeEnvelopeVibrationFB = static_cast<uint32_t>(0x3b9d6dc9u),
    __E_SemanticLabelsFB = static_cast<uint32_t>(0x3b9d7598u),
    __E_RoomLayoutFB = static_cast<uint32_t>(0x3b9d7599u),
    __E_Boundary2DFB = static_cast<uint32_t>(0x3b9d759au),
    __E_SemanticLabelsSupportInfoFB = static_cast<uint32_t>(0x3b9d75a2u),
    __E_DigitalLensControlALMALENCE = static_cast<uint32_t>(0x3b9dc7a0u),
    __E_EventDataSceneCaptureCompleteFB = static_cast<uint32_t>(0x3b9dcf71u),
    __E_SceneCaptureRequestInfoFB = static_cast<uint32_t>(0x3b9dcfa2u),
    __E_SpaceContainerFB = static_cast<uint32_t>(0x3b9dd358u),
    __E_FoveationEyeTrackedProfileCreateInfoMETA = static_cast<uint32_t>(0x3b9dd740u),
    __E_FoveationEyeTrackedStateMETA = static_cast<uint32_t>(0x3b9dd741u),
    __E_SystemFoveationEyeTrackedPropertiesMETA = static_cast<uint32_t>(0x3b9dd742u),
    __E_SystemFaceTrackingPropertiesFB = static_cast<uint32_t>(0x3b9ddb2cu),
    __E_FaceTrackerCreateInfoFB = static_cast<uint32_t>(0x3b9ddb2du),
    __E_FaceExpressionInfoFB = static_cast<uint32_t>(0x3b9ddb2au),
    __E_FaceExpressionWeightsFB = static_cast<uint32_t>(0x3b9ddb2eu),
    __E_EyeTrackerCreateInfoFB = static_cast<uint32_t>(0x3b9ddf11u),
    __E_EyeGazesInfoFB = static_cast<uint32_t>(0x3b9ddf12u),
    __E_EyeGazesFB = static_cast<uint32_t>(0x3b9ddf13u),
    __E_SystemEyeTrackingPropertiesFB = static_cast<uint32_t>(0x3b9ddf14u),
    __E_PassthroughKeyboardHandsIntensityFB = static_cast<uint32_t>(0x3b9de2fau),
    __E_CompositionLayerSettingsFB = static_cast<uint32_t>(0x3b9de6e0u),
    __E_HapticPcmVibrationFB = static_cast<uint32_t>(0x3b9dfa69u),
    __E_DevicePcmSampleRateStateFB = static_cast<uint32_t>(0x3b9dfa6au),
    __E_FrameSynthesisInfoEXT = static_cast<uint32_t>(0x3b9e0238u),
    __E_FrameSynthesisConfigViewEXT = static_cast<uint32_t>(0x3b9e0239u),
    __E_CompositionLayerDepthTestFB = static_cast<uint32_t>(0x3b9e0620u),
    __E_LocalDimmingFrameEndInfoMETA = static_cast<uint32_t>(0x3b9e15c0u),
    __E_PassthroughPreferencesMETA = static_cast<uint32_t>(0x3b9e19a8u),
    __E_SystemVirtualKeyboardPropertiesMETA = static_cast<uint32_t>(0x3b9e2179u),
    __E_VirtualKeyboardCreateInfoMETA = static_cast<uint32_t>(0x3b9e217au),
    __E_VirtualKeyboardSpaceCreateInfoMETA = static_cast<uint32_t>(0x3b9e217bu),
    __E_VirtualKeyboardLocationInfoMETA = static_cast<uint32_t>(0x3b9e217cu),
    __E_VirtualKeyboardModelVisibilitySetInfoMETA = static_cast<uint32_t>(0x3b9e217du),
    __E_VirtualKeyboardAnimationStateMETA = static_cast<uint32_t>(0x3b9e217eu),
    __E_VirtualKeyboardModelAnimationStatesMETA = static_cast<uint32_t>(0x3b9e217fu),
    __E_VirtualKeyboardTextureDataMETA = static_cast<uint32_t>(0x3b9e2181u),
    __E_VirtualKeyboardInputInfoMETA = static_cast<uint32_t>(0x3b9e2182u),
    __E_VirtualKeyboardTextContextChangeInfoMETA = static_cast<uint32_t>(0x3b9e2183u),
    __E_EventDataVirtualKeyboardCommitTextMETA = static_cast<uint32_t>(0x3b9e2186u),
    __E_EventDataVirtualKeyboardBackspaceMETA = static_cast<uint32_t>(0x3b9e2187u),
    __E_EventDataVirtualKeyboardEnterMETA = static_cast<uint32_t>(0x3b9e2188u),
    __E_EventDataVirtualKeyboardShownMETA = static_cast<uint32_t>(0x3b9e2189u),
    __E_EventDataVirtualKeyboardHiddenMETA = static_cast<uint32_t>(0x3b9e218au),
    __E_ExternalCameraOCULUS = static_cast<uint32_t>(0x3b9e3cd0u),
    __E_VulkanSwapchainCreateInfoMETA = static_cast<uint32_t>(0x3b9e40b8u),
    __E_PerformanceMetricsStateMETA = static_cast<uint32_t>(0x3b9e5441u),
    __E_PerformanceMetricsCounterMETA = static_cast<uint32_t>(0x3b9e5442u),
    __E_SpaceListSaveInfoFB = static_cast<uint32_t>(0x3b9e6bb0u),
    __E_EventDataSpaceListSaveCompleteFB = static_cast<uint32_t>(0x3b9e6bb1u),
    __E_SpaceUserCreateInfoFB = static_cast<uint32_t>(0x3b9e7769u),
    __E_SystemHeadsetIDPropertiesMETA = static_cast<uint32_t>(0x3b9e8708u),
    __E_SystemSpaceDiscoveryPropertiesMeta = static_cast<uint32_t>(0x3b9e8ed8u),
    __E_SpaceDiscoveryInfoMeta = static_cast<uint32_t>(0x3b9e8ed9u),
    __E_SpaceFilterUUIDMeta = static_cast<uint32_t>(0x3b9e8edbu),
    __E_SpaceFilterComponentMeta = static_cast<uint32_t>(0x3b9e8edcu),
    __E_SpaceDiscoveryResultMeta = static_cast<uint32_t>(0x3b9e8eddu),
    __E_SpaceDiscoveryResultsMeta = static_cast<uint32_t>(0x3b9e8edeu),
    __E_EventDataSpaceDiscoveryResultsAvailableMeta = static_cast<uint32_t>(0x3b9e8edfu),
    __E_EventDataSpaceDiscoveryCompleteMeta = static_cast<uint32_t>(0x3b9e8ee0u),
    __E_RecommendedLayerResolutionMETA = static_cast<uint32_t>(0x3b9eaa30u),
    __E_RecommendedLayerResolutionGetInfoMETA = static_cast<uint32_t>(0x3b9eaa31u),
    __E_SystemSpacePersistencePropertiesMeta = static_cast<uint32_t>(0x3b9ebdb8u),
    __E_SpacesSaveInfoMeta = static_cast<uint32_t>(0x3b9ebdb9u),
    __E_EventDataSpacesSaveResultMeta = static_cast<uint32_t>(0x3b9ebdbau),
    __E_SpacesEraseInfoMeta = static_cast<uint32_t>(0x3b9ebdbbu),
    __E_EventDataSpacesEraseResultMeta = static_cast<uint32_t>(0x3b9ebdbcu),
    __E_SystemPassthroughColorLutPropertiesMETA = static_cast<uint32_t>(0x3b9ed910u),
    __E_PassthroughColorLutCreateInfoMETA = static_cast<uint32_t>(0x3b9ed911u),
    __E_PassthroughColorLutUpdateInfoMETA = static_cast<uint32_t>(0x3b9ed912u),
    __E_PassthroughColorMapLutMETA = static_cast<uint32_t>(0x3b9ed974u),
    __E_PassthroughColorMapInterpolatedLutMETA = static_cast<uint32_t>(0x3b9ed975u),
    __E_SpaceTriangleMeshGetInfoMETA = static_cast<uint32_t>(0x3b9ee4c9u),
    __E_SpaceTriangleMeshMETA = static_cast<uint32_t>(0x3b9ee4cau),
    __E_SystemPropertiesBodyTrackingFullBodyMETA = static_cast<uint32_t>(0x3b9ef850u),
    __E_EventDataPassthroughLayerResumedMETA = static_cast<uint32_t>(0x3b9f1790u),
    __E_BodyTrackingCalibrationInfoMeta = static_cast<uint32_t>(0x3b9f1b7au),
    __E_BodyTrackingCalibrationStatusMeta = static_cast<uint32_t>(0x3b9f1b7bu),
    __E_SystemPropertiesBodyTrackingCalibrationMeta = static_cast<uint32_t>(0x3b9f1b7cu),
    __E_SystemFaceTrackingProperties2FB = static_cast<uint32_t>(0x3b9f2b25u),
    __E_FaceTrackerCreateInfo2FB = static_cast<uint32_t>(0x3b9f2b26u),
    __E_FaceExpressionInfo2FB = static_cast<uint32_t>(0x3b9f2b27u),
    __E_FaceExpressionWeights2FB = static_cast<uint32_t>(0x3b9f2b28u),
    __E_SystemSpatialEntitySharingPropertiesMETA = static_cast<uint32_t>(0x3b9f36d0u),
    __E_ShareSpacesInfoMETA = static_cast<uint32_t>(0x3b9f36d1u),
    __E_EventDataShareSpacesCompleteMETA = static_cast<uint32_t>(0x3b9f36d2u),
    __E_EnvironmentDepthProviderCreateInfoMETA = static_cast<uint32_t>(0x3b9f3ab8u),
    __E_EnvironmentDepthSwapchainCreateInfoMETA = static_cast<uint32_t>(0x3b9f3ab9u),
    __E_EnvironmentDepthSwapchainStateMETA = static_cast<uint32_t>(0x3b9f3abau),
    __E_EnvironmentDepthImageAcquireInfoMETA = static_cast<uint32_t>(0x3b9f3abbu),
    __E_EnvironmentDepthImageViewMETA = static_cast<uint32_t>(0x3b9f3abcu),
    __E_EnvironmentDepthImageMETA = static_cast<uint32_t>(0x3b9f3abdu),
    __E_EnvironmentDepthHandRemovalSetInfoMETA = static_cast<uint32_t>(0x3b9f3abeu),
    __E_SystemEnvironmentDepthPropertiesMETA = static_cast<uint32_t>(0x3b9f3abfu),
    __E_EnvironmentDepthImageTimestampMETA = static_cast<uint32_t>(0x3b9f3ac0u),
    __E_RenderModelCreateInfoEXT = static_cast<uint32_t>(0x3b9f5de0u),
    __E_RenderModelPropertiesGetInfoEXT = static_cast<uint32_t>(0x3b9f5de1u),
    __E_RenderModelPropertiesEXT = static_cast<uint32_t>(0x3b9f5de2u),
    __E_RenderModelSpaceCreateInfoEXT = static_cast<uint32_t>(0x3b9f5de3u),
    __E_RenderModelStateGetInfoEXT = static_cast<uint32_t>(0x3b9f5de4u),
    __E_RenderModelStateEXT = static_cast<uint32_t>(0x3b9f5de5u),
    __E_RenderModelAssetCreateInfoEXT = static_cast<uint32_t>(0x3b9f5de6u),
    __E_RenderModelAssetDataGetInfoEXT = static_cast<uint32_t>(0x3b9f5de7u),
    __E_RenderModelAssetDataEXT = static_cast<uint32_t>(0x3b9f5de8u),
    __E_RenderModelAssetPropertiesGetInfoEXT = static_cast<uint32_t>(0x3b9f5de9u),
    __E_RenderModelAssetPropertiesEXT = static_cast<uint32_t>(0x3b9f5deau),
    __E_InteractionRenderModelIdsEnumerateInfoEXT = static_cast<uint32_t>(0x3b9f61c8u),
    __E_InteractionRenderModelSubactionPathInfoEXT = static_cast<uint32_t>(0x3b9f61c9u),
    __E_EventDataInteractionRenderModelsChangedEXT = static_cast<uint32_t>(0x3b9f61cau),
    __E_InteractionRenderModelTopLevelUserPathGetInfoEXT = static_cast<uint32_t>(0x3b9f61cbu),
    __E_PassthroughCreateInfoHTC = static_cast<uint32_t>(0x3b9fa049u),
    __E_PassthroughColorHTC = static_cast<uint32_t>(0x3b9fa04au),
    __E_PassthroughMeshTransformInfoHTC = static_cast<uint32_t>(0x3b9fa04bu),
    __E_CompositionLayerPassthroughHTC = static_cast<uint32_t>(0x3b9fa04cu),
    __E_FoveationApplyInfoHTC = static_cast<uint32_t>(0x3b9fa430u),
    __E_FoveationDynamicModeInfoHTC = static_cast<uint32_t>(0x3b9fa431u),
    __E_FoveationCustomModeInfoHTC = static_cast<uint32_t>(0x3b9fa432u),
    __E_SystemAnchorPropertiesHTC = static_cast<uint32_t>(0x3b9fa818u),
    __E_SpatialAnchorCreateInfoHTC = static_cast<uint32_t>(0x3b9fa819u),
    __E_SystemBodyTrackingPropertiesHTC = static_cast<uint32_t>(0x3b9fac00u),
    __E_BodyTrackerCreateInfoHTC = static_cast<uint32_t>(0x3b9fac01u),
    __E_BodyJointsLocateInfoHTC = static_cast<uint32_t>(0x3b9fac02u),
    __E_BodyJointLocationsHTC = static_cast<uint32_t>(0x3b9fac03u),
    __E_BodySkeletonHTC = static_cast<uint32_t>(0x3b9fac04u),
    __E_ActiveActionSetPrioritiesEXT = static_cast<uint32_t>(0x3ba07b08u),
    __E_SystemForceFeedbackCurlPropertiesMNDX = static_cast<uint32_t>(0x3ba082d8u),
    __E_ForceFeedbackCurlApplyLocationsMNDX = static_cast<uint32_t>(0x3ba082d9u),
    __E_BodyTrackerCreateInfoBD = static_cast<uint32_t>(0x3ba0a9e9u),
    __E_BodyJointsLocateInfoBD = static_cast<uint32_t>(0x3ba0a9eau),
    __E_BodyJointLocationsBD = static_cast<uint32_t>(0x3ba0a9ebu),
    __E_SystemBodyTrackingPropertiesBD = static_cast<uint32_t>(0x3ba0a9ecu),
    __E_SystemFacialSimulationPropertiesBD = static_cast<uint32_t>(0x3ba0add1u),
    __E_FaceTrackerCreateInfoBD = static_cast<uint32_t>(0x3ba0add2u),
    __E_FacialSimulationDataGetInfoBD = static_cast<uint32_t>(0x3ba0add3u),
    __E_FacialSimulationDataBD = static_cast<uint32_t>(0x3ba0add4u),
    __E_LipExpressionDataBD = static_cast<uint32_t>(0x3ba0add5u),
    __E_SystemSpatialSensingPropertiesBD = static_cast<uint32_t>(0x3ba0b988u),
    __E_SpatialEntityComponentGetInfoBD = static_cast<uint32_t>(0x3ba0b989u),
    __E_SpatialEntityLocationGetInfoBD = static_cast<uint32_t>(0x3ba0b98au),
    __E_SpatialEntityComponentDataLocationBD = static_cast<uint32_t>(0x3ba0b98bu),
    __E_SpatialEntityComponentDataSemanticBD = static_cast<uint32_t>(0x3ba0b98cu),
    __E_SpatialEntityComponentDataBoundingBox2DBD = static_cast<uint32_t>(0x3ba0b98du),
    __E_SpatialEntityComponentDataPolygonBD = static_cast<uint32_t>(0x3ba0b98eu),
    __E_SpatialEntityComponentDataBoundingBox3DBD = static_cast<uint32_t>(0x3ba0b98fu),
    __E_SpatialEntityComponentDataTriangleMeshBD = static_cast<uint32_t>(0x3ba0b990u),
    __E_SenseDataProviderCreateInfoBD = static_cast<uint32_t>(0x3ba0b991u),
    __E_SenseDataProviderStartInfoBD = static_cast<uint32_t>(0x3ba0b992u),
    __E_EventDataSenseDataProviderStateChangedBD = static_cast<uint32_t>(0x3ba0b993u),
    __E_EventDataSenseDataUpdatedBD = static_cast<uint32_t>(0x3ba0b994u),
    __E_SenseDataQueryInfoBD = static_cast<uint32_t>(0x3ba0b995u),
    __E_SenseDataQueryCompletionBD = static_cast<uint32_t>(0x3ba0b996u),
    __E_SenseDataFilterUuidBD = static_cast<uint32_t>(0x3ba0b997u),
    __E_SenseDataFilterSemanticBD = static_cast<uint32_t>(0x3ba0b998u),
    __E_QueriedSenseDataGetInfoBD = static_cast<uint32_t>(0x3ba0b999u),
    __E_QueriedSenseDataBD = static_cast<uint32_t>(0x3ba0b99au),
    __E_SpatialEntityStateBD = static_cast<uint32_t>(0x3ba0b99bu),
    __E_SpatialEntityAnchorCreateInfoBD = static_cast<uint32_t>(0x3ba0b99cu),
    __E_AnchorSpaceCreateInfoBD = static_cast<uint32_t>(0x3ba0b99du),
    __E_SystemSpatialAnchorPropertiesBD = static_cast<uint32_t>(0x3ba0bd70u),
    __E_SpatialAnchorCreateInfoBD = static_cast<uint32_t>(0x3ba0bd71u),
    __E_SpatialAnchorCreateCompletionBD = static_cast<uint32_t>(0x3ba0bd72u),
    __E_SpatialAnchorPersistInfoBD = static_cast<uint32_t>(0x3ba0bd73u),
    __E_SpatialAnchorUnpersistInfoBD = static_cast<uint32_t>(0x3ba0bd74u),
    __E_SystemSpatialAnchorSharingPropertiesBD = static_cast<uint32_t>(0x3ba0c158u),
    __E_SpatialAnchorShareInfoBD = static_cast<uint32_t>(0x3ba0c159u),
    __E_SharedSpatialAnchorDownloadInfoBD = static_cast<uint32_t>(0x3ba0c15au),
    __E_SystemSpatialScenePropertiesBD = static_cast<uint32_t>(0x3ba0c540u),
    __E_SceneCaptureInfoBD = static_cast<uint32_t>(0x3ba0c541u),
    __E_SystemSpatialMeshPropertiesBD = static_cast<uint32_t>(0x3ba0c928u),
    __E_SenseDataProviderCreateInfoSpatialMeshBD = static_cast<uint32_t>(0x3ba0c929u),
    __E_FuturePollResultProgressBD = static_cast<uint32_t>(0x3ba0cd11u),
    __E_SystemSpatialPlanePropertiesBD = static_cast<uint32_t>(0x3ba0d4e0u),
    __E_SpatialEntityComponentDataPlaneOrientationBD = static_cast<uint32_t>(0x3ba0d4e1u),
    __E_SenseDataFilterPlaneOrientationBD = static_cast<uint32_t>(0x3ba0d4e2u),
    __E_HandTrackingDataSourceInfoEXT = static_cast<uint32_t>(0x3ba151e0u),
    __E_HandTrackingDataSourceStateEXT = static_cast<uint32_t>(0x3ba151e1u),
    __E_PlaneDetectorCreateInfoEXT = static_cast<uint32_t>(0x3ba155c9u),
    __E_PlaneDetectorBeginInfoEXT = static_cast<uint32_t>(0x3ba155cau),
    __E_PlaneDetectorGetInfoEXT = static_cast<uint32_t>(0x3ba155cbu),
    __E_PlaneDetectorLocationsEXT = static_cast<uint32_t>(0x3ba155ccu),
    __E_PlaneDetectorLocationEXT = static_cast<uint32_t>(0x3ba155cdu),
    __E_PlaneDetectorPolygonBufferEXT = static_cast<uint32_t>(0x3ba155ceu),
    __E_SystemPlaneDetectionPropertiesEXT = static_cast<uint32_t>(0x3ba155cfu),
    __E_TrackableGetInfoAndroid = static_cast<uint32_t>(0x3ba1bb58u),
    __E_AnchorSpaceCreateInfoAndroid = static_cast<uint32_t>(0x3ba1bb59u),
    __E_TrackablePlaneAndroid = static_cast<uint32_t>(0x3ba1bb5bu),
    __E_TrackableTrackerCreateInfoAndroid = static_cast<uint32_t>(0x3ba1bb5cu),
    __E_SystemTrackablesPropertiesAndroid = static_cast<uint32_t>(0x3ba1bb5du),
    __E_PersistentAnchorSpaceCreateInfoAndroid = static_cast<uint32_t>(0x3ba1c329u),
    __E_PersistentAnchorSpaceInfoAndroid = static_cast<uint32_t>(0x3ba1c32au),
    __E_DeviceAnchorPersistentCreateInfoAndroid = static_cast<uint32_t>(0x3ba1c32bu),
    __E_SystemDeviceAnchorPersistencePropertiesAndroid = static_cast<uint32_t>(0x3ba1c32cu),
    __E_FaceTrackerCreateInfoAndroid = static_cast<uint32_t>(0x3ba1c710u),
    __E_FaceStateGetInfoAndroid = static_cast<uint32_t>(0x3ba1c711u),
    __E_FaceStateAndroid = static_cast<uint32_t>(0x3ba1c712u),
    __E_SystemFaceTrackingPropertiesAndroid = static_cast<uint32_t>(0x3ba1c713u),
    __E_PassthroughCameraStateGetInfoAndroid = static_cast<uint32_t>(0x3ba1cee0u),
    __E_SystemPassthroughCameraStatePropertiesAndroid = static_cast<uint32_t>(0x3ba1cee1u),
    __E_RaycastInfoAndroid = static_cast<uint32_t>(0x3ba1da98u),
    __E_RaycastHitResultsAndroid = static_cast<uint32_t>(0x3ba1da99u),
    __E_TrackableObjectAndroid = static_cast<uint32_t>(0x3ba1e650u),
    __E_TrackableObjectConfigurationAndroid = static_cast<uint32_t>(0x3ba1e651u),
    __E_FutureCancelInfoEXT = static_cast<uint32_t>(0x3ba1f208u),
    __E_FuturePollInfoEXT = static_cast<uint32_t>(0x3ba1f209u),
    __E_FutureCompletionEXT = static_cast<uint32_t>(0x3ba1f20au),
    __E_FuturePollResultEXT = static_cast<uint32_t>(0x3ba1f20bu),
    __E_EventDataUserPresenceChangedEXT = static_cast<uint32_t>(0x3ba1f5f0u),
    __E_SystemUserPresencePropertiesEXT = static_cast<uint32_t>(0x3ba1f5f1u),
    __E_SystemNotificationsSetInfoML = static_cast<uint32_t>(0x3ba201a8u),
    __E_WorldMeshDetectorCreateInfoML = static_cast<uint32_t>(0x3ba20591u),
    __E_WorldMeshStateRequestInfoML = static_cast<uint32_t>(0x3ba20592u),
    __E_WorldMeshBlockStateML = static_cast<uint32_t>(0x3ba20593u),
    __E_WorldMeshStateRequestCompletionML = static_cast<uint32_t>(0x3ba20594u),
    __E_WorldMeshBufferRecommendedSizeInfoML = static_cast<uint32_t>(0x3ba20595u),
    __E_WorldMeshBufferSizeML = static_cast<uint32_t>(0x3ba20596u),
    __E_WorldMeshBufferML = static_cast<uint32_t>(0x3ba20597u),
    __E_WorldMeshBlockRequestML = static_cast<uint32_t>(0x3ba20598u),
    __E_WorldMeshGetInfoML = static_cast<uint32_t>(0x3ba20599u),
    __E_WorldMeshBlockML = static_cast<uint32_t>(0x3ba2059au),
    __E_WorldMeshRequestCompletionML = static_cast<uint32_t>(0x3ba2059bu),
    __E_WorldMeshRequestCompletionInfoML = static_cast<uint32_t>(0x3ba2059cu),
    __E_SystemFacialExpressionPropertiesML = static_cast<uint32_t>(0x3ba224d4u),
    __E_FacialExpressionClientCreateInfoML = static_cast<uint32_t>(0x3ba224d5u),
    __E_FacialExpressionBlendShapeGetInfoML = static_cast<uint32_t>(0x3ba224d6u),
    __E_FacialExpressionBlendShapePropertiesML = static_cast<uint32_t>(0x3ba224d7u),
    __E_SystemSimultaneousHandsAndControllersPropertiesMETA = static_cast<uint32_t>(0x3ba2e821u),
    __E_SimultaneousHandsAndControllersTrackingResumeInfoMETA = static_cast<uint32_t>(0x3ba2e822u),
    __E_SimultaneousHandsAndControllersTrackingPauseInfoMETA = static_cast<uint32_t>(0x3ba2e823u),
    __E_ColocationDiscoveryStartInfoMETA = static_cast<uint32_t>(0x3ba38082u),
    __E_ColocationDiscoveryStopInfoMETA = static_cast<uint32_t>(0x3ba38083u),
    __E_ColocationAdvertisementStartInfoMETA = static_cast<uint32_t>(0x3ba38084u),
    __E_ColocationAdvertisementStopInfoMETA = static_cast<uint32_t>(0x3ba38085u),
    __E_EventDataStartColocationAdvertisementCompleteMETA = static_cast<uint32_t>(0x3ba3808cu),
    __E_EventDataStopColocationAdvertisementCompleteMETA = static_cast<uint32_t>(0x3ba3808du),
    __E_EventDataColocationAdvertisementCompleteMETA = static_cast<uint32_t>(0x3ba3808eu),
    __E_EventDataStartColocationDiscoveryCompleteMETA = static_cast<uint32_t>(0x3ba3808fu),
    __E_EventDataColocationDiscoveryResultMETA = static_cast<uint32_t>(0x3ba38090u),
    __E_EventDataColocationDiscoveryCompleteMETA = static_cast<uint32_t>(0x3ba38091u),
    __E_EventDataStopColocationDiscoveryCompleteMETA = static_cast<uint32_t>(0x3ba38092u),
    __E_SystemColocationDiscoveryPropertiesMETA = static_cast<uint32_t>(0x3ba38096u),
    __E_ShareSpacesRecipientGroupsMETA = static_cast<uint32_t>(0x3ba38460u),
    __E_SpaceGroupUuidFilterInfoMETA = static_cast<uint32_t>(0x3ba38461u),
    __E_SystemSpatialEntityGroupSharingPropertiesMETA = static_cast<uint32_t>(0x3ba384c4u),
    __E_AnchorSharingInfoAndroid = static_cast<uint32_t>(0x3ba57c48u),
    __E_AnchorSharingTokenAndroid = static_cast<uint32_t>(0x3ba57c49u),
    __E_SystemAnchorSharingExportPropertiesAndroid = static_cast<uint32_t>(0x3ba57c4au),
    __E_SystemMarkerTrackingPropertiesAndroid = static_cast<uint32_t>(0x3ba593b8u),
    __E_TrackableMarkerConfigurationAndroid = static_cast<uint32_t>(0x3ba593b9u),
    __E_TrackableMarkerAndroid = static_cast<uint32_t>(0x3ba593bau),
    __E_SpatialCapabilityComponentTypesEXT = static_cast<uint32_t>(0x3ba614a0u),
    __E_SpatialContextCreateInfoEXT = static_cast<uint32_t>(0x3ba614a1u),
    __E_CreateSpatialContextCompletionEXT = static_cast<uint32_t>(0x3ba614a2u),
    __E_SpatialDiscoverySnapshotCreateInfoEXT = static_cast<uint32_t>(0x3ba614a3u),
    __E_CreateSpatialDiscoverySnapshotCompletionInfoEXT = static_cast<uint32_t>(0x3ba614a4u),
    __E_CreateSpatialDiscoverySnapshotCompletionEXT = static_cast<uint32_t>(0x3ba614a5u),
    __E_SpatialComponentDataQueryConditionEXT = static_cast<uint32_t>(0x3ba614a6u),
    __E_SpatialComponentDataQueryResultEXT = static_cast<uint32_t>(0x3ba614a7u),
    __E_SpatialBufferGetInfoEXT = static_cast<uint32_t>(0x3ba614a8u),
    __E_SpatialComponentBounded2DListEXT = static_cast<uint32_t>(0x3ba614a9u),
    __E_SpatialComponentBounded3DListEXT = static_cast<uint32_t>(0x3ba614aau),
    __E_SpatialComponentParentListEXT = static_cast<uint32_t>(0x3ba614abu),
    __E_SpatialComponentMesh3DListEXT = static_cast<uint32_t>(0x3ba614acu),
    __E_SpatialEntityFromIdCreateInfoEXT = static_cast<uint32_t>(0x3ba614adu),
    __E_SpatialUpdateSnapshotCreateInfoEXT = static_cast<uint32_t>(0x3ba614aeu),
    __E_EventDataSpatialDiscoveryRecommendedEXT = static_cast<uint32_t>(0x3ba614afu),
    __E_SpatialFilterTrackingStateEXT = static_cast<uint32_t>(0x3ba614b0u),
    __E_SpatialCapabilityConfigurationPlaneTrackingEXT = static_cast<uint32_t>(0x3ba61888u),
    __E_SpatialComponentPlaneAlignmentListEXT = static_cast<uint32_t>(0x3ba61889u),
    __E_SpatialComponentMesh2DListEXT = static_cast<uint32_t>(0x3ba6188au),
    __E_SpatialComponentPolygon2DListEXT = static_cast<uint32_t>(0x3ba6188bu),
    __E_SpatialComponentPlaneSemanticLabelListEXT = static_cast<uint32_t>(0x3ba6188cu),
    __E_SpatialCapabilityConfigurationQrCodeEXT = static_cast<uint32_t>(0x3ba62058u),
    __E_SpatialCapabilityConfigurationMicroQrCodeEXT = static_cast<uint32_t>(0x3ba62059u),
    __E_SpatialCapabilityConfigurationArucoMarkerEXT = static_cast<uint32_t>(0x3ba6205au),
    __E_SpatialCapabilityConfigurationAprilTagEXT = static_cast<uint32_t>(0x3ba6205bu),
    __E_SpatialMarkerSizeEXT = static_cast<uint32_t>(0x3ba6205cu),
    __E_SpatialMarkerStaticOptimizationEXT = static_cast<uint32_t>(0x3ba6205du),
    __E_SpatialComponentMarkerListEXT = static_cast<uint32_t>(0x3ba6205eu),
    __E_SpatialCapabilityConfigurationAnchorEXT = static_cast<uint32_t>(0x3ba66a90u),
    __E_SpatialComponentAnchorListEXT = static_cast<uint32_t>(0x3ba66a91u),
    __E_SpatialAnchorCreateInfoEXT = static_cast<uint32_t>(0x3ba66a92u),
    __E_SpatialPersistenceContextCreateInfoEXT = static_cast<uint32_t>(0x3ba66e78u),
    __E_CreateSpatialPersistenceContextCompletionEXT = static_cast<uint32_t>(0x3ba66e79u),
    __E_SpatialContextPersistenceConfigEXT = static_cast<uint32_t>(0x3ba66e7au),
    __E_SpatialDiscoveryPersistenceUuidFilterEXT = static_cast<uint32_t>(0x3ba66e7bu),
    __E_SpatialComponentPersistenceListEXT = static_cast<uint32_t>(0x3ba66e7cu),
    __E_SpatialEntityPersistInfoEXT = static_cast<uint32_t>(0x3ba6b4c8u),
    __E_PersistSpatialEntityCompletionEXT = static_cast<uint32_t>(0x3ba6b4c9u),
    __E_SpatialEntityUnpersistInfoEXT = static_cast<uint32_t>(0x3ba6b4cau),
    __E_UnpersistSpatialEntityCompletionEXT = static_cast<uint32_t>(0x3ba6b4cbu),
    __E_EventDataGlobalDimmingLevelChangedAndroid = static_cast<uint32_t>(0x3ba6ef61u),
    __E_LoaderInitInfoPropertiesEXT = static_cast<uint32_t>(0x3ba79370u),
    __E_GraphicsBindingVulkan2KHR = static_cast<uint32_t>(0x3b9b2ba8u),
    __E_SwapchainImageVulkan2KHR = static_cast<uint32_t>(0x3b9b2ba9u),
    __E_GraphicsRequirementsVulkan2KHR = static_cast<uint32_t>(0x3b9b2baau),
    __E_DevicePcmSampleRateGetInfoFB = static_cast<uint32_t>(0x3b9dfa6au),
    __E_SpacesLocateInfoKHR = static_cast<uint32_t>(0x3ba1f9d8u),
    __E_SpaceLocationsKHR = static_cast<uint32_t>(0x3ba1f9d9u),
    __E_SpaceVelocitiesKHR = static_cast<uint32_t>(0x3ba1f9dau),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrStructureType_Unwrapped() const noexcept {
    return static_cast<__XrStructureType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrStructureType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrStructureType(uint32_t value__) noexcept;

  /// @brief Field ActionCreateInfo value: U32(29)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionCreateInfo;

  /// @brief Field ActionSetCreateInfo value: U32(28)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionSetCreateInfo;

  /// @brief Field ActionSpaceCreateInfo value: U32(38)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionSpaceCreateInfo;

  /// @brief Field ActionStateBoolean value: U32(23)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionStateBoolean;

  /// @brief Field ActionStateFloat value: U32(24)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionStateFloat;

  /// @brief Field ActionStateGetInfo value: U32(58)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionStateGetInfo;

  /// @brief Field ActionStatePose value: U32(27)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionStatePose;

  /// @brief Field ActionStateVector2f value: U32(25)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionStateVector2f;

  /// @brief Field ActionsSyncInfo value: U32(61)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActionsSyncInfo;

  /// @brief Field ActiveActionSetPrioritiesEXT value: U32(1000373000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ActiveActionSetPrioritiesEXT;

  /// @brief Field AnchorSharingInfoAndroid value: U32(1000701000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const AnchorSharingInfoAndroid;

  /// @brief Field AnchorSharingTokenAndroid value: U32(1000701001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const AnchorSharingTokenAndroid;

  /// @brief Field AnchorSpaceCreateInfoAndroid value: U32(1000455001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const AnchorSpaceCreateInfoAndroid;

  /// @brief Field AnchorSpaceCreateInfoBD value: U32(1000389021)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const AnchorSpaceCreateInfoBD;

  /// @brief Field AndroidSurfaceSwapchainCreateInfoFB value: U32(1000070000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const AndroidSurfaceSwapchainCreateInfoFB;

  /// @brief Field ApiLayerProperties value: U32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ApiLayerProperties;

  /// @brief Field BindingModificationsKHR value: U32(1000120000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BindingModificationsKHR;

  /// @brief Field BodyJointLocationsBD value: U32(1000385003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyJointLocationsBD;

  /// @brief Field BodyJointLocationsFB value: U32(1000076005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyJointLocationsFB;

  /// @brief Field BodyJointLocationsHTC value: U32(1000320003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyJointLocationsHTC;

  /// @brief Field BodyJointsLocateInfoBD value: U32(1000385002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyJointsLocateInfoBD;

  /// @brief Field BodyJointsLocateInfoFB value: U32(1000076002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyJointsLocateInfoFB;

  /// @brief Field BodyJointsLocateInfoHTC value: U32(1000320002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyJointsLocateInfoHTC;

  /// @brief Field BodySkeletonFB value: U32(1000076006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodySkeletonFB;

  /// @brief Field BodySkeletonHTC value: U32(1000320004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodySkeletonHTC;

  /// @brief Field BodyTrackerCreateInfoBD value: U32(1000385001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyTrackerCreateInfoBD;

  /// @brief Field BodyTrackerCreateInfoFB value: U32(1000076001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyTrackerCreateInfoFB;

  /// @brief Field BodyTrackerCreateInfoHTC value: U32(1000320001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyTrackerCreateInfoHTC;

  /// @brief Field BodyTrackingCalibrationInfoMeta value: U32(1000283002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyTrackingCalibrationInfoMeta;

  /// @brief Field BodyTrackingCalibrationStatusMeta value: U32(1000283003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BodyTrackingCalibrationStatusMeta;

  /// @brief Field BoundSourcesForActionEnumerateInfo value: U32(62)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const BoundSourcesForActionEnumerateInfo;

  /// @brief Field Boundary2DFB value: U32(1000175002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const Boundary2DFB;

  /// @brief Field ColocationAdvertisementStartInfoMETA value: U32(1000571012)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ColocationAdvertisementStartInfoMETA;

  /// @brief Field ColocationAdvertisementStopInfoMETA value: U32(1000571013)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ColocationAdvertisementStopInfoMETA;

  /// @brief Field ColocationDiscoveryStartInfoMETA value: U32(1000571010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ColocationDiscoveryStartInfoMETA;

  /// @brief Field ColocationDiscoveryStopInfoMETA value: U32(1000571011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ColocationDiscoveryStopInfoMETA;

  /// @brief Field CompositionLayerAlphaBlendFB value: U32(1000041001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerAlphaBlendFB;

  /// @brief Field CompositionLayerColorScaleBiasKHR value: U32(1000034000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerColorScaleBiasKHR;

  /// @brief Field CompositionLayerCubeKHR value: U32(1000006000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerCubeKHR;

  /// @brief Field CompositionLayerCylinderKHR value: U32(1000017000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerCylinderKHR;

  /// @brief Field CompositionLayerDepthInfoKHR value: U32(1000010000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerDepthInfoKHR;

  /// @brief Field CompositionLayerDepthTestFB value: U32(1000212000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerDepthTestFB;

  /// @brief Field CompositionLayerDepthTestVARJO value: U32(1000122000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerDepthTestVARJO;

  /// @brief Field CompositionLayerEquirect2KHR value: U32(1000091000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerEquirect2KHR;

  /// @brief Field CompositionLayerEquirectKHR value: U32(1000018000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerEquirectKHR;

  /// @brief Field CompositionLayerImageLayoutFB value: U32(1000040000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerImageLayoutFB;

  /// @brief Field CompositionLayerPassthroughFB value: U32(1000118003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerPassthroughFB;

  /// @brief Field CompositionLayerPassthroughHTC value: U32(1000317004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerPassthroughHTC;

  /// @brief Field CompositionLayerProjection value: U32(35)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerProjection;

  /// @brief Field CompositionLayerProjectionView value: U32(48)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerProjectionView;

  /// @brief Field CompositionLayerQuad value: U32(36)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerQuad;

  /// @brief Field CompositionLayerReprojectionInfoMSFT value: U32(1000066000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerReprojectionInfoMSFT;

  /// @brief Field CompositionLayerReprojectionPlaneOverrideMSFT value: U32(1000066001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerReprojectionPlaneOverrideMSFT;

  /// @brief Field CompositionLayerSecureContentFB value: U32(1000072000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerSecureContentFB;

  /// @brief Field CompositionLayerSettingsFB value: U32(1000204000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerSettingsFB;

  /// @brief Field CompositionLayerSpaceWarpInfoFB value: U32(1000171000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CompositionLayerSpaceWarpInfoFB;

  /// @brief Field ControllerModelKeyStateMSFT value: U32(1000055000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ControllerModelKeyStateMSFT;

  /// @brief Field ControllerModelNodePropertiesMSFT value: U32(1000055001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ControllerModelNodePropertiesMSFT;

  /// @brief Field ControllerModelNodeStateMSFT value: U32(1000055003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ControllerModelNodeStateMSFT;

  /// @brief Field ControllerModelPropertiesMSFT value: U32(1000055002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ControllerModelPropertiesMSFT;

  /// @brief Field ControllerModelStateMSFT value: U32(1000055004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ControllerModelStateMSFT;

  /// @brief Field CoordinateSpaceCreateInfoML value: U32(1000137000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CoordinateSpaceCreateInfoML;

  /// @brief Field CreateSpatialAnchorsCompletionML value: U32(1000140001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CreateSpatialAnchorsCompletionML;

  /// @brief Field CreateSpatialContextCompletionEXT value: U32(1000740002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CreateSpatialContextCompletionEXT;

  /// @brief Field CreateSpatialDiscoverySnapshotCompletionEXT value: U32(1000740005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CreateSpatialDiscoverySnapshotCompletionEXT;

  /// @brief Field CreateSpatialDiscoverySnapshotCompletionInfoEXT value: U32(1000740004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CreateSpatialDiscoverySnapshotCompletionInfoEXT;

  /// @brief Field CreateSpatialPersistenceContextCompletionEXT value: U32(1000763001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const CreateSpatialPersistenceContextCompletionEXT;

  /// @brief Field DebugUtilsLabelEXT value: U32(1000019003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DebugUtilsLabelEXT;

  /// @brief Field DebugUtilsMessengerCallbackDataEXT value: U32(1000019001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DebugUtilsMessengerCallbackDataEXT;

  /// @brief Field DebugUtilsMessengerCreateInfoEXT value: U32(1000019002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DebugUtilsMessengerCreateInfoEXT;

  /// @brief Field DebugUtilsObjectNameInfoEXT value: U32(1000019000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DebugUtilsObjectNameInfoEXT;

  /// @brief Field DeviceAnchorPersistentCreateInfoAndroid value: U32(1000457003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DeviceAnchorPersistentCreateInfoAndroid;

  /// @brief Field DevicePcmSampleRateGetInfoFB value: U32(1000209002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DevicePcmSampleRateGetInfoFB;

  /// @brief Field DevicePcmSampleRateStateFB value: U32(1000209002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DevicePcmSampleRateStateFB;

  /// @brief Field DigitalLensControlALMALENCE value: U32(1000196000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const DigitalLensControlALMALENCE;

  /// @brief Field EnvironmentDepthHandRemovalSetInfoMETA value: U32(1000291006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthHandRemovalSetInfoMETA;

  /// @brief Field EnvironmentDepthImageAcquireInfoMETA value: U32(1000291003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthImageAcquireInfoMETA;

  /// @brief Field EnvironmentDepthImageMETA value: U32(1000291005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthImageMETA;

  /// @brief Field EnvironmentDepthImageTimestampMETA value: U32(1000291008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthImageTimestampMETA;

  /// @brief Field EnvironmentDepthImageViewMETA value: U32(1000291004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthImageViewMETA;

  /// @brief Field EnvironmentDepthProviderCreateInfoMETA value: U32(1000291000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthProviderCreateInfoMETA;

  /// @brief Field EnvironmentDepthSwapchainCreateInfoMETA value: U32(1000291001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthSwapchainCreateInfoMETA;

  /// @brief Field EnvironmentDepthSwapchainStateMETA value: U32(1000291002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EnvironmentDepthSwapchainStateMETA;

  /// @brief Field EventDataBuffer value: U32(16)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataBuffer;

  /// @brief Field EventDataColocationAdvertisementCompleteMETA value: U32(1000571022)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataColocationAdvertisementCompleteMETA;

  /// @brief Field EventDataColocationDiscoveryCompleteMETA value: U32(1000571025)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataColocationDiscoveryCompleteMETA;

  /// @brief Field EventDataColocationDiscoveryResultMETA value: U32(1000571024)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataColocationDiscoveryResultMETA;

  /// @brief Field EventDataDisplayRefreshRateChangedFB value: U32(1000101000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataDisplayRefreshRateChangedFB;

  /// @brief Field EventDataEventsLost value: U32(49)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataEventsLost;

  /// @brief Field EventDataEyeCalibrationChangedML value: U32(1000472001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataEyeCalibrationChangedML;

  /// @brief Field EventDataGlobalDimmingLevelChangedAndroid value: U32(1000796001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataGlobalDimmingLevelChangedAndroid;

  /// @brief Field EventDataHeadsetFitChangedML value: U32(1000472000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataHeadsetFitChangedML;

  /// @brief Field EventDataInstanceLossPending value: U32(17)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataInstanceLossPending;

  /// @brief Field EventDataInteractionProfileChanged value: U32(52)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataInteractionProfileChanged;

  /// @brief Field EventDataInteractionRenderModelsChangedEXT value: U32(1000301002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataInteractionRenderModelsChangedEXT;

  /// @brief Field EventDataLocalizationChangedML value: U32(1000139001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataLocalizationChangedML;

  /// @brief Field EventDataMainSessionVisibilityChangedEXTX value: U32(1000033003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataMainSessionVisibilityChangedEXTX;

  /// @brief Field EventDataMarkerTrackingUpdateVARJO value: U32(1000124001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataMarkerTrackingUpdateVARJO;

  /// @brief Field EventDataPassthroughLayerResumedMETA value: U32(1000282000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataPassthroughLayerResumedMETA;

  /// @brief Field EventDataPassthroughStateChangedFB value: U32(1000118030)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataPassthroughStateChangedFB;

  /// @brief Field EventDataPerfSettingsEXT value: U32(1000015000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataPerfSettingsEXT;

  /// @brief Field EventDataReferenceSpaceChangePending value: U32(40)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataReferenceSpaceChangePending;

  /// @brief Field EventDataSceneCaptureCompleteFB value: U32(1000198001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSceneCaptureCompleteFB;

  /// @brief Field EventDataSenseDataProviderStateChangedBD value: U32(1000389011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSenseDataProviderStateChangedBD;

  /// @brief Field EventDataSenseDataUpdatedBD value: U32(1000389012)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSenseDataUpdatedBD;

  /// @brief Field EventDataSessionStateChanged value: U32(18)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSessionStateChanged;

  /// @brief Field EventDataShareSpacesCompleteMETA value: U32(1000290002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataShareSpacesCompleteMETA;

  /// @brief Field EventDataSpaceDiscoveryCompleteMeta value: U32(1000247008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceDiscoveryCompleteMeta;

  /// @brief Field EventDataSpaceDiscoveryResultsAvailableMeta value: U32(1000247007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceDiscoveryResultsAvailableMeta;

  /// @brief Field EventDataSpaceEraseCompleteFB value: U32(1000158107)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceEraseCompleteFB;

  /// @brief Field EventDataSpaceListSaveCompleteFB value: U32(1000238001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceListSaveCompleteFB;

  /// @brief Field EventDataSpaceQueryCompleteFB value: U32(1000156104)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceQueryCompleteFB;

  /// @brief Field EventDataSpaceQueryResultsAvailableFB value: U32(1000156103)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceQueryResultsAvailableFB;

  /// @brief Field EventDataSpaceSaveCompleteFB value: U32(1000158106)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceSaveCompleteFB;

  /// @brief Field EventDataSpaceSetStatusCompleteFB value: U32(1000113006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceSetStatusCompleteFB;

  /// @brief Field EventDataSpaceShareCompleteFB value: U32(1000169002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpaceShareCompleteFB;

  /// @brief Field EventDataSpacesEraseResultMeta value: U32(1000259004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpacesEraseResultMeta;

  /// @brief Field EventDataSpacesSaveResultMeta value: U32(1000259002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpacesSaveResultMeta;

  /// @brief Field EventDataSpatialAnchorCreateCompleteFB value: U32(1000113005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpatialAnchorCreateCompleteFB;

  /// @brief Field EventDataSpatialDiscoveryRecommendedEXT value: U32(1000740015)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataSpatialDiscoveryRecommendedEXT;

  /// @brief Field EventDataStartColocationAdvertisementCompleteMETA value: U32(1000571020)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataStartColocationAdvertisementCompleteMETA;

  /// @brief Field EventDataStartColocationDiscoveryCompleteMETA value: U32(1000571023)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataStartColocationDiscoveryCompleteMETA;

  /// @brief Field EventDataStopColocationAdvertisementCompleteMETA value: U32(1000571021)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataStopColocationAdvertisementCompleteMETA;

  /// @brief Field EventDataStopColocationDiscoveryCompleteMETA value: U32(1000571026)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataStopColocationDiscoveryCompleteMETA;

  /// @brief Field EventDataUserPresenceChangedEXT value: U32(1000470000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataUserPresenceChangedEXT;

  /// @brief Field EventDataVirtualKeyboardBackspaceMETA value: U32(1000219015)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataVirtualKeyboardBackspaceMETA;

  /// @brief Field EventDataVirtualKeyboardCommitTextMETA value: U32(1000219014)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataVirtualKeyboardCommitTextMETA;

  /// @brief Field EventDataVirtualKeyboardEnterMETA value: U32(1000219016)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataVirtualKeyboardEnterMETA;

  /// @brief Field EventDataVirtualKeyboardHiddenMETA value: U32(1000219018)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataVirtualKeyboardHiddenMETA;

  /// @brief Field EventDataVirtualKeyboardShownMETA value: U32(1000219017)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataVirtualKeyboardShownMETA;

  /// @brief Field EventDataVisibilityMaskChangedKHR value: U32(1000031001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataVisibilityMaskChangedKHR;

  /// @brief Field EventDataViveTrackerConnectedHTCX value: U32(1000103001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EventDataViveTrackerConnectedHTCX;

  /// @brief Field ExtensionProperties value: U32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ExtensionProperties;

  /// @brief Field ExternalCameraOCULUS value: U32(1000226000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ExternalCameraOCULUS;

  /// @brief Field EyeGazeSampleTimeEXT value: U32(1000030001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EyeGazeSampleTimeEXT;

  /// @brief Field EyeGazesFB value: U32(1000202003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EyeGazesFB;

  /// @brief Field EyeGazesInfoFB value: U32(1000202002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EyeGazesInfoFB;

  /// @brief Field EyeTrackerCreateInfoFB value: U32(1000202001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const EyeTrackerCreateInfoFB;

  /// @brief Field FaceExpressionInfo2FB value: U32(1000287015)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceExpressionInfo2FB;

  /// @brief Field FaceExpressionInfoFB value: U32(1000201002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceExpressionInfoFB;

  /// @brief Field FaceExpressionWeights2FB value: U32(1000287016)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceExpressionWeights2FB;

  /// @brief Field FaceExpressionWeightsFB value: U32(1000201006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceExpressionWeightsFB;

  /// @brief Field FaceStateAndroid value: U32(1000458002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceStateAndroid;

  /// @brief Field FaceStateGetInfoAndroid value: U32(1000458001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceStateGetInfoAndroid;

  /// @brief Field FaceTrackerCreateInfo2FB value: U32(1000287014)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceTrackerCreateInfo2FB;

  /// @brief Field FaceTrackerCreateInfoAndroid value: U32(1000458000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceTrackerCreateInfoAndroid;

  /// @brief Field FaceTrackerCreateInfoBD value: U32(1000386002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceTrackerCreateInfoBD;

  /// @brief Field FaceTrackerCreateInfoFB value: U32(1000201005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FaceTrackerCreateInfoFB;

  /// @brief Field FacialExpressionBlendShapeGetInfoML value: U32(1000482006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialExpressionBlendShapeGetInfoML;

  /// @brief Field FacialExpressionBlendShapePropertiesML value: U32(1000482007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialExpressionBlendShapePropertiesML;

  /// @brief Field FacialExpressionClientCreateInfoML value: U32(1000482005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialExpressionClientCreateInfoML;

  /// @brief Field FacialExpressionsHTC value: U32(1000104002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialExpressionsHTC;

  /// @brief Field FacialSimulationDataBD value: U32(1000386004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialSimulationDataBD;

  /// @brief Field FacialSimulationDataGetInfoBD value: U32(1000386003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialSimulationDataGetInfoBD;

  /// @brief Field FacialTrackerCreateInfoHTC value: U32(1000104001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FacialTrackerCreateInfoHTC;

  /// @brief Field ForceFeedbackCurlApplyLocationsMNDX value: U32(1000375001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ForceFeedbackCurlApplyLocationsMNDX;

  /// @brief Field FoveatedViewConfigurationViewVARJO value: U32(1000121001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveatedViewConfigurationViewVARJO;

  /// @brief Field FoveationApplyInfoHTC value: U32(1000318000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationApplyInfoHTC;

  /// @brief Field FoveationCustomModeInfoHTC value: U32(1000318002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationCustomModeInfoHTC;

  /// @brief Field FoveationDynamicModeInfoHTC value: U32(1000318001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationDynamicModeInfoHTC;

  /// @brief Field FoveationEyeTrackedProfileCreateInfoMETA value: U32(1000200000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationEyeTrackedProfileCreateInfoMETA;

  /// @brief Field FoveationEyeTrackedStateMETA value: U32(1000200001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationEyeTrackedStateMETA;

  /// @brief Field FoveationLevelProfileCreateInfoFB value: U32(1000115000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationLevelProfileCreateInfoFB;

  /// @brief Field FoveationProfileCreateInfoFB value: U32(1000114000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FoveationProfileCreateInfoFB;

  /// @brief Field FrameBeginInfo value: U32(46)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameBeginInfo;

  /// @brief Field FrameEndInfo value: U32(12)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameEndInfo;

  /// @brief Field FrameEndInfoML value: U32(1000135000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameEndInfoML;

  /// @brief Field FrameState value: U32(44)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameState;

  /// @brief Field FrameSynthesisConfigViewEXT value: U32(1000211001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameSynthesisConfigViewEXT;

  /// @brief Field FrameSynthesisInfoEXT value: U32(1000211000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameSynthesisInfoEXT;

  /// @brief Field FrameWaitInfo value: U32(33)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FrameWaitInfo;

  /// @brief Field FutureCancelInfoEXT value: U32(1000469000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FutureCancelInfoEXT;

  /// @brief Field FutureCompletionEXT value: U32(1000469002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FutureCompletionEXT;

  /// @brief Field FuturePollInfoEXT value: U32(1000469001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FuturePollInfoEXT;

  /// @brief Field FuturePollResultEXT value: U32(1000469003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FuturePollResultEXT;

  /// @brief Field FuturePollResultProgressBD value: U32(1000394001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const FuturePollResultProgressBD;

  /// @brief Field GeometryInstanceCreateInfoFB value: U32(1000118004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GeometryInstanceCreateInfoFB;

  /// @brief Field GeometryInstanceTransformFB value: U32(1000118005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GeometryInstanceTransformFB;

  /// @brief Field GlobalDimmerFrameEndInfoML value: U32(1000136000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GlobalDimmerFrameEndInfoML;

  /// @brief Field GraphicsBindingD3D11KHR value: U32(1000027000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingD3D11KHR;

  /// @brief Field GraphicsBindingD3D12KHR value: U32(1000028000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingD3D12KHR;

  /// @brief Field GraphicsBindingEGLMNDX value: U32(1000048004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingEGLMNDX;

  /// @brief Field GraphicsBindingMetalKHR value: U32(1000029000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingMetalKHR;

  /// @brief Field GraphicsBindingOpenGLESAndroidKHR value: U32(1000024001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingOpenGLESAndroidKHR;

  /// @brief Field GraphicsBindingOpenGLWaylandKHR value: U32(1000023003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingOpenGLWaylandKHR;

  /// @brief Field GraphicsBindingOpenGLWin32KHR value: U32(1000023000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingOpenGLWin32KHR;

  /// @brief Field GraphicsBindingOpenGLXcbKHR value: U32(1000023002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingOpenGLXcbKHR;

  /// @brief Field GraphicsBindingOpenGLXlibKHR value: U32(1000023001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingOpenGLXlibKHR;

  /// @brief Field GraphicsBindingVulkan2KHR value: U32(1000025000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingVulkan2KHR;

  /// @brief Field GraphicsBindingVulkanKHR value: U32(1000025000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsBindingVulkanKHR;

  /// @brief Field GraphicsRequirementsD3D11KHR value: U32(1000027002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsD3D11KHR;

  /// @brief Field GraphicsRequirementsD3D12KHR value: U32(1000028002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsD3D12KHR;

  /// @brief Field GraphicsRequirementsMetalKHR value: U32(1000029002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsMetalKHR;

  /// @brief Field GraphicsRequirementsOpenGLESKHR value: U32(1000024003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsOpenGLESKHR;

  /// @brief Field GraphicsRequirementsOpenGLKHR value: U32(1000023005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsOpenGLKHR;

  /// @brief Field GraphicsRequirementsVulkan2KHR value: U32(1000025002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsVulkan2KHR;

  /// @brief Field GraphicsRequirementsVulkanKHR value: U32(1000025002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const GraphicsRequirementsVulkanKHR;

  /// @brief Field HandJointLocationsEXT value: U32(1000051003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandJointLocationsEXT;

  /// @brief Field HandJointVelocitiesEXT value: U32(1000051004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandJointVelocitiesEXT;

  /// @brief Field HandJointsLocateInfoEXT value: U32(1000051002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandJointsLocateInfoEXT;

  /// @brief Field HandJointsMotionRangeInfoEXT value: U32(1000080000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandJointsMotionRangeInfoEXT;

  /// @brief Field HandMeshMSFT value: U32(1000052003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandMeshMSFT;

  /// @brief Field HandMeshSpaceCreateInfoMSFT value: U32(1000052001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandMeshSpaceCreateInfoMSFT;

  /// @brief Field HandMeshUpdateInfoMSFT value: U32(1000052002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandMeshUpdateInfoMSFT;

  /// @brief Field HandPoseTypeInfoMSFT value: U32(1000052004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandPoseTypeInfoMSFT;

  /// @brief Field HandTrackerCreateInfoEXT value: U32(1000051001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackerCreateInfoEXT;

  /// @brief Field HandTrackingAimStateFB value: U32(1000111001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackingAimStateFB;

  /// @brief Field HandTrackingCapsulesStateFB value: U32(1000112000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackingCapsulesStateFB;

  /// @brief Field HandTrackingDataSourceInfoEXT value: U32(1000428000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackingDataSourceInfoEXT;

  /// @brief Field HandTrackingDataSourceStateEXT value: U32(1000428001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackingDataSourceStateEXT;

  /// @brief Field HandTrackingMeshFB value: U32(1000110001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackingMeshFB;

  /// @brief Field HandTrackingScaleFB value: U32(1000110003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HandTrackingScaleFB;

  /// @brief Field HapticActionInfo value: U32(59)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HapticActionInfo;

  /// @brief Field HapticAmplitudeEnvelopeVibrationFB value: U32(1000173001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HapticAmplitudeEnvelopeVibrationFB;

  /// @brief Field HapticPcmVibrationFB value: U32(1000209001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HapticPcmVibrationFB;

  /// @brief Field HapticVibration value: U32(13)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HapticVibration;

  /// @brief Field HolographicWindowAttachmentMSFT value: U32(1000063000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const HolographicWindowAttachmentMSFT;

  /// @brief Field InputSourceLocalizedNameGetInfo value: U32(63)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InputSourceLocalizedNameGetInfo;

  /// @brief Field InstanceCreateInfo value: U32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InstanceCreateInfo;

  /// @brief Field InstanceCreateInfoAndroidKHR value: U32(1000008000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InstanceCreateInfoAndroidKHR;

  /// @brief Field InstanceProperties value: U32(32)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InstanceProperties;

  /// @brief Field InteractionProfileAnalogThresholdVALVE value: U32(1000079000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionProfileAnalogThresholdVALVE;

  /// @brief Field InteractionProfileDpadBindingEXT value: U32(1000078000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionProfileDpadBindingEXT;

  /// @brief Field InteractionProfileState value: U32(53)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionProfileState;

  /// @brief Field InteractionProfileSuggestedBinding value: U32(51)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionProfileSuggestedBinding;

  /// @brief Field InteractionRenderModelIdsEnumerateInfoEXT value: U32(1000301000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionRenderModelIdsEnumerateInfoEXT;

  /// @brief Field InteractionRenderModelSubactionPathInfoEXT value: U32(1000301001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionRenderModelSubactionPathInfoEXT;

  /// @brief Field InteractionRenderModelTopLevelUserPathGetInfoEXT value: U32(1000301003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const InteractionRenderModelTopLevelUserPathGetInfoEXT;

  /// @brief Field KeyboardSpaceCreateInfoFB value: U32(1000116009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const KeyboardSpaceCreateInfoFB;

  /// @brief Field KeyboardTrackingQueryFB value: U32(1000116004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const KeyboardTrackingQueryFB;

  /// @brief Field LipExpressionDataBD value: U32(1000386005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LipExpressionDataBD;

  /// @brief Field LoaderInitInfoAndroidKHR value: U32(1000089000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LoaderInitInfoAndroidKHR;

  /// @brief Field LoaderInitInfoPropertiesEXT value: U32(1000838000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LoaderInitInfoPropertiesEXT;

  /// @brief Field LocalDimmingFrameEndInfoMETA value: U32(1000216000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LocalDimmingFrameEndInfoMETA;

  /// @brief Field LocalizationEnableEventsInfoML value: U32(1000139004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LocalizationEnableEventsInfoML;

  /// @brief Field LocalizationMapImportInfoML value: U32(1000139003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LocalizationMapImportInfoML;

  /// @brief Field LocalizationMapML value: U32(1000139000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const LocalizationMapML;

  /// @brief Field MapLocalizationRequestInfoML value: U32(1000139002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MapLocalizationRequestInfoML;

  /// @brief Field MarkerDetectorAprilTagInfoML value: U32(1000138004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorAprilTagInfoML;

  /// @brief Field MarkerDetectorArucoInfoML value: U32(1000138002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorArucoInfoML;

  /// @brief Field MarkerDetectorCreateInfoML value: U32(1000138001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorCreateInfoML;

  /// @brief Field MarkerDetectorCustomProfileInfoML value: U32(1000138005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorCustomProfileInfoML;

  /// @brief Field MarkerDetectorSizeInfoML value: U32(1000138003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorSizeInfoML;

  /// @brief Field MarkerDetectorSnapshotInfoML value: U32(1000138006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorSnapshotInfoML;

  /// @brief Field MarkerDetectorStateML value: U32(1000138007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerDetectorStateML;

  /// @brief Field MarkerSpaceCreateInfoML value: U32(1000138008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerSpaceCreateInfoML;

  /// @brief Field MarkerSpaceCreateInfoVARJO value: U32(1000124002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const MarkerSpaceCreateInfoVARJO;

  /// @brief Field NewSceneComputeInfoMSFT value: U32(1000097002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const NewSceneComputeInfoMSFT;

  /// @brief Field PassthroughBrightnessContrastSaturationFB value: U32(1000118023)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughBrightnessContrastSaturationFB;

  /// @brief Field PassthroughCameraStateGetInfoAndroid value: U32(1000460000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughCameraStateGetInfoAndroid;

  /// @brief Field PassthroughColorHTC value: U32(1000317002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorHTC;

  /// @brief Field PassthroughColorLutCreateInfoMETA value: U32(1000266001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorLutCreateInfoMETA;

  /// @brief Field PassthroughColorLutUpdateInfoMETA value: U32(1000266002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorLutUpdateInfoMETA;

  /// @brief Field PassthroughColorMapInterpolatedLutMETA value: U32(1000266101)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorMapInterpolatedLutMETA;

  /// @brief Field PassthroughColorMapLutMETA value: U32(1000266100)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorMapLutMETA;

  /// @brief Field PassthroughColorMapMonoToMonoFB value: U32(1000118022)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorMapMonoToMonoFB;

  /// @brief Field PassthroughColorMapMonoToRgbaFB value: U32(1000118021)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughColorMapMonoToRgbaFB;

  /// @brief Field PassthroughCreateInfoFB value: U32(1000118001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughCreateInfoFB;

  /// @brief Field PassthroughCreateInfoHTC value: U32(1000317001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughCreateInfoHTC;

  /// @brief Field PassthroughKeyboardHandsIntensityFB value: U32(1000203002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughKeyboardHandsIntensityFB;

  /// @brief Field PassthroughLayerCreateInfoFB value: U32(1000118002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughLayerCreateInfoFB;

  /// @brief Field PassthroughMeshTransformInfoHTC value: U32(1000317003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughMeshTransformInfoHTC;

  /// @brief Field PassthroughPreferencesMETA value: U32(1000217000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughPreferencesMETA;

  /// @brief Field PassthroughStyleFB value: U32(1000118020)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PassthroughStyleFB;

  /// @brief Field PerformanceMetricsCounterMETA value: U32(1000232002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PerformanceMetricsCounterMETA;

  /// @brief Field PerformanceMetricsStateMETA value: U32(1000232001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PerformanceMetricsStateMETA;

  /// @brief Field PersistSpatialEntityCompletionEXT value: U32(1000781001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PersistSpatialEntityCompletionEXT;

  /// @brief Field PersistentAnchorSpaceCreateInfoAndroid value: U32(1000457001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PersistentAnchorSpaceCreateInfoAndroid;

  /// @brief Field PersistentAnchorSpaceInfoAndroid value: U32(1000457002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PersistentAnchorSpaceInfoAndroid;

  /// @brief Field PlaneDetectorBeginInfoEXT value: U32(1000429002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PlaneDetectorBeginInfoEXT;

  /// @brief Field PlaneDetectorCreateInfoEXT value: U32(1000429001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PlaneDetectorCreateInfoEXT;

  /// @brief Field PlaneDetectorGetInfoEXT value: U32(1000429003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PlaneDetectorGetInfoEXT;

  /// @brief Field PlaneDetectorLocationEXT value: U32(1000429005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PlaneDetectorLocationEXT;

  /// @brief Field PlaneDetectorLocationsEXT value: U32(1000429004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PlaneDetectorLocationsEXT;

  /// @brief Field PlaneDetectorPolygonBufferEXT value: U32(1000429006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const PlaneDetectorPolygonBufferEXT;

  /// @brief Field QueriedSenseDataBD value: U32(1000389018)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const QueriedSenseDataBD;

  /// @brief Field QueriedSenseDataGetInfoBD value: U32(1000389017)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const QueriedSenseDataGetInfoBD;

  /// @brief Field RaycastHitResultsAndroid value: U32(1000463001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RaycastHitResultsAndroid;

  /// @brief Field RaycastInfoAndroid value: U32(1000463000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RaycastInfoAndroid;

  /// @brief Field RecommendedLayerResolutionGetInfoMETA value: U32(1000254001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RecommendedLayerResolutionGetInfoMETA;

  /// @brief Field RecommendedLayerResolutionMETA value: U32(1000254000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RecommendedLayerResolutionMETA;

  /// @brief Field ReferenceSpaceCreateInfo value: U32(37)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ReferenceSpaceCreateInfo;

  /// @brief Field RenderModelAssetCreateInfoEXT value: U32(1000300006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelAssetCreateInfoEXT;

  /// @brief Field RenderModelAssetDataEXT value: U32(1000300008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelAssetDataEXT;

  /// @brief Field RenderModelAssetDataGetInfoEXT value: U32(1000300007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelAssetDataGetInfoEXT;

  /// @brief Field RenderModelAssetPropertiesEXT value: U32(1000300010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelAssetPropertiesEXT;

  /// @brief Field RenderModelAssetPropertiesGetInfoEXT value: U32(1000300009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelAssetPropertiesGetInfoEXT;

  /// @brief Field RenderModelBufferFB value: U32(1000119002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelBufferFB;

  /// @brief Field RenderModelCapabilitiesRequestFB value: U32(1000119005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelCapabilitiesRequestFB;

  /// @brief Field RenderModelCreateInfoEXT value: U32(1000300000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelCreateInfoEXT;

  /// @brief Field RenderModelLoadInfoFB value: U32(1000119003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelLoadInfoFB;

  /// @brief Field RenderModelPathInfoFB value: U32(1000119000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelPathInfoFB;

  /// @brief Field RenderModelPropertiesEXT value: U32(1000300002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelPropertiesEXT;

  /// @brief Field RenderModelPropertiesFB value: U32(1000119001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelPropertiesFB;

  /// @brief Field RenderModelPropertiesGetInfoEXT value: U32(1000300001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelPropertiesGetInfoEXT;

  /// @brief Field RenderModelSpaceCreateInfoEXT value: U32(1000300003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelSpaceCreateInfoEXT;

  /// @brief Field RenderModelStateEXT value: U32(1000300005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelStateEXT;

  /// @brief Field RenderModelStateGetInfoEXT value: U32(1000300004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RenderModelStateGetInfoEXT;

  /// @brief Field RoomLayoutFB value: U32(1000175001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const RoomLayoutFB;

  /// @brief Field SceneCaptureInfoBD value: U32(1000392001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneCaptureInfoBD;

  /// @brief Field SceneCaptureRequestInfoFB value: U32(1000198050)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneCaptureRequestInfoFB;

  /// @brief Field SceneComponentLocationsMSFT value: U32(1000097006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneComponentLocationsMSFT;

  /// @brief Field SceneComponentParentFilterInfoMSFT value: U32(1000097009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneComponentParentFilterInfoMSFT;

  /// @brief Field SceneComponentsGetInfoMSFT value: U32(1000097005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneComponentsGetInfoMSFT;

  /// @brief Field SceneComponentsLocateInfoMSFT value: U32(1000097007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneComponentsLocateInfoMSFT;

  /// @brief Field SceneComponentsMSFT value: U32(1000097004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneComponentsMSFT;

  /// @brief Field SceneCreateInfoMSFT value: U32(1000097001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneCreateInfoMSFT;

  /// @brief Field SceneDeserializeInfoMSFT value: U32(1000098001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneDeserializeInfoMSFT;

  /// @brief Field SceneMarkerQRCodesMSFT value: U32(1000147002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMarkerQRCodesMSFT;

  /// @brief Field SceneMarkerTypeFilterMSFT value: U32(1000147001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMarkerTypeFilterMSFT;

  /// @brief Field SceneMarkersMSFT value: U32(1000147000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMarkersMSFT;

  /// @brief Field SceneMeshBuffersGetInfoMSFT value: U32(1000097014)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMeshBuffersGetInfoMSFT;

  /// @brief Field SceneMeshBuffersMSFT value: U32(1000097015)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMeshBuffersMSFT;

  /// @brief Field SceneMeshIndicesUint16MSFT value: U32(1000097018)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMeshIndicesUint16MSFT;

  /// @brief Field SceneMeshIndicesUint32MSFT value: U32(1000097017)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMeshIndicesUint32MSFT;

  /// @brief Field SceneMeshVertexBufferMSFT value: U32(1000097016)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMeshVertexBufferMSFT;

  /// @brief Field SceneMeshesMSFT value: U32(1000097013)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneMeshesMSFT;

  /// @brief Field SceneObjectTypesFilterInfoMSFT value: U32(1000097010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneObjectTypesFilterInfoMSFT;

  /// @brief Field SceneObjectsMSFT value: U32(1000097008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneObjectsMSFT;

  /// @brief Field SceneObserverCreateInfoMSFT value: U32(1000097000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SceneObserverCreateInfoMSFT;

  /// @brief Field ScenePlaneAlignmentFilterInfoMSFT value: U32(1000097012)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ScenePlaneAlignmentFilterInfoMSFT;

  /// @brief Field ScenePlanesMSFT value: U32(1000097011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ScenePlanesMSFT;

  /// @brief Field SecondaryViewConfigurationFrameEndInfoMSFT value: U32(1000053003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SecondaryViewConfigurationFrameEndInfoMSFT;

  /// @brief Field SecondaryViewConfigurationFrameStateMSFT value: U32(1000053002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SecondaryViewConfigurationFrameStateMSFT;

  /// @brief Field SecondaryViewConfigurationLayerInfoMSFT value: U32(1000053004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SecondaryViewConfigurationLayerInfoMSFT;

  /// @brief Field SecondaryViewConfigurationSessionBeginInfoMSFT value: U32(1000053000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SecondaryViewConfigurationSessionBeginInfoMSFT;

  /// @brief Field SecondaryViewConfigurationStateMSFT value: U32(1000053001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SecondaryViewConfigurationStateMSFT;

  /// @brief Field SecondaryViewConfigurationSwapchainCreateInfoMSFT value: U32(1000053005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SecondaryViewConfigurationSwapchainCreateInfoMSFT;

  /// @brief Field SemanticLabelsFB value: U32(1000175000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SemanticLabelsFB;

  /// @brief Field SemanticLabelsSupportInfoFB value: U32(1000175010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SemanticLabelsSupportInfoFB;

  /// @brief Field SenseDataFilterPlaneOrientationBD value: U32(1000396002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataFilterPlaneOrientationBD;

  /// @brief Field SenseDataFilterSemanticBD value: U32(1000389016)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataFilterSemanticBD;

  /// @brief Field SenseDataFilterUuidBD value: U32(1000389015)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataFilterUuidBD;

  /// @brief Field SenseDataProviderCreateInfoBD value: U32(1000389009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataProviderCreateInfoBD;

  /// @brief Field SenseDataProviderCreateInfoSpatialMeshBD value: U32(1000393001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataProviderCreateInfoSpatialMeshBD;

  /// @brief Field SenseDataProviderStartInfoBD value: U32(1000389010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataProviderStartInfoBD;

  /// @brief Field SenseDataQueryCompletionBD value: U32(1000389014)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataQueryCompletionBD;

  /// @brief Field SenseDataQueryInfoBD value: U32(1000389013)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SenseDataQueryInfoBD;

  /// @brief Field SerializedSceneFragmentDataGetInfoMSFT value: U32(1000098000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SerializedSceneFragmentDataGetInfoMSFT;

  /// @brief Field SessionActionSetsAttachInfo value: U32(60)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SessionActionSetsAttachInfo;

  /// @brief Field SessionBeginInfo value: U32(10)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SessionBeginInfo;

  /// @brief Field SessionCreateInfo value: U32(8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SessionCreateInfo;

  /// @brief Field SessionCreateInfoOverlayEXTX value: U32(1000033000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SessionCreateInfoOverlayEXTX;

  /// @brief Field ShareSpacesInfoMETA value: U32(1000290001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ShareSpacesInfoMETA;

  /// @brief Field ShareSpacesRecipientGroupsMETA value: U32(1000572000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ShareSpacesRecipientGroupsMETA;

  /// @brief Field SharedSpatialAnchorDownloadInfoBD value: U32(1000391002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SharedSpatialAnchorDownloadInfoBD;

  /// @brief Field SimultaneousHandsAndControllersTrackingPauseInfoMETA value: U32(1000532003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SimultaneousHandsAndControllersTrackingPauseInfoMETA;

  /// @brief Field SimultaneousHandsAndControllersTrackingResumeInfoMETA value: U32(1000532002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SimultaneousHandsAndControllersTrackingResumeInfoMETA;

  /// @brief Field SpaceComponentFilterInfoFB value: U32(1000156052)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceComponentFilterInfoFB;

  /// @brief Field SpaceComponentStatusFB value: U32(1000113001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceComponentStatusFB;

  /// @brief Field SpaceComponentStatusSetInfoFB value: U32(1000113007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceComponentStatusSetInfoFB;

  /// @brief Field SpaceContainerFB value: U32(1000199000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceContainerFB;

  /// @brief Field SpaceDiscoveryInfoMeta value: U32(1000247001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceDiscoveryInfoMeta;

  /// @brief Field SpaceDiscoveryResultMeta value: U32(1000247005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceDiscoveryResultMeta;

  /// @brief Field SpaceDiscoveryResultsMeta value: U32(1000247006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceDiscoveryResultsMeta;

  /// @brief Field SpaceEraseInfoFB value: U32(1000158001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceEraseInfoFB;

  /// @brief Field SpaceFilterComponentMeta value: U32(1000247004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceFilterComponentMeta;

  /// @brief Field SpaceFilterUUIDMeta value: U32(1000247003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceFilterUUIDMeta;

  /// @brief Field SpaceGroupUuidFilterInfoMETA value: U32(1000572001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceGroupUuidFilterInfoMETA;

  /// @brief Field SpaceListSaveInfoFB value: U32(1000238000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceListSaveInfoFB;

  /// @brief Field SpaceLocation value: U32(42)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceLocation;

  /// @brief Field SpaceLocations value: U32(1000471001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceLocations;

  /// @brief Field SpaceLocationsKHR value: U32(1000471001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceLocationsKHR;

  /// @brief Field SpaceQueryInfoFB value: U32(1000156001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceQueryInfoFB;

  /// @brief Field SpaceQueryResultsFB value: U32(1000156002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceQueryResultsFB;

  /// @brief Field SpaceSaveInfoFB value: U32(1000158000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceSaveInfoFB;

  /// @brief Field SpaceShareInfoFB value: U32(1000169001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceShareInfoFB;

  /// @brief Field SpaceStorageLocationFilterInfoFB value: U32(1000156003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceStorageLocationFilterInfoFB;

  /// @brief Field SpaceTriangleMeshGetInfoMETA value: U32(1000269001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceTriangleMeshGetInfoMETA;

  /// @brief Field SpaceTriangleMeshMETA value: U32(1000269002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceTriangleMeshMETA;

  /// @brief Field SpaceUserCreateInfoFB value: U32(1000241001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceUserCreateInfoFB;

  /// @brief Field SpaceUuidFilterInfoFB value: U32(1000156054)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceUuidFilterInfoFB;

  /// @brief Field SpaceVelocities value: U32(1000471002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceVelocities;

  /// @brief Field SpaceVelocitiesKHR value: U32(1000471002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceVelocitiesKHR;

  /// @brief Field SpaceVelocity value: U32(43)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpaceVelocity;

  /// @brief Field SpacesEraseInfoMeta value: U32(1000259003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpacesEraseInfoMeta;

  /// @brief Field SpacesLocateInfo value: U32(1000471000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpacesLocateInfo;

  /// @brief Field SpacesLocateInfoKHR value: U32(1000471000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpacesLocateInfoKHR;

  /// @brief Field SpacesSaveInfoMeta value: U32(1000259001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpacesSaveInfoMeta;

  /// @brief Field SpatialAnchorCreateCompletionBD value: U32(1000390002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorCreateCompletionBD;

  /// @brief Field SpatialAnchorCreateInfoBD value: U32(1000390001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorCreateInfoBD;

  /// @brief Field SpatialAnchorCreateInfoEXT value: U32(1000762002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorCreateInfoEXT;

  /// @brief Field SpatialAnchorCreateInfoFB value: U32(1000113003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorCreateInfoFB;

  /// @brief Field SpatialAnchorCreateInfoHTC value: U32(1000319001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorCreateInfoHTC;

  /// @brief Field SpatialAnchorCreateInfoMSFT value: U32(1000039000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorCreateInfoMSFT;

  /// @brief Field SpatialAnchorFromPersistedAnchorCreateInfoMSFT value: U32(1000142001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorFromPersistedAnchorCreateInfoMSFT;

  /// @brief Field SpatialAnchorPersistInfoBD value: U32(1000390003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorPersistInfoBD;

  /// @brief Field SpatialAnchorPersistenceInfoMSFT value: U32(1000142000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorPersistenceInfoMSFT;

  /// @brief Field SpatialAnchorShareInfoBD value: U32(1000391001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorShareInfoBD;

  /// @brief Field SpatialAnchorSpaceCreateInfoMSFT value: U32(1000039001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorSpaceCreateInfoMSFT;

  /// @brief Field SpatialAnchorStateML value: U32(1000140002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorStateML;

  /// @brief Field SpatialAnchorUnpersistInfoBD value: U32(1000390004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorUnpersistInfoBD;

  /// @brief Field SpatialAnchorsCreateInfoFromPoseML value: U32(1000140000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsCreateInfoFromPoseML;

  /// @brief Field SpatialAnchorsCreateInfoFromUuidsML value: U32(1000141003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsCreateInfoFromUuidsML;

  /// @brief Field SpatialAnchorsCreateStorageInfoML value: U32(1000141000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsCreateStorageInfoML;

  /// @brief Field SpatialAnchorsDeleteCompletionDetailsML value: U32(1000141011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsDeleteCompletionDetailsML;

  /// @brief Field SpatialAnchorsDeleteCompletionML value: U32(1000141007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsDeleteCompletionML;

  /// @brief Field SpatialAnchorsDeleteInfoML value: U32(1000141006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsDeleteInfoML;

  /// @brief Field SpatialAnchorsPublishCompletionDetailsML value: U32(1000141010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsPublishCompletionDetailsML;

  /// @brief Field SpatialAnchorsPublishCompletionML value: U32(1000141005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsPublishCompletionML;

  /// @brief Field SpatialAnchorsPublishInfoML value: U32(1000141004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsPublishInfoML;

  /// @brief Field SpatialAnchorsQueryCompletionML value: U32(1000141002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsQueryCompletionML;

  /// @brief Field SpatialAnchorsQueryInfoRadiusML value: U32(1000141001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsQueryInfoRadiusML;

  /// @brief Field SpatialAnchorsUpdateExpirationCompletionDetailsML value: U32(1000141012)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsUpdateExpirationCompletionDetailsML;

  /// @brief Field SpatialAnchorsUpdateExpirationCompletionML value: U32(1000141009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsUpdateExpirationCompletionML;

  /// @brief Field SpatialAnchorsUpdateExpirationInfoML value: U32(1000141008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialAnchorsUpdateExpirationInfoML;

  /// @brief Field SpatialBufferGetInfoEXT value: U32(1000740008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialBufferGetInfoEXT;

  /// @brief Field SpatialCapabilityComponentTypesEXT value: U32(1000740000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityComponentTypesEXT;

  /// @brief Field SpatialCapabilityConfigurationAnchorEXT value: U32(1000762000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityConfigurationAnchorEXT;

  /// @brief Field SpatialCapabilityConfigurationAprilTagEXT value: U32(1000743003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityConfigurationAprilTagEXT;

  /// @brief Field SpatialCapabilityConfigurationArucoMarkerEXT value: U32(1000743002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityConfigurationArucoMarkerEXT;

  /// @brief Field SpatialCapabilityConfigurationMicroQrCodeEXT value: U32(1000743001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityConfigurationMicroQrCodeEXT;

  /// @brief Field SpatialCapabilityConfigurationPlaneTrackingEXT value: U32(1000741000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityConfigurationPlaneTrackingEXT;

  /// @brief Field SpatialCapabilityConfigurationQrCodeEXT value: U32(1000743000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialCapabilityConfigurationQrCodeEXT;

  /// @brief Field SpatialComponentAnchorListEXT value: U32(1000762001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentAnchorListEXT;

  /// @brief Field SpatialComponentBounded2DListEXT value: U32(1000740009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentBounded2DListEXT;

  /// @brief Field SpatialComponentBounded3DListEXT value: U32(1000740010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentBounded3DListEXT;

  /// @brief Field SpatialComponentDataQueryConditionEXT value: U32(1000740006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentDataQueryConditionEXT;

  /// @brief Field SpatialComponentDataQueryResultEXT value: U32(1000740007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentDataQueryResultEXT;

  /// @brief Field SpatialComponentMarkerListEXT value: U32(1000743006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentMarkerListEXT;

  /// @brief Field SpatialComponentMesh2DListEXT value: U32(1000741002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentMesh2DListEXT;

  /// @brief Field SpatialComponentMesh3DListEXT value: U32(1000740012)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentMesh3DListEXT;

  /// @brief Field SpatialComponentParentListEXT value: U32(1000740011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentParentListEXT;

  /// @brief Field SpatialComponentPersistenceListEXT value: U32(1000763004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentPersistenceListEXT;

  /// @brief Field SpatialComponentPlaneAlignmentListEXT value: U32(1000741001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentPlaneAlignmentListEXT;

  /// @brief Field SpatialComponentPlaneSemanticLabelListEXT value: U32(1000741004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentPlaneSemanticLabelListEXT;

  /// @brief Field SpatialComponentPolygon2DListEXT value: U32(1000741003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialComponentPolygon2DListEXT;

  /// @brief Field SpatialContextCreateInfoEXT value: U32(1000740001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialContextCreateInfoEXT;

  /// @brief Field SpatialContextPersistenceConfigEXT value: U32(1000763002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialContextPersistenceConfigEXT;

  /// @brief Field SpatialDiscoveryPersistenceUuidFilterEXT value: U32(1000763003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialDiscoveryPersistenceUuidFilterEXT;

  /// @brief Field SpatialDiscoverySnapshotCreateInfoEXT value: U32(1000740003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialDiscoverySnapshotCreateInfoEXT;

  /// @brief Field SpatialEntityAnchorCreateInfoBD value: U32(1000389020)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityAnchorCreateInfoBD;

  /// @brief Field SpatialEntityComponentDataBoundingBox2DBD value: U32(1000389005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataBoundingBox2DBD;

  /// @brief Field SpatialEntityComponentDataBoundingBox3DBD value: U32(1000389007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataBoundingBox3DBD;

  /// @brief Field SpatialEntityComponentDataLocationBD value: U32(1000389003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataLocationBD;

  /// @brief Field SpatialEntityComponentDataPlaneOrientationBD value: U32(1000396001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataPlaneOrientationBD;

  /// @brief Field SpatialEntityComponentDataPolygonBD value: U32(1000389006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataPolygonBD;

  /// @brief Field SpatialEntityComponentDataSemanticBD value: U32(1000389004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataSemanticBD;

  /// @brief Field SpatialEntityComponentDataTriangleMeshBD value: U32(1000389008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentDataTriangleMeshBD;

  /// @brief Field SpatialEntityComponentGetInfoBD value: U32(1000389001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityComponentGetInfoBD;

  /// @brief Field SpatialEntityFromIdCreateInfoEXT value: U32(1000740013)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityFromIdCreateInfoEXT;

  /// @brief Field SpatialEntityLocationGetInfoBD value: U32(1000389002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityLocationGetInfoBD;

  /// @brief Field SpatialEntityPersistInfoEXT value: U32(1000781000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityPersistInfoEXT;

  /// @brief Field SpatialEntityStateBD value: U32(1000389019)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityStateBD;

  /// @brief Field SpatialEntityUnpersistInfoEXT value: U32(1000781002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialEntityUnpersistInfoEXT;

  /// @brief Field SpatialFilterTrackingStateEXT value: U32(1000740016)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialFilterTrackingStateEXT;

  /// @brief Field SpatialGraphNodeBindingPropertiesGetInfoMSFT value: U32(1000049002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialGraphNodeBindingPropertiesGetInfoMSFT;

  /// @brief Field SpatialGraphNodeBindingPropertiesMSFT value: U32(1000049003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialGraphNodeBindingPropertiesMSFT;

  /// @brief Field SpatialGraphNodeSpaceCreateInfoMSFT value: U32(1000049000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialGraphNodeSpaceCreateInfoMSFT;

  /// @brief Field SpatialGraphStaticNodeBindingCreateInfoMSFT value: U32(1000049001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialGraphStaticNodeBindingCreateInfoMSFT;

  /// @brief Field SpatialMarkerSizeEXT value: U32(1000743004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialMarkerSizeEXT;

  /// @brief Field SpatialMarkerStaticOptimizationEXT value: U32(1000743005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialMarkerStaticOptimizationEXT;

  /// @brief Field SpatialPersistenceContextCreateInfoEXT value: U32(1000763000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialPersistenceContextCreateInfoEXT;

  /// @brief Field SpatialUpdateSnapshotCreateInfoEXT value: U32(1000740014)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SpatialUpdateSnapshotCreateInfoEXT;

  /// @brief Field SwapchainCreateInfo value: U32(9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainCreateInfo;

  /// @brief Field SwapchainCreateInfoFoveationFB value: U32(1000114001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainCreateInfoFoveationFB;

  /// @brief Field SwapchainImageAcquireInfo value: U32(55)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageAcquireInfo;

  /// @brief Field SwapchainImageD3D11KHR value: U32(1000027001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageD3D11KHR;

  /// @brief Field SwapchainImageD3D12KHR value: U32(1000028001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageD3D12KHR;

  /// @brief Field SwapchainImageFoveationVulkanFB value: U32(1000160000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageFoveationVulkanFB;

  /// @brief Field SwapchainImageMetalKHR value: U32(1000029001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageMetalKHR;

  /// @brief Field SwapchainImageOpenGLESKHR value: U32(1000024002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageOpenGLESKHR;

  /// @brief Field SwapchainImageOpenGLKHR value: U32(1000023004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageOpenGLKHR;

  /// @brief Field SwapchainImageReleaseInfo value: U32(57)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageReleaseInfo;

  /// @brief Field SwapchainImageVulkan2KHR value: U32(1000025001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageVulkan2KHR;

  /// @brief Field SwapchainImageVulkanKHR value: U32(1000025001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageVulkanKHR;

  /// @brief Field SwapchainImageWaitInfo value: U32(56)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainImageWaitInfo;

  /// @brief Field SwapchainStateAndroidSurfaceDimensionsFB value: U32(1000161000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainStateAndroidSurfaceDimensionsFB;

  /// @brief Field SwapchainStateFoveationFB value: U32(1000114002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainStateFoveationFB;

  /// @brief Field SwapchainStateSamplerOpenGLESFB value: U32(1000162000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainStateSamplerOpenGLESFB;

  /// @brief Field SwapchainStateSamplerVulkanFB value: U32(1000163000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SwapchainStateSamplerVulkanFB;

  /// @brief Field SystemAnchorPropertiesHTC value: U32(1000319000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemAnchorPropertiesHTC;

  /// @brief Field SystemAnchorSharingExportPropertiesAndroid value: U32(1000701002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemAnchorSharingExportPropertiesAndroid;

  /// @brief Field SystemBodyTrackingPropertiesBD value: U32(1000385004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemBodyTrackingPropertiesBD;

  /// @brief Field SystemBodyTrackingPropertiesFB value: U32(1000076004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemBodyTrackingPropertiesFB;

  /// @brief Field SystemBodyTrackingPropertiesHTC value: U32(1000320000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemBodyTrackingPropertiesHTC;

  /// @brief Field SystemColocationDiscoveryPropertiesMETA value: U32(1000571030)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemColocationDiscoveryPropertiesMETA;

  /// @brief Field SystemColorSpacePropertiesFB value: U32(1000108000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemColorSpacePropertiesFB;

  /// @brief Field SystemDeviceAnchorPersistencePropertiesAndroid value: U32(1000457004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemDeviceAnchorPersistencePropertiesAndroid;

  /// @brief Field SystemEnvironmentDepthPropertiesMETA value: U32(1000291007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemEnvironmentDepthPropertiesMETA;

  /// @brief Field SystemEyeGazeInteractionPropertiesEXT value: U32(1000030000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemEyeGazeInteractionPropertiesEXT;

  /// @brief Field SystemEyeTrackingPropertiesFB value: U32(1000202004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemEyeTrackingPropertiesFB;

  /// @brief Field SystemFaceTrackingProperties2FB value: U32(1000287013)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFaceTrackingProperties2FB;

  /// @brief Field SystemFaceTrackingPropertiesAndroid value: U32(1000458003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFaceTrackingPropertiesAndroid;

  /// @brief Field SystemFaceTrackingPropertiesFB value: U32(1000201004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFaceTrackingPropertiesFB;

  /// @brief Field SystemFacialExpressionPropertiesML value: U32(1000482004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFacialExpressionPropertiesML;

  /// @brief Field SystemFacialSimulationPropertiesBD value: U32(1000386001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFacialSimulationPropertiesBD;

  /// @brief Field SystemFacialTrackingPropertiesHTC value: U32(1000104000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFacialTrackingPropertiesHTC;

  /// @brief Field SystemForceFeedbackCurlPropertiesMNDX value: U32(1000375000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemForceFeedbackCurlPropertiesMNDX;

  /// @brief Field SystemFoveatedRenderingPropertiesVARJO value: U32(1000121002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFoveatedRenderingPropertiesVARJO;

  /// @brief Field SystemFoveationEyeTrackedPropertiesMETA value: U32(1000200002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemFoveationEyeTrackedPropertiesMETA;

  /// @brief Field SystemGetInfo value: U32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemGetInfo;

  /// @brief Field SystemHandTrackingMeshPropertiesMSFT value: U32(1000052000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemHandTrackingMeshPropertiesMSFT;

  /// @brief Field SystemHandTrackingPropertiesEXT value: U32(1000051000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemHandTrackingPropertiesEXT;

  /// @brief Field SystemHeadsetIDPropertiesMETA value: U32(1000245000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemHeadsetIDPropertiesMETA;

  /// @brief Field SystemKeyboardTrackingPropertiesFB value: U32(1000116002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemKeyboardTrackingPropertiesFB;

  /// @brief Field SystemMarkerTrackingPropertiesAndroid value: U32(1000707000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemMarkerTrackingPropertiesAndroid;

  /// @brief Field SystemMarkerTrackingPropertiesVARJO value: U32(1000124000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemMarkerTrackingPropertiesVARJO;

  /// @brief Field SystemMarkerUnderstandingPropertiesML value: U32(1000138000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemMarkerUnderstandingPropertiesML;

  /// @brief Field SystemNotificationsSetInfoML value: U32(1000473000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemNotificationsSetInfoML;

  /// @brief Field SystemPassthroughCameraStatePropertiesAndroid value: U32(1000460001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPassthroughCameraStatePropertiesAndroid;

  /// @brief Field SystemPassthroughColorLutPropertiesMETA value: U32(1000266000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPassthroughColorLutPropertiesMETA;

  /// @brief Field SystemPassthroughProperties2FB value: U32(1000118006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPassthroughProperties2FB;

  /// @brief Field SystemPassthroughPropertiesFB value: U32(1000118000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPassthroughPropertiesFB;

  /// @brief Field SystemPlaneDetectionPropertiesEXT value: U32(1000429007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPlaneDetectionPropertiesEXT;

  /// @brief Field SystemProperties value: U32(5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemProperties;

  /// @brief Field SystemPropertiesBodyTrackingCalibrationMeta value: U32(1000283004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPropertiesBodyTrackingCalibrationMeta;

  /// @brief Field SystemPropertiesBodyTrackingFullBodyMETA value: U32(1000274000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemPropertiesBodyTrackingFullBodyMETA;

  /// @brief Field SystemRenderModelPropertiesFB value: U32(1000119004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemRenderModelPropertiesFB;

  /// @brief Field SystemSimultaneousHandsAndControllersPropertiesMETA value: U32(1000532001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSimultaneousHandsAndControllersPropertiesMETA;

  /// @brief Field SystemSpaceDiscoveryPropertiesMeta value: U32(1000247000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpaceDiscoveryPropertiesMeta;

  /// @brief Field SystemSpacePersistencePropertiesMeta value: U32(1000259000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpacePersistencePropertiesMeta;

  /// @brief Field SystemSpaceWarpPropertiesFB value: U32(1000171001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpaceWarpPropertiesFB;

  /// @brief Field SystemSpatialAnchorPropertiesBD value: U32(1000390000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialAnchorPropertiesBD;

  /// @brief Field SystemSpatialAnchorSharingPropertiesBD value: U32(1000391000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialAnchorSharingPropertiesBD;

  /// @brief Field SystemSpatialEntityGroupSharingPropertiesMETA value: U32(1000572100)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialEntityGroupSharingPropertiesMETA;

  /// @brief Field SystemSpatialEntityPropertiesFB value: U32(1000113004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialEntityPropertiesFB;

  /// @brief Field SystemSpatialEntitySharingPropertiesMETA value: U32(1000290000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialEntitySharingPropertiesMETA;

  /// @brief Field SystemSpatialMeshPropertiesBD value: U32(1000393000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialMeshPropertiesBD;

  /// @brief Field SystemSpatialPlanePropertiesBD value: U32(1000396000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialPlanePropertiesBD;

  /// @brief Field SystemSpatialScenePropertiesBD value: U32(1000392000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialScenePropertiesBD;

  /// @brief Field SystemSpatialSensingPropertiesBD value: U32(1000389000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemSpatialSensingPropertiesBD;

  /// @brief Field SystemTrackablesPropertiesAndroid value: U32(1000455005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemTrackablesPropertiesAndroid;

  /// @brief Field SystemUserPresencePropertiesEXT value: U32(1000470001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemUserPresencePropertiesEXT;

  /// @brief Field SystemVirtualKeyboardPropertiesMETA value: U32(1000219001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const SystemVirtualKeyboardPropertiesMETA;

  /// @brief Field TrackableGetInfoAndroid value: U32(1000455000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackableGetInfoAndroid;

  /// @brief Field TrackableMarkerAndroid value: U32(1000707002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackableMarkerAndroid;

  /// @brief Field TrackableMarkerConfigurationAndroid value: U32(1000707001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackableMarkerConfigurationAndroid;

  /// @brief Field TrackableObjectAndroid value: U32(1000466000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackableObjectAndroid;

  /// @brief Field TrackableObjectConfigurationAndroid value: U32(1000466001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackableObjectConfigurationAndroid;

  /// @brief Field TrackablePlaneAndroid value: U32(1000455003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackablePlaneAndroid;

  /// @brief Field TrackableTrackerCreateInfoAndroid value: U32(1000455004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TrackableTrackerCreateInfoAndroid;

  /// @brief Field TriangleMeshCreateInfoFB value: U32(1000117001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const TriangleMeshCreateInfoFB;

  /// @brief Field Unknown value: U32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const Unknown;

  /// @brief Field UnpersistSpatialEntityCompletionEXT value: U32(1000781003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const UnpersistSpatialEntityCompletionEXT;

  /// @brief Field UserCalibrationEnableEventsInfoML value: U32(1000472002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const UserCalibrationEnableEventsInfoML;

  /// @brief Field ViewConfigurationDepthRangeEXT value: U32(1000046000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewConfigurationDepthRangeEXT;

  /// @brief Field ViewConfigurationProperties value: U32(45)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewConfigurationProperties;

  /// @brief Field ViewConfigurationView value: U32(41)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewConfigurationView;

  /// @brief Field ViewConfigurationViewFovEPIC value: U32(1000059000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewConfigurationViewFovEPIC;

  /// @brief Field ViewLocateFoveatedRenderingVARJO value: U32(1000121000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewLocateFoveatedRenderingVARJO;

  /// @brief Field ViewLocateInfo value: U32(6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewLocateInfo;

  /// @brief Field ViewState value: U32(11)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViewState;

  /// @brief Field VirtualKeyboardAnimationStateMETA value: U32(1000219006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardAnimationStateMETA;

  /// @brief Field VirtualKeyboardCreateInfoMETA value: U32(1000219002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardCreateInfoMETA;

  /// @brief Field VirtualKeyboardInputInfoMETA value: U32(1000219010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardInputInfoMETA;

  /// @brief Field VirtualKeyboardLocationInfoMETA value: U32(1000219004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardLocationInfoMETA;

  /// @brief Field VirtualKeyboardModelAnimationStatesMETA value: U32(1000219007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardModelAnimationStatesMETA;

  /// @brief Field VirtualKeyboardModelVisibilitySetInfoMETA value: U32(1000219005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardModelVisibilitySetInfoMETA;

  /// @brief Field VirtualKeyboardSpaceCreateInfoMETA value: U32(1000219003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardSpaceCreateInfoMETA;

  /// @brief Field VirtualKeyboardTextContextChangeInfoMETA value: U32(1000219011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardTextContextChangeInfoMETA;

  /// @brief Field VirtualKeyboardTextureDataMETA value: U32(1000219009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VirtualKeyboardTextureDataMETA;

  /// @brief Field VisibilityMaskKHR value: U32(1000031000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VisibilityMaskKHR;

  /// @brief Field VisualMeshComputeLodInfoMSFT value: U32(1000097003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VisualMeshComputeLodInfoMSFT;

  /// @brief Field ViveTrackerPathsHTCX value: U32(1000103000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const ViveTrackerPathsHTCX;

  /// @brief Field VulkanDeviceCreateInfoKHR value: U32(1000090001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VulkanDeviceCreateInfoKHR;

  /// @brief Field VulkanGraphicsDeviceGetInfoKHR value: U32(1000090003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VulkanGraphicsDeviceGetInfoKHR;

  /// @brief Field VulkanInstanceCreateInfoKHR value: U32(1000090000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VulkanInstanceCreateInfoKHR;

  /// @brief Field VulkanSwapchainCreateInfoMETA value: U32(1000227000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VulkanSwapchainCreateInfoMETA;

  /// @brief Field VulkanSwapchainFormatListCreateInfoKHR value: U32(1000014000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const VulkanSwapchainFormatListCreateInfoKHR;

  /// @brief Field WorldMeshBlockML value: U32(1000474010)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshBlockML;

  /// @brief Field WorldMeshBlockRequestML value: U32(1000474008)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshBlockRequestML;

  /// @brief Field WorldMeshBlockStateML value: U32(1000474003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshBlockStateML;

  /// @brief Field WorldMeshBufferML value: U32(1000474007)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshBufferML;

  /// @brief Field WorldMeshBufferRecommendedSizeInfoML value: U32(1000474005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshBufferRecommendedSizeInfoML;

  /// @brief Field WorldMeshBufferSizeML value: U32(1000474006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshBufferSizeML;

  /// @brief Field WorldMeshDetectorCreateInfoML value: U32(1000474001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshDetectorCreateInfoML;

  /// @brief Field WorldMeshGetInfoML value: U32(1000474009)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshGetInfoML;

  /// @brief Field WorldMeshRequestCompletionInfoML value: U32(1000474012)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshRequestCompletionInfoML;

  /// @brief Field WorldMeshRequestCompletionML value: U32(1000474011)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshRequestCompletionML;

  /// @brief Field WorldMeshStateRequestCompletionML value: U32(1000474004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshStateRequestCompletionML;

  /// @brief Field WorldMeshStateRequestInfoML value: U32(1000474002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const WorldMeshStateRequestInfoML;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_CUBE_KHR value: U32(1000006000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_CUBE_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR value: U32(1000017000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR value: U32(1000091000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR value: U32(1000018000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_PROJECTION value: U32(35)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_PROJECTION;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW value: U32(48)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW;

  /// @brief Field XR_TYPE_COMPOSITION_LAYER_QUAD value: U32(36)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_COMPOSITION_LAYER_QUAD;

  /// @brief Field XR_TYPE_SWAPCHAIN_CREATE_INFO value: U32(9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_SWAPCHAIN_CREATE_INFO;

  /// @brief Field XR_TYPE_UNKNOWN value: U32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XR_TYPE_UNKNOWN;

  /// @brief Field XrView value: U32(7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType const XrView;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17519 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
