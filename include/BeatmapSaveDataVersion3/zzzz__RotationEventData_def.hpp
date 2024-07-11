#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/RotationEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__ExecutionTime_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationEventData)
namespace BeatmapSaveDataCommon {
struct ExecutionTime;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class RotationEventData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::RotationEventData);
// Type: BeatmapSaveDataVersion3::RotationEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::RotationEventData*
class CORDL_TYPE RotationEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field e, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e))::BeatmapSaveDataCommon::ExecutionTime e;

  __declspec(property(get = get_executionTime))::BeatmapSaveDataCommon::ExecutionTime executionTime;

  /// @brief Field r, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  __declspec(property(get = get_rotation)) float_t rotation;

  static inline ::BeatmapSaveDataVersion3::RotationEventData* New_ctor(float_t beat, ::BeatmapSaveDataCommon::ExecutionTime executionTime, float_t rotation);

  constexpr ::BeatmapSaveDataCommon::ExecutionTime const& __cordl_internal_get_e() const;

  constexpr ::BeatmapSaveDataCommon::ExecutionTime& __cordl_internal_get_e();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_e(::BeatmapSaveDataCommon::ExecutionTime value);

  constexpr void __cordl_internal_set_r(float_t value);

  /// @brief Method .ctor, addr 0x1504fac, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, ::BeatmapSaveDataCommon::ExecutionTime executionTime, float_t rotation);

  /// @brief Method get_executionTime, addr 0x1504f9c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::ExecutionTime get_executionTime();

  /// @brief Method get_rotation, addr 0x1504fa4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationEventData(RotationEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationEventData(RotationEventData const&) = delete;

  /// @brief Field e, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::ExecutionTime ___e;

  /// @brief Field r, offset: 0x18, size: 0x4, def value: None
  float_t ___r;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::RotationEventData, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::RotationEventData, ___e) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::RotationEventData, ___r) == 0x18, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::RotationEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::RotationEventData*, "BeatmapSaveDataVersion3", "RotationEventData");
