#pragma once
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
// Type: OVR.OpenVR::EVRInputError
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8596))
// CS Name: ::OVR.OpenVR::EVRInputError
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRInputError(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRInputError();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRInputError const None;

  /// @brief Field NameNotFound value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRInputError const NameNotFound;

  /// @brief Field WrongType value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EVRInputError const WrongType;

  /// @brief Field InvalidHandle value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::EVRInputError const InvalidHandle;

  /// @brief Field InvalidParam value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::EVRInputError const InvalidParam;

  /// @brief Field NoSteam value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::EVRInputError const NoSteam;

  /// @brief Field MaxCapacityReached value: static_cast<int32_t>(0x6)
  static ::OVR::OpenVR::EVRInputError const MaxCapacityReached;

  /// @brief Field IPCError value: static_cast<int32_t>(0x7)
  static ::OVR::OpenVR::EVRInputError const IPCError;

  /// @brief Field NoActiveActionSet value: static_cast<int32_t>(0x8)
  static ::OVR::OpenVR::EVRInputError const NoActiveActionSet;

  /// @brief Field InvalidDevice value: static_cast<int32_t>(0x9)
  static ::OVR::OpenVR::EVRInputError const InvalidDevice;

  /// @brief Field InvalidSkeleton value: static_cast<int32_t>(0xa)
  static ::OVR::OpenVR::EVRInputError const InvalidSkeleton;

  /// @brief Field InvalidBoneCount value: static_cast<int32_t>(0xb)
  static ::OVR::OpenVR::EVRInputError const InvalidBoneCount;

  /// @brief Field InvalidCompressedData value: static_cast<int32_t>(0xc)
  static ::OVR::OpenVR::EVRInputError const InvalidCompressedData;

  /// @brief Field NoData value: static_cast<int32_t>(0xd)
  static ::OVR::OpenVR::EVRInputError const NoData;

  /// @brief Field BufferTooSmall value: static_cast<int32_t>(0xe)
  static ::OVR::OpenVR::EVRInputError const BufferTooSmall;

  /// @brief Field MismatchedActionManifest value: static_cast<int32_t>(0xf)
  static ::OVR::OpenVR::EVRInputError const MismatchedActionManifest;

  /// @brief Field MissingSkeletonData value: static_cast<int32_t>(0x10)
  static ::OVR::OpenVR::EVRInputError const MissingSkeletonData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRInputError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRInputError, "OVR.OpenVR", "EVRInputError");
