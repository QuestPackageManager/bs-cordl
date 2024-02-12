#pragma once
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
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5713))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidSensorType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidSensorType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSensorType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const None;

  /// @brief Field Accelerometer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Accelerometer;

  /// @brief Field MagneticField value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MagneticField;

  /// @brief Field Orientation value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Orientation;

  /// @brief Field Gyroscope value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Gyroscope;

  /// @brief Field Light value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Light;

  /// @brief Field Pressure value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Pressure;

  /// @brief Field Temperature value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Temperature;

  /// @brief Field Proximity value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Proximity;

  /// @brief Field Gravity value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Gravity;

  /// @brief Field LinearAcceleration value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const LinearAcceleration;

  /// @brief Field RotationVector value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const RotationVector;

  /// @brief Field RelativeHumidity value: static_cast<int32_t>(0xc)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const RelativeHumidity;

  /// @brief Field AmbientTemperature value: static_cast<int32_t>(0xd)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const AmbientTemperature;

  /// @brief Field MagneticFieldUncalibrated value: static_cast<int32_t>(0xe)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MagneticFieldUncalibrated;

  /// @brief Field GameRotationVector value: static_cast<int32_t>(0xf)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GameRotationVector;

  /// @brief Field GyroscopeUncalibrated value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GyroscopeUncalibrated;

  /// @brief Field SignificantMotion value: static_cast<int32_t>(0x11)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const SignificantMotion;

  /// @brief Field StepDetector value: static_cast<int32_t>(0x12)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StepDetector;

  /// @brief Field StepCounter value: static_cast<int32_t>(0x13)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StepCounter;

  /// @brief Field GeomagneticRotationVector value: static_cast<int32_t>(0x14)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const GeomagneticRotationVector;

  /// @brief Field HeartRate value: static_cast<int32_t>(0x15)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const HeartRate;

  /// @brief Field Pose6DOF value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const Pose6DOF;

  /// @brief Field StationaryDetect value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const StationaryDetect;

  /// @brief Field MotionDetect value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const MotionDetect;

  /// @brief Field HeartBeat value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const HeartBeat;

  /// @brief Field LowLatencyOffBodyDetect value: static_cast<int32_t>(0x22)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const LowLatencyOffBodyDetect;

  /// @brief Field AccelerometerUncalibrated value: static_cast<int32_t>(0x23)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const AccelerometerUncalibrated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorType");
