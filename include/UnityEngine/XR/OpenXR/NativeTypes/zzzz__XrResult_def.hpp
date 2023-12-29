#pragma once
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
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14417))
// CS Name: ::UnityEngine.XR.OpenXR.NativeTypes::XrResult
struct CORDL_TYPE XrResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrResult_Unwrapped
  enum struct __XrResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_TimeoutExpored = static_cast<int32_t>(0x1),
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
    __E_InstanceLOst = static_cast<int32_t>(0xfffffff3),
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
    __E_SpwachainRectInvalid = static_cast<int32_t>(0xffffffe7),
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
    __E_AndroidThreadSettingsIdInvalidKHR = static_cast<int32_t>(0xc4652a48),
    __E_AndroidThreadSettingsdFailureKHR = static_cast<int32_t>(0xc4652a47),
    __E_CreateSpatialAnchorFailedMSFT = static_cast<int32_t>(0xc4649da7),
    __E_SecondaryViewConfigurationTypeNotEnabledMSFT = static_cast<int32_t>(0xc46466f8),
    __E_MaxResult = static_cast<int32_t>(0x7fffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrResult_Unwrapped() const noexcept {
    return static_cast<__XrResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XrResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const Success;

  /// @brief Field TimeoutExpored value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeoutExpored;

  /// @brief Field LossPending value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LossPending;

  /// @brief Field EventUnavailable value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const EventUnavailable;

  /// @brief Field SpaceBoundsUnavailable value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpaceBoundsUnavailable;

  /// @brief Field SessionNotFocused value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotFocused;

  /// @brief Field FrameDiscarded value: static_cast<int32_t>(0x9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FrameDiscarded;

  /// @brief Field ValidationFailure value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ValidationFailure;

  /// @brief Field RuntimeFailure value: static_cast<int32_t>(0xfffffffe)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const RuntimeFailure;

  /// @brief Field OutOfMemory value: static_cast<int32_t>(0xfffffffd)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const OutOfMemory;

  /// @brief Field ApiVersionUnsupported value: static_cast<int32_t>(0xfffffffc)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ApiVersionUnsupported;

  /// @brief Field InitializationFailed value: static_cast<int32_t>(0xfffffffa)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const InitializationFailed;

  /// @brief Field FunctionUnsupported value: static_cast<int32_t>(0xfffffff9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FunctionUnsupported;

  /// @brief Field FeatureUnsupported value: static_cast<int32_t>(0xfffffff8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FeatureUnsupported;

  /// @brief Field ExtensionNotPresent value: static_cast<int32_t>(0xfffffff7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ExtensionNotPresent;

  /// @brief Field LimitReached value: static_cast<int32_t>(0xfffffff6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LimitReached;

  /// @brief Field SizeInsufficient value: static_cast<int32_t>(0xfffffff5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SizeInsufficient;

  /// @brief Field HandleInvalid value: static_cast<int32_t>(0xfffffff4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const HandleInvalid;

  /// @brief Field InstanceLOst value: static_cast<int32_t>(0xfffffff3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const InstanceLOst;

  /// @brief Field SessionRunning value: static_cast<int32_t>(0xfffffff2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionRunning;

  /// @brief Field SessionNotRunning value: static_cast<int32_t>(0xfffffff0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotRunning;

  /// @brief Field SessionLost value: static_cast<int32_t>(0xffffffef)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionLost;

  /// @brief Field SystemInvalid value: static_cast<int32_t>(0xffffffee)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SystemInvalid;

  /// @brief Field PathInvalid value: static_cast<int32_t>(0xffffffed)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathInvalid;

  /// @brief Field PathCountExceeded value: static_cast<int32_t>(0xffffffec)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathCountExceeded;

  /// @brief Field PathFormatInvalid value: static_cast<int32_t>(0xffffffeb)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathFormatInvalid;

  /// @brief Field PathUnsupported value: static_cast<int32_t>(0xffffffea)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PathUnsupported;

  /// @brief Field LayerInvalid value: static_cast<int32_t>(0xffffffe9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LayerInvalid;

  /// @brief Field LayerLimitExceeded value: static_cast<int32_t>(0xffffffe8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LayerLimitExceeded;

  /// @brief Field SpwachainRectInvalid value: static_cast<int32_t>(0xffffffe7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SpwachainRectInvalid;

  /// @brief Field SwapchainFormatUnsupported value: static_cast<int32_t>(0xffffffe6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SwapchainFormatUnsupported;

  /// @brief Field ActionTypeMismatch value: static_cast<int32_t>(0xffffffe5)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionTypeMismatch;

  /// @brief Field SessionNotReady value: static_cast<int32_t>(0xffffffe4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotReady;

  /// @brief Field SessionNotStopping value: static_cast<int32_t>(0xffffffe3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SessionNotStopping;

  /// @brief Field TimeInvalid value: static_cast<int32_t>(0xffffffe2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const TimeInvalid;

  /// @brief Field ReferenceSpaceUnsupported value: static_cast<int32_t>(0xffffffe1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ReferenceSpaceUnsupported;

  /// @brief Field FileAccessError value: static_cast<int32_t>(0xffffffe0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FileAccessError;

  /// @brief Field FileContentsInvalid value: static_cast<int32_t>(0xffffffdf)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FileContentsInvalid;

  /// @brief Field FormFactorUnsupported value: static_cast<int32_t>(0xffffffde)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FormFactorUnsupported;

  /// @brief Field FormFactorUnavailable value: static_cast<int32_t>(0xffffffdd)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const FormFactorUnavailable;

  /// @brief Field ApiLayerNotPresent value: static_cast<int32_t>(0xffffffdc)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ApiLayerNotPresent;

  /// @brief Field CallOrderInvalid value: static_cast<int32_t>(0xffffffdb)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const CallOrderInvalid;

  /// @brief Field GraphicsDeviceInvalid value: static_cast<int32_t>(0xffffffda)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const GraphicsDeviceInvalid;

  /// @brief Field PoseInvalid value: static_cast<int32_t>(0xffffffd9)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const PoseInvalid;

  /// @brief Field IndexOutOfRange value: static_cast<int32_t>(0xffffffd8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const IndexOutOfRange;

  /// @brief Field ViewConfigurationTypeUnsupported value: static_cast<int32_t>(0xffffffd7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ViewConfigurationTypeUnsupported;

  /// @brief Field EnvironmentBlendModeUnsupported value: static_cast<int32_t>(0xffffffd6)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const EnvironmentBlendModeUnsupported;

  /// @brief Field NameDuplicated value: static_cast<int32_t>(0xffffffd4)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const NameDuplicated;

  /// @brief Field NameInvalid value: static_cast<int32_t>(0xffffffd3)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const NameInvalid;

  /// @brief Field ActionsetNotAttached value: static_cast<int32_t>(0xffffffd2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionsetNotAttached;

  /// @brief Field ActionsetsAlreadyAttached value: static_cast<int32_t>(0xffffffd1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const ActionsetsAlreadyAttached;

  /// @brief Field LocalizedNameDuplicated value: static_cast<int32_t>(0xffffffd0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizedNameDuplicated;

  /// @brief Field LocalizedNameInvalid value: static_cast<int32_t>(0xffffffcf)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const LocalizedNameInvalid;

  /// @brief Field AndroidThreadSettingsIdInvalidKHR value: static_cast<int32_t>(0xc4652a48)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsIdInvalidKHR;

  /// @brief Field AndroidThreadSettingsdFailureKHR value: static_cast<int32_t>(0xc4652a47)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const AndroidThreadSettingsdFailureKHR;

  /// @brief Field CreateSpatialAnchorFailedMSFT value: static_cast<int32_t>(0xc4649da7)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const CreateSpatialAnchorFailedMSFT;

  /// @brief Field SecondaryViewConfigurationTypeNotEnabledMSFT value: static_cast<int32_t>(0xc46466f8)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const SecondaryViewConfigurationTypeNotEnabledMSFT;

  /// @brief Field MaxResult value: static_cast<int32_t>(0x7fffffff)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrResult const MaxResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrResult, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrResult, "UnityEngine.XR.OpenXR.NativeTypes", "XrResult");
