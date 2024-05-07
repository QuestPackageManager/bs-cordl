#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BurstSliderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BaseSliderData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstSliderData)
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BurstSliderData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BurstSliderData);
// Type: BeatmapSaveDataVersion3::BurstSliderData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::BurstSliderData*
class CORDL_TYPE BurstSliderData : public ::BeatmapSaveDataVersion3::BaseSliderData {
public:
  // Declarations
  /// @brief Field s, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) float_t s;

  /// @brief Field sc, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_sc, put = __cordl_internal_set_sc)) int32_t sc;

  __declspec(property(get = get_sliceCount)) int32_t sliceCount;

  __declspec(property(get = get_squishAmount)) float_t squishAmount;

  static inline ::BeatmapSaveDataVersion3::BurstSliderData* New_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                     ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer,
                                                                     int32_t sliceCount, float_t squishAmount);

  constexpr float_t const& __cordl_internal_get_s() const;

  constexpr float_t& __cordl_internal_get_s();

  constexpr int32_t const& __cordl_internal_get_sc() const;

  constexpr int32_t& __cordl_internal_get_sc();

  constexpr void __cordl_internal_set_s(float_t value);

  constexpr void __cordl_internal_set_sc(int32_t value);

  /// @brief Method .ctor, addr 0x14f3be4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection,
                    float_t tailBeat, int32_t tailLine, int32_t tailLayer, int32_t sliceCount, float_t squishAmount);

  /// @brief Method get_sliceCount, addr 0x14f3bd4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sliceCount();

  /// @brief Method get_squishAmount, addr 0x14f3bdc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_squishAmount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderData(BurstSliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderData(BurstSliderData const&) = delete;

  /// @brief Field sc, offset: 0x30, size: 0x4, def value: None
  int32_t ___sc;

  /// @brief Field s, offset: 0x34, size: 0x4, def value: None
  float_t ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BurstSliderData, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BurstSliderData, ___sc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BurstSliderData, ___s) == 0x34, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BurstSliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BurstSliderData*, "BeatmapSaveDataVersion3", "BurstSliderData");
