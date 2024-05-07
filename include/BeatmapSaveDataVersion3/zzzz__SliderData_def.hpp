#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/SliderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BaseSliderData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderData)
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
namespace BeatmapSaveDataCommon {
struct SliderMidAnchorMode;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class SliderData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::SliderData);
// Type: BeatmapSaveDataVersion3::SliderData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::SliderData*
class CORDL_TYPE SliderData : public ::BeatmapSaveDataVersion3::BaseSliderData {
public:
  // Declarations
  __declspec(property(get = get_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  /// @brief Field m, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m, put = __cordl_internal_set_m))::BeatmapSaveDataCommon::SliderMidAnchorMode m;

  /// @brief Field mu, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mu, put = __cordl_internal_set_mu)) float_t mu;

  __declspec(property(get = get_sliderMidAnchorMode))::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode;

  __declspec(property(get = get_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  __declspec(property(get = get_tailCutDirection))::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection;

  /// @brief Field tc, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_tc, put = __cordl_internal_set_tc))::BeatmapSaveDataCommon::NoteCutDirection tc;

  /// @brief Field tmu, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_tmu, put = __cordl_internal_set_tmu)) float_t tmu;

  static inline ::BeatmapSaveDataVersion3::SliderData* New_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                float_t headControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat,
                                                                int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier,
                                                                ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection, ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode);

  constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode const& __cordl_internal_get_m() const;

  constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode& __cordl_internal_get_m();

  constexpr float_t const& __cordl_internal_get_mu() const;

  constexpr float_t& __cordl_internal_get_mu();

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& __cordl_internal_get_tc() const;

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection& __cordl_internal_get_tc();

  constexpr float_t const& __cordl_internal_get_tmu() const;

  constexpr float_t& __cordl_internal_get_tmu();

  constexpr void __cordl_internal_set_m(::BeatmapSaveDataCommon::SliderMidAnchorMode value);

  constexpr void __cordl_internal_set_mu(float_t value);

  constexpr void __cordl_internal_set_tc(::BeatmapSaveDataCommon::NoteCutDirection value);

  constexpr void __cordl_internal_set_tmu(float_t value);

  /// @brief Method .ctor, addr 0x14f3b48, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, float_t headControlPointLengthMultiplier,
                    ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier,
                    ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection, ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode);

  /// @brief Method get_headControlPointLengthMultiplier, addr 0x14f3b28, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headControlPointLengthMultiplier();

  /// @brief Method get_sliderMidAnchorMode, addr 0x14f3b40, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::SliderMidAnchorMode get_sliderMidAnchorMode();

  /// @brief Method get_tailControlPointLengthMultiplier, addr 0x14f3b30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailControlPointLengthMultiplier();

  /// @brief Method get_tailCutDirection, addr 0x14f3b38, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteCutDirection get_tailCutDirection();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderData(SliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderData(SliderData const&) = delete;

  /// @brief Field mu, offset: 0x30, size: 0x4, def value: None
  float_t ___mu;

  /// @brief Field tmu, offset: 0x34, size: 0x4, def value: None
  float_t ___tmu;

  /// @brief Field tc, offset: 0x38, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection ___tc;

  /// @brief Field m, offset: 0x3c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::SliderMidAnchorMode ___m;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::SliderData, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::SliderData, ___mu) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::SliderData, ___tmu) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::SliderData, ___tc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::SliderData, ___m) == 0x3c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::SliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::SliderData*, "BeatmapSaveDataVersion3", "SliderData");
