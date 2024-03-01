#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorNote)
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct ColorNote;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::ColorNote);
// Type: BeatmapSaveDataVersion4::ColorNote
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion4::ColorNote
struct CORDL_TYPE ColorNote {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorNote();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "c", ty: "::BeatmapSaveDataCommon::NoteColorType", modifiers: "", def_value: None }, CppParam { name: "d", ty:
  // "::BeatmapSaveDataCommon::NoteCutDirection", modifiers: "", def_value: None }]
  constexpr ColorNote(int32_t x, int32_t y, int32_t a, ::BeatmapSaveDataCommon::NoteColorType c, ::BeatmapSaveDataCommon::NoteCutDirection d) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field a, offset: 0x8, size: 0x4, def value: None
  int32_t a;

  /// @brief Field c, offset: 0xc, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteColorType c;

  /// @brief Field d, offset: 0x10, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection d;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::ColorNote, 0x14>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ColorNote, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ColorNote, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ColorNote, a) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ColorNote, c) == 0xc, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion4::ColorNote, d) == 0x10, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::ColorNote, "BeatmapSaveDataVersion4", "ColorNote");
