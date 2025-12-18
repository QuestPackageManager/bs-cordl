#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BaseSliderData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseSliderData)
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BaseSliderData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BaseSliderData);
// Dependencies BeatmapSaveDataCommon.NoteColorType, BeatmapSaveDataCommon.NoteCutDirection, BeatmapSaveDataVersion3.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.BaseSliderData
class CORDL_TYPE BaseSliderData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field c, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::BeatmapSaveDataCommon::NoteColorType c;

  __declspec(property(get = get_colorType)) ::BeatmapSaveDataCommon::NoteColorType colorType;

  /// @brief Field d, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) ::BeatmapSaveDataCommon::NoteCutDirection d;

  __declspec(property(get = get_headCutDirection)) ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection;

  __declspec(property(get = get_headLayer)) int32_t headLayer;

  __declspec(property(get = get_headLine)) int32_t headLine;

  __declspec(property(get = get_tailBeat)) float_t tailBeat;

  __declspec(property(get = get_tailLayer)) int32_t tailLayer;

  __declspec(property(get = get_tailLine)) int32_t tailLine;

  /// @brief Field tb, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_tb, put = __cordl_internal_set_tb)) float_t tb;

  /// @brief Field tx, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_tx, put = __cordl_internal_set_tx)) int32_t tx;

  /// @brief Field ty, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_ty, put = __cordl_internal_set_ty)) int32_t ty;

  /// @brief Field x, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::BeatmapSaveDataVersion3::BaseSliderData* New_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                    ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine, int32_t tailLayer);

  constexpr ::BeatmapSaveDataCommon::NoteColorType const& __cordl_internal_get_c() const;

  constexpr ::BeatmapSaveDataCommon::NoteColorType& __cordl_internal_get_c();

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& __cordl_internal_get_d() const;

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection& __cordl_internal_get_d();

  constexpr float_t const& __cordl_internal_get_tb() const;

  constexpr float_t& __cordl_internal_get_tb();

  constexpr int32_t const& __cordl_internal_get_tx() const;

  constexpr int32_t& __cordl_internal_get_tx();

  constexpr int32_t const& __cordl_internal_get_ty() const;

  constexpr int32_t& __cordl_internal_get_ty();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_c(::BeatmapSaveDataCommon::NoteColorType value);

  constexpr void __cordl_internal_set_d(::BeatmapSaveDataCommon::NoteCutDirection value);

  constexpr void __cordl_internal_set_tb(float_t value);

  constexpr void __cordl_internal_set_tx(int32_t value);

  constexpr void __cordl_internal_set_ty(int32_t value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x3661ba8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection,
                    float_t tailBeat, int32_t tailLine, int32_t tailLayer);

  /// @brief Method get_colorType, addr 0x3661b70, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteColorType get_colorType();

  /// @brief Method get_headCutDirection, addr 0x3661b88, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteCutDirection get_headCutDirection();

  /// @brief Method get_headLayer, addr 0x3661b80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_headLayer();

  /// @brief Method get_headLine, addr 0x3661b78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_headLine();

  /// @brief Method get_tailBeat, addr 0x3661b90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tailBeat();

  /// @brief Method get_tailLayer, addr 0x3661ba0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tailLayer();

  /// @brief Method get_tailLine, addr 0x3661b98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_tailLine();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseSliderData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseSliderData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseSliderData(BaseSliderData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseSliderData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseSliderData(BaseSliderData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15346 };

  /// @brief Field c, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteColorType ___c;

  /// @brief Field x, offset: 0x18, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x1c, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field d, offset: 0x20, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection ___d;

  /// @brief Field tb, offset: 0x24, size: 0x4, def value: None
  float_t ___tb;

  /// @brief Field tx, offset: 0x28, size: 0x4, def value: None
  int32_t ___tx;

  /// @brief Field ty, offset: 0x2c, size: 0x4, def value: None
  int32_t ___ty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___c) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___y) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___d) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___tb) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___tx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BaseSliderData, ___ty) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BaseSliderData, 0x30>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BaseSliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BaseSliderData*, "BeatmapSaveDataVersion3", "BaseSliderData");
