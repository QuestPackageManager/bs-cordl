#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVREventType.hpp"
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
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVREventType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVREventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVREventType(int32_t value__) noexcept;

  /// @brief Field VREvent_ActionBindingReloaded value: I32(409)
  static ::OVR::OpenVR::EVREventType const VREvent_ActionBindingReloaded;

  /// @brief Field VREvent_ApplicationListUpdated value: I32(1303)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationListUpdated;

  /// @brief Field VREvent_ApplicationMimeTypeLoad value: I32(1304)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationMimeTypeLoad;

  /// @brief Field VREvent_ApplicationTransitionAborted value: I32(1301)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionAborted;

  /// @brief Field VREvent_ApplicationTransitionNewAppLaunchComplete value: I32(1305)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionNewAppLaunchComplete;

  /// @brief Field VREvent_ApplicationTransitionNewAppStarted value: I32(1302)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionNewAppStarted;

  /// @brief Field VREvent_ApplicationTransitionStarted value: I32(1300)
  static ::OVR::OpenVR::EVREventType const VREvent_ApplicationTransitionStarted;

  /// @brief Field VREvent_AudioSettingsHaveChanged value: I32(820)
  static ::OVR::OpenVR::EVREventType const VREvent_AudioSettingsHaveChanged;

  /// @brief Field VREvent_BackgroundSettingHasChanged value: I32(850)
  static ::OVR::OpenVR::EVREventType const VREvent_BackgroundSettingHasChanged;

  /// @brief Field VREvent_ButtonPress value: I32(200)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonPress;

  /// @brief Field VREvent_ButtonTouch value: I32(202)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonTouch;

  /// @brief Field VREvent_ButtonUnpress value: I32(201)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonUnpress;

  /// @brief Field VREvent_ButtonUntouch value: I32(203)
  static ::OVR::OpenVR::EVREventType const VREvent_ButtonUntouch;

  /// @brief Field VREvent_CameraSettingsHaveChanged value: I32(851)
  static ::OVR::OpenVR::EVREventType const VREvent_CameraSettingsHaveChanged;

  /// @brief Field VREvent_ChaperoneDataHasChanged value: I32(800)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneDataHasChanged;

  /// @brief Field VREvent_ChaperoneSettingsHaveChanged value: I32(803)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneSettingsHaveChanged;

  /// @brief Field VREvent_ChaperoneTempDataHasChanged value: I32(802)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneTempDataHasChanged;

  /// @brief Field VREvent_ChaperoneUniverseHasChanged value: I32(801)
  static ::OVR::OpenVR::EVREventType const VREvent_ChaperoneUniverseHasChanged;

  /// @brief Field VREvent_Compositor_ChaperoneBoundsHidden value: I32(1411)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_ChaperoneBoundsHidden;

  /// @brief Field VREvent_Compositor_ChaperoneBoundsShown value: I32(1410)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_ChaperoneBoundsShown;

  /// @brief Field VREvent_Compositor_MirrorWindowHidden value: I32(1401)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_MirrorWindowHidden;

  /// @brief Field VREvent_Compositor_MirrorWindowShown value: I32(1400)
  static ::OVR::OpenVR::EVREventType const VREvent_Compositor_MirrorWindowShown;

  /// @brief Field VREvent_ConsoleClosed value: I32(421)
  static ::OVR::OpenVR::EVREventType const VREvent_ConsoleClosed;

  /// @brief Field VREvent_ConsoleOpened value: I32(420)
  static ::OVR::OpenVR::EVREventType const VREvent_ConsoleOpened;

  /// @brief Field VREvent_DashboardActivated value: I32(502)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardActivated;

  /// @brief Field VREvent_DashboardDeactivated value: I32(503)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardDeactivated;

  /// @brief Field VREvent_DashboardOverlayCreated value: I32(518)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardOverlayCreated;

  /// @brief Field VREvent_DashboardRequested value: I32(505)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardRequested;

  /// @brief Field VREvent_DashboardSectionSettingChanged value: I32(864)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardSectionSettingChanged;

  /// @brief Field VREvent_DashboardThumbSelected value: I32(504)
  static ::OVR::OpenVR::EVREventType const VREvent_DashboardThumbSelected;

  /// @brief Field VREvent_DriverRequestedQuit value: I32(704)
  static ::OVR::OpenVR::EVREventType const VREvent_DriverRequestedQuit;

  /// @brief Field VREvent_DualAnalog_Cancel value: I32(257)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Cancel;

  /// @brief Field VREvent_DualAnalog_ModeSwitch1 value: I32(255)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_ModeSwitch1;

  /// @brief Field VREvent_DualAnalog_ModeSwitch2 value: I32(256)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_ModeSwitch2;

  /// @brief Field VREvent_DualAnalog_Move value: I32(254)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Move;

  /// @brief Field VREvent_DualAnalog_Press value: I32(250)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Press;

  /// @brief Field VREvent_DualAnalog_Touch value: I32(252)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Touch;

  /// @brief Field VREvent_DualAnalog_Unpress value: I32(251)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Unpress;

  /// @brief Field VREvent_DualAnalog_Untouch value: I32(253)
  static ::OVR::OpenVR::EVREventType const VREvent_DualAnalog_Untouch;

  /// @brief Field VREvent_EnableHomeAppSettingsHaveChanged value: I32(856)
  static ::OVR::OpenVR::EVREventType const VREvent_EnableHomeAppSettingsHaveChanged;

  /// @brief Field VREvent_EnterStandbyMode value: I32(106)
  static ::OVR::OpenVR::EVREventType const VREvent_EnterStandbyMode;

  /// @brief Field VREvent_EnvironmentSettingsHaveChanged value: I32(854)
  static ::OVR::OpenVR::EVREventType const VREvent_EnvironmentSettingsHaveChanged;

  /// @brief Field VREvent_FirmwareUpdateFinished value: I32(1101)
  static ::OVR::OpenVR::EVREventType const VREvent_FirmwareUpdateFinished;

  /// @brief Field VREvent_FirmwareUpdateStarted value: I32(1100)
  static ::OVR::OpenVR::EVREventType const VREvent_FirmwareUpdateStarted;

  /// @brief Field VREvent_FocusEnter value: I32(303)
  static ::OVR::OpenVR::EVREventType const VREvent_FocusEnter;

  /// @brief Field VREvent_FocusLeave value: I32(304)
  static ::OVR::OpenVR::EVREventType const VREvent_FocusLeave;

  /// @brief Field VREvent_HideKeyboard value: I32(510)
  static ::OVR::OpenVR::EVREventType const VREvent_HideKeyboard;

  /// @brief Field VREvent_HideRenderModels value: I32(410)
  static ::OVR::OpenVR::EVREventType const VREvent_HideRenderModels;

  /// @brief Field VREvent_ImageFailed value: I32(517)
  static ::OVR::OpenVR::EVREventType const VREvent_ImageFailed;

  /// @brief Field VREvent_ImageLoaded value: I32(508)
  static ::OVR::OpenVR::EVREventType const VREvent_ImageLoaded;

  /// @brief Field VREvent_InputFocusCaptured value: I32(400)
  static ::OVR::OpenVR::EVREventType const VREvent_InputFocusCaptured;

  /// @brief Field VREvent_InputFocusChanged value: I32(406)
  static ::OVR::OpenVR::EVREventType const VREvent_InputFocusChanged;

  /// @brief Field VREvent_InputFocusReleased value: I32(401)
  static ::OVR::OpenVR::EVREventType const VREvent_InputFocusReleased;

  /// @brief Field VREvent_Input_ActionManifestLoadFailed value: I32(1704)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_ActionManifestLoadFailed;

  /// @brief Field VREvent_Input_ActionManifestReloaded value: I32(1703)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_ActionManifestReloaded;

  /// @brief Field VREvent_Input_BindingLoadFailed value: I32(1701)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_BindingLoadFailed;

  /// @brief Field VREvent_Input_BindingLoadSuccessful value: I32(1702)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_BindingLoadSuccessful;

  /// @brief Field VREvent_Input_HapticVibration value: I32(1700)
  static ::OVR::OpenVR::EVREventType const VREvent_Input_HapticVibration;

  /// @brief Field VREvent_IpdChanged value: I32(105)
  static ::OVR::OpenVR::EVREventType const VREvent_IpdChanged;

  /// @brief Field VREvent_KeyboardCharInput value: I32(1201)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardCharInput;

  /// @brief Field VREvent_KeyboardClosed value: I32(1200)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardClosed;

  /// @brief Field VREvent_KeyboardDone value: I32(1202)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardDone;

  /// @brief Field VREvent_KeyboardSectionSettingChanged value: I32(862)
  static ::OVR::OpenVR::EVREventType const VREvent_KeyboardSectionSettingChanged;

  /// @brief Field VREvent_LeaveStandbyMode value: I32(107)
  static ::OVR::OpenVR::EVREventType const VREvent_LeaveStandbyMode;

  /// @brief Field VREvent_LensDistortionChanged value: I32(110)
  static ::OVR::OpenVR::EVREventType const VREvent_LensDistortionChanged;

  /// @brief Field VREvent_LighthouseSectionSettingChanged value: I32(858)
  static ::OVR::OpenVR::EVREventType const VREvent_LighthouseSectionSettingChanged;

  /// @brief Field VREvent_MCImageUpdated value: I32(1000)
  static ::OVR::OpenVR::EVREventType const VREvent_MCImageUpdated;

  /// @brief Field VREvent_MessageOverlayCloseRequested value: I32(1651)
  static ::OVR::OpenVR::EVREventType const VREvent_MessageOverlayCloseRequested;

  /// @brief Field VREvent_MessageOverlay_Closed value: I32(1650)
  static ::OVR::OpenVR::EVREventType const VREvent_MessageOverlay_Closed;

  /// @brief Field VREvent_ModelSkinSettingsHaveChanged value: I32(853)
  static ::OVR::OpenVR::EVREventType const VREvent_ModelSkinSettingsHaveChanged;

  /// @brief Field VREvent_MouseButtonDown value: I32(301)
  static ::OVR::OpenVR::EVREventType const VREvent_MouseButtonDown;

  /// @brief Field VREvent_MouseButtonUp value: I32(302)
  static ::OVR::OpenVR::EVREventType const VREvent_MouseButtonUp;

  /// @brief Field VREvent_MouseMove value: I32(300)
  static ::OVR::OpenVR::EVREventType const VREvent_MouseMove;

  /// @brief Field VREvent_None value: I32(0)
  static ::OVR::OpenVR::EVREventType const VREvent_None;

  /// @brief Field VREvent_Notification_BeginInteraction value: I32(602)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_BeginInteraction;

  /// @brief Field VREvent_Notification_Destroyed value: I32(603)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_Destroyed;

  /// @brief Field VREvent_Notification_Hidden value: I32(601)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_Hidden;

  /// @brief Field VREvent_Notification_Shown value: I32(600)
  static ::OVR::OpenVR::EVREventType const VREvent_Notification_Shown;

  /// @brief Field VREvent_NotificationsSectionSettingChanged value: I32(861)
  static ::OVR::OpenVR::EVREventType const VREvent_NotificationsSectionSettingChanged;

  /// @brief Field VREvent_NullSectionSettingChanged value: I32(859)
  static ::OVR::OpenVR::EVREventType const VREvent_NullSectionSettingChanged;

  /// @brief Field VREvent_OverlayFocusChanged value: I32(307)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayFocusChanged;

  /// @brief Field VREvent_OverlayGamepadFocusGained value: I32(511)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayGamepadFocusGained;

  /// @brief Field VREvent_OverlayGamepadFocusLost value: I32(512)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayGamepadFocusLost;

  /// @brief Field VREvent_OverlayHidden value: I32(501)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayHidden;

  /// @brief Field VREvent_OverlaySharedTextureChanged value: I32(513)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlaySharedTextureChanged;

  /// @brief Field VREvent_OverlayShown value: I32(500)
  static ::OVR::OpenVR::EVREventType const VREvent_OverlayShown;

  /// @brief Field VREvent_PerfSectionSettingChanged value: I32(863)
  static ::OVR::OpenVR::EVREventType const VREvent_PerfSectionSettingChanged;

  /// @brief Field VREvent_PerformanceTest_DisableCapture value: I32(1601)
  static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_DisableCapture;

  /// @brief Field VREvent_PerformanceTest_EnableCapture value: I32(1600)
  static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_EnableCapture;

  /// @brief Field VREvent_PerformanceTest_FidelityLevel value: I32(1602)
  static ::OVR::OpenVR::EVREventType const VREvent_PerformanceTest_FidelityLevel;

  /// @brief Field VREvent_PowerSettingsHaveChanged value: I32(855)
  static ::OVR::OpenVR::EVREventType const VREvent_PowerSettingsHaveChanged;

  /// @brief Field VREvent_PrimaryDashboardDeviceChanged value: I32(525)
  static ::OVR::OpenVR::EVREventType const VREvent_PrimaryDashboardDeviceChanged;

  /// @brief Field VREvent_ProcessConnected value: I32(1306)
  static ::OVR::OpenVR::EVREventType const VREvent_ProcessConnected;

  /// @brief Field VREvent_ProcessDisconnected value: I32(1307)
  static ::OVR::OpenVR::EVREventType const VREvent_ProcessDisconnected;

  /// @brief Field VREvent_ProcessQuit value: I32(701)
  static ::OVR::OpenVR::EVREventType const VREvent_ProcessQuit;

  /// @brief Field VREvent_PropertyChanged value: I32(111)
  static ::OVR::OpenVR::EVREventType const VREvent_PropertyChanged;

  /// @brief Field VREvent_Quit value: I32(700)
  static ::OVR::OpenVR::EVREventType const VREvent_Quit;

  /// @brief Field VREvent_QuitAborted_UserPrompt value: I32(702)
  static ::OVR::OpenVR::EVREventType const VREvent_QuitAborted_UserPrompt;

  /// @brief Field VREvent_QuitAcknowledged value: I32(703)
  static ::OVR::OpenVR::EVREventType const VREvent_QuitAcknowledged;

  /// @brief Field VREvent_RenderToast value: I32(507)
  static ::OVR::OpenVR::EVREventType const VREvent_RenderToast;

  /// @brief Field VREvent_ReprojectionSettingHasChanged value: I32(852)
  static ::OVR::OpenVR::EVREventType const VREvent_ReprojectionSettingHasChanged;

  /// @brief Field VREvent_RequestScreenshot value: I32(520)
  static ::OVR::OpenVR::EVREventType const VREvent_RequestScreenshot;

  /// @brief Field VREvent_ResetDashboard value: I32(506)
  static ::OVR::OpenVR::EVREventType const VREvent_ResetDashboard;

  /// @brief Field VREvent_RoomViewHidden value: I32(527)
  static ::OVR::OpenVR::EVREventType const VREvent_RoomViewHidden;

  /// @brief Field VREvent_RoomViewShown value: I32(526)
  static ::OVR::OpenVR::EVREventType const VREvent_RoomViewShown;

  /// @brief Field VREvent_SceneApplicationChanged value: I32(404)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationChanged;

  /// @brief Field VREvent_SceneApplicationSecondaryRenderingStarted value: I32(407)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationSecondaryRenderingStarted;

  /// @brief Field VREvent_SceneApplicationUsingWrongGraphicsAdapter value: I32(408)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneApplicationUsingWrongGraphicsAdapter;

  /// @brief Field VREvent_SceneFocusChanged value: I32(405)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusChanged;

  /// @brief Field VREvent_SceneFocusGained value: I32(403)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusGained;

  /// @brief Field VREvent_SceneFocusLost value: I32(402)
  static ::OVR::OpenVR::EVREventType const VREvent_SceneFocusLost;

  /// @brief Field VREvent_ScreenshotFailed value: I32(522)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotFailed;

  /// @brief Field VREvent_ScreenshotProgressToDashboard value: I32(524)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotProgressToDashboard;

  /// @brief Field VREvent_ScreenshotTaken value: I32(521)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotTaken;

  /// @brief Field VREvent_ScreenshotTriggered value: I32(516)
  static ::OVR::OpenVR::EVREventType const VREvent_ScreenshotTriggered;

  /// @brief Field VREvent_Scroll value: I32(305)
  static ::OVR::OpenVR::EVREventType const VREvent_Scroll;

  /// @brief Field VREvent_SeatedZeroPoseReset value: I32(804)
  static ::OVR::OpenVR::EVREventType const VREvent_SeatedZeroPoseReset;

  /// @brief Field VREvent_ShowKeyboard value: I32(509)
  static ::OVR::OpenVR::EVREventType const VREvent_ShowKeyboard;

  /// @brief Field VREvent_ShowRenderModels value: I32(411)
  static ::OVR::OpenVR::EVREventType const VREvent_ShowRenderModels;

  /// @brief Field VREvent_SpatialAnchors_DescriptorUpdated value: I32(1801)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_DescriptorUpdated;

  /// @brief Field VREvent_SpatialAnchors_PoseUpdated value: I32(1800)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_PoseUpdated;

  /// @brief Field VREvent_SpatialAnchors_RequestDescriptorUpdate value: I32(1803)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_RequestDescriptorUpdate;

  /// @brief Field VREvent_SpatialAnchors_RequestPoseUpdate value: I32(1802)
  static ::OVR::OpenVR::EVREventType const VREvent_SpatialAnchors_RequestPoseUpdate;

  /// @brief Field VREvent_StatusUpdate value: I32(900)
  static ::OVR::OpenVR::EVREventType const VREvent_StatusUpdate;

  /// @brief Field VREvent_SteamVRSectionSettingChanged value: I32(857)
  static ::OVR::OpenVR::EVREventType const VREvent_SteamVRSectionSettingChanged;

  /// @brief Field VREvent_SubmitScreenshotToDashboard value: I32(523)
  static ::OVR::OpenVR::EVREventType const VREvent_SubmitScreenshotToDashboard;

  /// @brief Field VREvent_SwitchGamepadFocus value: I32(519)
  static ::OVR::OpenVR::EVREventType const VREvent_SwitchGamepadFocus;

  /// @brief Field VREvent_TouchPadMove value: I32(306)
  static ::OVR::OpenVR::EVREventType const VREvent_TouchPadMove;

  /// @brief Field VREvent_TrackedCamera_EditingSurface value: I32(1550)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_EditingSurface;

  /// @brief Field VREvent_TrackedCamera_PauseVideoStream value: I32(1502)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_PauseVideoStream;

  /// @brief Field VREvent_TrackedCamera_ResumeVideoStream value: I32(1503)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_ResumeVideoStream;

  /// @brief Field VREvent_TrackedCamera_StartVideoStream value: I32(1500)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_StartVideoStream;

  /// @brief Field VREvent_TrackedCamera_StopVideoStream value: I32(1501)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedCamera_StopVideoStream;

  /// @brief Field VREvent_TrackedDeviceActivated value: I32(100)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceActivated;

  /// @brief Field VREvent_TrackedDeviceDeactivated value: I32(101)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceDeactivated;

  /// @brief Field VREvent_TrackedDeviceRoleChanged value: I32(108)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceRoleChanged;

  /// @brief Field VREvent_TrackedDeviceUpdated value: I32(102)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUpdated;

  /// @brief Field VREvent_TrackedDeviceUserInteractionEnded value: I32(104)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUserInteractionEnded;

  /// @brief Field VREvent_TrackedDeviceUserInteractionStarted value: I32(103)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackedDeviceUserInteractionStarted;

  /// @brief Field VREvent_TrackersSectionSettingChanged value: I32(866)
  static ::OVR::OpenVR::EVREventType const VREvent_TrackersSectionSettingChanged;

  /// @brief Field VREvent_UserInterfaceSectionSettingChanged value: I32(860)
  static ::OVR::OpenVR::EVREventType const VREvent_UserInterfaceSectionSettingChanged;

  /// @brief Field VREvent_VendorSpecific_Reserved_End value: I32(19999)
  static ::OVR::OpenVR::EVREventType const VREvent_VendorSpecific_Reserved_End;

  /// @brief Field VREvent_VendorSpecific_Reserved_Start value: I32(10000)
  static ::OVR::OpenVR::EVREventType const VREvent_VendorSpecific_Reserved_Start;

  /// @brief Field VREvent_WatchdogWakeUpRequested value: I32(109)
  static ::OVR::OpenVR::EVREventType const VREvent_WatchdogWakeUpRequested;

  /// @brief Field VREvent_WebInterfaceSectionSettingChanged value: I32(865)
  static ::OVR::OpenVR::EVREventType const VREvent_WebInterfaceSectionSettingChanged;

  /// @brief Field VREvent_WebInterface_InstallDriverCompleted value: I32(950)
  static ::OVR::OpenVR::EVREventType const VREvent_WebInterface_InstallDriverCompleted;

  /// @brief Field VREvent_WirelessDisconnect value: I32(112)
  static ::OVR::OpenVR::EVREventType const VREvent_WirelessDisconnect;

  /// @brief Field VREvent_WirelessReconnect value: I32(113)
  static ::OVR::OpenVR::EVREventType const VREvent_WirelessReconnect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVREventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVREventType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVREventType, "OVR.OpenVR", "EVREventType");
