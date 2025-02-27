#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRApplicationError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRApplicationError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRApplicationError
struct CORDL_TYPE EVRApplicationError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRApplicationError_Unwrapped
  enum struct __EVRApplicationError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AppKeyAlreadyExists = static_cast<int32_t>(0x64),
    __E_NoManifest = static_cast<int32_t>(0x65),
    __E_NoApplication = static_cast<int32_t>(0x66),
    __E_InvalidIndex = static_cast<int32_t>(0x67),
    __E_UnknownApplication = static_cast<int32_t>(0x68),
    __E_IPCFailed = static_cast<int32_t>(0x69),
    __E_ApplicationAlreadyRunning = static_cast<int32_t>(0x6a),
    __E_InvalidManifest = static_cast<int32_t>(0x6b),
    __E_InvalidApplication = static_cast<int32_t>(0x6c),
    __E_LaunchFailed = static_cast<int32_t>(0x6d),
    __E_ApplicationAlreadyStarting = static_cast<int32_t>(0x6e),
    __E_LaunchInProgress = static_cast<int32_t>(0x6f),
    __E_OldApplicationQuitting = static_cast<int32_t>(0x70),
    __E_TransitionAborted = static_cast<int32_t>(0x71),
    __E_IsTemplate = static_cast<int32_t>(0x72),
    __E_SteamVRIsExiting = static_cast<int32_t>(0x73),
    __E_BufferTooSmall = static_cast<int32_t>(0xc8),
    __E_PropertyNotSet = static_cast<int32_t>(0xc9),
    __E_UnknownProperty = static_cast<int32_t>(0xca),
    __E_InvalidParameter = static_cast<int32_t>(0xcb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRApplicationError_Unwrapped() const noexcept {
    return static_cast<__EVRApplicationError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRApplicationError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRApplicationError(int32_t value__) noexcept;

  /// @brief Field AppKeyAlreadyExists value: I32(100)
  static ::OVR::OpenVR::EVRApplicationError const AppKeyAlreadyExists;

  /// @brief Field ApplicationAlreadyRunning value: I32(106)
  static ::OVR::OpenVR::EVRApplicationError const ApplicationAlreadyRunning;

  /// @brief Field ApplicationAlreadyStarting value: I32(110)
  static ::OVR::OpenVR::EVRApplicationError const ApplicationAlreadyStarting;

  /// @brief Field BufferTooSmall value: I32(200)
  static ::OVR::OpenVR::EVRApplicationError const BufferTooSmall;

  /// @brief Field IPCFailed value: I32(105)
  static ::OVR::OpenVR::EVRApplicationError const IPCFailed;

  /// @brief Field InvalidApplication value: I32(108)
  static ::OVR::OpenVR::EVRApplicationError const InvalidApplication;

  /// @brief Field InvalidIndex value: I32(103)
  static ::OVR::OpenVR::EVRApplicationError const InvalidIndex;

  /// @brief Field InvalidManifest value: I32(107)
  static ::OVR::OpenVR::EVRApplicationError const InvalidManifest;

  /// @brief Field InvalidParameter value: I32(203)
  static ::OVR::OpenVR::EVRApplicationError const InvalidParameter;

  /// @brief Field IsTemplate value: I32(114)
  static ::OVR::OpenVR::EVRApplicationError const IsTemplate;

  /// @brief Field LaunchFailed value: I32(109)
  static ::OVR::OpenVR::EVRApplicationError const LaunchFailed;

  /// @brief Field LaunchInProgress value: I32(111)
  static ::OVR::OpenVR::EVRApplicationError const LaunchInProgress;

  /// @brief Field NoApplication value: I32(102)
  static ::OVR::OpenVR::EVRApplicationError const NoApplication;

  /// @brief Field NoManifest value: I32(101)
  static ::OVR::OpenVR::EVRApplicationError const NoManifest;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRApplicationError const None;

  /// @brief Field OldApplicationQuitting value: I32(112)
  static ::OVR::OpenVR::EVRApplicationError const OldApplicationQuitting;

  /// @brief Field PropertyNotSet value: I32(201)
  static ::OVR::OpenVR::EVRApplicationError const PropertyNotSet;

  /// @brief Field SteamVRIsExiting value: I32(115)
  static ::OVR::OpenVR::EVRApplicationError const SteamVRIsExiting;

  /// @brief Field TransitionAborted value: I32(113)
  static ::OVR::OpenVR::EVRApplicationError const TransitionAborted;

  /// @brief Field UnknownApplication value: I32(104)
  static ::OVR::OpenVR::EVRApplicationError const UnknownApplication;

  /// @brief Field UnknownProperty value: I32(202)
  static ::OVR::OpenVR::EVRApplicationError const UnknownProperty;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8934 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRApplicationError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRApplicationError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationError, "OVR.OpenVR", "EVRApplicationError");
