#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidSensorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidSensorType)
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType);
// Dependencies
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorType
struct CORDL_TYPE AndroidSensorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidSensorType_Unwrapped
  enum struct __AndroidSensorType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Accelerometer = static_cast<int32_t>(0x1),
    __E_MagneticField = static_cast<int32_t>(0x2),
    __E_Orientation = static_cast<int32_t>(0x3),
    __E_Gyroscope = static_cast<int32_t>(0x4),
    __E_Light = static_cast<int32_t>(0x5),
    __E_Pressure = static_cast<int32_t>(0x6),
    __E_Temperature = static_cast<int32_t>(0x7),
    __E_Proximity = static_cast<int32_t>(0x8),
    __E_Gravity = static_cast<int32_t>(0x9),
    __E_LinearAcceleration = static_cast<int32_t>(0xa),
    __E_RotationVector = static_cast<int32_t>(0xb),
    __E_RelativeHumidity = static_cast<int32_t>(0xc),
    __E_AmbientTemperature = static_cast<int32_t>(0xd),
    __E_MagneticFieldUncalibrated = static_cast<int32_t>(0xe),
    __E_GameRotationVector = static_cast<int32_t>(0xf),
    __E_GyroscopeUncalibrated = static_cast<int32_t>(0x10),
    __E_SignificantMotion = static_cast<int32_t>(0x11),
    __E_StepDetector = static_cast<int32_t>(0x12),
    __E_StepCounter = static_cast<int32_t>(0x13),
    __E_GeomagneticRotationVector = static_cast<int32_t>(0x14),
    __E_HeartRate = static_cast<int32_t>(0x15),
    __E_Pose6DOF = static_cast<int32_t>(0x1c),
    __E_StationaryDetect = static_cast<int32_t>(0x1d),
    __E_MotionDetect = static_cast<int32_t>(0x1e),
    __E_HeartBeat = static_cast<int32_t>(0x1f),
    __E_LowLatencyOffBodyDetect = static_cast<int32_t>(0x22),
    __E_AccelerometerUncalibrated = static_cast<int32_t>(0x23),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidSensorType_Unwrapped() const noexcept {
    return static_cast<__AndroidSensorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSensorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidSensorType(int32_t value__) noexcept;

  /// @brief Field Accelerometer value: I32(1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Accelerometer;

  /// @brief Field AccelerometerUncalibrated value: I32(35)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const AccelerometerUncalibrated;

  /// @brief Field AmbientTemperature value: I32(13)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const AmbientTemperature;

  /// @brief Field GameRotationVector value: I32(15)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GameRotationVector;

  /// @brief Field GeomagneticRotationVector value: I32(20)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GeomagneticRotationVector;

  /// @brief Field Gravity value: I32(9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Gravity;

  /// @brief Field Gyroscope value: I32(4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Gyroscope;

  /// @brief Field GyroscopeUncalibrated value: I32(16)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GyroscopeUncalibrated;

  /// @brief Field HeartBeat value: I32(31)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const HeartBeat;

  /// @brief Field HeartRate value: I32(21)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const HeartRate;

  /// @brief Field Light value: I32(5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Light;

  /// @brief Field LinearAcceleration value: I32(10)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const LinearAcceleration;

  /// @brief Field LowLatencyOffBodyDetect value: I32(34)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const LowLatencyOffBodyDetect;

  /// @brief Field MagneticField value: I32(2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MagneticField;

  /// @brief Field MagneticFieldUncalibrated value: I32(14)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MagneticFieldUncalibrated;

  /// @brief Field MotionDetect value: I32(30)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MotionDetect;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const None;

  /// @brief Field Orientation value: I32(3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Orientation;

  /// @brief Field Pose6DOF value: I32(28)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Pose6DOF;

  /// @brief Field Pressure value: I32(6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Pressure;

  /// @brief Field Proximity value: I32(8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Proximity;

  /// @brief Field RelativeHumidity value: I32(12)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const RelativeHumidity;

  /// @brief Field RotationVector value: I32(11)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const RotationVector;

  /// @brief Field SignificantMotion value: I32(17)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const SignificantMotion;

  /// @brief Field StationaryDetect value: I32(29)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StationaryDetect;

  /// @brief Field StepCounter value: I32(19)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StepCounter;

  /// @brief Field StepDetector value: I32(18)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StepDetector;

  /// @brief Field Temperature value: I32(7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Temperature;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6859 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorType");
