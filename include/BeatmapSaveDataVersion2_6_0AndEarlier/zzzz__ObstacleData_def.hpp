#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/ObstacleData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__ObstacleType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleData)
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ObstacleType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class ObstacleData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData);
// Dependencies BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem, BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleData
class CORDL_TYPE ObstacleData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _duration, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _lineIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex, put = __cordl_internal_set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) float_t _time;

  /// @brief Field _type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType _type;

  /// @brief Field _width, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__width, put = __cordl_internal_set__width)) int32_t _width;

  __declspec(property(get = get_duration)) float_t duration;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_type)) ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType type;

  __declspec(property(get = get_width)) int32_t width;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData* New_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType type, float_t duration,
                                                                                int32_t width);

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr int32_t const& __cordl_internal_get__lineIndex() const;

  constexpr int32_t& __cordl_internal_get__lineIndex();

  constexpr float_t const& __cordl_internal_get__time() const;

  constexpr float_t& __cordl_internal_get__time();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType const& __cordl_internal_get__type() const;

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType& __cordl_internal_get__type();

  constexpr int32_t const& __cordl_internal_get__width() const;

  constexpr int32_t& __cordl_internal_get__width();

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__lineIndex(int32_t value);

  constexpr void __cordl_internal_set__time(float_t value);

  constexpr void __cordl_internal_set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType value);

  constexpr void __cordl_internal_set__width(int32_t value);

  /// @brief Method .ctor, addr 0x2707738, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType type, float_t duration, int32_t width);

  /// @brief Method get_duration, addr 0x2707728, size 0x8, virtual false, abstract: false, final false
  inline float_t get_duration();

  /// @brief Method get_lineIndex, addr 0x2707718, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_time, addr 0x2707710, size 0x8, virtual true, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_type, addr 0x2707720, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType get_type();

  /// @brief Method get_width, addr 0x2707730, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13437 };

  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _lineIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _type, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleType ____type;

  /// @brief Field _duration, offset: 0x1c, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _width, offset: 0x20, size: 0x4, def value: None
  int32_t ____width;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData, ____time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData, ____lineIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData, ____type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData, ____duration) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData, ____width) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData, 0x28>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::ObstacleData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "ObstacleData");
