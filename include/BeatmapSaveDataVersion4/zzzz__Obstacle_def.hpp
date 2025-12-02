#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/Obstacle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Obstacle)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct Obstacle;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::Obstacle);
// Dependencies
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.Obstacle
struct CORDL_TYPE Obstacle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Obstacle();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Obstacle(int32_t x, int32_t y, float_t d, int32_t w, int32_t h) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15298 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field d, offset: 0x8, size: 0x4, def value: None
  float_t d;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  int32_t w;

  /// @brief Field h, offset: 0x10, size: 0x4, def value: None
  int32_t h;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::Obstacle, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Obstacle, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Obstacle, d) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Obstacle, w) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::Obstacle, h) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::Obstacle, 0x14>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::Obstacle, "BeatmapSaveDataVersion4", "Obstacle");
