#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleData)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class ObstacleData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::ObstacleData);
// Type: BeatmapSaveDataVersion3::ObstacleData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::ObstacleData*
class CORDL_TYPE ObstacleData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field d, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) float_t d;

  __declspec(property(get = get_duration)) float_t duration;

  /// @brief Field h, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_h, put = __cordl_internal_set_h)) int32_t h;

  __declspec(property(get = get_height)) int32_t height;

  __declspec(property(get = get_layer)) int32_t layer;

  __declspec(property(get = get_line)) int32_t line;

  /// @brief Field w, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) int32_t w;

  __declspec(property(get = get_width)) int32_t width;

  /// @brief Field x, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  static inline ::BeatmapSaveDataVersion3::ObstacleData* New_ctor(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height);

  constexpr float_t const& __cordl_internal_get_d() const;

  constexpr float_t& __cordl_internal_get_d();

  constexpr int32_t const& __cordl_internal_get_h() const;

  constexpr int32_t& __cordl_internal_get_h();

  constexpr int32_t const& __cordl_internal_get_w() const;

  constexpr int32_t& __cordl_internal_get_w();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_d(float_t value);

  constexpr void __cordl_internal_set_h(int32_t value);

  constexpr void __cordl_internal_set_w(int32_t value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x14f3c88, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, int32_t line, int32_t layer, float_t duration, int32_t width, int32_t height);

  /// @brief Method get_duration, addr 0x14f3c70, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_height, addr 0x14f3c80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_layer, addr 0x14f3c68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_layer();

  /// @brief Method get_line, addr 0x14f3c60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_line();

  /// @brief Method get_width, addr 0x14f3c78, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_width();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleData(ObstacleData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleData(ObstacleData const&) = delete;

  /// @brief Field x, offset: 0x14, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x18, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field d, offset: 0x1c, size: 0x4, def value: None
  float_t ___d;

  /// @brief Field w, offset: 0x20, size: 0x4, def value: None
  int32_t ___w;

  /// @brief Field h, offset: 0x24, size: 0x4, def value: None
  int32_t ___h;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::ObstacleData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ObstacleData, ___x) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ObstacleData, ___y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ObstacleData, ___d) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ObstacleData, ___w) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::ObstacleData, ___h) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::ObstacleData*, "BeatmapSaveDataVersion3", "ObstacleData");
