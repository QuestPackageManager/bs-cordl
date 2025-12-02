#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrResult)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrResult);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrResult
struct CORDL_TYPE XrResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrResult_Unwrapped
  enum struct __XrResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_TimeoutExpored = static_cast<int32_t>(0x1),
    __E_TimeoutExpired = static_cast<int32_t>(0x1),
    __E_LossPending = static_cast<int32_t>(0x3),
    __E_EventUnavailable = static_cast<int32_t>(0x4),
    __E_SpaceBoundsUnavailable = static_cast<int32_t>(0x7),
    __E_SessionNotFocused = static_cast<int32_t>(0x8),
    __E_FrameDiscarded = static_cast<int32_t>(0x9),
    __E_ValidationFailure = static_cast<int32_t>(0xffffffff),
    __E_RuntimeFailure = static_cast<int32_t>(0xfffffffe),
    __E_OutOfMemory = static_cast<int32_t>(0xfffffffd),
    __E_ApiVersionUnsupported = static_cast<int32_t>(0xfffffffc),
    __E_InitializationFailed = static_cast<int32_t>(0xfffffffa),
    __E_FunctionUnsupported = static_cast<int32_t>(0xfffffff9),
    __E_FeatureUnsupported = static_cast<int32_t>(0xfffffff8),
    __E_ExtensionNotPresent = static_cast<int32_t>(0xfffffff7),
    __E_LimitReached = static_cast<int32_t>(0xfffffff6),
    __E_SizeInsufficient = static_cast<int32_t>(0xfffffff5),
    __E_HandleInvalid = static_cast<int32_t>(0xfffffff4),
    __E_InstanceLost = static_cast<int32_t>(0xfffffff3),
    __E_SessionRunning = static_cast<int32_t>(0xfffffff2),
    __E_SessionNotRunning = static_cast<int32_t>(0xfffffff0),
    __E_SessionLost = static_cast<int32_t>(0xffffffef),
    __E_SystemInvalid = static_cast<int32_t>(0xffffffee),
    __E_PathInvalid = static_cast<int32_t>(0xffffffed),
    __E_PathCountExceeded = static_cast<int32_t>(0xffffffec),
    __E_PathFormatInvalid = static_cast<int32_t>(0xffffffeb),
    __E_PathUnsupported = static_cast<int32_t>(0xffffffea),
    __E_LayerInvalid = static_cast<int32_t>(0xffffffe9),
    __E_LayerLimitExceeded = static_cast<int32_t>(0xffffffe8),
    __E_SwapchainRectInvalid = static_cast<int32_t>(0xffffffe7),
    __E_SwapchainFormatUnsupported = static_cast<int32_t>(0xffffffe6),
    __E_ActionTypeMismatch = static_cast<int32_t>(0xffffffe5),
    __E_SessionNotReady = static_cast<int32_t>(0xffffffe4),
    __E_SessionNotStopping = static_cast<int32_t>(0xffffffe3),
    __E_TimeInvalid = static_cast<int32_t>(0xffffffe2),
    __E_ReferenceSpaceUnsupported = static_cast<int32_t>(0xffffffe1),
    __E_FileAccessError = static_cast<int32_t>(0xffffffe0),
    __E_FileContentsInvalid = static_cast<int32_t>(0xffffffdf),
    __E_FormFactorUnsupported = static_cast<int32_t>(0xffffffde),
    __E_FormFactorUnavailable = static_cast<int32_t>(0xffffffdd),
    __E_ApiLayerNotPresent = static_cast<int32_t>(0xffffffdc),
    __E_CallOrderInvalid = static_cast<int32_t>(0xffffffdb),
    __E_GraphicsDeviceInvalid = static_cast<int32_t>(0xffffffda),
    __E_PoseInvalid = static_cast<int32_t>(0xffffffd9),
    __E_IndexOutOfRange = static_cast<int32_t>(0xffffffd8),
    __E_ViewConfigurationTypeUnsupported = static_cast<int32_t>(0xffffffd7),
    __E_EnvironmentBlendModeUnsupported = static_cast<int32_t>(0xffffffd6),
    __E_NameDuplicated = static_cast<int32_t>(0xffffffd4),
    __E_NameInvalid = static_cast<int32_t>(0xffffffd3),
    __E_ActionsetNotAttached = static_cast<int32_t>(0xffffffd2),
    __E_ActionsetsAlreadyAttached = static_cast<int32_t>(0xffffffd1),
    __E_LocalizedNameDuplicated = static_cast<int32_t>(0xffffffd0),
    __E_LocalizedNameInvalid = static_cast<int32_t>(0xffffffcf),
    __E_GraphicsRequirementsCallMissing = static_cast<int32_t>(0xffffffce),
    __E_RuntimeUnavailable = static_cast<int32_t>(0xffffffcd),
    __E_ExtensionDependencyNotEnabled = static_cast<int32_t>(0xc45a608f),
    __E_PermissionInsufficient = static_cast<int32_t>(0xc45a6090),
    __E_AndroidThreadSettingsIdInvalidKHR = static_cast<int32_t>(0xc4652a48),
    __E_AndroidThreadSettingsdFailureKHR = static_cast<int32_t>(0xc4652a47),
    __E_AndroidThreadSettingsFailureKHR = static_cast<int32_t>(0xc4652a47),
    __E_CreateSpatialAnchorFailedMSFT = static_cast<int32_t>(0xc4649da7),
    __E_SecondaryViewConfigurationTypeNotEnabledMSFT = static_cast<int32_t>(0xc46466f8),
    __E_ControllerModelKeyInvalidMSFT = static_cast<int32_t>(0xc4645f28),
    __E_ReprojectionModeUnsupportedMSFT = static_cast<int32_t>(0xc4643430),
    __E_ComputeNewSceneNotCompletedMSFT = static_cast<int32_t>(0xc463bb18),
    __E_SceneComponentIdInvalidMSFT = static_cast<int32_t>(0xc463bb17),
    __E_SceneComponentTypeMismatchMSFT = static_cast<int32_t>(0xc463bb16),
    __E_SceneMeshBufferIdInvalidMSFT = static_cast<int32_t>(0xc463bb15),
    __E_SceneComputeFeatureIncompatibleMSFT = static_cast<int32_t>(0xc463bb14),
    __E_SceneComputeConsistencyMismatchMSFT = static_cast<int32_t>(0xc463bb13),
    __E_DisplayRefreshRateUnsupportedFB = static_cast<int32_t>(0xc463ab78),
    __E_ColorSpaceUnsupportedFB = static_cast<int32_t>(0xc4639020),
    __E_SpaceComponentNotSupportedFB = static_cast<int32_t>(0xc4637c98),
    __E_SpaceComponentNotEnabledFB = static_cast<int32_t>(0xc4637c97),
    __E_SpaceComponentStatusPendingFB = static_cast<int32_t>(0xc4637c96),
    __E_SpaceComponentStatusAlreadySetFB = static_cast<int32_t>(0xc4637c95),
    __E_UnexpectedStatePassthroughFB = static_cast<int32_t>(0xc4636910),
    __E_FeatureAlreadyCreatedPassthroughFB = static_cast<int32_t>(0xc463690f),
    __E_FeatureRequiredPassthroughFB = static_cast<int32_t>(0xc463690e),
    __E_NotPermittedPassthroughFB = static_cast<int32_t>(0xc463690d),
    __E_InsufficientResourcesPassthroughFB = static_cast<int32_t>(0xc463690c),
    __E_UnknownPassthroughFB = static_cast<int32_t>(0xc46368de),
    __E_RenderModelKeyInvalidFB = static_cast<int32_t>(0xc4636528),
    __E_RenderModelUnavailableFB = static_cast<int32_t>(0x3b9c9aec),
    __E_MarkerNotTrackedVARJO = static_cast<int32_t>(0xc46351a0),
    __E_MarkerIdInvalidVARJO = static_cast<int32_t>(0xc463519f),
    __E_MarkerDetectorPermissionDeniedML = static_cast<int32_t>(0xc4631af0),
    __E_MarkerDetectorLocateFailedML = static_cast<int32_t>(0xc4631aef),
    __E_MarkerDetectorInvalidDataQueryML = static_cast<int32_t>(0xc4631aee),
    __E_MarkerDetectorInvalidCreateInfoML = static_cast<int32_t>(0xc4631aed),
    __E_MarkerInvalidML = static_cast<int32_t>(0xc4631aec),
    __E_LocalizationMapIncompatibleML = static_cast<int32_t>(0xc4631708),
    __E_LocalizationMapUnavailableML = static_cast<int32_t>(0xc4631707),
    __E_LocalizationMapFailML = static_cast<int32_t>(0xc4631706),
    __E_LocalizationMapImportExportPermissionDeniedML = static_cast<int32_t>(0xc4631705),
    __E_LocalizationMapPermissionDeniedML = static_cast<int32_t>(0xc4631704),
    __E_LocalizationMapAlreadyExistsML = static_cast<int32_t>(0xc4631703),
    __E_LocalizationMapCannotExportCloudMapML = static_cast<int32_t>(0xc4631702),
    __E_SpatialAnchorNameNotFoundMSFT = static_cast<int32_t>(0xc4630b4f),
    __E_SpatialAnchorNameInvalidMSFT = static_cast<int32_t>(0xc4630b4e),
    __E_SceneMarkerDataNotStringMSFT = static_cast<int32_t>(0x3b9d0838),
    __E_SpaceMappingInsufficientFB = static_cast<int32_t>(0xc462a1d8),
    __E_SpaceLocalizationFailedFB = static_cast<int32_t>(0xc462a1d7),
    __E_SpaceNetworkTimeoutFB = static_cast<int32_t>(0xc462a1d6),
    __E_SpaceNetworkRequestFailedFB = static_cast<int32_t>(0xc462a1d5),
    __E_SpaceCloudStorageDisabledFB = static_cast<int32_t>(0xc462a1d4),
    __E_PassthroughColorLutBufferSizeMismatchMETA = static_cast<int32_t>(0xc46126f0),
    __E_EnvironmentDepthNotAvailableMETA = static_cast<int32_t>(0x3b9f3ab8),
    __E_HintAlreadySetQCOM = static_cast<int32_t>(0xc4608ab0),
    __E_NotAnAnchorHTC = static_cast<int32_t>(0xc46057e8),
    __E_SpaceNotLocatableEXT = static_cast<int32_t>(0xc45eaa38),
    __E_PlaneDetectionPermissionDeniedEXT = static_cast<int32_t>(0xc45eaa37),
    __E_FuturePendingEXT = static_cast<int32_t>(0xc45e0df7),
    __E_FutureInvalidEXT = static_cast<int32_t>(0xc45e0df6),
    __E_ExtensionDependencyNotEnabledKHR = static_cast<int32_t>(0xc45a608f),
    __E_PermissionInsufficientKHR = static_cast<int32_t>(0xc45a6090),
    __E_MaxResult = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrResult_Unwrapped() const noexcept {
    return static_cast<__XrResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrResult(int32_t value__) noexcept;

  /// @brief Field ActionTypeMismatch value: I32(-27)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionTypeMismatch;

  /// @brief Field ActionsetNotAttached value: I32(-46)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionsetNotAttached;

  /// @brief Field ActionsetsAlreadyAttached value: I32(-47)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionsetsAlreadyAttached;

  /// @brief Field AndroidThreadSettingsFailureKHR value: I32(-1000003001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsFailureKHR;

  /// @brief Field AndroidThreadSettingsIdInvalidKHR value: I32(-1000003000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsIdInvalidKHR;

  /// @brief Field AndroidThreadSettingsdFailureKHR value: I32(-1000003001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsdFailureKHR;

  /// @brief Field ApiLayerNotPresent value: I32(-36)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ApiLayerNotPresent;

  /// @brief Field ApiVersionUnsupported value: I32(-4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ApiVersionUnsupported;

  /// @brief Field CallOrderInvalid value: I32(-37)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const CallOrderInvalid;

  /// @brief Field ColorSpaceUnsupportedFB value: I32(-1000108000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ColorSpaceUnsupportedFB;

  /// @brief Field ComputeNewSceneNotCompletedMSFT value: I32(-1000097000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ComputeNewSceneNotCompletedMSFT;

  /// @brief Field ControllerModelKeyInvalidMSFT value: I32(-1000055000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ControllerModelKeyInvalidMSFT;

  /// @brief Field CreateSpatialAnchorFailedMSFT value: I32(-1000039001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const CreateSpatialAnchorFailedMSFT;

  /// @brief Field DisplayRefreshRateUnsupportedFB value: I32(-1000101000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const DisplayRefreshRateUnsupportedFB;

  /// @brief Field EnvironmentBlendModeUnsupported value: I32(-42)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const EnvironmentBlendModeUnsupported;

  /// @brief Field EnvironmentDepthNotAvailableMETA value: I32(1000291000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const EnvironmentDepthNotAvailableMETA;

  /// @brief Field EventUnavailable value: I32(4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const EventUnavailable;

  /// @brief Field ExtensionDependencyNotEnabled value: I32(-1000710001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ExtensionDependencyNotEnabled;

  /// @brief Field ExtensionDependencyNotEnabledKHR value: I32(-1000710001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ExtensionDependencyNotEnabledKHR;

  /// @brief Field ExtensionNotPresent value: I32(-9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ExtensionNotPresent;

  /// @brief Field FeatureAlreadyCreatedPassthroughFB value: I32(-1000118001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FeatureAlreadyCreatedPassthroughFB;

  /// @brief Field FeatureRequiredPassthroughFB value: I32(-1000118002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FeatureRequiredPassthroughFB;

  /// @brief Field FeatureUnsupported value: I32(-8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FeatureUnsupported;

  /// @brief Field FileAccessError value: I32(-32)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FileAccessError;

  /// @brief Field FileContentsInvalid value: I32(-33)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FileContentsInvalid;

  /// @brief Field FormFactorUnavailable value: I32(-35)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FormFactorUnavailable;

  /// @brief Field FormFactorUnsupported value: I32(-34)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FormFactorUnsupported;

  /// @brief Field FrameDiscarded value: I32(9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FrameDiscarded;

  /// @brief Field FunctionUnsupported value: I32(-7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FunctionUnsupported;

  /// @brief Field FutureInvalidEXT value: I32(-1000469002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FutureInvalidEXT;

  /// @brief Field FuturePendingEXT value: I32(-1000469001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FuturePendingEXT;

  /// @brief Field GraphicsDeviceInvalid value: I32(-38)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const GraphicsDeviceInvalid;

  /// @brief Field GraphicsRequirementsCallMissing value: I32(-50)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const GraphicsRequirementsCallMissing;

  /// @brief Field HandleInvalid value: I32(-12)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const HandleInvalid;

  /// @brief Field HintAlreadySetQCOM value: I32(-1000306000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const HintAlreadySetQCOM;

  /// @brief Field IndexOutOfRange value: I32(-40)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const IndexOutOfRange;

  /// @brief Field InitializationFailed value: I32(-6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const InitializationFailed;

  /// @brief Field InstanceLost value: I32(-13)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const InstanceLost;

  /// @brief Field InsufficientResourcesPassthroughFB value: I32(-1000118004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const InsufficientResourcesPassthroughFB;

  /// @brief Field LayerInvalid value: I32(-23)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LayerInvalid;

  /// @brief Field LayerLimitExceeded value: I32(-24)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LayerLimitExceeded;

  /// @brief Field LimitReached value: I32(-10)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LimitReached;

  /// @brief Field LocalizationMapAlreadyExistsML value: I32(-1000139005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapAlreadyExistsML;

  /// @brief Field LocalizationMapCannotExportCloudMapML value: I32(-1000139006)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapCannotExportCloudMapML;

  /// @brief Field LocalizationMapFailML value: I32(-1000139002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapFailML;

  /// @brief Field LocalizationMapImportExportPermissionDeniedML value: I32(-1000139003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapImportExportPermissionDeniedML;

  /// @brief Field LocalizationMapIncompatibleML value: I32(-1000139000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapIncompatibleML;

  /// @brief Field LocalizationMapPermissionDeniedML value: I32(-1000139004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapPermissionDeniedML;

  /// @brief Field LocalizationMapUnavailableML value: I32(-1000139001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizationMapUnavailableML;

  /// @brief Field LocalizedNameDuplicated value: I32(-48)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizedNameDuplicated;

  /// @brief Field LocalizedNameInvalid value: I32(-49)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizedNameInvalid;

  /// @brief Field LossPending value: I32(3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LossPending;

  /// @brief Field MarkerDetectorInvalidCreateInfoML value: I32(-1000138003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerDetectorInvalidCreateInfoML;

  /// @brief Field MarkerDetectorInvalidDataQueryML value: I32(-1000138002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerDetectorInvalidDataQueryML;

  /// @brief Field MarkerDetectorLocateFailedML value: I32(-1000138001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerDetectorLocateFailedML;

  /// @brief Field MarkerDetectorPermissionDeniedML value: I32(-1000138000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerDetectorPermissionDeniedML;

  /// @brief Field MarkerIdInvalidVARJO value: I32(-1000124001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerIdInvalidVARJO;

  /// @brief Field MarkerInvalidML value: I32(-1000138004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerInvalidML;

  /// @brief Field MarkerNotTrackedVARJO value: I32(-1000124000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MarkerNotTrackedVARJO;

  /// @brief Field MaxResult value: I32(2147483647)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MaxResult;

  /// @brief Field NameDuplicated value: I32(-44)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const NameDuplicated;

  /// @brief Field NameInvalid value: I32(-45)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const NameInvalid;

  /// @brief Field NotAnAnchorHTC value: I32(-1000319000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const NotAnAnchorHTC;

  /// @brief Field NotPermittedPassthroughFB value: I32(-1000118003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const NotPermittedPassthroughFB;

  /// @brief Field OutOfMemory value: I32(-3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const OutOfMemory;

  /// @brief Field PassthroughColorLutBufferSizeMismatchMETA value: I32(-1000266000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PassthroughColorLutBufferSizeMismatchMETA;

  /// @brief Field PathCountExceeded value: I32(-20)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathCountExceeded;

  /// @brief Field PathFormatInvalid value: I32(-21)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathFormatInvalid;

  /// @brief Field PathInvalid value: I32(-19)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathInvalid;

  /// @brief Field PathUnsupported value: I32(-22)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathUnsupported;

  /// @brief Field PermissionInsufficient value: I32(-1000710000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PermissionInsufficient;

  /// @brief Field PermissionInsufficientKHR value: I32(-1000710000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PermissionInsufficientKHR;

  /// @brief Field PlaneDetectionPermissionDeniedEXT value: I32(-1000429001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PlaneDetectionPermissionDeniedEXT;

  /// @brief Field PoseInvalid value: I32(-39)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PoseInvalid;

  /// @brief Field ReferenceSpaceUnsupported value: I32(-31)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ReferenceSpaceUnsupported;

  /// @brief Field RenderModelKeyInvalidFB value: I32(-1000119000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const RenderModelKeyInvalidFB;

  /// @brief Field RenderModelUnavailableFB value: I32(1000119020)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const RenderModelUnavailableFB;

  /// @brief Field ReprojectionModeUnsupportedMSFT value: I32(-1000066000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ReprojectionModeUnsupportedMSFT;

  /// @brief Field RuntimeFailure value: I32(-2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const RuntimeFailure;

  /// @brief Field RuntimeUnavailable value: I32(-51)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const RuntimeUnavailable;

  /// @brief Field SceneComponentIdInvalidMSFT value: I32(-1000097001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SceneComponentIdInvalidMSFT;

  /// @brief Field SceneComponentTypeMismatchMSFT value: I32(-1000097002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SceneComponentTypeMismatchMSFT;

  /// @brief Field SceneComputeConsistencyMismatchMSFT value: I32(-1000097005)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SceneComputeConsistencyMismatchMSFT;

  /// @brief Field SceneComputeFeatureIncompatibleMSFT value: I32(-1000097004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SceneComputeFeatureIncompatibleMSFT;

  /// @brief Field SceneMarkerDataNotStringMSFT value: I32(1000147000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SceneMarkerDataNotStringMSFT;

  /// @brief Field SceneMeshBufferIdInvalidMSFT value: I32(-1000097003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SceneMeshBufferIdInvalidMSFT;

  /// @brief Field SecondaryViewConfigurationTypeNotEnabledMSFT value: I32(-1000053000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SecondaryViewConfigurationTypeNotEnabledMSFT;

  /// @brief Field SessionLost value: I32(-17)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionLost;

  /// @brief Field SessionNotFocused value: I32(8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotFocused;

  /// @brief Field SessionNotReady value: I32(-28)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotReady;

  /// @brief Field SessionNotRunning value: I32(-16)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotRunning;

  /// @brief Field SessionNotStopping value: I32(-29)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotStopping;

  /// @brief Field SessionRunning value: I32(-14)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionRunning;

  /// @brief Field SizeInsufficient value: I32(-11)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SizeInsufficient;

  /// @brief Field SpaceBoundsUnavailable value: I32(7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceBoundsUnavailable;

  /// @brief Field SpaceCloudStorageDisabledFB value: I32(-1000169004)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceCloudStorageDisabledFB;

  /// @brief Field SpaceComponentNotEnabledFB value: I32(-1000113001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceComponentNotEnabledFB;

  /// @brief Field SpaceComponentNotSupportedFB value: I32(-1000113000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceComponentNotSupportedFB;

  /// @brief Field SpaceComponentStatusAlreadySetFB value: I32(-1000113003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceComponentStatusAlreadySetFB;

  /// @brief Field SpaceComponentStatusPendingFB value: I32(-1000113002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceComponentStatusPendingFB;

  /// @brief Field SpaceLocalizationFailedFB value: I32(-1000169001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceLocalizationFailedFB;

  /// @brief Field SpaceMappingInsufficientFB value: I32(-1000169000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceMappingInsufficientFB;

  /// @brief Field SpaceNetworkRequestFailedFB value: I32(-1000169003)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceNetworkRequestFailedFB;

  /// @brief Field SpaceNetworkTimeoutFB value: I32(-1000169002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceNetworkTimeoutFB;

  /// @brief Field SpaceNotLocatableEXT value: I32(-1000429000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceNotLocatableEXT;

  /// @brief Field SpatialAnchorNameInvalidMSFT value: I32(-1000142002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpatialAnchorNameInvalidMSFT;

  /// @brief Field SpatialAnchorNameNotFoundMSFT value: I32(-1000142001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpatialAnchorNameNotFoundMSFT;

  /// @brief Field Success value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const Success;

  /// @brief Field SwapchainFormatUnsupported value: I32(-26)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SwapchainFormatUnsupported;

  /// @brief Field SwapchainRectInvalid value: I32(-25)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SwapchainRectInvalid;

  /// @brief Field SystemInvalid value: I32(-18)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SystemInvalid;

  /// @brief Field TimeInvalid value: I32(-30)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeInvalid;

  /// @brief Field TimeoutExpired value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeoutExpired;

  /// @brief Field TimeoutExpored value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeoutExpored;

  /// @brief Field UnexpectedStatePassthroughFB value: I32(-1000118000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const UnexpectedStatePassthroughFB;

  /// @brief Field UnknownPassthroughFB value: I32(-1000118050)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const UnknownPassthroughFB;

  /// @brief Field ValidationFailure value: I32(-1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ValidationFailure;

  /// @brief Field ViewConfigurationTypeUnsupported value: I32(-41)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ViewConfigurationTypeUnsupported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18476 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrResult, "UnityEngine.XR.OpenXR.NativeTypes", "XrResult");
