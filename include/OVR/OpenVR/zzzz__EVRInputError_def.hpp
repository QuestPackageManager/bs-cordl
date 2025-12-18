#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRInputError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRInputError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRInputError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRInputError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRInputError
struct CORDL_TYPE EVRInputError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRInputError_Unwrapped
  enum struct __EVRInputError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NameNotFound = static_cast<int32_t>(0x1),
    __E_WrongType = static_cast<int32_t>(0x2),
    __E_InvalidHandle = static_cast<int32_t>(0x3),
    __E_InvalidParam = static_cast<int32_t>(0x4),
    __E_NoSteam = static_cast<int32_t>(0x5),
    __E_MaxCapacityReached = static_cast<int32_t>(0x6),
    __E_IPCError = static_cast<int32_t>(0x7),
    __E_NoActiveActionSet = static_cast<int32_t>(0x8),
    __E_InvalidDevice = static_cast<int32_t>(0x9),
    __E_InvalidSkeleton = static_cast<int32_t>(0xa),
    __E_InvalidBoneCount = static_cast<int32_t>(0xb),
    __E_InvalidCompressedData = static_cast<int32_t>(0xc),
    __E_NoData = static_cast<int32_t>(0xd),
    __E_BufferTooSmall = static_cast<int32_t>(0xe),
    __E_MismatchedActionManifest = static_cast<int32_t>(0xf),
    __E_MissingSkeletonData = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRInputError_Unwrapped() const noexcept {
    return static_cast<__EVRInputError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRInputError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRInputError(int32_t value__) noexcept;

  /// @brief Field BufferTooSmall value: I32(14)
  static ::OVR::OpenVR::EVRInputError const BufferTooSmall;

  /// @brief Field IPCError value: I32(7)
  static ::OVR::OpenVR::EVRInputError const IPCError;

  /// @brief Field InvalidBoneCount value: I32(11)
  static ::OVR::OpenVR::EVRInputError const InvalidBoneCount;

  /// @brief Field InvalidCompressedData value: I32(12)
  static ::OVR::OpenVR::EVRInputError const InvalidCompressedData;

  /// @brief Field InvalidDevice value: I32(9)
  static ::OVR::OpenVR::EVRInputError const InvalidDevice;

  /// @brief Field InvalidHandle value: I32(3)
  static ::OVR::OpenVR::EVRInputError const InvalidHandle;

  /// @brief Field InvalidParam value: I32(4)
  static ::OVR::OpenVR::EVRInputError const InvalidParam;

  /// @brief Field InvalidSkeleton value: I32(10)
  static ::OVR::OpenVR::EVRInputError const InvalidSkeleton;

  /// @brief Field MaxCapacityReached value: I32(6)
  static ::OVR::OpenVR::EVRInputError const MaxCapacityReached;

  /// @brief Field MismatchedActionManifest value: I32(15)
  static ::OVR::OpenVR::EVRInputError const MismatchedActionManifest;

  /// @brief Field MissingSkeletonData value: I32(16)
  static ::OVR::OpenVR::EVRInputError const MissingSkeletonData;

  /// @brief Field NameNotFound value: I32(1)
  static ::OVR::OpenVR::EVRInputError const NameNotFound;

  /// @brief Field NoActiveActionSet value: I32(8)
  static ::OVR::OpenVR::EVRInputError const NoActiveActionSet;

  /// @brief Field NoData value: I32(13)
  static ::OVR::OpenVR::EVRInputError const NoData;

  /// @brief Field NoSteam value: I32(5)
  static ::OVR::OpenVR::EVRInputError const NoSteam;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRInputError const None;

  /// @brief Field WrongType value: I32(2)
  static ::OVR::OpenVR::EVRInputError const WrongType;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8395 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRInputError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRInputError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRInputError, "OVR.OpenVR", "EVRInputError");
