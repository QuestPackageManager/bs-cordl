#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BombNoteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BombNoteData)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BombNoteData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BombNoteData);
// Dependencies BeatmapSaveDataVersion3.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.BombNoteData
class CORDL_TYPE BombNoteData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_line)) int32_t line;

  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::BeatmapSaveDataVersion3::BombNoteData* New_ctor(float_t beat, int32_t line, int32_t layer);

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x3661b3c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer);

  /// @brief Method get_layer, addr 0x3661b34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_line, addr 0x3661b2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_line();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BombNoteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BombNoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BombNoteData(BombNoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BombNoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BombNoteData(BombNoteData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15343 };

  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::BombNoteData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BombNoteData, ___y) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BombNoteData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BombNoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BombNoteData*, "BeatmapSaveDataVersion3", "BombNoteData");
