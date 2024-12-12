#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRTrackedCameraError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRTrackedCameraError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRTrackedCameraError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRTrackedCameraError
struct CORDL_TYPE EVRTrackedCameraError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRTrackedCameraError_Unwrapped
  enum struct __EVRTrackedCameraError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OperationFailed = static_cast<int32_t>(0x64),
    __E_InvalidHandle = static_cast<int32_t>(0x65),
    __E_InvalidFrameHeaderVersion = static_cast<int32_t>(0x66),
    __E_OutOfHandles = static_cast<int32_t>(0x67),
    __E_IPCFailure = static_cast<int32_t>(0x68),
    __E_NotSupportedForThisDevice = static_cast<int32_t>(0x69),
    __E_SharedMemoryFailure = static_cast<int32_t>(0x6a),
    __E_FrameBufferingFailure = static_cast<int32_t>(0x6b),
    __E_StreamSetupFailure = static_cast<int32_t>(0x6c),
    __E_InvalidGLTextureId = static_cast<int32_t>(0x6d),
    __E_InvalidSharedTextureHandle = static_cast<int32_t>(0x6e),
    __E_FailedToGetGLTextureId = static_cast<int32_t>(0x6f),
    __E_SharedTextureFailure = static_cast<int32_t>(0x70),
    __E_NoFrameAvailable = static_cast<int32_t>(0x71),
    __E_InvalidArgument = static_cast<int32_t>(0x72),
    __E_InvalidFrameBufferSize = static_cast<int32_t>(0x73),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRTrackedCameraError_Unwrapped() const noexcept {
    return static_cast<__EVRTrackedCameraError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRTrackedCameraError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRTrackedCameraError(int32_t value__) noexcept;

  /// @brief Field FailedToGetGLTextureId value: I32(111)
  static ::OVR::OpenVR::EVRTrackedCameraError const FailedToGetGLTextureId;

  /// @brief Field FrameBufferingFailure value: I32(107)
  static ::OVR::OpenVR::EVRTrackedCameraError const FrameBufferingFailure;

  /// @brief Field IPCFailure value: I32(104)
  static ::OVR::OpenVR::EVRTrackedCameraError const IPCFailure;

  /// @brief Field InvalidArgument value: I32(114)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidArgument;

  /// @brief Field InvalidFrameBufferSize value: I32(115)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidFrameBufferSize;

  /// @brief Field InvalidFrameHeaderVersion value: I32(102)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidFrameHeaderVersion;

  /// @brief Field InvalidGLTextureId value: I32(109)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidGLTextureId;

  /// @brief Field InvalidHandle value: I32(101)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidHandle;

  /// @brief Field InvalidSharedTextureHandle value: I32(110)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidSharedTextureHandle;

  /// @brief Field NoFrameAvailable value: I32(113)
  static ::OVR::OpenVR::EVRTrackedCameraError const NoFrameAvailable;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRTrackedCameraError const None;

  /// @brief Field NotSupportedForThisDevice value: I32(105)
  static ::OVR::OpenVR::EVRTrackedCameraError const NotSupportedForThisDevice;

  /// @brief Field OperationFailed value: I32(100)
  static ::OVR::OpenVR::EVRTrackedCameraError const OperationFailed;

  /// @brief Field OutOfHandles value: I32(103)
  static ::OVR::OpenVR::EVRTrackedCameraError const OutOfHandles;

  /// @brief Field SharedMemoryFailure value: I32(106)
  static ::OVR::OpenVR::EVRTrackedCameraError const SharedMemoryFailure;

  /// @brief Field SharedTextureFailure value: I32(112)
  static ::OVR::OpenVR::EVRTrackedCameraError const SharedTextureFailure;

  /// @brief Field StreamSetupFailure value: I32(108)
  static ::OVR::OpenVR::EVRTrackedCameraError const StreamSetupFailure;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8923 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRTrackedCameraError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRTrackedCameraError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRTrackedCameraError, "OVR.OpenVR", "EVRTrackedCameraError");
