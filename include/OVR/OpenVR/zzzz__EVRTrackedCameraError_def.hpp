#pragma once
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
// Type: OVR.OpenVR::EVRTrackedCameraError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8554))
// CS Name: ::OVR.OpenVR::EVRTrackedCameraError
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRTrackedCameraError(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRTrackedCameraError();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRTrackedCameraError const None;

  /// @brief Field OperationFailed value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::EVRTrackedCameraError const OperationFailed;

  /// @brief Field InvalidHandle value: static_cast<int32_t>(0x65)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidHandle;

  /// @brief Field InvalidFrameHeaderVersion value: static_cast<int32_t>(0x66)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidFrameHeaderVersion;

  /// @brief Field OutOfHandles value: static_cast<int32_t>(0x67)
  static ::OVR::OpenVR::EVRTrackedCameraError const OutOfHandles;

  /// @brief Field IPCFailure value: static_cast<int32_t>(0x68)
  static ::OVR::OpenVR::EVRTrackedCameraError const IPCFailure;

  /// @brief Field NotSupportedForThisDevice value: static_cast<int32_t>(0x69)
  static ::OVR::OpenVR::EVRTrackedCameraError const NotSupportedForThisDevice;

  /// @brief Field SharedMemoryFailure value: static_cast<int32_t>(0x6a)
  static ::OVR::OpenVR::EVRTrackedCameraError const SharedMemoryFailure;

  /// @brief Field FrameBufferingFailure value: static_cast<int32_t>(0x6b)
  static ::OVR::OpenVR::EVRTrackedCameraError const FrameBufferingFailure;

  /// @brief Field StreamSetupFailure value: static_cast<int32_t>(0x6c)
  static ::OVR::OpenVR::EVRTrackedCameraError const StreamSetupFailure;

  /// @brief Field InvalidGLTextureId value: static_cast<int32_t>(0x6d)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidGLTextureId;

  /// @brief Field InvalidSharedTextureHandle value: static_cast<int32_t>(0x6e)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidSharedTextureHandle;

  /// @brief Field FailedToGetGLTextureId value: static_cast<int32_t>(0x6f)
  static ::OVR::OpenVR::EVRTrackedCameraError const FailedToGetGLTextureId;

  /// @brief Field SharedTextureFailure value: static_cast<int32_t>(0x70)
  static ::OVR::OpenVR::EVRTrackedCameraError const SharedTextureFailure;

  /// @brief Field NoFrameAvailable value: static_cast<int32_t>(0x71)
  static ::OVR::OpenVR::EVRTrackedCameraError const NoFrameAvailable;

  /// @brief Field InvalidArgument value: static_cast<int32_t>(0x72)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidArgument;

  /// @brief Field InvalidFrameBufferSize value: static_cast<int32_t>(0x73)
  static ::OVR::OpenVR::EVRTrackedCameraError const InvalidFrameBufferSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRTrackedCameraError, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRTrackedCameraError, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRTrackedCameraError, "OVR.OpenVR", "EVRTrackedCameraError");
