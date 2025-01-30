#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRInitError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRInitError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRInitError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRInitError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRInitError
struct CORDL_TYPE EVRInitError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRInitError_Unwrapped
  enum struct __EVRInitError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Unknown = static_cast<int32_t>(0x1),
    __E_Init_InstallationNotFound = static_cast<int32_t>(0x64),
    __E_Init_InstallationCorrupt = static_cast<int32_t>(0x65),
    __E_Init_VRClientDLLNotFound = static_cast<int32_t>(0x66),
    __E_Init_FileNotFound = static_cast<int32_t>(0x67),
    __E_Init_FactoryNotFound = static_cast<int32_t>(0x68),
    __E_Init_InterfaceNotFound = static_cast<int32_t>(0x69),
    __E_Init_InvalidInterface = static_cast<int32_t>(0x6a),
    __E_Init_UserConfigDirectoryInvalid = static_cast<int32_t>(0x6b),
    __E_Init_HmdNotFound = static_cast<int32_t>(0x6c),
    __E_Init_NotInitialized = static_cast<int32_t>(0x6d),
    __E_Init_PathRegistryNotFound = static_cast<int32_t>(0x6e),
    __E_Init_NoConfigPath = static_cast<int32_t>(0x6f),
    __E_Init_NoLogPath = static_cast<int32_t>(0x70),
    __E_Init_PathRegistryNotWritable = static_cast<int32_t>(0x71),
    __E_Init_AppInfoInitFailed = static_cast<int32_t>(0x72),
    __E_Init_Retry = static_cast<int32_t>(0x73),
    __E_Init_InitCanceledByUser = static_cast<int32_t>(0x74),
    __E_Init_AnotherAppLaunching = static_cast<int32_t>(0x75),
    __E_Init_SettingsInitFailed = static_cast<int32_t>(0x76),
    __E_Init_ShuttingDown = static_cast<int32_t>(0x77),
    __E_Init_TooManyObjects = static_cast<int32_t>(0x78),
    __E_Init_NoServerForBackgroundApp = static_cast<int32_t>(0x79),
    __E_Init_NotSupportedWithCompositor = static_cast<int32_t>(0x7a),
    __E_Init_NotAvailableToUtilityApps = static_cast<int32_t>(0x7b),
    __E_Init_Internal = static_cast<int32_t>(0x7c),
    __E_Init_HmdDriverIdIsNone = static_cast<int32_t>(0x7d),
    __E_Init_HmdNotFoundPresenceFailed = static_cast<int32_t>(0x7e),
    __E_Init_VRMonitorNotFound = static_cast<int32_t>(0x7f),
    __E_Init_VRMonitorStartupFailed = static_cast<int32_t>(0x80),
    __E_Init_LowPowerWatchdogNotSupported = static_cast<int32_t>(0x81),
    __E_Init_InvalidApplicationType = static_cast<int32_t>(0x82),
    __E_Init_NotAvailableToWatchdogApps = static_cast<int32_t>(0x83),
    __E_Init_WatchdogDisabledInSettings = static_cast<int32_t>(0x84),
    __E_Init_VRDashboardNotFound = static_cast<int32_t>(0x85),
    __E_Init_VRDashboardStartupFailed = static_cast<int32_t>(0x86),
    __E_Init_VRHomeNotFound = static_cast<int32_t>(0x87),
    __E_Init_VRHomeStartupFailed = static_cast<int32_t>(0x88),
    __E_Init_RebootingBusy = static_cast<int32_t>(0x89),
    __E_Init_FirmwareUpdateBusy = static_cast<int32_t>(0x8a),
    __E_Init_FirmwareRecoveryBusy = static_cast<int32_t>(0x8b),
    __E_Init_USBServiceBusy = static_cast<int32_t>(0x8c),
    __E_Init_VRWebHelperStartupFailed = static_cast<int32_t>(0x8d),
    __E_Init_TrackerManagerInitFailed = static_cast<int32_t>(0x8e),
    __E_Driver_Failed = static_cast<int32_t>(0xc8),
    __E_Driver_Unknown = static_cast<int32_t>(0xc9),
    __E_Driver_HmdUnknown = static_cast<int32_t>(0xca),
    __E_Driver_NotLoaded = static_cast<int32_t>(0xcb),
    __E_Driver_RuntimeOutOfDate = static_cast<int32_t>(0xcc),
    __E_Driver_HmdInUse = static_cast<int32_t>(0xcd),
    __E_Driver_NotCalibrated = static_cast<int32_t>(0xce),
    __E_Driver_CalibrationInvalid = static_cast<int32_t>(0xcf),
    __E_Driver_HmdDisplayNotFound = static_cast<int32_t>(0xd0),
    __E_Driver_TrackedDeviceInterfaceUnknown = static_cast<int32_t>(0xd1),
    __E_Driver_HmdDriverIdOutOfBounds = static_cast<int32_t>(0xd3),
    __E_Driver_HmdDisplayMirrored = static_cast<int32_t>(0xd4),
    __E_IPC_ServerInitFailed = static_cast<int32_t>(0x12c),
    __E_IPC_ConnectFailed = static_cast<int32_t>(0x12d),
    __E_IPC_SharedStateInitFailed = static_cast<int32_t>(0x12e),
    __E_IPC_CompositorInitFailed = static_cast<int32_t>(0x12f),
    __E_IPC_MutexInitFailed = static_cast<int32_t>(0x130),
    __E_IPC_Failed = static_cast<int32_t>(0x131),
    __E_IPC_CompositorConnectFailed = static_cast<int32_t>(0x132),
    __E_IPC_CompositorInvalidConnectResponse = static_cast<int32_t>(0x133),
    __E_IPC_ConnectFailedAfterMultipleAttempts = static_cast<int32_t>(0x134),
    __E_Compositor_Failed = static_cast<int32_t>(0x190),
    __E_Compositor_D3D11HardwareRequired = static_cast<int32_t>(0x191),
    __E_Compositor_FirmwareRequiresUpdate = static_cast<int32_t>(0x192),
    __E_Compositor_OverlayInitFailed = static_cast<int32_t>(0x193),
    __E_Compositor_ScreenshotsInitFailed = static_cast<int32_t>(0x194),
    __E_Compositor_UnableToCreateDevice = static_cast<int32_t>(0x195),
    __E_VendorSpecific_UnableToConnectToOculusRuntime = static_cast<int32_t>(0x3e8),
    __E_VendorSpecific_WindowsNotInDevMode = static_cast<int32_t>(0x3e9),
    __E_VendorSpecific_HmdFound_CantOpenDevice = static_cast<int32_t>(0x44d),
    __E_VendorSpecific_HmdFound_UnableToRequestConfigStart = static_cast<int32_t>(0x44e),
    __E_VendorSpecific_HmdFound_NoStoredConfig = static_cast<int32_t>(0x44f),
    __E_VendorSpecific_HmdFound_ConfigTooBig = static_cast<int32_t>(0x450),
    __E_VendorSpecific_HmdFound_ConfigTooSmall = static_cast<int32_t>(0x451),
    __E_VendorSpecific_HmdFound_UnableToInitZLib = static_cast<int32_t>(0x452),
    __E_VendorSpecific_HmdFound_CantReadFirmwareVersion = static_cast<int32_t>(0x453),
    __E_VendorSpecific_HmdFound_UnableToSendUserDataStart = static_cast<int32_t>(0x454),
    __E_VendorSpecific_HmdFound_UnableToGetUserDataStart = static_cast<int32_t>(0x455),
    __E_VendorSpecific_HmdFound_UnableToGetUserDataNext = static_cast<int32_t>(0x456),
    __E_VendorSpecific_HmdFound_UserDataAddressRange = static_cast<int32_t>(0x457),
    __E_VendorSpecific_HmdFound_UserDataError = static_cast<int32_t>(0x458),
    __E_VendorSpecific_HmdFound_ConfigFailedSanityCheck = static_cast<int32_t>(0x459),
    __E_Steam_SteamInstallationNotFound = static_cast<int32_t>(0x7d0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRInitError_Unwrapped() const noexcept {
    return static_cast<__EVRInitError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRInitError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRInitError(int32_t value__) noexcept;

  /// @brief Field Compositor_D3D11HardwareRequired value: I32(401)
  static ::OVR::OpenVR::EVRInitError const Compositor_D3D11HardwareRequired;

  /// @brief Field Compositor_Failed value: I32(400)
  static ::OVR::OpenVR::EVRInitError const Compositor_Failed;

  /// @brief Field Compositor_FirmwareRequiresUpdate value: I32(402)
  static ::OVR::OpenVR::EVRInitError const Compositor_FirmwareRequiresUpdate;

  /// @brief Field Compositor_OverlayInitFailed value: I32(403)
  static ::OVR::OpenVR::EVRInitError const Compositor_OverlayInitFailed;

  /// @brief Field Compositor_ScreenshotsInitFailed value: I32(404)
  static ::OVR::OpenVR::EVRInitError const Compositor_ScreenshotsInitFailed;

  /// @brief Field Compositor_UnableToCreateDevice value: I32(405)
  static ::OVR::OpenVR::EVRInitError const Compositor_UnableToCreateDevice;

  /// @brief Field Driver_CalibrationInvalid value: I32(207)
  static ::OVR::OpenVR::EVRInitError const Driver_CalibrationInvalid;

  /// @brief Field Driver_Failed value: I32(200)
  static ::OVR::OpenVR::EVRInitError const Driver_Failed;

  /// @brief Field Driver_HmdDisplayMirrored value: I32(212)
  static ::OVR::OpenVR::EVRInitError const Driver_HmdDisplayMirrored;

  /// @brief Field Driver_HmdDisplayNotFound value: I32(208)
  static ::OVR::OpenVR::EVRInitError const Driver_HmdDisplayNotFound;

  /// @brief Field Driver_HmdDriverIdOutOfBounds value: I32(211)
  static ::OVR::OpenVR::EVRInitError const Driver_HmdDriverIdOutOfBounds;

  /// @brief Field Driver_HmdInUse value: I32(205)
  static ::OVR::OpenVR::EVRInitError const Driver_HmdInUse;

  /// @brief Field Driver_HmdUnknown value: I32(202)
  static ::OVR::OpenVR::EVRInitError const Driver_HmdUnknown;

  /// @brief Field Driver_NotCalibrated value: I32(206)
  static ::OVR::OpenVR::EVRInitError const Driver_NotCalibrated;

  /// @brief Field Driver_NotLoaded value: I32(203)
  static ::OVR::OpenVR::EVRInitError const Driver_NotLoaded;

  /// @brief Field Driver_RuntimeOutOfDate value: I32(204)
  static ::OVR::OpenVR::EVRInitError const Driver_RuntimeOutOfDate;

  /// @brief Field Driver_TrackedDeviceInterfaceUnknown value: I32(209)
  static ::OVR::OpenVR::EVRInitError const Driver_TrackedDeviceInterfaceUnknown;

  /// @brief Field Driver_Unknown value: I32(201)
  static ::OVR::OpenVR::EVRInitError const Driver_Unknown;

  /// @brief Field IPC_CompositorConnectFailed value: I32(306)
  static ::OVR::OpenVR::EVRInitError const IPC_CompositorConnectFailed;

  /// @brief Field IPC_CompositorInitFailed value: I32(303)
  static ::OVR::OpenVR::EVRInitError const IPC_CompositorInitFailed;

  /// @brief Field IPC_CompositorInvalidConnectResponse value: I32(307)
  static ::OVR::OpenVR::EVRInitError const IPC_CompositorInvalidConnectResponse;

  /// @brief Field IPC_ConnectFailed value: I32(301)
  static ::OVR::OpenVR::EVRInitError const IPC_ConnectFailed;

  /// @brief Field IPC_ConnectFailedAfterMultipleAttempts value: I32(308)
  static ::OVR::OpenVR::EVRInitError const IPC_ConnectFailedAfterMultipleAttempts;

  /// @brief Field IPC_Failed value: I32(305)
  static ::OVR::OpenVR::EVRInitError const IPC_Failed;

  /// @brief Field IPC_MutexInitFailed value: I32(304)
  static ::OVR::OpenVR::EVRInitError const IPC_MutexInitFailed;

  /// @brief Field IPC_ServerInitFailed value: I32(300)
  static ::OVR::OpenVR::EVRInitError const IPC_ServerInitFailed;

  /// @brief Field IPC_SharedStateInitFailed value: I32(302)
  static ::OVR::OpenVR::EVRInitError const IPC_SharedStateInitFailed;

  /// @brief Field Init_AnotherAppLaunching value: I32(117)
  static ::OVR::OpenVR::EVRInitError const Init_AnotherAppLaunching;

  /// @brief Field Init_AppInfoInitFailed value: I32(114)
  static ::OVR::OpenVR::EVRInitError const Init_AppInfoInitFailed;

  /// @brief Field Init_FactoryNotFound value: I32(104)
  static ::OVR::OpenVR::EVRInitError const Init_FactoryNotFound;

  /// @brief Field Init_FileNotFound value: I32(103)
  static ::OVR::OpenVR::EVRInitError const Init_FileNotFound;

  /// @brief Field Init_FirmwareRecoveryBusy value: I32(139)
  static ::OVR::OpenVR::EVRInitError const Init_FirmwareRecoveryBusy;

  /// @brief Field Init_FirmwareUpdateBusy value: I32(138)
  static ::OVR::OpenVR::EVRInitError const Init_FirmwareUpdateBusy;

  /// @brief Field Init_HmdDriverIdIsNone value: I32(125)
  static ::OVR::OpenVR::EVRInitError const Init_HmdDriverIdIsNone;

  /// @brief Field Init_HmdNotFound value: I32(108)
  static ::OVR::OpenVR::EVRInitError const Init_HmdNotFound;

  /// @brief Field Init_HmdNotFoundPresenceFailed value: I32(126)
  static ::OVR::OpenVR::EVRInitError const Init_HmdNotFoundPresenceFailed;

  /// @brief Field Init_InitCanceledByUser value: I32(116)
  static ::OVR::OpenVR::EVRInitError const Init_InitCanceledByUser;

  /// @brief Field Init_InstallationCorrupt value: I32(101)
  static ::OVR::OpenVR::EVRInitError const Init_InstallationCorrupt;

  /// @brief Field Init_InstallationNotFound value: I32(100)
  static ::OVR::OpenVR::EVRInitError const Init_InstallationNotFound;

  /// @brief Field Init_InterfaceNotFound value: I32(105)
  static ::OVR::OpenVR::EVRInitError const Init_InterfaceNotFound;

  /// @brief Field Init_Internal value: I32(124)
  static ::OVR::OpenVR::EVRInitError const Init_Internal;

  /// @brief Field Init_InvalidApplicationType value: I32(130)
  static ::OVR::OpenVR::EVRInitError const Init_InvalidApplicationType;

  /// @brief Field Init_InvalidInterface value: I32(106)
  static ::OVR::OpenVR::EVRInitError const Init_InvalidInterface;

  /// @brief Field Init_LowPowerWatchdogNotSupported value: I32(129)
  static ::OVR::OpenVR::EVRInitError const Init_LowPowerWatchdogNotSupported;

  /// @brief Field Init_NoConfigPath value: I32(111)
  static ::OVR::OpenVR::EVRInitError const Init_NoConfigPath;

  /// @brief Field Init_NoLogPath value: I32(112)
  static ::OVR::OpenVR::EVRInitError const Init_NoLogPath;

  /// @brief Field Init_NoServerForBackgroundApp value: I32(121)
  static ::OVR::OpenVR::EVRInitError const Init_NoServerForBackgroundApp;

  /// @brief Field Init_NotAvailableToUtilityApps value: I32(123)
  static ::OVR::OpenVR::EVRInitError const Init_NotAvailableToUtilityApps;

  /// @brief Field Init_NotAvailableToWatchdogApps value: I32(131)
  static ::OVR::OpenVR::EVRInitError const Init_NotAvailableToWatchdogApps;

  /// @brief Field Init_NotInitialized value: I32(109)
  static ::OVR::OpenVR::EVRInitError const Init_NotInitialized;

  /// @brief Field Init_NotSupportedWithCompositor value: I32(122)
  static ::OVR::OpenVR::EVRInitError const Init_NotSupportedWithCompositor;

  /// @brief Field Init_PathRegistryNotFound value: I32(110)
  static ::OVR::OpenVR::EVRInitError const Init_PathRegistryNotFound;

  /// @brief Field Init_PathRegistryNotWritable value: I32(113)
  static ::OVR::OpenVR::EVRInitError const Init_PathRegistryNotWritable;

  /// @brief Field Init_RebootingBusy value: I32(137)
  static ::OVR::OpenVR::EVRInitError const Init_RebootingBusy;

  /// @brief Field Init_Retry value: I32(115)
  static ::OVR::OpenVR::EVRInitError const Init_Retry;

  /// @brief Field Init_SettingsInitFailed value: I32(118)
  static ::OVR::OpenVR::EVRInitError const Init_SettingsInitFailed;

  /// @brief Field Init_ShuttingDown value: I32(119)
  static ::OVR::OpenVR::EVRInitError const Init_ShuttingDown;

  /// @brief Field Init_TooManyObjects value: I32(120)
  static ::OVR::OpenVR::EVRInitError const Init_TooManyObjects;

  /// @brief Field Init_TrackerManagerInitFailed value: I32(142)
  static ::OVR::OpenVR::EVRInitError const Init_TrackerManagerInitFailed;

  /// @brief Field Init_USBServiceBusy value: I32(140)
  static ::OVR::OpenVR::EVRInitError const Init_USBServiceBusy;

  /// @brief Field Init_UserConfigDirectoryInvalid value: I32(107)
  static ::OVR::OpenVR::EVRInitError const Init_UserConfigDirectoryInvalid;

  /// @brief Field Init_VRClientDLLNotFound value: I32(102)
  static ::OVR::OpenVR::EVRInitError const Init_VRClientDLLNotFound;

  /// @brief Field Init_VRDashboardNotFound value: I32(133)
  static ::OVR::OpenVR::EVRInitError const Init_VRDashboardNotFound;

  /// @brief Field Init_VRDashboardStartupFailed value: I32(134)
  static ::OVR::OpenVR::EVRInitError const Init_VRDashboardStartupFailed;

  /// @brief Field Init_VRHomeNotFound value: I32(135)
  static ::OVR::OpenVR::EVRInitError const Init_VRHomeNotFound;

  /// @brief Field Init_VRHomeStartupFailed value: I32(136)
  static ::OVR::OpenVR::EVRInitError const Init_VRHomeStartupFailed;

  /// @brief Field Init_VRMonitorNotFound value: I32(127)
  static ::OVR::OpenVR::EVRInitError const Init_VRMonitorNotFound;

  /// @brief Field Init_VRMonitorStartupFailed value: I32(128)
  static ::OVR::OpenVR::EVRInitError const Init_VRMonitorStartupFailed;

  /// @brief Field Init_VRWebHelperStartupFailed value: I32(141)
  static ::OVR::OpenVR::EVRInitError const Init_VRWebHelperStartupFailed;

  /// @brief Field Init_WatchdogDisabledInSettings value: I32(132)
  static ::OVR::OpenVR::EVRInitError const Init_WatchdogDisabledInSettings;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRInitError const None;

  /// @brief Field Steam_SteamInstallationNotFound value: I32(2000)
  static ::OVR::OpenVR::EVRInitError const Steam_SteamInstallationNotFound;

  /// @brief Field Unknown value: I32(1)
  static ::OVR::OpenVR::EVRInitError const Unknown;

  /// @brief Field VendorSpecific_HmdFound_CantOpenDevice value: I32(1101)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_CantOpenDevice;

  /// @brief Field VendorSpecific_HmdFound_CantReadFirmwareVersion value: I32(1107)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_CantReadFirmwareVersion;

  /// @brief Field VendorSpecific_HmdFound_ConfigFailedSanityCheck value: I32(1113)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_ConfigFailedSanityCheck;

  /// @brief Field VendorSpecific_HmdFound_ConfigTooBig value: I32(1104)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_ConfigTooBig;

  /// @brief Field VendorSpecific_HmdFound_ConfigTooSmall value: I32(1105)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_ConfigTooSmall;

  /// @brief Field VendorSpecific_HmdFound_NoStoredConfig value: I32(1103)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_NoStoredConfig;

  /// @brief Field VendorSpecific_HmdFound_UnableToGetUserDataNext value: I32(1110)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToGetUserDataNext;

  /// @brief Field VendorSpecific_HmdFound_UnableToGetUserDataStart value: I32(1109)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToGetUserDataStart;

  /// @brief Field VendorSpecific_HmdFound_UnableToInitZLib value: I32(1106)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToInitZLib;

  /// @brief Field VendorSpecific_HmdFound_UnableToRequestConfigStart value: I32(1102)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToRequestConfigStart;

  /// @brief Field VendorSpecific_HmdFound_UnableToSendUserDataStart value: I32(1108)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UnableToSendUserDataStart;

  /// @brief Field VendorSpecific_HmdFound_UserDataAddressRange value: I32(1111)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UserDataAddressRange;

  /// @brief Field VendorSpecific_HmdFound_UserDataError value: I32(1112)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_HmdFound_UserDataError;

  /// @brief Field VendorSpecific_UnableToConnectToOculusRuntime value: I32(1000)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_UnableToConnectToOculusRuntime;

  /// @brief Field VendorSpecific_WindowsNotInDevMode value: I32(1001)
  static ::OVR::OpenVR::EVRInitError const VendorSpecific_WindowsNotInDevMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8923 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRInitError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRInitError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRInitError, "OVR.OpenVR", "EVRInitError");
