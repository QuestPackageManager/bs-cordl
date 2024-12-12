#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/TouchPhase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchPhase)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::TouchPhase);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.TouchPhase
struct CORDL_TYPE TouchPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TouchPhase_Unwrapped
  enum struct __TouchPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Began = static_cast<int32_t>(0x1),
    __E_Moved = static_cast<int32_t>(0x2),
    __E_Ended = static_cast<int32_t>(0x3),
    __E_Canceled = static_cast<int32_t>(0x4),
    __E_Stationary = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TouchPhase_Unwrapped() const noexcept {
    return static_cast<__TouchPhase_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchPhase();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchPhase(int32_t value__) noexcept;

  /// @brief Field Began value: I32(1)
  static ::UnityEngine::InputSystem::TouchPhase const Began;

  /// @brief Field Canceled value: I32(4)
  static ::UnityEngine::InputSystem::TouchPhase const Canceled;

  /// @brief Field Ended value: I32(3)
  static ::UnityEngine::InputSystem::TouchPhase const Ended;

  /// @brief Field Moved value: I32(2)
  static ::UnityEngine::InputSystem::TouchPhase const Moved;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::InputSystem::TouchPhase const None;

  /// @brief Field Stationary value: I32(5)
  static ::UnityEngine::InputSystem::TouchPhase const Stationary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::TouchPhase, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::TouchPhase, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::TouchPhase, "UnityEngine.InputSystem", "TouchPhase");
