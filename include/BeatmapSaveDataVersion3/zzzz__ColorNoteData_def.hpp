#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/ColorNoteData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorNoteData)
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class ColorNoteData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::ColorNoteData);
// Type: BeatmapSaveDataVersion3::ColorNoteData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::ColorNoteData*
class CORDL_TYPE ColorNoteData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field a, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) int32_t a;

  __declspec(property(get = get_angleOffset)) int32_t angleOffset;

  /// @brief Field c, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::BeatmapSaveDataCommon::NoteColorType c;

  __declspec(property(get = get_color))::BeatmapSaveDataCommon::NoteColorType color;

  __declspec(property(get = get_cutDirection))::BeatmapSaveDataCommon::NoteCutDirection cutDirection;

  /// @brief Field d, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d))::BeatmapSaveDataCommon::NoteCutDirection d;

  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_line)) int32_t line;

  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::BeatmapSaveDataVersion3::ColorNoteData* New_ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::NoteColorType color,
                                                                   ::BeatmapSaveDataCommon::NoteCutDirection cutDirection, int32_t angleOffset);

  constexpr int32_t const& __cordl_internal_get_a() const;

  constexpr int32_t& __cordl_internal_get_a();

  constexpr ::BeatmapSaveDataCommon::NoteColorType const& __cordl_internal_get_c() const;

  constexpr ::BeatmapSaveDataCommon::NoteColorType& __cordl_internal_get_c();

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& __cordl_internal_get_d() const;

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection& __cordl_internal_get_d();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_a(int32_t value);

  constexpr void __cordl_internal_set_c(::BeatmapSaveDataCommon::NoteColorType value);

  constexpr void __cordl_internal_set_d(::BeatmapSaveDataCommon::NoteCutDirection value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x1505014, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer, ::BeatmapSaveDataCommon::NoteColorType color, ::BeatmapSaveDataCommon::NoteCutDirection cutDirection, int32_t angleOffset);

  /// @brief Method get_angleOffset, addr 0x1504ffc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_angleOffset();

  /// @brief Method get_color, addr 0x1505004, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteColorType get_color();

  /// @brief Method get_cutDirection, addr 0x150500c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteCutDirection get_cutDirection();

  /// @brief Method get_layer, addr 0x1504ff4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_line, addr 0x1504fec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_line();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorNoteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorNoteData(ColorNoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorNoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorNoteData(ColorNoteData const&) = delete;

  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field a, offset: 0x1c, size: 0x4, def value: None
  int32_t ___a;

  /// @brief Field c, offset: 0x20, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteColorType ___c;

  /// @brief Field d, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::ColorNoteData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ColorNoteData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ColorNoteData, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ColorNoteData, ___a) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ColorNoteData, ___c) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ColorNoteData, ___d) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::ColorNoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::ColorNoteData*, "BeatmapSaveDataVersion3", "ColorNoteData");
