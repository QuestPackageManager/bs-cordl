#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Coord)
// Forward declare root types
namespace System {
struct Coord;
}
// Write type traits
MARK_VAL_T(::System::Coord);
// Type: System::Coord
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2645))
// CS Name: ::System::Coord
struct CORDL_TYPE Coord {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "X", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr Coord(int16_t X, int16_t Y) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Coord();

  /// @brief Field X, offset: 0x0, size: 0x2, def value: None
  int16_t X;

  /// @brief Field Y, offset: 0x2, size: 0x2, def value: None
  int16_t Y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Coord, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Coord, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Coord, Y) == 0x2, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Coord, "System", "Coord");
