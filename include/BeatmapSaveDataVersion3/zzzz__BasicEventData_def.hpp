#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/BasicEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicEventData)
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class BasicEventData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::BasicEventData);
// Dependencies BeatmapSaveDataCommon.BeatmapEventType, BeatmapSaveDataVersion3.BeatmapSaveDataItem
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.BasicEventData
class CORDL_TYPE BasicEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field et, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_et, put = __cordl_internal_set_et)) ::BeatmapSaveDataCommon::BeatmapEventType et;

  __declspec(property(get = get_eventType)) ::BeatmapSaveDataCommon::BeatmapEventType eventType;

  /// @brief Field f, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f)) float_t f;

  __declspec(property(get = get_floatValue)) float_t floatValue;

  /// @brief Field i, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  __declspec(property(get = get_value)) int32_t value;

  static inline ::BeatmapSaveDataVersion3::BasicEventData* New_ctor(float_t beat, ::BeatmapSaveDataCommon::BeatmapEventType eventType, int32_t value, float_t floatValue);

  constexpr ::BeatmapSaveDataCommon::BeatmapEventType const& __cordl_internal_get_et() const;

  constexpr ::BeatmapSaveDataCommon::BeatmapEventType& __cordl_internal_get_et();

  constexpr float_t const& __cordl_internal_get_f() const;

  constexpr float_t& __cordl_internal_get_f();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr void __cordl_internal_set_et(::BeatmapSaveDataCommon::BeatmapEventType value);

  constexpr void __cordl_internal_set_f(float_t value);

  constexpr void __cordl_internal_set_i(int32_t value);

  /// @brief Method .ctor, addr 0x270a3c8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, ::BeatmapSaveDataCommon::BeatmapEventType eventType, int32_t value, float_t floatValue);

  /// @brief Method get_eventType, addr 0x270a3b0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::BeatmapEventType get_eventType();

  /// @brief Method get_floatValue, addr 0x270a3c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatValue();

  /// @brief Method get_value, addr 0x270a3b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicEventData(BasicEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicEventData(BasicEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13417 };

  /// @brief Field et, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::BeatmapEventType ___et;

  /// @brief Field i, offset: 0x18, size: 0x4, def value: None
  int32_t ___i;

  /// @brief Field f, offset: 0x1c, size: 0x4, def value: None
  float_t ___f;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::BasicEventData, ___et) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BasicEventData, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::BasicEventData, ___f) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::BasicEventData, 0x20>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::BasicEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BasicEventData*, "BeatmapSaveDataVersion3", "BasicEventData");
