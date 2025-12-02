#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SliderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ColorType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderData)
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
namespace BeatmapSaveDataCommon {
struct NoteLineLayer;
}
namespace BeatmapSaveDataCommon {
struct SliderMidAnchorMode;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ColorType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class SliderData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData);
// Dependencies BeatmapSaveDataCommon.NoteCutDirection, BeatmapSaveDataCommon.NoteLineLayer, BeatmapSaveDataCommon.SliderMidAnchorMode, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem,
// BeatmapSaveDataVersion2_6_0AndEarlier.ColorType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.SliderData
class CORDL_TYPE SliderData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _colorType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType, put = __cordl_internal_set__colorType)) ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType _colorType;

  /// @brief Field _headControlPointLengthMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__headControlPointLengthMultiplier, put = __cordl_internal_set__headControlPointLengthMultiplier)) float_t _headControlPointLengthMultiplier;

  /// @brief Field _headCutDirection, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__headCutDirection, put = __cordl_internal_set__headCutDirection)) ::BeatmapSaveDataCommon::NoteCutDirection _headCutDirection;

  /// @brief Field _headLineIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__headLineIndex, put = __cordl_internal_set__headLineIndex)) int32_t _headLineIndex;

  /// @brief Field _headLineLayer, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__headLineLayer, put = __cordl_internal_set__headLineLayer)) ::BeatmapSaveDataCommon::NoteLineLayer _headLineLayer;

  /// @brief Field _headTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__headTime, put = __cordl_internal_set__headTime)) float_t _headTime;

  /// @brief Field _sliderMidAnchorMode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__sliderMidAnchorMode, put = __cordl_internal_set__sliderMidAnchorMode)) ::BeatmapSaveDataCommon::SliderMidAnchorMode _sliderMidAnchorMode;

  /// @brief Field _tailControlPointLengthMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__tailControlPointLengthMultiplier, put = __cordl_internal_set__tailControlPointLengthMultiplier)) float_t _tailControlPointLengthMultiplier;

  /// @brief Field _tailCutDirection, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tailCutDirection, put = __cordl_internal_set__tailCutDirection)) ::BeatmapSaveDataCommon::NoteCutDirection _tailCutDirection;

  /// @brief Field _tailLineIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__tailLineIndex, put = __cordl_internal_set__tailLineIndex)) int32_t _tailLineIndex;

  /// @brief Field _tailLineLayer, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__tailLineLayer, put = __cordl_internal_set__tailLineLayer)) ::BeatmapSaveDataCommon::NoteLineLayer _tailLineLayer;

  /// @brief Field _tailTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__tailTime, put = __cordl_internal_set__tailTime)) float_t _tailTime;

  __declspec(property(get = get_colorType)) ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType colorType;

  __declspec(property(get = get_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  __declspec(property(get = get_headCutDirection)) ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection;

  __declspec(property(get = get_headLineIndex)) int32_t headLineIndex;

  __declspec(property(get = get_headLineLayer)) ::BeatmapSaveDataCommon::NoteLineLayer headLineLayer;

  __declspec(property(get = get_sliderMidAnchorMode)) ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode;

  __declspec(property(get = get_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  __declspec(property(get = get_tailCutDirection)) ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection;

  __declspec(property(get = get_tailLineIndex)) int32_t tailLineIndex;

  __declspec(property(get = get_tailLineLayer)) ::BeatmapSaveDataCommon::NoteLineLayer tailLineLayer;

  __declspec(property(get = get_tailTime)) float_t tailTime;

  __declspec(property(get = get_time)) float_t time;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData* New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType colorType, float_t headTime, int32_t headLineIndex,
                                                                              ::BeatmapSaveDataCommon::NoteLineLayer headLineLayer, float_t headControlPointLengthMultiplier,
                                                                              ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex,
                                                                              ::BeatmapSaveDataCommon::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier,
                                                                              ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection,
                                                                              ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode);

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType const& __cordl_internal_get__colorType() const;

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType& __cordl_internal_get__colorType();

  constexpr float_t const& __cordl_internal_get__headControlPointLengthMultiplier() const;

  constexpr float_t& __cordl_internal_get__headControlPointLengthMultiplier();

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& __cordl_internal_get__headCutDirection() const;

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection& __cordl_internal_get__headCutDirection();

  constexpr int32_t const& __cordl_internal_get__headLineIndex() const;

  constexpr int32_t& __cordl_internal_get__headLineIndex();

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& __cordl_internal_get__headLineLayer() const;

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer& __cordl_internal_get__headLineLayer();

  constexpr float_t const& __cordl_internal_get__headTime() const;

  constexpr float_t& __cordl_internal_get__headTime();

  constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode const& __cordl_internal_get__sliderMidAnchorMode() const;

  constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode& __cordl_internal_get__sliderMidAnchorMode();

  constexpr float_t const& __cordl_internal_get__tailControlPointLengthMultiplier() const;

  constexpr float_t& __cordl_internal_get__tailControlPointLengthMultiplier();

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& __cordl_internal_get__tailCutDirection() const;

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection& __cordl_internal_get__tailCutDirection();

  constexpr int32_t const& __cordl_internal_get__tailLineIndex() const;

  constexpr int32_t& __cordl_internal_get__tailLineIndex();

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& __cordl_internal_get__tailLineLayer() const;

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer& __cordl_internal_get__tailLineLayer();

  constexpr float_t const& __cordl_internal_get__tailTime() const;

  constexpr float_t& __cordl_internal_get__tailTime();

  constexpr void __cordl_internal_set__colorType(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType value);

  constexpr void __cordl_internal_set__headControlPointLengthMultiplier(float_t value);

  constexpr void __cordl_internal_set__headCutDirection(::BeatmapSaveDataCommon::NoteCutDirection value);

  constexpr void __cordl_internal_set__headLineIndex(int32_t value);

  constexpr void __cordl_internal_set__headLineLayer(::BeatmapSaveDataCommon::NoteLineLayer value);

  constexpr void __cordl_internal_set__headTime(float_t value);

  constexpr void __cordl_internal_set__sliderMidAnchorMode(::BeatmapSaveDataCommon::SliderMidAnchorMode value);

  constexpr void __cordl_internal_set__tailControlPointLengthMultiplier(float_t value);

  constexpr void __cordl_internal_set__tailCutDirection(::BeatmapSaveDataCommon::NoteCutDirection value);

  constexpr void __cordl_internal_set__tailLineIndex(int32_t value);

  constexpr void __cordl_internal_set__tailLineLayer(::BeatmapSaveDataCommon::NoteLineLayer value);

  constexpr void __cordl_internal_set__tailTime(float_t value);

  /// @brief Method .ctor, addr 0x3635cb8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType colorType, float_t headTime, int32_t headLineIndex, ::BeatmapSaveDataCommon::NoteLineLayer headLineLayer,
                    float_t headControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex,
                    ::BeatmapSaveDataCommon::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection,
                    ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode);

  /// @brief Method get_colorType, addr 0x3635c60, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType get_colorType();

  /// @brief Method get_headControlPointLengthMultiplier, addr 0x3635c78, size 0x8, virtual false, abstract: false, final false
  inline float_t get_headControlPointLengthMultiplier();

  /// @brief Method get_headCutDirection, addr 0x3635c80, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteCutDirection get_headCutDirection();

  /// @brief Method get_headLineIndex, addr 0x3635c68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_headLineIndex();

  /// @brief Method get_headLineLayer, addr 0x3635c70, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteLineLayer get_headLineLayer();

  /// @brief Method get_sliderMidAnchorMode, addr 0x3635cb0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::SliderMidAnchorMode get_sliderMidAnchorMode();

  /// @brief Method get_tailControlPointLengthMultiplier, addr 0x3635ca0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailControlPointLengthMultiplier();

  /// @brief Method get_tailCutDirection, addr 0x3635ca8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteCutDirection get_tailCutDirection();

  /// @brief Method get_tailLineIndex, addr 0x3635c90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tailLineIndex();

  /// @brief Method get_tailLineLayer, addr 0x3635c98, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteLineLayer get_tailLineLayer();

  /// @brief Method get_tailTime, addr 0x3635c88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailTime();

  /// @brief Method get_time, addr 0x3635c58, size 0x8, virtual true, abstract: false, final false
  inline float_t get_time();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15345 };

  /// @brief Field _colorType, offset: 0x10, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType ____colorType;

  /// @brief Field _headTime, offset: 0x14, size: 0x4, def value: None
  float_t ____headTime;

  /// @brief Field _headLineIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____headLineIndex;

  /// @brief Field _headLineLayer, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteLineLayer ____headLineLayer;

  /// @brief Field _headControlPointLengthMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____headControlPointLengthMultiplier;

  /// @brief Field _headCutDirection, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection ____headCutDirection;

  /// @brief Field _tailTime, offset: 0x28, size: 0x4, def value: None
  float_t ____tailTime;

  /// @brief Field _tailLineIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____tailLineIndex;

  /// @brief Field _tailLineLayer, offset: 0x30, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteLineLayer ____tailLineLayer;

  /// @brief Field _tailControlPointLengthMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____tailControlPointLengthMultiplier;

  /// @brief Field _tailCutDirection, offset: 0x38, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection ____tailCutDirection;

  /// @brief Field _sliderMidAnchorMode, offset: 0x3c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::SliderMidAnchorMode ____sliderMidAnchorMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____colorType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____headTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____headLineIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____headLineLayer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____headControlPointLengthMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____headCutDirection) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____tailTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____tailLineIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____tailLineLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____tailControlPointLengthMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____tailCutDirection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, ____sliderMidAnchorMode) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData, 0x40>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::SliderData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "SliderData");
