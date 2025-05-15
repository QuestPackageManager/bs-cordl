#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OffsetDirection)
// Forward declare root types
namespace GlobalNamespace {
struct OffsetDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OffsetDirection);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OffsetDirection
struct CORDL_TYPE OffsetDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OffsetDirection_Unwrapped
  enum struct __OffsetDirection_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Left = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_UpLeft = static_cast<int32_t>(0x4),
    __E_UpRight = static_cast<int32_t>(0x5),
    __E_DownLeft = static_cast<int32_t>(0x6),
    __E_DownRight = static_cast<int32_t>(0x7),
    __E_None = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OffsetDirection_Unwrapped() const noexcept {
    return static_cast<__OffsetDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OffsetDirection(int32_t value__) noexcept;

  /// @brief Field Down value: I32(1)
  static ::GlobalNamespace::OffsetDirection const Down;

  /// @brief Field DownLeft value: I32(6)
  static ::GlobalNamespace::OffsetDirection const DownLeft;

  /// @brief Field DownRight value: I32(7)
  static ::GlobalNamespace::OffsetDirection const DownRight;

  /// @brief Field Left value: I32(2)
  static ::GlobalNamespace::OffsetDirection const Left;

  /// @brief Field None value: I32(9)
  static ::GlobalNamespace::OffsetDirection const None;

  /// @brief Field Right value: I32(3)
  static ::GlobalNamespace::OffsetDirection const Right;

  /// @brief Field Up value: I32(0)
  static ::GlobalNamespace::OffsetDirection const Up;

  /// @brief Field UpLeft value: I32(4)
  static ::GlobalNamespace::OffsetDirection const UpLeft;

  /// @brief Field UpRight value: I32(5)
  static ::GlobalNamespace::OffsetDirection const UpRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17087 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OffsetDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OffsetDirection, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetDirection, "", "OffsetDirection");
