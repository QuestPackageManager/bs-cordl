#pragma once
// IWYU pragma private; include "OVR/OpenVR/ChaperoneCalibrationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChaperoneCalibrationState)
// Forward declare root types
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ChaperoneCalibrationState);
// Type: OVR.OpenVR::ChaperoneCalibrationState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::ChaperoneCalibrationState
struct CORDL_TYPE ChaperoneCalibrationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ChaperoneCalibrationState_Unwrapped
  enum struct __ChaperoneCalibrationState_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x64),
    __E_Warning_BaseStationMayHaveMoved = static_cast<int32_t>(0x65),
    __E_Warning_BaseStationRemoved = static_cast<int32_t>(0x66),
    __E_Warning_SeatedBoundsInvalid = static_cast<int32_t>(0x67),
    __E_Error = static_cast<int32_t>(0xc8),
    __E_Error_BaseStationUninitialized = static_cast<int32_t>(0xc9),
    __E_Error_BaseStationConflict = static_cast<int32_t>(0xca),
    __E_Error_PlayAreaInvalid = static_cast<int32_t>(0xcb),
    __E_Error_CollisionBoundsInvalid = static_cast<int32_t>(0xcc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ChaperoneCalibrationState_Unwrapped() const noexcept {
    return static_cast<__ChaperoneCalibrationState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChaperoneCalibrationState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChaperoneCalibrationState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0xc8)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error;

  /// @brief Field Error_BaseStationConflict value: static_cast<int32_t>(0xca)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationConflict;

  /// @brief Field Error_BaseStationUninitialized value: static_cast<int32_t>(0xc9)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationUninitialized;

  /// @brief Field Error_CollisionBoundsInvalid value: static_cast<int32_t>(0xcc)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_CollisionBoundsInvalid;

  /// @brief Field Error_PlayAreaInvalid value: static_cast<int32_t>(0xcb)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_PlayAreaInvalid;

  /// @brief Field OK value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::ChaperoneCalibrationState const OK;

  /// @brief Field Warning value: static_cast<int32_t>(0x64)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning;

  /// @brief Field Warning_BaseStationMayHaveMoved value: static_cast<int32_t>(0x65)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationMayHaveMoved;

  /// @brief Field Warning_BaseStationRemoved value: static_cast<int32_t>(0x66)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationRemoved;

  /// @brief Field Warning_SeatedBoundsInvalid value: static_cast<int32_t>(0x67)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_SeatedBoundsInvalid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ChaperoneCalibrationState, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::ChaperoneCalibrationState, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ChaperoneCalibrationState, "OVR.OpenVR", "ChaperoneCalibrationState");
