#pragma once
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
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidInputSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6450))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidInputSource
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidInputSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidInputSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Keyboard value: static_cast<int32_t>(0x101)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Keyboard;

  /// @brief Field Dpad value: static_cast<int32_t>(0x201)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Dpad;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x401)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Gamepad;

  /// @brief Field Touchscreen value: static_cast<int32_t>(0x1002)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchscreen;

  /// @brief Field Mouse value: static_cast<int32_t>(0x2002)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Mouse;

  /// @brief Field Stylus value: static_cast<int32_t>(0x4002)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Stylus;

  /// @brief Field Trackball value: static_cast<int32_t>(0x10004)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Trackball;

  /// @brief Field Touchpad value: static_cast<int32_t>(0x100008)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchpad;

  /// @brief Field Joystick value: static_cast<int32_t>(0x1000010)
  static ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Joystick;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, "UnityEngine.InputSystem.Android.LowLevel", "AndroidInputSource");
