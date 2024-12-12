#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PenButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PenButton)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct PenButton;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::PenButton);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.PenButton
struct CORDL_TYPE PenButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PenButton_Unwrapped
  enum struct __PenButton_Unwrapped : int32_t {
    __E_Tip = static_cast<int32_t>(0x0),
    __E_Eraser = static_cast<int32_t>(0x1),
    __E_BarrelFirst = static_cast<int32_t>(0x2),
    __E_BarrelSecond = static_cast<int32_t>(0x3),
    __E_InRange = static_cast<int32_t>(0x4),
    __E_BarrelThird = static_cast<int32_t>(0x5),
    __E_BarrelFourth = static_cast<int32_t>(0x6),
    __E_Barrel1 = static_cast<int32_t>(0x2),
    __E_Barrel2 = static_cast<int32_t>(0x3),
    __E_Barrel3 = static_cast<int32_t>(0x5),
    __E_Barrel4 = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PenButton_Unwrapped() const noexcept {
    return static_cast<__PenButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PenButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PenButton(int32_t value__) noexcept;

  /// @brief Field Barrel1 value: I32(2)
  static ::UnityEngine::InputSystem::PenButton const Barrel1;

  /// @brief Field Barrel2 value: I32(3)
  static ::UnityEngine::InputSystem::PenButton const Barrel2;

  /// @brief Field Barrel3 value: I32(5)
  static ::UnityEngine::InputSystem::PenButton const Barrel3;

  /// @brief Field Barrel4 value: I32(6)
  static ::UnityEngine::InputSystem::PenButton const Barrel4;

  /// @brief Field BarrelFirst value: I32(2)
  static ::UnityEngine::InputSystem::PenButton const BarrelFirst;

  /// @brief Field BarrelFourth value: I32(6)
  static ::UnityEngine::InputSystem::PenButton const BarrelFourth;

  /// @brief Field BarrelSecond value: I32(3)
  static ::UnityEngine::InputSystem::PenButton const BarrelSecond;

  /// @brief Field BarrelThird value: I32(5)
  static ::UnityEngine::InputSystem::PenButton const BarrelThird;

  /// @brief Field Eraser value: I32(1)
  static ::UnityEngine::InputSystem::PenButton const Eraser;

  /// @brief Field InRange value: I32(4)
  static ::UnityEngine::InputSystem::PenButton const InRange;

  /// @brief Field Tip value: I32(0)
  static ::UnityEngine::InputSystem::PenButton const Tip;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::PenButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PenButton, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PenButton, "UnityEngine.InputSystem", "PenButton");
