#pragma once
// IWYU pragma private; include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETrackedDeviceProperty)
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETrackedDeviceProperty);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.ETrackedDeviceProperty
struct CORDL_TYPE ETrackedDeviceProperty {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ETrackedDeviceProperty_Unwrapped
  enum struct __ETrackedDeviceProperty_Unwrapped : int32_t {
    __E_Prop_Invalid = static_cast<int32_t>(0x0),
    __E_Prop_TrackingSystemName_String = static_cast<int32_t>(0x3e8),
    __E_Prop_ModelNumber_String = static_cast<int32_t>(0x3e9),
    __E_Prop_SerialNumber_String = static_cast<int32_t>(0x3ea),
    __E_Prop_RenderModelName_String = static_cast<int32_t>(0x3eb),
    __E_Prop_WillDriftInYaw_Bool = static_cast<int32_t>(0x3ec),
    __E_Prop_ManufacturerName_String = static_cast<int32_t>(0x3ed),
    __E_Prop_TrackingFirmwareVersion_String = static_cast<int32_t>(0x3ee),
    __E_Prop_HardwareRevision_String = static_cast<int32_t>(0x3ef),
    __E_Prop_AllWirelessDongleDescriptions_String = static_cast<int32_t>(0x3f0),
    __E_Prop_ConnectedWirelessDongle_String = static_cast<int32_t>(0x3f1),
    __E_Prop_DeviceIsWireless_Bool = static_cast<int32_t>(0x3f2),
    __E_Prop_DeviceIsCharging_Bool = static_cast<int32_t>(0x3f3),
    __E_Prop_DeviceBatteryPercentage_Float = static_cast<int32_t>(0x3f4),
    __E_Prop_StatusDisplayTransform_Matrix34 = static_cast<int32_t>(0x3f5),
    __E_Prop_Firmware_UpdateAvailable_Bool = static_cast<int32_t>(0x3f6),
    __E_Prop_Firmware_ManualUpdate_Bool = static_cast<int32_t>(0x3f7),
    __E_Prop_Firmware_ManualUpdateURL_String = static_cast<int32_t>(0x3f8),
    __E_Prop_HardwareRevision_Uint64 = static_cast<int32_t>(0x3f9),
    __E_Prop_FirmwareVersion_Uint64 = static_cast<int32_t>(0x3fa),
    __E_Prop_FPGAVersion_Uint64 = static_cast<int32_t>(0x3fb),
    __E_Prop_VRCVersion_Uint64 = static_cast<int32_t>(0x3fc),
    __E_Prop_RadioVersion_Uint64 = static_cast<int32_t>(0x3fd),
    __E_Prop_DongleVersion_Uint64 = static_cast<int32_t>(0x3fe),
    __E_Prop_BlockServerShutdown_Bool = static_cast<int32_t>(0x3ff),
    __E_Prop_CanUnifyCoordinateSystemWithHmd_Bool = static_cast<int32_t>(0x400),
    __E_Prop_ContainsProximitySensor_Bool = static_cast<int32_t>(0x401),
    __E_Prop_DeviceProvidesBatteryStatus_Bool = static_cast<int32_t>(0x402),
    __E_Prop_DeviceCanPowerOff_Bool = static_cast<int32_t>(0x403),
    __E_Prop_Firmware_ProgrammingTarget_String = static_cast<int32_t>(0x404),
    __E_Prop_DeviceClass_Int32 = static_cast<int32_t>(0x405),
    __E_Prop_HasCamera_Bool = static_cast<int32_t>(0x406),
    __E_Prop_DriverVersion_String = static_cast<int32_t>(0x407),
    __E_Prop_Firmware_ForceUpdateRequired_Bool = static_cast<int32_t>(0x408),
    __E_Prop_ViveSystemButtonFixRequired_Bool = static_cast<int32_t>(0x409),
    __E_Prop_ParentDriver_Uint64 = static_cast<int32_t>(0x40a),
    __E_Prop_ResourceRoot_String = static_cast<int32_t>(0x40b),
    __E_Prop_RegisteredDeviceType_String = static_cast<int32_t>(0x40c),
    __E_Prop_InputProfilePath_String = static_cast<int32_t>(0x40d),
    __E_Prop_NeverTracked_Bool = static_cast<int32_t>(0x40e),
    __E_Prop_NumCameras_Int32 = static_cast<int32_t>(0x40f),
    __E_Prop_CameraFrameLayout_Int32 = static_cast<int32_t>(0x410),
    __E_Prop_ReportsTimeSinceVSync_Bool = static_cast<int32_t>(0x7d0),
    __E_Prop_SecondsFromVsyncToPhotons_Float = static_cast<int32_t>(0x7d1),
    __E_Prop_DisplayFrequency_Float = static_cast<int32_t>(0x7d2),
    __E_Prop_UserIpdMeters_Float = static_cast<int32_t>(0x7d3),
    __E_Prop_CurrentUniverseId_Uint64 = static_cast<int32_t>(0x7d4),
    __E_Prop_PreviousUniverseId_Uint64 = static_cast<int32_t>(0x7d5),
    __E_Prop_DisplayFirmwareVersion_Uint64 = static_cast<int32_t>(0x7d6),
    __E_Prop_IsOnDesktop_Bool = static_cast<int32_t>(0x7d7),
    __E_Prop_DisplayMCType_Int32 = static_cast<int32_t>(0x7d8),
    __E_Prop_DisplayMCOffset_Float = static_cast<int32_t>(0x7d9),
    __E_Prop_DisplayMCScale_Float = static_cast<int32_t>(0x7da),
    __E_Prop_EdidVendorID_Int32 = static_cast<int32_t>(0x7db),
    __E_Prop_DisplayMCImageLeft_String = static_cast<int32_t>(0x7dc),
    __E_Prop_DisplayMCImageRight_String = static_cast<int32_t>(0x7dd),
    __E_Prop_DisplayGCBlackClamp_Float = static_cast<int32_t>(0x7de),
    __E_Prop_EdidProductID_Int32 = static_cast<int32_t>(0x7df),
    __E_Prop_CameraToHeadTransform_Matrix34 = static_cast<int32_t>(0x7e0),
    __E_Prop_DisplayGCType_Int32 = static_cast<int32_t>(0x7e1),
    __E_Prop_DisplayGCOffset_Float = static_cast<int32_t>(0x7e2),
    __E_Prop_DisplayGCScale_Float = static_cast<int32_t>(0x7e3),
    __E_Prop_DisplayGCPrescale_Float = static_cast<int32_t>(0x7e4),
    __E_Prop_DisplayGCImage_String = static_cast<int32_t>(0x7e5),
    __E_Prop_LensCenterLeftU_Float = static_cast<int32_t>(0x7e6),
    __E_Prop_LensCenterLeftV_Float = static_cast<int32_t>(0x7e7),
    __E_Prop_LensCenterRightU_Float = static_cast<int32_t>(0x7e8),
    __E_Prop_LensCenterRightV_Float = static_cast<int32_t>(0x7e9),
    __E_Prop_UserHeadToEyeDepthMeters_Float = static_cast<int32_t>(0x7ea),
    __E_Prop_CameraFirmwareVersion_Uint64 = static_cast<int32_t>(0x7eb),
    __E_Prop_CameraFirmwareDescription_String = static_cast<int32_t>(0x7ec),
    __E_Prop_DisplayFPGAVersion_Uint64 = static_cast<int32_t>(0x7ed),
    __E_Prop_DisplayBootloaderVersion_Uint64 = static_cast<int32_t>(0x7ee),
    __E_Prop_DisplayHardwareVersion_Uint64 = static_cast<int32_t>(0x7ef),
    __E_Prop_AudioFirmwareVersion_Uint64 = static_cast<int32_t>(0x7f0),
    __E_Prop_CameraCompatibilityMode_Int32 = static_cast<int32_t>(0x7f1),
    __E_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = static_cast<int32_t>(0x7f2),
    __E_Prop_ScreenshotVerticalFieldOfViewDegrees_Float = static_cast<int32_t>(0x7f3),
    __E_Prop_DisplaySuppressed_Bool = static_cast<int32_t>(0x7f4),
    __E_Prop_DisplayAllowNightMode_Bool = static_cast<int32_t>(0x7f5),
    __E_Prop_DisplayMCImageWidth_Int32 = static_cast<int32_t>(0x7f6),
    __E_Prop_DisplayMCImageHeight_Int32 = static_cast<int32_t>(0x7f7),
    __E_Prop_DisplayMCImageNumChannels_Int32 = static_cast<int32_t>(0x7f8),
    __E_Prop_DisplayMCImageData_Binary = static_cast<int32_t>(0x7f9),
    __E_Prop_SecondsFromPhotonsToVblank_Float = static_cast<int32_t>(0x7fa),
    __E_Prop_DriverDirectModeSendsVsyncEvents_Bool = static_cast<int32_t>(0x7fb),
    __E_Prop_DisplayDebugMode_Bool = static_cast<int32_t>(0x7fc),
    __E_Prop_GraphicsAdapterLuid_Uint64 = static_cast<int32_t>(0x7fd),
    __E_Prop_DriverProvidedChaperonePath_String = static_cast<int32_t>(0x800),
    __E_Prop_ExpectedTrackingReferenceCount_Int32 = static_cast<int32_t>(0x801),
    __E_Prop_ExpectedControllerCount_Int32 = static_cast<int32_t>(0x802),
    __E_Prop_NamedIconPathControllerLeftDeviceOff_String = static_cast<int32_t>(0x803),
    __E_Prop_NamedIconPathControllerRightDeviceOff_String = static_cast<int32_t>(0x804),
    __E_Prop_NamedIconPathTrackingReferenceDeviceOff_String = static_cast<int32_t>(0x805),
    __E_Prop_DoNotApplyPrediction_Bool = static_cast<int32_t>(0x806),
    __E_Prop_CameraToHeadTransforms_Matrix34_Array = static_cast<int32_t>(0x807),
    __E_Prop_DistortionMeshResolution_Int32 = static_cast<int32_t>(0x808),
    __E_Prop_DriverIsDrawingControllers_Bool = static_cast<int32_t>(0x809),
    __E_Prop_DriverRequestsApplicationPause_Bool = static_cast<int32_t>(0x80a),
    __E_Prop_DriverRequestsReducedRendering_Bool = static_cast<int32_t>(0x80b),
    __E_Prop_MinimumIpdStepMeters_Float = static_cast<int32_t>(0x80c),
    __E_Prop_AudioBridgeFirmwareVersion_Uint64 = static_cast<int32_t>(0x80d),
    __E_Prop_ImageBridgeFirmwareVersion_Uint64 = static_cast<int32_t>(0x80e),
    __E_Prop_ImuToHeadTransform_Matrix34 = static_cast<int32_t>(0x80f),
    __E_Prop_ImuFactoryGyroBias_Vector3 = static_cast<int32_t>(0x810),
    __E_Prop_ImuFactoryGyroScale_Vector3 = static_cast<int32_t>(0x811),
    __E_Prop_ImuFactoryAccelerometerBias_Vector3 = static_cast<int32_t>(0x812),
    __E_Prop_ImuFactoryAccelerometerScale_Vector3 = static_cast<int32_t>(0x813),
    __E_Prop_ConfigurationIncludesLighthouse20Features_Bool = static_cast<int32_t>(0x815),
    __E_Prop_DriverRequestedMuraCorrectionMode_Int32 = static_cast<int32_t>(0x898),
    __E_Prop_DriverRequestedMuraFeather_InnerLeft_Int32 = static_cast<int32_t>(0x899),
    __E_Prop_DriverRequestedMuraFeather_InnerRight_Int32 = static_cast<int32_t>(0x89a),
    __E_Prop_DriverRequestedMuraFeather_InnerTop_Int32 = static_cast<int32_t>(0x89b),
    __E_Prop_DriverRequestedMuraFeather_InnerBottom_Int32 = static_cast<int32_t>(0x89c),
    __E_Prop_DriverRequestedMuraFeather_OuterLeft_Int32 = static_cast<int32_t>(0x89d),
    __E_Prop_DriverRequestedMuraFeather_OuterRight_Int32 = static_cast<int32_t>(0x89e),
    __E_Prop_DriverRequestedMuraFeather_OuterTop_Int32 = static_cast<int32_t>(0x89f),
    __E_Prop_DriverRequestedMuraFeather_OuterBottom_Int32 = static_cast<int32_t>(0x8a0),
    __E_Prop_AttachedDeviceId_String = static_cast<int32_t>(0xbb8),
    __E_Prop_SupportedButtons_Uint64 = static_cast<int32_t>(0xbb9),
    __E_Prop_Axis0Type_Int32 = static_cast<int32_t>(0xbba),
    __E_Prop_Axis1Type_Int32 = static_cast<int32_t>(0xbbb),
    __E_Prop_Axis2Type_Int32 = static_cast<int32_t>(0xbbc),
    __E_Prop_Axis3Type_Int32 = static_cast<int32_t>(0xbbd),
    __E_Prop_Axis4Type_Int32 = static_cast<int32_t>(0xbbe),
    __E_Prop_ControllerRoleHint_Int32 = static_cast<int32_t>(0xbbf),
    __E_Prop_FieldOfViewLeftDegrees_Float = static_cast<int32_t>(0xfa0),
    __E_Prop_FieldOfViewRightDegrees_Float = static_cast<int32_t>(0xfa1),
    __E_Prop_FieldOfViewTopDegrees_Float = static_cast<int32_t>(0xfa2),
    __E_Prop_FieldOfViewBottomDegrees_Float = static_cast<int32_t>(0xfa3),
    __E_Prop_TrackingRangeMinimumMeters_Float = static_cast<int32_t>(0xfa4),
    __E_Prop_TrackingRangeMaximumMeters_Float = static_cast<int32_t>(0xfa5),
    __E_Prop_ModeLabel_String = static_cast<int32_t>(0xfa6),
    __E_Prop_IconPathName_String = static_cast<int32_t>(0x1388),
    __E_Prop_NamedIconPathDeviceOff_String = static_cast<int32_t>(0x1389),
    __E_Prop_NamedIconPathDeviceSearching_String = static_cast<int32_t>(0x138a),
    __E_Prop_NamedIconPathDeviceSearchingAlert_String = static_cast<int32_t>(0x138b),
    __E_Prop_NamedIconPathDeviceReady_String = static_cast<int32_t>(0x138c),
    __E_Prop_NamedIconPathDeviceReadyAlert_String = static_cast<int32_t>(0x138d),
    __E_Prop_NamedIconPathDeviceNotReady_String = static_cast<int32_t>(0x138e),
    __E_Prop_NamedIconPathDeviceStandby_String = static_cast<int32_t>(0x138f),
    __E_Prop_NamedIconPathDeviceAlertLow_String = static_cast<int32_t>(0x1390),
    __E_Prop_DisplayHiddenArea_Binary_Start = static_cast<int32_t>(0x13ec),
    __E_Prop_DisplayHiddenArea_Binary_End = static_cast<int32_t>(0x141e),
    __E_Prop_ParentContainer = static_cast<int32_t>(0x141f),
    __E_Prop_UserConfigPath_String = static_cast<int32_t>(0x1770),
    __E_Prop_InstallPath_String = static_cast<int32_t>(0x1771),
    __E_Prop_HasDisplayComponent_Bool = static_cast<int32_t>(0x1772),
    __E_Prop_HasControllerComponent_Bool = static_cast<int32_t>(0x1773),
    __E_Prop_HasCameraComponent_Bool = static_cast<int32_t>(0x1774),
    __E_Prop_HasDriverDirectModeComponent_Bool = static_cast<int32_t>(0x1775),
    __E_Prop_HasVirtualDisplayComponent_Bool = static_cast<int32_t>(0x1776),
    __E_Prop_HasSpatialAnchorsSupport_Bool = static_cast<int32_t>(0x1777),
    __E_Prop_ControllerType_String = static_cast<int32_t>(0x1b58),
    __E_Prop_LegacyInputProfile_String = static_cast<int32_t>(0x1b59),
    __E_Prop_VendorSpecific_Reserved_Start = static_cast<int32_t>(0x2710),
    __E_Prop_VendorSpecific_Reserved_End = static_cast<int32_t>(0x2af7),
    __E_Prop_TrackedDeviceProperty_Max = static_cast<int32_t>(0xf4240),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ETrackedDeviceProperty_Unwrapped() const noexcept {
    return static_cast<__ETrackedDeviceProperty_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ETrackedDeviceProperty();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ETrackedDeviceProperty(int32_t value__) noexcept;

  /// @brief Field Prop_AllWirelessDongleDescriptions_String value: I32(1008)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AllWirelessDongleDescriptions_String;

  /// @brief Field Prop_AttachedDeviceId_String value: I32(3000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AttachedDeviceId_String;

  /// @brief Field Prop_AudioBridgeFirmwareVersion_Uint64 value: I32(2061)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AudioBridgeFirmwareVersion_Uint64;

  /// @brief Field Prop_AudioFirmwareVersion_Uint64 value: I32(2032)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_AudioFirmwareVersion_Uint64;

  /// @brief Field Prop_Axis0Type_Int32 value: I32(3002)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis0Type_Int32;

  /// @brief Field Prop_Axis1Type_Int32 value: I32(3003)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis1Type_Int32;

  /// @brief Field Prop_Axis2Type_Int32 value: I32(3004)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis2Type_Int32;

  /// @brief Field Prop_Axis3Type_Int32 value: I32(3005)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis3Type_Int32;

  /// @brief Field Prop_Axis4Type_Int32 value: I32(3006)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Axis4Type_Int32;

  /// @brief Field Prop_BlockServerShutdown_Bool value: I32(1023)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_BlockServerShutdown_Bool;

  /// @brief Field Prop_CameraCompatibilityMode_Int32 value: I32(2033)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraCompatibilityMode_Int32;

  /// @brief Field Prop_CameraFirmwareDescription_String value: I32(2028)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraFirmwareDescription_String;

  /// @brief Field Prop_CameraFirmwareVersion_Uint64 value: I32(2027)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraFirmwareVersion_Uint64;

  /// @brief Field Prop_CameraFrameLayout_Int32 value: I32(1040)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraFrameLayout_Int32;

  /// @brief Field Prop_CameraToHeadTransform_Matrix34 value: I32(2016)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraToHeadTransform_Matrix34;

  /// @brief Field Prop_CameraToHeadTransforms_Matrix34_Array value: I32(2055)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CameraToHeadTransforms_Matrix34_Array;

  /// @brief Field Prop_CanUnifyCoordinateSystemWithHmd_Bool value: I32(1024)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CanUnifyCoordinateSystemWithHmd_Bool;

  /// @brief Field Prop_ConfigurationIncludesLighthouse20Features_Bool value: I32(2069)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ConfigurationIncludesLighthouse20Features_Bool;

  /// @brief Field Prop_ConnectedWirelessDongle_String value: I32(1009)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ConnectedWirelessDongle_String;

  /// @brief Field Prop_ContainsProximitySensor_Bool value: I32(1025)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ContainsProximitySensor_Bool;

  /// @brief Field Prop_ControllerRoleHint_Int32 value: I32(3007)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ControllerRoleHint_Int32;

  /// @brief Field Prop_ControllerType_String value: I32(7000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ControllerType_String;

  /// @brief Field Prop_CurrentUniverseId_Uint64 value: I32(2004)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_CurrentUniverseId_Uint64;

  /// @brief Field Prop_DeviceBatteryPercentage_Float value: I32(1012)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceBatteryPercentage_Float;

  /// @brief Field Prop_DeviceCanPowerOff_Bool value: I32(1027)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceCanPowerOff_Bool;

  /// @brief Field Prop_DeviceClass_Int32 value: I32(1029)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceClass_Int32;

  /// @brief Field Prop_DeviceIsCharging_Bool value: I32(1011)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceIsCharging_Bool;

  /// @brief Field Prop_DeviceIsWireless_Bool value: I32(1010)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceIsWireless_Bool;

  /// @brief Field Prop_DeviceProvidesBatteryStatus_Bool value: I32(1026)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DeviceProvidesBatteryStatus_Bool;

  /// @brief Field Prop_DisplayAllowNightMode_Bool value: I32(2037)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayAllowNightMode_Bool;

  /// @brief Field Prop_DisplayBootloaderVersion_Uint64 value: I32(2030)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayBootloaderVersion_Uint64;

  /// @brief Field Prop_DisplayDebugMode_Bool value: I32(2044)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayDebugMode_Bool;

  /// @brief Field Prop_DisplayFPGAVersion_Uint64 value: I32(2029)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayFPGAVersion_Uint64;

  /// @brief Field Prop_DisplayFirmwareVersion_Uint64 value: I32(2006)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayFirmwareVersion_Uint64;

  /// @brief Field Prop_DisplayFrequency_Float value: I32(2002)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayFrequency_Float;

  /// @brief Field Prop_DisplayGCBlackClamp_Float value: I32(2014)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCBlackClamp_Float;

  /// @brief Field Prop_DisplayGCImage_String value: I32(2021)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCImage_String;

  /// @brief Field Prop_DisplayGCOffset_Float value: I32(2018)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCOffset_Float;

  /// @brief Field Prop_DisplayGCPrescale_Float value: I32(2020)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCPrescale_Float;

  /// @brief Field Prop_DisplayGCScale_Float value: I32(2019)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCScale_Float;

  /// @brief Field Prop_DisplayGCType_Int32 value: I32(2017)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayGCType_Int32;

  /// @brief Field Prop_DisplayHardwareVersion_Uint64 value: I32(2031)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayHardwareVersion_Uint64;

  /// @brief Field Prop_DisplayHiddenArea_Binary_End value: I32(5150)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayHiddenArea_Binary_End;

  /// @brief Field Prop_DisplayHiddenArea_Binary_Start value: I32(5100)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayHiddenArea_Binary_Start;

  /// @brief Field Prop_DisplayMCImageData_Binary value: I32(2041)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageData_Binary;

  /// @brief Field Prop_DisplayMCImageHeight_Int32 value: I32(2039)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageHeight_Int32;

  /// @brief Field Prop_DisplayMCImageLeft_String value: I32(2012)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageLeft_String;

  /// @brief Field Prop_DisplayMCImageNumChannels_Int32 value: I32(2040)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageNumChannels_Int32;

  /// @brief Field Prop_DisplayMCImageRight_String value: I32(2013)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageRight_String;

  /// @brief Field Prop_DisplayMCImageWidth_Int32 value: I32(2038)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCImageWidth_Int32;

  /// @brief Field Prop_DisplayMCOffset_Float value: I32(2009)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCOffset_Float;

  /// @brief Field Prop_DisplayMCScale_Float value: I32(2010)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCScale_Float;

  /// @brief Field Prop_DisplayMCType_Int32 value: I32(2008)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplayMCType_Int32;

  /// @brief Field Prop_DisplaySuppressed_Bool value: I32(2036)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DisplaySuppressed_Bool;

  /// @brief Field Prop_DistortionMeshResolution_Int32 value: I32(2056)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DistortionMeshResolution_Int32;

  /// @brief Field Prop_DoNotApplyPrediction_Bool value: I32(2054)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DoNotApplyPrediction_Bool;

  /// @brief Field Prop_DongleVersion_Uint64 value: I32(1022)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DongleVersion_Uint64;

  /// @brief Field Prop_DriverDirectModeSendsVsyncEvents_Bool value: I32(2043)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverDirectModeSendsVsyncEvents_Bool;

  /// @brief Field Prop_DriverIsDrawingControllers_Bool value: I32(2057)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverIsDrawingControllers_Bool;

  /// @brief Field Prop_DriverProvidedChaperonePath_String value: I32(2048)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverProvidedChaperonePath_String;

  /// @brief Field Prop_DriverRequestedMuraCorrectionMode_Int32 value: I32(2200)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraCorrectionMode_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_InnerBottom_Int32 value: I32(2204)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerBottom_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_InnerLeft_Int32 value: I32(2201)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerLeft_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_InnerRight_Int32 value: I32(2202)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerRight_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_InnerTop_Int32 value: I32(2203)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_InnerTop_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_OuterBottom_Int32 value: I32(2208)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterBottom_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_OuterLeft_Int32 value: I32(2205)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterLeft_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_OuterRight_Int32 value: I32(2206)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterRight_Int32;

  /// @brief Field Prop_DriverRequestedMuraFeather_OuterTop_Int32 value: I32(2207)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestedMuraFeather_OuterTop_Int32;

  /// @brief Field Prop_DriverRequestsApplicationPause_Bool value: I32(2058)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestsApplicationPause_Bool;

  /// @brief Field Prop_DriverRequestsReducedRendering_Bool value: I32(2059)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverRequestsReducedRendering_Bool;

  /// @brief Field Prop_DriverVersion_String value: I32(1031)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_DriverVersion_String;

  /// @brief Field Prop_EdidProductID_Int32 value: I32(2015)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_EdidProductID_Int32;

  /// @brief Field Prop_EdidVendorID_Int32 value: I32(2011)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_EdidVendorID_Int32;

  /// @brief Field Prop_ExpectedControllerCount_Int32 value: I32(2050)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ExpectedControllerCount_Int32;

  /// @brief Field Prop_ExpectedTrackingReferenceCount_Int32 value: I32(2049)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ExpectedTrackingReferenceCount_Int32;

  /// @brief Field Prop_FPGAVersion_Uint64 value: I32(1019)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FPGAVersion_Uint64;

  /// @brief Field Prop_FieldOfViewBottomDegrees_Float value: I32(4003)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewBottomDegrees_Float;

  /// @brief Field Prop_FieldOfViewLeftDegrees_Float value: I32(4000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewLeftDegrees_Float;

  /// @brief Field Prop_FieldOfViewRightDegrees_Float value: I32(4001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewRightDegrees_Float;

  /// @brief Field Prop_FieldOfViewTopDegrees_Float value: I32(4002)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FieldOfViewTopDegrees_Float;

  /// @brief Field Prop_FirmwareVersion_Uint64 value: I32(1018)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_FirmwareVersion_Uint64;

  /// @brief Field Prop_Firmware_ForceUpdateRequired_Bool value: I32(1032)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ForceUpdateRequired_Bool;

  /// @brief Field Prop_Firmware_ManualUpdateURL_String value: I32(1016)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ManualUpdateURL_String;

  /// @brief Field Prop_Firmware_ManualUpdate_Bool value: I32(1015)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ManualUpdate_Bool;

  /// @brief Field Prop_Firmware_ProgrammingTarget_String value: I32(1028)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_ProgrammingTarget_String;

  /// @brief Field Prop_Firmware_UpdateAvailable_Bool value: I32(1014)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Firmware_UpdateAvailable_Bool;

  /// @brief Field Prop_GraphicsAdapterLuid_Uint64 value: I32(2045)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_GraphicsAdapterLuid_Uint64;

  /// @brief Field Prop_HardwareRevision_String value: I32(1007)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HardwareRevision_String;

  /// @brief Field Prop_HardwareRevision_Uint64 value: I32(1017)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HardwareRevision_Uint64;

  /// @brief Field Prop_HasCameraComponent_Bool value: I32(6004)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasCameraComponent_Bool;

  /// @brief Field Prop_HasCamera_Bool value: I32(1030)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasCamera_Bool;

  /// @brief Field Prop_HasControllerComponent_Bool value: I32(6003)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasControllerComponent_Bool;

  /// @brief Field Prop_HasDisplayComponent_Bool value: I32(6002)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasDisplayComponent_Bool;

  /// @brief Field Prop_HasDriverDirectModeComponent_Bool value: I32(6005)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasDriverDirectModeComponent_Bool;

  /// @brief Field Prop_HasSpatialAnchorsSupport_Bool value: I32(6007)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasSpatialAnchorsSupport_Bool;

  /// @brief Field Prop_HasVirtualDisplayComponent_Bool value: I32(6006)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_HasVirtualDisplayComponent_Bool;

  /// @brief Field Prop_IconPathName_String value: I32(5000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_IconPathName_String;

  /// @brief Field Prop_ImageBridgeFirmwareVersion_Uint64 value: I32(2062)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImageBridgeFirmwareVersion_Uint64;

  /// @brief Field Prop_ImuFactoryAccelerometerBias_Vector3 value: I32(2066)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryAccelerometerBias_Vector3;

  /// @brief Field Prop_ImuFactoryAccelerometerScale_Vector3 value: I32(2067)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryAccelerometerScale_Vector3;

  /// @brief Field Prop_ImuFactoryGyroBias_Vector3 value: I32(2064)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryGyroBias_Vector3;

  /// @brief Field Prop_ImuFactoryGyroScale_Vector3 value: I32(2065)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuFactoryGyroScale_Vector3;

  /// @brief Field Prop_ImuToHeadTransform_Matrix34 value: I32(2063)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ImuToHeadTransform_Matrix34;

  /// @brief Field Prop_InputProfilePath_String value: I32(1037)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_InputProfilePath_String;

  /// @brief Field Prop_InstallPath_String value: I32(6001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_InstallPath_String;

  /// @brief Field Prop_Invalid value: I32(0)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_Invalid;

  /// @brief Field Prop_IsOnDesktop_Bool value: I32(2007)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_IsOnDesktop_Bool;

  /// @brief Field Prop_LegacyInputProfile_String value: I32(7001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LegacyInputProfile_String;

  /// @brief Field Prop_LensCenterLeftU_Float value: I32(2022)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterLeftU_Float;

  /// @brief Field Prop_LensCenterLeftV_Float value: I32(2023)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterLeftV_Float;

  /// @brief Field Prop_LensCenterRightU_Float value: I32(2024)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterRightU_Float;

  /// @brief Field Prop_LensCenterRightV_Float value: I32(2025)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_LensCenterRightV_Float;

  /// @brief Field Prop_ManufacturerName_String value: I32(1005)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ManufacturerName_String;

  /// @brief Field Prop_MinimumIpdStepMeters_Float value: I32(2060)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_MinimumIpdStepMeters_Float;

  /// @brief Field Prop_ModeLabel_String value: I32(4006)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ModeLabel_String;

  /// @brief Field Prop_ModelNumber_String value: I32(1001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ModelNumber_String;

  /// @brief Field Prop_NamedIconPathControllerLeftDeviceOff_String value: I32(2051)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathControllerLeftDeviceOff_String;

  /// @brief Field Prop_NamedIconPathControllerRightDeviceOff_String value: I32(2052)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathControllerRightDeviceOff_String;

  /// @brief Field Prop_NamedIconPathDeviceAlertLow_String value: I32(5008)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceAlertLow_String;

  /// @brief Field Prop_NamedIconPathDeviceNotReady_String value: I32(5006)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceNotReady_String;

  /// @brief Field Prop_NamedIconPathDeviceOff_String value: I32(5001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceOff_String;

  /// @brief Field Prop_NamedIconPathDeviceReadyAlert_String value: I32(5005)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceReadyAlert_String;

  /// @brief Field Prop_NamedIconPathDeviceReady_String value: I32(5004)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceReady_String;

  /// @brief Field Prop_NamedIconPathDeviceSearchingAlert_String value: I32(5003)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceSearchingAlert_String;

  /// @brief Field Prop_NamedIconPathDeviceSearching_String value: I32(5002)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceSearching_String;

  /// @brief Field Prop_NamedIconPathDeviceStandby_String value: I32(5007)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathDeviceStandby_String;

  /// @brief Field Prop_NamedIconPathTrackingReferenceDeviceOff_String value: I32(2053)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NamedIconPathTrackingReferenceDeviceOff_String;

  /// @brief Field Prop_NeverTracked_Bool value: I32(1038)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NeverTracked_Bool;

  /// @brief Field Prop_NumCameras_Int32 value: I32(1039)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_NumCameras_Int32;

  /// @brief Field Prop_ParentContainer value: I32(5151)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ParentContainer;

  /// @brief Field Prop_ParentDriver_Uint64 value: I32(1034)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ParentDriver_Uint64;

  /// @brief Field Prop_PreviousUniverseId_Uint64 value: I32(2005)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_PreviousUniverseId_Uint64;

  /// @brief Field Prop_RadioVersion_Uint64 value: I32(1021)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_RadioVersion_Uint64;

  /// @brief Field Prop_RegisteredDeviceType_String value: I32(1036)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_RegisteredDeviceType_String;

  /// @brief Field Prop_RenderModelName_String value: I32(1003)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_RenderModelName_String;

  /// @brief Field Prop_ReportsTimeSinceVSync_Bool value: I32(2000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ReportsTimeSinceVSync_Bool;

  /// @brief Field Prop_ResourceRoot_String value: I32(1035)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ResourceRoot_String;

  /// @brief Field Prop_ScreenshotHorizontalFieldOfViewDegrees_Float value: I32(2034)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ScreenshotHorizontalFieldOfViewDegrees_Float;

  /// @brief Field Prop_ScreenshotVerticalFieldOfViewDegrees_Float value: I32(2035)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ScreenshotVerticalFieldOfViewDegrees_Float;

  /// @brief Field Prop_SecondsFromPhotonsToVblank_Float value: I32(2042)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SecondsFromPhotonsToVblank_Float;

  /// @brief Field Prop_SecondsFromVsyncToPhotons_Float value: I32(2001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SecondsFromVsyncToPhotons_Float;

  /// @brief Field Prop_SerialNumber_String value: I32(1002)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SerialNumber_String;

  /// @brief Field Prop_StatusDisplayTransform_Matrix34 value: I32(1013)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_StatusDisplayTransform_Matrix34;

  /// @brief Field Prop_SupportedButtons_Uint64 value: I32(3001)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_SupportedButtons_Uint64;

  /// @brief Field Prop_TrackedDeviceProperty_Max value: I32(1000000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackedDeviceProperty_Max;

  /// @brief Field Prop_TrackingFirmwareVersion_String value: I32(1006)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingFirmwareVersion_String;

  /// @brief Field Prop_TrackingRangeMaximumMeters_Float value: I32(4005)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingRangeMaximumMeters_Float;

  /// @brief Field Prop_TrackingRangeMinimumMeters_Float value: I32(4004)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingRangeMinimumMeters_Float;

  /// @brief Field Prop_TrackingSystemName_String value: I32(1000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_TrackingSystemName_String;

  /// @brief Field Prop_UserConfigPath_String value: I32(6000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_UserConfigPath_String;

  /// @brief Field Prop_UserHeadToEyeDepthMeters_Float value: I32(2026)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_UserHeadToEyeDepthMeters_Float;

  /// @brief Field Prop_UserIpdMeters_Float value: I32(2003)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_UserIpdMeters_Float;

  /// @brief Field Prop_VRCVersion_Uint64 value: I32(1020)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_VRCVersion_Uint64;

  /// @brief Field Prop_VendorSpecific_Reserved_End value: I32(10999)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_VendorSpecific_Reserved_End;

  /// @brief Field Prop_VendorSpecific_Reserved_Start value: I32(10000)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_VendorSpecific_Reserved_Start;

  /// @brief Field Prop_ViveSystemButtonFixRequired_Bool value: I32(1033)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_ViveSystemButtonFixRequired_Bool;

  /// @brief Field Prop_WillDriftInYaw_Bool value: I32(1004)
  static ::OVR::OpenVR::ETrackedDeviceProperty const Prop_WillDriftInYaw_Bool;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8382 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::ETrackedDeviceProperty, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETrackedDeviceProperty, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedDeviceProperty, "OVR.OpenVR", "ETrackedDeviceProperty");
