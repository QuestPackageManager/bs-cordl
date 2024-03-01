#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BombNote)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct BombNote;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::BombNote);
// Type: BeatmapSaveDataVersion4::BombNote
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::BombNote
struct CORDL_TYPE BombNote {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombNote();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BombNote(int32_t x, int32_t y) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::BombNote, 0x8>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BombNote, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::BombNote, y) == 0x4, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::BombNote, "BeatmapSaveDataVersion4", "BombNote");
