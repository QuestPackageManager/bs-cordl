#pragma once
// IWYU pragma private; include "System/ConsoleScreenBufferInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Coord_def.hpp"
#include "System/zzzz__SmallRect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleScreenBufferInfo)
// Forward declare root types
namespace System {
struct ConsoleScreenBufferInfo;
}
// Write type traits
MARK_VAL_T(::System::ConsoleScreenBufferInfo);
// Dependencies System.Coord, System.SmallRect
namespace System {
// Is value type: true
// CS Name: System.ConsoleScreenBufferInfo
struct CORDL_TYPE ConsoleScreenBufferInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleScreenBufferInfo();

  // Ctor Parameters [CppParam { name: "Size", ty: "::System::Coord", modifiers: "", def_value: None }, CppParam { name: "CursorPosition", ty: "::System::Coord", modifiers: "", def_value: None },
  // CppParam { name: "Attribute", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Window", ty: "::System::SmallRect", modifiers: "", def_value: None }, CppParam { name:
  // "MaxWindowSize", ty: "::System::Coord", modifiers: "", def_value: None }]
  constexpr ConsoleScreenBufferInfo(::System::Coord Size, ::System::Coord CursorPosition, int16_t Attribute, ::System::SmallRect Window, ::System::Coord MaxWindowSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x16 };

  /// @brief Field Size, offset: 0x0, size: 0x4, def value: None
  ::System::Coord Size;

  /// @brief Field CursorPosition, offset: 0x4, size: 0x4, def value: None
  ::System::Coord CursorPosition;

  /// @brief Field Attribute, offset: 0x8, size: 0x2, def value: None
  int16_t Attribute;

  /// @brief Field Window, offset: 0xa, size: 0x8, def value: None
  ::System::SmallRect Window;

  /// @brief Field MaxWindowSize, offset: 0x12, size: 0x4, def value: None
  ::System::Coord MaxWindowSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleScreenBufferInfo, Size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleScreenBufferInfo, CursorPosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleScreenBufferInfo, Attribute) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleScreenBufferInfo, Window) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleScreenBufferInfo, MaxWindowSize) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleScreenBufferInfo, 0x16>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleScreenBufferInfo, "System", "ConsoleScreenBufferInfo");
