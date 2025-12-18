#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/GamepadButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GamepadButton)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::GamepadButton);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.GamepadButton
struct CORDL_TYPE GamepadButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GamepadButton_Unwrapped
  enum struct __GamepadButton_Unwrapped : int32_t {
    __E_DpadUp = static_cast<int32_t>(0x0),
    __E_DpadDown = static_cast<int32_t>(0x1),
    __E_DpadLeft = static_cast<int32_t>(0x2),
    __E_DpadRight = static_cast<int32_t>(0x3),
    __E_North = static_cast<int32_t>(0x4),
    __E_East = static_cast<int32_t>(0x5),
    __E_South = static_cast<int32_t>(0x6),
    __E_West = static_cast<int32_t>(0x7),
    __E_LeftStick = static_cast<int32_t>(0x8),
    __E_RightStick = static_cast<int32_t>(0x9),
    __E_LeftShoulder = static_cast<int32_t>(0xa),
    __E_RightShoulder = static_cast<int32_t>(0xb),
    __E_Start = static_cast<int32_t>(0xc),
    __E_Select = static_cast<int32_t>(0xd),
    __E_LeftTrigger = static_cast<int32_t>(0x20),
    __E_RightTrigger = static_cast<int32_t>(0x21),
    __E_X = static_cast<int32_t>(0x7),
    __E_Y = static_cast<int32_t>(0x4),
    __E_A = static_cast<int32_t>(0x6),
    __E_B = static_cast<int32_t>(0x5),
    __E_Cross = static_cast<int32_t>(0x6),
    __E_Square = static_cast<int32_t>(0x7),
    __E_Triangle = static_cast<int32_t>(0x4),
    __E_Circle = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GamepadButton_Unwrapped() const noexcept {
    return static_cast<__GamepadButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GamepadButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GamepadButton(int32_t value__) noexcept;

  /// @brief Field A value: I32(6)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const A;

  /// @brief Field B value: I32(5)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const B;

  /// @brief Field Circle value: I32(5)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Circle;

  /// @brief Field Cross value: I32(6)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Cross;

  /// @brief Field DpadDown value: I32(1)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadDown;

  /// @brief Field DpadLeft value: I32(2)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadLeft;

  /// @brief Field DpadRight value: I32(3)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadRight;

  /// @brief Field DpadUp value: I32(0)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadUp;

  /// @brief Field East value: I32(5)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const East;

  /// @brief Field LeftShoulder value: I32(10)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftShoulder;

  /// @brief Field LeftStick value: I32(8)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftStick;

  /// @brief Field LeftTrigger value: I32(32)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftTrigger;

  /// @brief Field North value: I32(4)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const North;

  /// @brief Field RightShoulder value: I32(11)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightShoulder;

  /// @brief Field RightStick value: I32(9)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightStick;

  /// @brief Field RightTrigger value: I32(33)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightTrigger;

  /// @brief Field Select value: I32(13)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Select;

  /// @brief Field South value: I32(6)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const South;

  /// @brief Field Square value: I32(7)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Square;

  /// @brief Field Start value: I32(12)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Start;

  /// @brief Field Triangle value: I32(4)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Triangle;

  /// @brief Field West value: I32(7)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const West;

  /// @brief Field X value: I32(7)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const X;

  /// @brief Field Y value: I32(4)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8965 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::GamepadButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::GamepadButton, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GamepadButton, "UnityEngine.InputSystem.LowLevel", "GamepadButton");
