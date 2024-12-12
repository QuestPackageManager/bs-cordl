#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/JoystickState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickState)
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState_Button;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState_Button;
}
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::JoystickState_Button);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::JoystickState);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.JoystickState/Button
struct CORDL_TYPE JoystickState_Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JoystickState_Button_Unwrapped
  enum struct __JoystickState_Button_Unwrapped : int32_t {
    __E_HatSwitchUp = static_cast<int32_t>(0x0),
    __E_HatSwitchDown = static_cast<int32_t>(0x1),
    __E_HatSwitchLeft = static_cast<int32_t>(0x2),
    __E_HatSwitchRight = static_cast<int32_t>(0x3),
    __E_Trigger = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JoystickState_Button_Unwrapped() const noexcept {
    return static_cast<__JoystickState_Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JoystickState_Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JoystickState_Button(int32_t value__) noexcept;

  /// @brief Field HatSwitchDown value: I32(1)
  static ::UnityEngine::InputSystem::LowLevel::JoystickState_Button const HatSwitchDown;

  /// @brief Field HatSwitchLeft value: I32(2)
  static ::UnityEngine::InputSystem::LowLevel::JoystickState_Button const HatSwitchLeft;

  /// @brief Field HatSwitchRight value: I32(3)
  static ::UnityEngine::InputSystem::LowLevel::JoystickState_Button const HatSwitchRight;

  /// @brief Field HatSwitchUp value: I32(0)
  static ::UnityEngine::InputSystem::LowLevel::JoystickState_Button const HatSwitchUp;

  /// @brief Field Trigger value: I32(4)
  static ::UnityEngine::InputSystem::LowLevel::JoystickState_Button const Trigger;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6905 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState_Button, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::JoystickState_Button, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo, UnityEngine.Vector2
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.JoystickState
struct CORDL_TYPE JoystickState {
public:
  // Declarations
  using Button = ::UnityEngine::InputSystem::LowLevel::JoystickState_Button;

  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_format, addr 0x4607250, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_kFormat, addr 0x4607220, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JoystickState();

  // Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr JoystickState(int32_t buttons, ::UnityEngine::Vector2 stick) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6906 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field buttons, offset: 0x0, size: 0x4, def value: None
  int32_t buttons;

  /// @brief Field stick, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2 stick;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState, buttons) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState, stick) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::JoystickState, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::JoystickState_Button, "UnityEngine.InputSystem.LowLevel", "JoystickState/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::JoystickState, "UnityEngine.InputSystem.LowLevel", "JoystickState");
