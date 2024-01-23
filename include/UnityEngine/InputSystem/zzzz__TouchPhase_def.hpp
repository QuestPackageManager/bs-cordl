#pragma once
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
// Type: UnityEngine.InputSystem::TouchPhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6287))
// CS Name: ::UnityEngine.InputSystem::TouchPhase
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchPhase(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchPhase();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::TouchPhase const None;

  /// @brief Field Began value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::TouchPhase const Began;

  /// @brief Field Moved value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::TouchPhase const Moved;

  /// @brief Field Ended value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::TouchPhase const Ended;

  /// @brief Field Canceled value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::TouchPhase const Canceled;

  /// @brief Field Stationary value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::TouchPhase const Stationary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::TouchPhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::TouchPhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::TouchPhase, "UnityEngine.InputSystem", "TouchPhase");
