#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/MouseButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseButton)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct MouseButton;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::MouseButton);
// Type: UnityEngine.InputSystem.LowLevel::MouseButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::MouseButton
struct CORDL_TYPE MouseButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MouseButton_Unwrapped
  enum struct __MouseButton_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
    __E_Forward = static_cast<int32_t>(0x3),
    __E_Back = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MouseButton_Unwrapped() const noexcept {
    return static_cast<__MouseButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MouseButton(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Back value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::LowLevel::MouseButton const Back;

  /// @brief Field Forward value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::LowLevel::MouseButton const Forward;

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::LowLevel::MouseButton const Left;

  /// @brief Field Middle value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::LowLevel::MouseButton const Middle;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::LowLevel::MouseButton const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6885 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::MouseButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::MouseButton, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::MouseButton, "UnityEngine.InputSystem.LowLevel", "MouseButton");
