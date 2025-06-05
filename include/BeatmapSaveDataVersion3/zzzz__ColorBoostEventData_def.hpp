#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/ColorBoostEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorBoostEventData)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class ColorBoostEventData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::ColorBoostEventData);
// Dependencies BeatmapSaveDataVersion3.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.ColorBoostEventData
class CORDL_TYPE ColorBoostEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  __declspec(property(get = get_boost)) bool boost;

  /// @brief Field o, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_o, put = __cordl_internal_set_o)) bool o;

  static inline ::BeatmapSaveDataVersion3::ColorBoostEventData* New_ctor(float_t beat, bool boost);

  constexpr bool const& __cordl_internal_get_o() const;

  constexpr bool& __cordl_internal_get_o();

  constexpr void __cordl_internal_set_o(bool value);

  /// @brief Method .ctor, addr 0x270a788, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool boost);

  /// @brief Method get_boost, addr 0x270a780, size 0x8, virtual false, abstract: false, final false
  inline bool get_boost();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBoostEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorBoostEventData(ColorBoostEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorBoostEventData(ColorBoostEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13418 };

  /// @brief Field o, offset: 0x14, size: 0x1, def value: None
  bool ___o;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::ColorBoostEventData, ___o) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::ColorBoostEventData, 0x18>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::ColorBoostEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::ColorBoostEventData*, "BeatmapSaveDataVersion3", "ColorBoostEventData");
