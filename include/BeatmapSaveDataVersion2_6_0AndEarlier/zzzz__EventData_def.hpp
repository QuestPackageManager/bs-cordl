#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/EventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EventData)
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class EventData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData);
// Dependencies BeatmapSaveDataCommon.BeatmapEventType, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: BeatmapSaveDataVersion2_6_0AndEarlier.EventData
class CORDL_TYPE EventData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _floatValue, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__floatValue, put = __cordl_internal_set__floatValue)) float_t _floatValue;

  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) float_t _time;

  /// @brief Field _type, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::BeatmapSaveDataCommon::BeatmapEventType _type;

  /// @brief Field _value, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int32_t _value;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_type)) ::BeatmapSaveDataCommon::BeatmapEventType type;

  __declspec(property(get = get_value)) int32_t value;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* New_ctor(float_t time, ::BeatmapSaveDataCommon::BeatmapEventType type, int32_t value, float_t floatValue);

  constexpr float_t const& __cordl_internal_get__floatValue() const;

  constexpr float_t& __cordl_internal_get__floatValue();

  constexpr float_t const& __cordl_internal_get__time() const;

  constexpr float_t& __cordl_internal_get__time();

  constexpr ::BeatmapSaveDataCommon::BeatmapEventType const& __cordl_internal_get__type() const;

  constexpr ::BeatmapSaveDataCommon::BeatmapEventType& __cordl_internal_get__type();

  constexpr int32_t const& __cordl_internal_get__value() const;

  constexpr int32_t& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__floatValue(float_t value);

  constexpr void __cordl_internal_set__time(float_t value);

  constexpr void __cordl_internal_set__type(::BeatmapSaveDataCommon::BeatmapEventType value);

  constexpr void __cordl_internal_set__value(int32_t value);

  /// @brief Method .ctor, addr 0x270b000, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::BeatmapSaveDataCommon::BeatmapEventType type, int32_t value, float_t floatValue);

  /// @brief Method get_floatValue, addr 0x270b05c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatValue();

  /// @brief Method get_time, addr 0x270b044, size 0x8, virtual true, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_type, addr 0x270b04c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::BeatmapEventType get_type();

  /// @brief Method get_value, addr 0x270b054, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventData(EventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventData(EventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13430 };

  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _type, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::BeatmapEventType ____type;

  /// @brief Field _value, offset: 0x18, size: 0x4, def value: None
  int32_t ____value;

  /// @brief Field _floatValue, offset: 0x1c, size: 0x4, def value: None
  float_t ____floatValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData, ____time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData, ____type) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData, ____value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData, ____floatValue) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "EventData");
