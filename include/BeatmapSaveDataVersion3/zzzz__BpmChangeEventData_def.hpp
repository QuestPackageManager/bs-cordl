#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BpmChangeEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BpmChangeEventData)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BpmChangeEventData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BpmChangeEventData);
// Dependencies BeatmapSaveDataVersion3.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.BpmChangeEventData
class CORDL_TYPE BpmChangeEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  __declspec(property(get = get_bpm)) float_t bpm;

  /// @brief Field m, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m, put = __cordl_internal_set_m)) float_t m;

  static inline ::BeatmapSaveDataVersion3::BpmChangeEventData* New_ctor(float_t beat, float_t bpm);

  constexpr float_t const& __cordl_internal_get_m() const;

  constexpr float_t& __cordl_internal_get_m();

  constexpr void __cordl_internal_set_m(float_t value);

  /// @brief Method .ctor, addr 0x2706410, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, float_t bpm);

  /// @brief Method get_bpm, addr 0x2706408, size 0x8, virtual false, abstract: false, final false
  inline float_t get_bpm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BpmChangeEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BpmChangeEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BpmChangeEventData(BpmChangeEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BpmChangeEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BpmChangeEventData(BpmChangeEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13414 };

  /// @brief Field m, offset: 0x14, size: 0x4, def value: None
  float_t ___m;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::BpmChangeEventData, ___m) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BpmChangeEventData, 0x18>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BpmChangeEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BpmChangeEventData*, "BeatmapSaveDataVersion3", "BpmChangeEventData");
