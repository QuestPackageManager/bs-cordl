#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __JoystickState__Button;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct __JoystickState__Button;
}
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__JoystickState__Button);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::JoystickState);
// Type: ::Button
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::JoystickState::Button
struct CORDL_TYPE __JoystickState__Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____JoystickState__Button_Unwrapped
  enum struct ____JoystickState__Button_Unwrapped : int32_t {
    __E_HatSwitchUp = static_cast<int32_t>(0x0),
    __E_HatSwitchDown = static_cast<int32_t>(0x1),
    __E_HatSwitchLeft = static_cast<int32_t>(0x2),
    __E_HatSwitchRight = static_cast<int32_t>(0x3),
    __E_Trigger = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____JoystickState__Button_Unwrapped() const noexcept {
    return static_cast<____JoystickState__Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JoystickState__Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __JoystickState__Button(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HatSwitchDown value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchDown;

  /// @brief Field HatSwitchLeft value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchLeft;

  /// @brief Field HatSwitchRight value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchRight;

  /// @brief Field HatSwitchUp value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const HatSwitchUp;

  /// @brief Field Trigger value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button const Trigger;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__JoystickState__Button, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__JoystickState__Button, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::JoystickState
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::JoystickState
struct CORDL_TYPE JoystickState {
public:
  // Declarations
  using Button = ::UnityEngine::InputSystem::LowLevel::__JoystickState__Button;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_format, addr 0x3157f30, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_kFormat, addr 0x3157f00, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JoystickState();

  // Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stick", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr JoystickState(int32_t buttons, ::UnityEngine::Vector2 stick) noexcept;

  /// @brief Field buttons, offset: 0x0, size: 0x4, def value: None
  int32_t buttons;

  /// @brief Field stick, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2 stick;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::JoystickState, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState, buttons) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::JoystickState, stick) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__JoystickState__Button, "UnityEngine.InputSystem.LowLevel", "JoystickState/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::JoystickState, "UnityEngine.InputSystem.LowLevel", "JoystickState");
