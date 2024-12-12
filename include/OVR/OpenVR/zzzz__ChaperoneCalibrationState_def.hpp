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
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.ChaperoneCalibrationState
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

  /// @brief Field Error value: I32(200)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error;

  /// @brief Field Error_BaseStationConflict value: I32(202)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationConflict;

  /// @brief Field Error_BaseStationUninitialized value: I32(201)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationUninitialized;

  /// @brief Field Error_CollisionBoundsInvalid value: I32(204)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_CollisionBoundsInvalid;

  /// @brief Field Error_PlayAreaInvalid value: I32(203)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Error_PlayAreaInvalid;

  /// @brief Field OK value: I32(1)
  static ::OVR::OpenVR::ChaperoneCalibrationState const OK;

  /// @brief Field Warning value: I32(100)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning;

  /// @brief Field Warning_BaseStationMayHaveMoved value: I32(101)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationMayHaveMoved;

  /// @brief Field Warning_BaseStationRemoved value: I32(102)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationRemoved;

  /// @brief Field Warning_SeatedBoundsInvalid value: I32(103)
  static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_SeatedBoundsInvalid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8932 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::ChaperoneCalibrationState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ChaperoneCalibrationState, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ChaperoneCalibrationState, "OVR.OpenVR", "ChaperoneCalibrationState");
