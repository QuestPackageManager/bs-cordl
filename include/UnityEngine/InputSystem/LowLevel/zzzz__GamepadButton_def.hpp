#pragma once
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
// Type: UnityEngine.InputSystem.LowLevel::GamepadButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6493))
// CS Name: ::UnityEngine.InputSystem.LowLevel::GamepadButton
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GamepadButton(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GamepadButton();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DpadUp value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadUp;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadDown;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadLeft;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadRight;

  /// @brief Field North value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const North;

  /// @brief Field East value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const East;

  /// @brief Field South value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const South;

  /// @brief Field West value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const West;

  /// @brief Field LeftStick value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftStick;

  /// @brief Field RightStick value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightStick;

  /// @brief Field LeftShoulder value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftShoulder;

  /// @brief Field RightShoulder value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightShoulder;

  /// @brief Field Start value: static_cast<int32_t>(0xc)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Start;

  /// @brief Field Select value: static_cast<int32_t>(0xd)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Select;

  /// @brief Field LeftTrigger value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftTrigger;

  /// @brief Field RightTrigger value: static_cast<int32_t>(0x21)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightTrigger;

  /// @brief Field X value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const X;

  /// @brief Field Y value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Y;

  /// @brief Field A value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const A;

  /// @brief Field B value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const B;

  /// @brief Field Cross value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Cross;

  /// @brief Field Square value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Square;

  /// @brief Field Triangle value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Triangle;

  /// @brief Field Circle value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Circle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::GamepadButton, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GamepadButton, "UnityEngine.InputSystem.LowLevel", "GamepadButton");
