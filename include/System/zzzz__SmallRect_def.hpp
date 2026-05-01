#pragma once
// IWYU pragma private; include "System/SmallRect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SmallRect)
// Forward declare root types
namespace System {
struct SmallRect;
}
// Write type traits
MARK_VAL_T(::System::SmallRect);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.SmallRect
struct CORDL_TYPE SmallRect {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallRect();

  // Ctor Parameters [CppParam { name: "Left", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Top", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Right", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "Bottom", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr SmallRect(int16_t Left, int16_t Top, int16_t Right, int16_t Bottom) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Left, offset: 0x0, size: 0x2, def value: None
  int16_t Left;

  /// @brief Field Top, offset: 0x2, size: 0x2, def value: None
  int16_t Top;

  /// @brief Field Right, offset: 0x4, size: 0x2, def value: None
  int16_t Right;

  /// @brief Field Bottom, offset: 0x6, size: 0x2, def value: None
  int16_t Bottom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::SmallRect, Left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::SmallRect, Top) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::SmallRect, Right) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::SmallRect, Bottom) == 0x6, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::SmallRect, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::SmallRect, "System", "SmallRect");
