#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidAxis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAxis)
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis);
// Dependencies
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidAxis
struct CORDL_TYPE AndroidAxis {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidAxis_Unwrapped
  enum struct __AndroidAxis_Unwrapped : int32_t {
    __E_X = static_cast<int32_t>(0x0),
    __E_Y = static_cast<int32_t>(0x1),
    __E_Pressure = static_cast<int32_t>(0x2),
    __E_Size = static_cast<int32_t>(0x3),
    __E_TouchMajor = static_cast<int32_t>(0x4),
    __E_TouchMinor = static_cast<int32_t>(0x5),
    __E_ToolMajor = static_cast<int32_t>(0x6),
    __E_ToolMinor = static_cast<int32_t>(0x7),
    __E_Orientation = static_cast<int32_t>(0x8),
    __E_Vscroll = static_cast<int32_t>(0x9),
    __E_Hscroll = static_cast<int32_t>(0xa),
    __E_Z = static_cast<int32_t>(0xb),
    __E_Rx = static_cast<int32_t>(0xc),
    __E_Ry = static_cast<int32_t>(0xd),
    __E_Rz = static_cast<int32_t>(0xe),
    __E_HatX = static_cast<int32_t>(0xf),
    __E_HatY = static_cast<int32_t>(0x10),
    __E_Ltrigger = static_cast<int32_t>(0x11),
    __E_Rtrigger = static_cast<int32_t>(0x12),
    __E_Throttle = static_cast<int32_t>(0x13),
    __E_Rudder = static_cast<int32_t>(0x14),
    __E_Wheel = static_cast<int32_t>(0x15),
    __E_Gas = static_cast<int32_t>(0x16),
    __E_Brake = static_cast<int32_t>(0x17),
    __E_Distance = static_cast<int32_t>(0x18),
    __E_Tilt = static_cast<int32_t>(0x19),
    __E_Generic1 = static_cast<int32_t>(0x20),
    __E_Generic2 = static_cast<int32_t>(0x21),
    __E_Generic3 = static_cast<int32_t>(0x22),
    __E_Generic4 = static_cast<int32_t>(0x23),
    __E_Generic5 = static_cast<int32_t>(0x24),
    __E_Generic6 = static_cast<int32_t>(0x25),
    __E_Generic7 = static_cast<int32_t>(0x26),
    __E_Generic8 = static_cast<int32_t>(0x27),
    __E_Generic9 = static_cast<int32_t>(0x28),
    __E_Generic10 = static_cast<int32_t>(0x29),
    __E_Generic11 = static_cast<int32_t>(0x2a),
    __E_Generic12 = static_cast<int32_t>(0x2b),
    __E_Generic13 = static_cast<int32_t>(0x2c),
    __E_Generic14 = static_cast<int32_t>(0x2d),
    __E_Generic15 = static_cast<int32_t>(0x2e),
    __E_Generic16 = static_cast<int32_t>(0x2f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidAxis_Unwrapped() const noexcept {
    return static_cast<__AndroidAxis_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAxis();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidAxis(int32_t value__) noexcept;

  /// @brief Field Brake value: I32(23)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Brake;

  /// @brief Field Distance value: I32(24)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Distance;

  /// @brief Field Gas value: I32(22)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Gas;

  /// @brief Field Generic1 value: I32(32)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic1;

  /// @brief Field Generic10 value: I32(41)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic10;

  /// @brief Field Generic11 value: I32(42)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic11;

  /// @brief Field Generic12 value: I32(43)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic12;

  /// @brief Field Generic13 value: I32(44)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic13;

  /// @brief Field Generic14 value: I32(45)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic14;

  /// @brief Field Generic15 value: I32(46)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic15;

  /// @brief Field Generic16 value: I32(47)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic16;

  /// @brief Field Generic2 value: I32(33)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic2;

  /// @brief Field Generic3 value: I32(34)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic3;

  /// @brief Field Generic4 value: I32(35)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic4;

  /// @brief Field Generic5 value: I32(36)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic5;

  /// @brief Field Generic6 value: I32(37)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic6;

  /// @brief Field Generic7 value: I32(38)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic7;

  /// @brief Field Generic8 value: I32(39)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic8;

  /// @brief Field Generic9 value: I32(40)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic9;

  /// @brief Field HatX value: I32(15)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const HatX;

  /// @brief Field HatY value: I32(16)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const HatY;

  /// @brief Field Hscroll value: I32(10)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Hscroll;

  /// @brief Field Ltrigger value: I32(17)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Ltrigger;

  /// @brief Field Orientation value: I32(8)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Orientation;

  /// @brief Field Pressure value: I32(2)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Pressure;

  /// @brief Field Rtrigger value: I32(18)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rtrigger;

  /// @brief Field Rudder value: I32(20)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rudder;

  /// @brief Field Rx value: I32(12)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rx;

  /// @brief Field Ry value: I32(13)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Ry;

  /// @brief Field Rz value: I32(14)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rz;

  /// @brief Field Size value: I32(3)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Size;

  /// @brief Field Throttle value: I32(19)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Throttle;

  /// @brief Field Tilt value: I32(25)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Tilt;

  /// @brief Field ToolMajor value: I32(6)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const ToolMajor;

  /// @brief Field ToolMinor value: I32(7)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const ToolMinor;

  /// @brief Field TouchMajor value: I32(4)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const TouchMajor;

  /// @brief Field TouchMinor value: I32(5)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const TouchMinor;

  /// @brief Field Vscroll value: I32(9)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Vscroll;

  /// @brief Field Wheel value: I32(21)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Wheel;

  /// @brief Field X value: I32(0)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const X;

  /// @brief Field Y value: I32(1)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Y;

  /// @brief Field Z value: I32(11)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6854 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, "UnityEngine.InputSystem.Android.LowLevel", "AndroidAxis");
