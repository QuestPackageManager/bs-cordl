#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/MoveDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MoveDirection)
// Forward declare root types
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::MoveDirection);
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.MoveDirection
struct CORDL_TYPE MoveDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MoveDirection_Unwrapped
  enum struct __MoveDirection_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Up = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
    __E_Down = static_cast<int32_t>(0x3),
    __E_None = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MoveDirection_Unwrapped() const noexcept {
    return static_cast<__MoveDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MoveDirection(int32_t value__) noexcept;

  /// @brief Field Down value: I32(3)
  static ::UnityEngine::EventSystems::MoveDirection const Down;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::EventSystems::MoveDirection const Left;

  /// @brief Field None value: I32(4)
  static ::UnityEngine::EventSystems::MoveDirection const None;

  /// @brief Field Right value: I32(2)
  static ::UnityEngine::EventSystems::MoveDirection const Right;

  /// @brief Field Up value: I32(1)
  static ::UnityEngine::EventSystems::MoveDirection const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17530 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::MoveDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::MoveDirection, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::MoveDirection, "UnityEngine.EventSystems", "MoveDirection");
