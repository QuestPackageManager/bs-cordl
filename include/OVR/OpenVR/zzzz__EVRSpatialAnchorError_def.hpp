#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRSpatialAnchorError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSpatialAnchorError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSpatialAnchorError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRSpatialAnchorError
struct CORDL_TYPE EVRSpatialAnchorError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRSpatialAnchorError_Unwrapped
  enum struct __EVRSpatialAnchorError_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Internal = static_cast<int32_t>(0x1),
    __E_UnknownHandle = static_cast<int32_t>(0x2),
    __E_ArrayTooSmall = static_cast<int32_t>(0x3),
    __E_InvalidDescriptorChar = static_cast<int32_t>(0x4),
    __E_NotYetAvailable = static_cast<int32_t>(0x5),
    __E_NotAvailableInThisUniverse = static_cast<int32_t>(0x6),
    __E_PermanentlyUnavailable = static_cast<int32_t>(0x7),
    __E_WrongDriver = static_cast<int32_t>(0x8),
    __E_DescriptorTooLong = static_cast<int32_t>(0x9),
    __E_Unknown = static_cast<int32_t>(0xa),
    __E_NoRoomCalibration = static_cast<int32_t>(0xb),
    __E_InvalidArgument = static_cast<int32_t>(0xc),
    __E_UnknownDriver = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRSpatialAnchorError_Unwrapped() const noexcept {
    return static_cast<__EVRSpatialAnchorError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRSpatialAnchorError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRSpatialAnchorError(int32_t value__) noexcept;

  /// @brief Field ArrayTooSmall value: I32(3)
  static ::OVR::OpenVR::EVRSpatialAnchorError const ArrayTooSmall;

  /// @brief Field DescriptorTooLong value: I32(9)
  static ::OVR::OpenVR::EVRSpatialAnchorError const DescriptorTooLong;

  /// @brief Field Internal value: I32(1)
  static ::OVR::OpenVR::EVRSpatialAnchorError const Internal;

  /// @brief Field InvalidArgument value: I32(12)
  static ::OVR::OpenVR::EVRSpatialAnchorError const InvalidArgument;

  /// @brief Field InvalidDescriptorChar value: I32(4)
  static ::OVR::OpenVR::EVRSpatialAnchorError const InvalidDescriptorChar;

  /// @brief Field NoRoomCalibration value: I32(11)
  static ::OVR::OpenVR::EVRSpatialAnchorError const NoRoomCalibration;

  /// @brief Field NotAvailableInThisUniverse value: I32(6)
  static ::OVR::OpenVR::EVRSpatialAnchorError const NotAvailableInThisUniverse;

  /// @brief Field NotYetAvailable value: I32(5)
  static ::OVR::OpenVR::EVRSpatialAnchorError const NotYetAvailable;

  /// @brief Field PermanentlyUnavailable value: I32(7)
  static ::OVR::OpenVR::EVRSpatialAnchorError const PermanentlyUnavailable;

  /// @brief Field Success value: I32(0)
  static ::OVR::OpenVR::EVRSpatialAnchorError const Success;

  /// @brief Field Unknown value: I32(10)
  static ::OVR::OpenVR::EVRSpatialAnchorError const Unknown;

  /// @brief Field UnknownDriver value: I32(13)
  static ::OVR::OpenVR::EVRSpatialAnchorError const UnknownDriver;

  /// @brief Field UnknownHandle value: I32(2)
  static ::OVR::OpenVR::EVRSpatialAnchorError const UnknownHandle;

  /// @brief Field WrongDriver value: I32(8)
  static ::OVR::OpenVR::EVRSpatialAnchorError const WrongDriver;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8910 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRSpatialAnchorError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSpatialAnchorError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSpatialAnchorError, "OVR.OpenVR", "EVRSpatialAnchorError");
