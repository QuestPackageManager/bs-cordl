#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidInputSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidInputSource)
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidInputSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource);
// Dependencies
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource
struct CORDL_TYPE AndroidInputSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidInputSource_Unwrapped
  enum struct __AndroidInputSource_Unwrapped : int32_t {
    __E_Keyboard = static_cast<int32_t>(0x101),
    __E_Dpad = static_cast<int32_t>(0x201),
    __E_Gamepad = static_cast<int32_t>(0x401),
    __E_Touchscreen = static_cast<int32_t>(0x1002),
    __E_Mouse = static_cast<int32_t>(0x2002),
    __E_Stylus = static_cast<int32_t>(0x4002),
    __E_Trackball = static_cast<int32_t>(0x10004),
    __E_Touchpad = static_cast<int32_t>(0x100008),
    __E_Joystick = static_cast<int32_t>(0x1000010),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidInputSource_Unwrapped() const noexcept {
    return static_cast<__AndroidInputSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidInputSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidInputSource(int32_t value__) noexcept;

  /// @brief Field Dpad value: I32(513)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Dpad;

  /// @brief Field Gamepad value: I32(1025)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Gamepad;

  /// @brief Field Joystick value: I32(16777232)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Joystick;

  /// @brief Field Keyboard value: I32(257)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Keyboard;

  /// @brief Field Mouse value: I32(8194)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Mouse;

  /// @brief Field Stylus value: I32(16386)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Stylus;

  /// @brief Field Touchpad value: I32(1048584)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchpad;

  /// @brief Field Touchscreen value: I32(4098)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchscreen;

  /// @brief Field Trackball value: I32(65540)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Trackball;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, "UnityEngine.InputSystem.Android.LowLevel", "AndroidInputSource");
