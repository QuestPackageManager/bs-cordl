#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVREventType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVREventType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVREventType);
// Type: OVR.OpenVR::EVREventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8591))
// CS Name: ::OVR.OpenVR::EVREventType
struct CORDL_TYPE EVREventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVREventType_Unwrapped
  enum struct __EVREventType_Unwrapped : int32_t {
    __E_VREvent_None = static_cast<int32_t>(0x0),
    __E_VREvent_TrackedDeviceActivated = static_cast<int32_t>(0x64),
    __E_VREvent_TrackedDeviceDeactivated = static_cast<int32_t>(0x65),
    __E_VREvent_TrackedDeviceUpdated = static_cast<int32_t>(0x66),
    __E_VREvent_TrackedDeviceUserInteractionStarted = static_cast<int32_t>(0x67),
    __E_VREvent_TrackedDeviceUserInteractionEnded = static_cast<int32_t>(0x68),
    __E_VREvent_IpdChanged = static_cast<int32_t>(0x69),
    __E_VREvent_EnterStandbyMode = static_cast<int32_t>(0x6a),
    __E_VREvent_LeaveStandbyMode = static_cast<int32_t>(0x6b),
    __E_VREvent_TrackedDeviceRoleChanged = static_cast<int32_t>(0x6c),
    __E_VREvent_WatchdogWakeUpRequested = static_cast<int32_t>(0x6d),
    __E_VREvent_LensDistortionChanged = static_cast<int32_t>(0x6e),
    __E_VREvent_PropertyChanged = static_cast<int32_t>(0x6f),
    __E_VREvent_WirelessDisconnect = static_cast<int32_t>(0x70),
    __E_VREvent_WirelessReconnect = static_cast<int32_t>(0x71),
    __E_VREvent_ButtonPress = static_cast<int32_t>(0xc8),
    __E_VREvent_ButtonUnpress = static_cast<int32_t>(0xc9),
    __E_VREvent_ButtonTouch = static_cast<int32_t>(0xca),
    __E_VREvent_ButtonUntouch = static_cast<int32_t>(0xcb),
    __E_VREvent_DualAnalog_Press = static_cast<int32_t>(0xfa),
    __E_VREvent_DualAnalog_Unpress = static_cast<int32_t>(0xfb),
    __E_VREvent_DualAnalog_Touch = static_cast<int32_t>(0xfc),
    __E_VREvent_DualAnalog_Untouch = static_cast<int32_t>(0xfd),
    __E_VREvent_DualAnalog_Move = static_cast<int32_t>(0xfe),
    __E_VREvent_DualAnalog_ModeSwitch1 = static_cast<int32_t>(0xff),
    __E_VREvent_DualAnalog_ModeSwitch2 = static_cast<int32_t>(0x100),
    __E_VREvent_DualAnalog_Cancel = static_cast<int32_t>(0x101),
    __E_VREvent_MouseMove = static_cast<int32_t>(0x12c),
    __E_VREvent_MouseButtonDown = static_cast<int32_t>(0x12d),
    __E_VREvent_MouseButtonUp = static_cast<int32_t>(0x12e),
    __E_VREvent_FocusEnter = static_cast<int32_t>(0x12f),
    __E_VREvent_FocusLeave = static_cast<int32_t>(0x130),
    __E_VREvent_Scroll = static_cast<int32_t>(0x131),
    __E_VREvent_TouchPadMove = static_cast<int32_t>(0x132),
    __E_VREvent_OverlayFocusChanged = static_cast<int32_t>(0x133),
    __E_VREvent_InputFocusCaptured = static_cast<int32_t>(0x190),
    __E_VREvent_InputFocusReleased = static_cast<int32_t>(0x191),
    __E_VREvent_SceneFocusLost = static_cast<int32_t>(0x192),
    __E_VREvent_SceneFocusGained = static_cast<int32_t>(0x193),
    __E_VREvent_SceneApplicationChanged = static_cast<int32_t>(0x194),
    __E_VREvent_SceneFocusChanged = static_cast<int32_t>(0x195),
    __E_VREvent_InputFocusChanged = static_cast<int32_t>(0x196),
    __E_VREvent_SceneApplicationSecondaryRenderingStarted = static_cast<int32_t>(0x197),
    __E_VREvent_SceneApplicationUsingWrongGraphicsAdapter = static_cast<int32_t>(0x198),
    __E_VREvent_ActionBindingReloaded = static_cast<int32_t>(0x199),
    __E_VREvent_HideRenderModels = static_cast<int32_t>(0x19a),
    __E_VREvent_ShowRenderModels = static_cast<int32_t>(0x19b),
    __E_VREvent_ConsoleOpened = static_cast<int32_t>(0x1a4),
    __E_VREvent_ConsoleClosed = static_cast<int32_t>(0x1a5),
    __E_VREvent_OverlayShown = static_cast<int32_t>(0x1f4),
    __E_VREvent_OverlayHidden = static_cast<int32_t>(0x1f5),
    __E_VREvent_DashboardActivated = static_cast<int32_t>(0x1f6),
    __E_VREvent_DashboardDeactivated = static_cast<int32_t>(0x1f7),
    __E_VREvent_DashboardThumbSelected = static_cast<int32_t>(0x1f8),
    __E_VREvent_DashboardRequested = static_cast<int32_t>(0x1f9),
    __E_VREvent_ResetDashboard = static_cast<int32_t>(0x1fa),
    __E_VREvent_RenderToast = static_cast<int32_t>(0x1fb),
    __E_VREvent_ImageLoaded = static_cast<int32_t>(0x1fc),
    __E_VREvent_ShowKeyboard = static_cast<int32_t>(0x1fd),
    __E_VREvent_HideKeyboard = static_cast<int32_t>(0x1fe),
    __E_VREvent_OverlayGamepadFocusGained = static_cast<int32_t>(0x1ff),
    __E_VREvent_OverlayGamepadFocusLost = static_cast<int32_t>(0x200),
    __E_VREvent_OverlaySharedTextureChanged = static_cast<int32_t>(0x201),
    __E_VREvent_ScreenshotTriggered = static_cast<int32_t>(0x204),
    __E_VREvent_ImageFailed = static_cast<int32_t>(0x205),
    __E_VREvent_DashboardOverlayCreated = static_cast<int32_t>(0x206),
    __E_VREvent_SwitchGamepadFocus = static_cast<int32_t>(0x207),
    __E_VREvent_RequestScreenshot = static_cast<int32_t>(0x208),
    __E_VREvent_ScreenshotTaken = static_cast<int32_t>(0x209),
    __E_VREvent_ScreenshotFailed = static_cast<int32_t>(0x20a),
    __E_VREvent_SubmitScreenshotToDashboard = static_cast<int32_t>(0x20b),
    __E_VREvent_ScreenshotProgressToDashboard = static_cast<int32_t>(0x20c),
    __E_VREvent_PrimaryDashboardDeviceChanged = static_cast<int32_t>(0x20d),
    __E_VREvent_RoomViewShown = static_cast<int32_t>(0x20e),
    __E_VREvent_RoomViewHidden = static_cast<int32_t>(0x20f),
    __E_VREvent_Notification_Shown = static_cast<int32_t>(0x258),
    __E_VREvent_Notification_Hidden = static_cast<int32_t>(0x259),
    __E_VREvent_Notification_BeginInteraction = static_cast<int32_t>(0x25a),
    __E_VREvent_Notification_Destroyed = static_cast<int32_t>(0x25b),
    __E_VREvent_Quit = static_cast<int32_t>(0x2bc),
    __E_VREvent_ProcessQuit = static_cast<int32_t>(0x2bd),
    __E_VREvent_QuitAborted_UserPrompt = static_cast<int32_t>(0x2be),
    __E_VREvent_QuitAcknowledged = static_cast<int32_t>(0x2bf),
    __E_VREvent_DriverRequestedQuit = static_cast<int32_t>(0x2c0),
    __E_VREvent_ChaperoneDataHasChanged = static_cast<int32_t>(0x320),
    __E_VREvent_ChaperoneUniverseHasChanged = static_cast<int32_t>(0x321),
    __E_VREvent_ChaperoneTempDataHasChanged = static_cast<int32_t>(0x322),
    __E_VREvent_ChaperoneSettingsHaveChanged = static_cast<int32_t>(0x323),
    __E_VREvent_SeatedZeroPoseReset = static_cast<int32_t>(0x324),
    __E_VREvent_AudioSettingsHaveChanged = static_cast<int32_t>(0x334),
    __E_VREvent_BackgroundSettingHasChanged = static_cast<int32_t>(0x352),
    __E_VREvent_CameraSettingsHaveChanged = static_cast<int32_t>(0x353),
    __E_VREvent_ReprojectionSettingHasChanged = static_cast<int32_t>(0x354),
    __E_VREvent_ModelSkinSettingsHaveChanged = static_cast<int32_t>(0x355),
    __E_VREvent_EnvironmentSettingsHaveChanged = static_cast<int32_t>(0x356),
    __E_VREvent_PowerSettingsHaveChanged = static_cast<int32_t>(0x357),
    __E_VREvent_EnableHomeAppSettingsHaveChanged = static_cast<int32_t>(0x358),
    __E_VREvent_SteamVRSectionSettingChanged = static_cast<int32_t>(0x359),
    __E_VREvent_LighthouseSectionSettingChanged = static_cast<int32_t>(0x35a),
    __E_VREvent_NullSectionSettingChanged = static_cast<int32_t>(0x35b),
    __E_VREvent_UserInterfaceSectionSettingChanged = static_cast<int32_t>(0x35c),
    __E_VREvent_NotificationsSectionSettingChanged = static_cast<int32_t>(0x35d),
    __E_VREvent_KeyboardSectionSettingChanged = static_cast<int32_t>(0x35e),
    __E_VREvent_PerfSectionSettingChanged = static_cast<int32_t>(0x35f),
    __E_VREvent_DashboardSectionSettingChanged = static_cast<int32_t>(0x360),
    __E_VREvent_WebInterfaceSectionSettingChanged = static_cast<int32_t>(0x361),
    __E_VREvent_TrackersSectionSettingChanged = static_cast<int32_t>(0x362),
    __E_VREvent_StatusUpdate = static_cast<int32_t>(0x384),
    __E_VREvent_WebInterface_InstallDriverCompleted = static_cast<int32_t>(0x3b6),
    __E_VREvent_MCImageUpdated = static_cast<int32_t>(0x3e8),
    __E_VREvent_FirmwareUpdateStarted = static_cast<int32_t>(0x44c),
    __E_VREvent_FirmwareUpdateFinished = static_cast<int32_t>(0x44d),
    __E_VREvent_KeyboardClosed = static_cast<int32_t>(0x4b0),
    __E_VREvent_KeyboardCharInput = static_cast<int32_t>(0x4b1),
    __E_VREvent_KeyboardDone = static_cast<int32_t>(0x4b2),
    __E_VREvent_ApplicationTransitionStarted = static_cast<int32_t>(0x514),
    __E_VREvent_ApplicationTransitionAborted = static_cast<int32_t>(0x515),
    __E_VREvent_ApplicationTransitionNewAppStarted = static_cast<int32_t>(0x516),
    __E_VREvent_ApplicationListUpdated = static_cast<int32_t>(0x517),
    __E_VREvent_ApplicationMimeTypeLoad = static_cast<int32_t>(0x518),
    __E_VREvent_ApplicationTransitionNewAppLaunchComplete = static_cast<int32_t>(0x519),
    __E_VREvent_ProcessConnected = static_cast<int32_t>(0x51a),
    __E_VREvent_ProcessDisconnected = static_cast<int32_t>(0x51b),
    __E_VREvent_Compositor_MirrorWindowShown = static_cast<int32_t>(0x578),
    __E_VREvent_Compositor_MirrorWindowHidden = static_cast<int32_t>(0x579),
    __E_VREvent_Compositor_ChaperoneBoundsShown = static_cast<int32_t>(0x582),
    __E_VREvent_Compositor_ChaperoneBoundsHidden = static_cast<int32_t>(0x583),
    __E_VREvent_TrackedCamera_StartVideoStream = static_cast<int32_t>(0x5dc),
    __E_VREvent_TrackedCamera_StopVideoStream = static_cast<int32_t>(0x5dd),
    __E_VREvent_TrackedCamera_PauseVideoStream = static_cast<int32_t>(0x5de),
    __E_VREvent_TrackedCamera_ResumeVideoStream = static_cast<int32_t>(0x5df),
    __E_VREvent_TrackedCamera_EditingSurface = static_cast<int32_t>(0x60e),
    __E_VREvent_PerformanceTest_EnableCapture = static_cast<int32_t>(0x640),
    __E_VREvent_PerformanceTest_DisableCapture = static_cast<int32_t>(0x641),
    __E_VREvent_PerformanceTest_FidelityLevel = static_cast<int32_t>(0x642),
    __E_VREvent_MessageOverlay_Closed = static_cast<int32_t>(0x672),
    __E_VREvent_MessageOverlayCloseRequested = static_cast<int32_t>(0x673),
    __E_VREvent_Input_HapticVibration = static_cast<int32_t>(0x6a4),
    __E_VREvent_Input_BindingLoadFailed = static_cast<int32_t>(0x6a5),
    __E_VREvent_Input_BindingLoadSuccessful = static_cast<int32_t>(0x6a6),
    __E_VREvent_Input_ActionManifestReloaded = static_cast<int32_t>(0x6a7),
    __E_VREvent_Input_ActionManifestLoadFailed = static_cast<int32_t>(0x6a8),
    __E_VREvent_SpatialAnchors_PoseUpdated = static_cast<int32_t>(0x708),
    __E_VREvent_SpatialAnchors_DescriptorUpdated = static_cast<int32_t>(0x709),
    __E_VREvent_SpatialAnchors_RequestPoseUpdate = static_cast<int32_t>(0x70a),
    __E_VREvent_SpatialAnchors_RequestDescriptorUpdate = static_cast<int32_t>(0x70b),
    __E_VREvent_VendorSpecific_Reserved_Start = static_cast<int32_t>(0x2710),
    __E_VREvent_VendorSpecific_Reserved_End = static_cast<int32_t>(0x4e1f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVREventType_Unwrapped() const noexcept {
    return static_cast<__EVREventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVREventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVREventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VREvent_None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVREventType const VREvent_None;

  /// @brief Field VREvent_TrackedDeviceActivated value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceActivated;

  /// @brief Field VREvent_TrackedDeviceDeactivated value: static_cast<int32_t>(0x65)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceDeactivated;

  /// @brief Field VREvent_TrackedDeviceUpdated value: static_cast<int32_t>(0x66)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUpdated;

  /// @brief Field VREvent_TrackedDeviceUserInteractionStarted value: static_cast<int32_t>(0x67)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUserInteractionStarted;

  /// @brief Field VREvent_TrackedDeviceUserInteractionEnded value: static_cast<int32_t>(0x68)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUserInteractionEnded;

  /// @brief Field VREvent_IpdChanged value: static_cast<int32_t>(0x69)
  static ::OVR::OpenVR::EVREventType const VREvent_IpdChanged;

  /// @brief Field VREvent_EnterStandbyMode value: static_cast<int32_t>(0x6a)
  static ::OVR::OpenVR::EVREventType const VREvent_EnterStandbyMode;

  /// @brief Field VREvent_LeaveStandbyMode value: static_cast<int32_t>(0x6b)
  static ::OVR::OpenVR::EVREventType const VREvent_LeaveStandbyMode;

  /// @brief Field VREvent_TrackedDeviceRoleChanged value: static_cast<int32_t>(0x6c)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceRoleChanged;

  /// @brief Field VREvent_WatchdogWakeUpRequested value: static_cast<int32_t>(0x6d)
  static ::OVR::OpenVR::EVREventType const VREvent_WatchdogWakeUpRequested;

  /// @brief Field VREvent_LensDistortionChanged value: static_cast<int32_t>(0x6e)
  static ::OVR::OpenVR::EVREventType const VREvent_LensDistortionChanged;

  /// @brief Field VREvent_PropertyChanged value: static_cast<int32_t>(0x6f)
  static ::OVR::OpenVR::EVREventType const VREvent_PropertyChanged;

  /// @brief Field VREvent_WirelessDisconnect value: static_cast<int32_t>(0x70)
  static ::OVR::OpenVR::EVREventType const VREvent_WirelessDisconnect;

  /// @brief Field VREvent_WirelessReconnect value: static_cast<int32_t>(0x71)
  static ::OVR::OpenVR::EVREventType const VREvent_WirelessReconnect;

  /// @brief Field VREvent_ButtonPress value: static_cast<int32_t>(0xc8)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonPress;

  /// @brief Field VREvent_ButtonUnpress value: static_cast<int32_t>(0xc9)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonUnpress;

  /// @brief Field VREvent_ButtonTouch value: static_cast<int32_t>(0xca)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonTouch;

  /// @brief Field VREvent_ButtonUntouch value: static_cast<int32_t>(0xcb)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonUntouch;

  /// @brief Field VREvent_DualAnalog_Press value: static_cast<int32_t>(0xfa)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Press;

  /// @brief Field VREvent_DualAnalog_Unpress value: static_cast<int32_t>(0xfb)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Unpress;

  /// @brief Field VREvent_DualAnalog_Touch value: static_cast<int32_t>(0xfc)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Touch;

  /// @brief Field VREvent_DualAnalog_Untouch value: static_cast<int32_t>(0xfd)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Untouch;

  /// @brief Field VREvent_DualAnalog_Move value: static_cast<int32_t>(0xfe)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Move;

  /// @brief Field VREvent_DualAnalog_ModeSwitch1 value: static_cast<int32_t>(0xff)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_ModeSwitch1;

  /// @brief Field VREvent_DualAnalog_ModeSwitch2 value: static_cast<int32_t>(0x100)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_ModeSwitch2;

  /// @brief Field VREvent_DualAnalog_Cancel value: static_cast<int32_t>(0x101)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Cancel;

  /// @brief Field VREvent_MouseMove value: static_cast<int32_t>(0x12c)
  static ::OVR::OpenVR::EVREventType const VREvent_MouseMove;

  /// @brief Field VREvent_MouseButtonDown value: static_cast<int32_t>(0x12d)
  static ::OVR::OpenVR::EVREventType const VREvent_MouseButtonDown;

  /// @brief Field VREvent_MouseButtonUp value: static_cast<int32_t>(0x12e)
  static ::OVR::OpenVR::EVREventType const VREvent_MouseButtonUp;

  /// @brief Field VREvent_FocusEnter value: static_cast<int32_t>(0x12f)
  static ::OVR::OpenVR::EVREventType const VREvent_FocusEnter;

  /// @brief Field VREvent_FocusLeave value: static_cast<int32_t>(0x130)
  static ::OVR::OpenVR::EVREventType const VREvent_FocusLeave;

  /// @brief Field VREvent_Scroll value: static_cast<int32_t>(0x131)
  static ::OVR::OpenVR::EVREventType const VREvent_Scroll;

  /// @brief Field VREvent_TouchPadMove value: static_cast<int32_t>(0x132)
  static ::OVR::OpenVR::EVREventType const VREvent_TouchPadMove;

  /// @brief Field VREvent_OverlayFocusChanged value: static_cast<int32_t>(0x133)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayFocusChanged;

  /// @brief Field VREvent_InputFocusCaptured value: static_cast<int32_t>(0x190)
  static ::OVR::OpenVR::EVREventType const VREvent_InputFocusCaptured;

  /// @brief Field VREvent_InputFocusReleased value: static_cast<int32_t>(0x191)
  static ::OVR::OpenVR::EVREventType const VREvent_InputFocusReleased;

  /// @brief Field VREvent_SceneFocusLost value: static_cast<int32_t>(0x192)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusLost;

  /// @brief Field VREvent_SceneFocusGained value: static_cast<int32_t>(0x193)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusGained;

  /// @brief Field VREvent_SceneApplicationChanged value: static_cast<int32_t>(0x194)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationChanged;

  /// @brief Field VREvent_SceneFocusChanged value: static_cast<int32_t>(0x195)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusChanged;

  /// @brief Field VREvent_InputFocusChanged value: static_cast<int32_t>(0x196)
  static ::OVR::OpenVR::EVREventType const VREvent_InputFocusChanged;

  /// @brief Field VREvent_SceneApplicationSecondaryRenderingStarted value: static_cast<int32_t>(0x197)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationSecondaryRenderingStarted;

  /// @brief Field VREvent_SceneApplicationUsingWrongGraphicsAdapter value: static_cast<int32_t>(0x198)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationUsingWrongGraphicsAdapter;

  /// @brief Field VREvent_ActionBindingReloaded value: static_cast<int32_t>(0x199)
  static ::OVR::OpenVR::EVREventType const VREvent_ActionBindingReloaded;

  /// @brief Field VREvent_HideRenderModels value: static_cast<int32_t>(0x19a)
  static ::OVR::OpenVR::EVREventType const VREvent_HideRenderModels;

  /// @brief Field VREvent_ShowRenderModels value: static_cast<int32_t>(0x19b)
  static ::OVR::OpenVR::EVREventType const VREvent_ShowRenderModels;

  /// @brief Field VREvent_ConsoleOpened value: static_cast<int32_t>(0x1a4)
  static ::OVR::OpenVR::EVREventType const VREvent_ConsoleOpened;

  /// @brief Field VREvent_ConsoleClosed value: static_cast<int32_t>(0x1a5)
  static ::OVR::OpenVR::EVREventType const VREvent_ConsoleClosed;

  /// @brief Field VREvent_OverlayShown value: static_cast<int32_t>(0x1f4)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayShown;

  /// @brief Field VREvent_OverlayHidden value: static_cast<int32_t>(0x1f5)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayHidden;

  /// @brief Field VREvent_DashboardActivated value: static_cast<int32_t>(0x1f6)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardActivated;

  /// @brief Field VREvent_DashboardDeactivated value: static_cast<int32_t>(0x1f7)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardDeactivated;

  /// @brief Field VREvent_DashboardThumbSelected value: static_cast<int32_t>(0x1f8)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardThumbSelected;

  /// @brief Field VREvent_DashboardRequested value: static_cast<int32_t>(0x1f9)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardRequested;

  /// @brief Field VREvent_ResetDashboard value: static_cast<int32_t>(0x1fa)
  static ::OVR::OpenVR::EVREventType const VREvent_ResetDashboard;

  /// @brief Field VREvent_RenderToast value: static_cast<int32_t>(0x1fb)
  static ::OVR::OpenVR::EVREventType const VREvent_RenderToast;

  /// @brief Field VREvent_ImageLoaded value: static_cast<int32_t>(0x1fc)
  static ::OVR::OpenVR::EVREventType const VREvent_ImageLoaded;

  /// @brief Field VREvent_ShowKeyboard value: static_cast<int32_t>(0x1fd)
  static ::OVR::OpenVR::EVREventType const VREvent_ShowKeyboard;

  /// @brief Field VREvent_HideKeyboard value: static_cast<int32_t>(0x1fe)
  static ::OVR::OpenVR::EVREventType const VREvent_HideKeyboard;

  /// @brief Field VREvent_OverlayGamepadFocusGained value: static_cast<int32_t>(0x1ff)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayGamepadFocusGained;

  /// @brief Field VREvent_OverlayGamepadFocusLost value: static_cast<int32_t>(0x200)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayGamepadFocusLost;

  /// @brief Field VREvent_OverlaySharedTextureChanged value: static_cast<int32_t>(0x201)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlaySharedTextureChanged;

  /// @brief Field VREvent_ScreenshotTriggered value: static_cast<int32_t>(0x204)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotTriggered;

  /// @brief Field VREvent_ImageFailed value: static_cast<int32_t>(0x205)
  static ::OVR::OpenVR::EVREventType const VREvent_ImageFailed;

  /// @brief Field VREvent_DashboardOverlayCreated value: static_cast<int32_t>(0x206)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardOverlayCreated;

  /// @brief Field VREvent_SwitchGamepadFocus value: static_cast<int32_t>(0x207)
  static ::OVR::OpenVR::EVREventType const VREvent_SwitchGamepadFocus;

  /// @brief Field VREvent_RequestScreenshot value: static_cast<int32_t>(0x208)
  static ::OVR::OpenVR::EVREventType const VREvent_RequestScreenshot;

  /// @brief Field VREvent_ScreenshotTaken value: static_cast<int32_t>(0x209)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotTaken;

  /// @brief Field VREvent_ScreenshotFailed value: static_cast<int32_t>(0x20a)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotFailed;

  /// @brief Field VREvent_SubmitScreenshotToDashboard value: static_cast<int32_t>(0x20b)
  static ::OVR::OpenVR::EVREventType const VREvent_SubmitScreenshotToDashboard;

  /// @brief Field VREvent_ScreenshotProgressToDashboard value: static_cast<int32_t>(0x20c)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotProgressToDashboard;

  /// @brief Field VREvent_PrimaryDashboardDeviceChanged value: static_cast<int32_t>(0x20d)
  static ::OVR::OpenVR::EVREventType const VREvent_PrimaryDashboardDeviceChanged;

  /// @brief Field VREvent_RoomViewShown value: static_cast<int32_t>(0x20e)
  static ::OVR::OpenVR::EVREventType const VREvent_RoomViewShown;

  /// @brief Field VREvent_RoomViewHidden value: static_cast<int32_t>(0x20f)
  static ::OVR::OpenVR::EVREventType const VREvent_RoomViewHidden;

  /// @brief Field VREvent_Notification_Shown value: static_cast<int32_t>(0x258)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_Shown;

  /// @brief Field VREvent_Notification_Hidden value: static_cast<int32_t>(0x259)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_Hidden;

  /// @brief Field VREvent_Notification_BeginInteraction value: static_cast<int32_t>(0x25a)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_BeginInteraction;

  /// @brief Field VREvent_Notification_Destroyed value: static_cast<int32_t>(0x25b)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_Destroyed;

  /// @brief Field VREvent_Quit value: static_cast<int32_t>(0x2bc)
  static ::OVR::OpenVR::EVREventType const VREvent_Quit;

  /// @brief Field VREvent_ProcessQuit value: static_cast<int32_t>(0x2bd)
  static ::OVR::OpenVR::EVREventType const VREvent_ProcessQuit;

  /// @brief Field VREvent_QuitAborted_UserPrompt value: static_cast<int32_t>(0x2be)
  static ::OVR::OpenVR::EVREventType const VREvent_QuitAborted_UserPrompt;

  /// @brief Field VREvent_QuitAcknowledged value: static_cast<int32_t>(0x2bf)
  static ::OVR::OpenVR::EVREventType const VREvent_QuitAcknowledged;

  /// @brief Field VREvent_DriverRequestedQuit value: static_cast<int32_t>(0x2c0)
  static ::OVR::OpenVR::EVREventType const VREvent_DriverRequestedQuit;

  /// @brief Field VREvent_ChaperoneDataHasChanged value: static_cast<int32_t>(0x320)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneDataHasChanged;

  /// @brief Field VREvent_ChaperoneUniverseHasChanged value: static_cast<int32_t>(0x321)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneUniverseHasChanged;

  /// @brief Field VREvent_ChaperoneTempDataHasChanged value: static_cast<int32_t>(0x322)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneTempDataHasChanged;

  /// @brief Field VREvent_ChaperoneSettingsHaveChanged value: static_cast<int32_t>(0x323)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneSettingsHaveChanged;

  /// @brief Field VREvent_SeatedZeroPoseReset value: static_cast<int32_t>(0x324)
  static ::OVR::OpenVR::EVREventType const VREvent_SeatedZeroPoseReset;

  /// @brief Field VREvent_AudioSettingsHaveChanged value: static_cast<int32_t>(0x334)
  static ::OVR::OpenVR::EVREventType const VREvent_AudioSettingsHaveChanged;

  /// @brief Field VREvent_BackgroundSettingHasChanged value: static_cast<int32_t>(0x352)
  static ::OVR::OpenVR::EVREventType const VREvent_BackgroundSettingHasChanged;

  /// @brief Field VREvent_CameraSettingsHaveChanged value: static_cast<int32_t>(0x353)
  static ::OVR::OpenVR::EVREventType const VREvent_CameraSettingsHaveChanged;

  /// @brief Field VREvent_ReprojectionSettingHasChanged value: static_cast<int32_t>(0x354)
  static ::OVR::OpenVR::EVREventType const VREvent_ReprojectionSettingHasChanged;

  /// @brief Field VREvent_ModelSkinSettingsHaveChanged value: static_cast<int32_t>(0x355)
  static ::OVR::OpenVR::EVREventType const VREvent_ModelSkinSettingsHaveChanged;

  /// @brief Field VREvent_EnvironmentSettingsHaveChanged value: static_cast<int32_t>(0x356)
  static ::OVR::OpenVR::EVREventType const VREvent_EnvironmentSettingsHaveChanged;

  /// @brief Field VREvent_PowerSettingsHaveChanged value: static_cast<int32_t>(0x357)
  static ::OVR::OpenVR::EVREventType const VREvent_PowerSettingsHaveChanged;

  /// @brief Field VREvent_EnableHomeAppSettingsHaveChanged value: static_cast<int32_t>(0x358)
  static ::OVR::OpenVR::EVREventType const VREvent_EnableHomeAppSettingsHaveChanged;

  /// @brief Field VREvent_SteamVRSectionSettingChanged value: static_cast<int32_t>(0x359)
  static ::OVR::OpenVR::EVREventType const VREvent_SteamVRSectionSettingChanged;

  /// @brief Field VREvent_LighthouseSectionSettingChanged value: static_cast<int32_t>(0x35a)
  static ::OVR::OpenVR::EVREventType const VREvent_LighthouseSectionSettingChanged;

  /// @brief Field VREvent_NullSectionSettingChanged value: static_cast<int32_t>(0x35b)
  static ::OVR::OpenVR::EVREventType const VREvent_NullSectionSettingChanged;

  /// @brief Field VREvent_UserInterfaceSectionSettingChanged value: static_cast<int32_t>(0x35c)
  static ::OVR::OpenVR::EVREventType const VREvent_UserInterfaceSectionSettingChanged;

  /// @brief Field VREvent_NotificationsSectionSettingChanged value: static_cast<int32_t>(0x35d)
  static ::OVR::OpenVR::EVREventType const VREvent_NotificationsSectionSettingChanged;

  /// @brief Field VREvent_KeyboardSectionSettingChanged value: static_cast<int32_t>(0x35e)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardSectionSettingChanged;

  /// @brief Field VREvent_PerfSectionSettingChanged value: static_cast<int32_t>(0x35f)
  static ::OVR::OpenVR::EVREventType const VREvent_PerfSectionSettingChanged;

  /// @brief Field VREvent_DashboardSectionSettingChanged value: static_cast<int32_t>(0x360)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardSectionSettingChanged;

  /// @brief Field VREvent_WebInterfaceSectionSettingChanged value: static_cast<int32_t>(0x361)
  static ::OVR::OpenVR::EVREventType const VREvent_WebInterfaceSectionSettingChanged;

  /// @brief Field VREvent_TrackersSectionSettingChanged value: static_cast<int32_t>(0x362)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackersSectionSettingChanged;

  /// @brief Field VREvent_StatusUpdate value: static_cast<int32_t>(0x384)
  static ::OVR::OpenVR::EVREventType const VREvent_StatusUpdate;

  /// @brief Field VREvent_WebInterface_InstallDriverCompleted value: static_cast<int32_t>(0x3b6)
  static ::OVR::OpenVR::EVREventType const VREvent_WebInterface_InstallDriverCompleted;

  /// @brief Field VREvent_MCImageUpdated value: static_cast<int32_t>(0x3e8)
  static ::OVR::OpenVR::EVREventType const VREvent_MCImageUpdated;

  /// @brief Field VREvent_FirmwareUpdateStarted value: static_cast<int32_t>(0x44c)
  static ::OVR::OpenVR::EVREventType const VREvent_FirmwareUpdateStarted;

  /// @brief Field VREvent_FirmwareUpdateFinished value: static_cast<int32_t>(0x44d)
  static ::OVR::OpenVR::EVREventType const VREvent_FirmwareUpdateFinished;

  /// @brief Field VREvent_KeyboardClosed value: static_cast<int32_t>(0x4b0)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardClosed;

  /// @brief Field VREvent_KeyboardCharInput value: static_cast<int32_t>(0x4b1)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardCharInput;

  /// @brief Field VREvent_KeyboardDone value: static_cast<int32_t>(0x4b2)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardDone;

  /// @brief Field VREvent_ApplicationTransitionStarted value: static_cast<int32_t>(0x514)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionStarted;

  /// @brief Field VREvent_ApplicationTransitionAborted value: static_cast<int32_t>(0x515)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionAborted;

  /// @brief Field VREvent_ApplicationTransitionNewAppStarted value: static_cast<int32_t>(0x516)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionNewAppStarted;

  /// @brief Field VREvent_ApplicationListUpdated value: static_cast<int32_t>(0x517)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationListUpdated;

  /// @brief Field VREvent_ApplicationMimeTypeLoad value: static_cast<int32_t>(0x518)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationMimeTypeLoad;

  /// @brief Field VREvent_ApplicationTransitionNewAppLaunchComplete value: static_cast<int32_t>(0x519)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionNewAppLaunchComplete;

  /// @brief Field VREvent_ProcessConnected value: static_cast<int32_t>(0x51a)
  static ::OVR::OpenVR::EVREventType const VREvent_ProcessConnected;

  /// @brief Field VREvent_ProcessDisconnected value: static_cast<int32_t>(0x51b)
  static ::OVR::OpenVR::EVREventType const VREvent_ProcessDisconnected;

  /// @brief Field VREvent_Compositor_MirrorWindowShown value: static_cast<int32_t>(0x578)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_MirrorWindowShown;

  /// @brief Field VREvent_Compositor_MirrorWindowHidden value: static_cast<int32_t>(0x579)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_MirrorWindowHidden;

  /// @brief Field VREvent_Compositor_ChaperoneBoundsShown value: static_cast<int32_t>(0x582)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_ChaperoneBoundsShown;

  /// @brief Field VREvent_Compositor_ChaperoneBoundsHidden value: static_cast<int32_t>(0x583)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_ChaperoneBoundsHidden;

  /// @brief Field VREvent_TrackedCamera_StartVideoStream value: static_cast<int32_t>(0x5dc)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_StartVideoStream;

  /// @brief Field VREvent_TrackedCamera_StopVideoStream value: static_cast<int32_t>(0x5dd)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_StopVideoStream;

  /// @brief Field VREvent_TrackedCamera_PauseVideoStream value: static_cast<int32_t>(0x5de)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_PauseVideoStream;

  /// @brief Field VREvent_TrackedCamera_ResumeVideoStream value: static_cast<int32_t>(0x5df)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_ResumeVideoStream;

  /// @brief Field VREvent_TrackedCamera_EditingSurface value: static_cast<int32_t>(0x60e)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_EditingSurface;

  /// @brief Field VREvent_PerformanceTest_EnableCapture value: static_cast<int32_t>(0x640)
  static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_EnableCapture;

  /// @brief Field VREvent_PerformanceTest_DisableCapture value: static_cast<int32_t>(0x641)
  static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_DisableCapture;

  /// @brief Field VREvent_PerformanceTest_FidelityLevel value: static_cast<int32_t>(0x642)
  static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_FidelityLevel;

  /// @brief Field VREvent_MessageOverlay_Closed value: static_cast<int32_t>(0x672)
  static ::OVR::OpenVR::EVREventType const VREvent_MessageOverlay_Closed;

  /// @brief Field VREvent_MessageOverlayCloseRequested value: static_cast<int32_t>(0x673)
  static ::OVR::OpenVR::EVREventType const VREvent_MessageOverlayCloseRequested;

  /// @brief Field VREvent_Input_HapticVibration value: static_cast<int32_t>(0x6a4)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_HapticVibration;

  /// @brief Field VREvent_Input_BindingLoadFailed value: static_cast<int32_t>(0x6a5)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_BindingLoadFailed;

  /// @brief Field VREvent_Input_BindingLoadSuccessful value: static_cast<int32_t>(0x6a6)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_BindingLoadSuccessful;

  /// @brief Field VREvent_Input_ActionManifestReloaded value: static_cast<int32_t>(0x6a7)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_ActionManifestReloaded;

  /// @brief Field VREvent_Input_ActionManifestLoadFailed value: static_cast<int32_t>(0x6a8)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_ActionManifestLoadFailed;

  /// @brief Field VREvent_SpatialAnchors_PoseUpdated value: static_cast<int32_t>(0x708)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_PoseUpdated;

  /// @brief Field VREvent_SpatialAnchors_DescriptorUpdated value: static_cast<int32_t>(0x709)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_DescriptorUpdated;

  /// @brief Field VREvent_SpatialAnchors_RequestPoseUpdate value: static_cast<int32_t>(0x70a)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_RequestPoseUpdate;

  /// @brief Field VREvent_SpatialAnchors_RequestDescriptorUpdate value: static_cast<int32_t>(0x70b)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_RequestDescriptorUpdate;

  /// @brief Field VREvent_VendorSpecific_Reserved_Start value: static_cast<int32_t>(0x2710)
  static ::OVR::OpenVR::EVREventType const VREvent_VendorSpecific_Reserved_Start;

  /// @brief Field VREvent_VendorSpecific_Reserved_End value: static_cast<int32_t>(0x4e1f)
  static ::OVR::OpenVR::EVREventType const VREvent_VendorSpecific_Reserved_End;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVREventType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVREventType, "OVR.OpenVR", "EVREventType");
