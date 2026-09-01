#pragma once
// IWYU pragma private; include "GlobalNamespace\BPMChangeBeatmapEventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BPMChangeBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BPMChangeBeatmapEventData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BPMChangeBeatmapEventData*, "", "BPMChangeBeatmapEventData");
// Dependencies BeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BPMChangeBeatmapEventData
class CORDL_TYPE BPMChangeBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field bpm, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bpm, put = __cordl_internal_set_bpm)) float_t bpm;

  __declspec(property(get = get_nextSameTypeEventData)) ::GlobalNamespace::BPMChangeBeatmapEventData* nextSameTypeEventData;

  __declspec(property(get = get_previousSameTypeEventData)) ::GlobalNamespace::BPMChangeBeatmapEventData* previousSameTypeEventData;

  /// @brief Method GetCopy, addr 0x3259d98, size 0x78, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x3259e10, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::BPMChangeBeatmapEventData* New_ctor(float_t time, float_t bpm);

  constexpr float_t const& __cordl_internal_get_bpm() const;

  constexpr float_t& __cordl_internal_get_bpm();

  constexpr void __cordl_internal_set_bpm(float_t value);

  /// @brief Method .ctor, addr 0x3259d6c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t bpm);

  /// @brief Method get_nextSameTypeEventData, addr 0x3259cf0, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BPMChangeBeatmapEventData* get_nextSameTypeEventData();

  /// @brief Method get_previousSameTypeEventData, addr 0x3259c74, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BPMChangeBeatmapEventData* get_previousSameTypeEventData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BPMChangeBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BPMChangeBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BPMChangeBeatmapEventData(BPMChangeBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BPMChangeBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BPMChangeBeatmapEventData(BPMChangeBeatmapEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21242 };

  /// @brief Field bpm, offset: 0x38, size: 0x4, def value: None
  float_t ___bpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BPMChangeBeatmapEventData, ___bpm) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BPMChangeBeatmapEventData) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
