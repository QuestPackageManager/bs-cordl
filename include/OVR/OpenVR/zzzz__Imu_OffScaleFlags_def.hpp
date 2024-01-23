#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Imu_OffScaleFlags)
// Forward declare root types
namespace OVR::OpenVR {
struct Imu_OffScaleFlags;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Imu_OffScaleFlags);
// Type: OVR.OpenVR::Imu_OffScaleFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8615))
// CS Name: ::OVR.OpenVR::Imu_OffScaleFlags
struct CORDL_TYPE Imu_OffScaleFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Imu_OffScaleFlags_Unwrapped
  enum struct __Imu_OffScaleFlags_Unwrapped : int32_t {
    __E_OffScale_AccelX = static_cast<int32_t>(0x1),
    __E_OffScale_AccelY = static_cast<int32_t>(0x2),
    __E_OffScale_AccelZ = static_cast<int32_t>(0x4),
    __E_OffScale_GyroX = static_cast<int32_t>(0x8),
    __E_OffScale_GyroY = static_cast<int32_t>(0x10),
    __E_OffScale_GyroZ = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Imu_OffScaleFlags_Unwrapped() const noexcept {
    return static_cast<__Imu_OffScaleFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Imu_OffScaleFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Imu_OffScaleFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OffScale_AccelX value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_AccelX;

  /// @brief Field OffScale_AccelY value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_AccelY;

  /// @brief Field OffScale_AccelZ value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_AccelZ;

  /// @brief Field OffScale_GyroX value: static_cast<int32_t>(0x8)
  static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_GyroX;

  /// @brief Field OffScale_GyroY value: static_cast<int32_t>(0x10)
  static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_GyroY;

  /// @brief Field OffScale_GyroZ value: static_cast<int32_t>(0x20)
  static ::OVR::OpenVR::Imu_OffScaleFlags const OffScale_GyroZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Imu_OffScaleFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::Imu_OffScaleFlags, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Imu_OffScaleFlags, "OVR.OpenVR", "Imu_OffScaleFlags");
