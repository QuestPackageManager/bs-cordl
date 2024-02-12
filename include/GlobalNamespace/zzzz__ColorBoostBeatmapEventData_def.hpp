#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorBoostBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorBoostBeatmapEventData);
// Type: ::ColorBoostBeatmapEventData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15111))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15114))
// CS Name: ::ColorBoostBeatmapEventData*
class CORDL_TYPE ColorBoostBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field boostColorsAreOn, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_boostColorsAreOn, put = __cordl_internal_set_boostColorsAreOn)) bool boostColorsAreOn;

  /// @brief Field _defaultCopy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultCopy, put = setStaticF__defaultCopy))::GlobalNamespace::ColorBoostBeatmapEventData* _defaultCopy;

  constexpr bool& __cordl_internal_get_boostColorsAreOn();

  constexpr bool const& __cordl_internal_get_boostColorsAreOn() const;

  constexpr void __cordl_internal_set_boostColorsAreOn(bool value);

  static inline void setStaticF__defaultCopy(::GlobalNamespace::ColorBoostBeatmapEventData* value);

  static inline ::GlobalNamespace::ColorBoostBeatmapEventData* getStaticF__defaultCopy();

  static inline ::GlobalNamespace::ColorBoostBeatmapEventData* New_ctor(float_t time, bool boostColorsAreOn);

  /// @brief Method .ctor, addr 0xe0e660, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(float_t time, bool boostColorsAreOn);

  /// @brief Method GetCopy, addr 0xe0e6ac, size 0x8c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0xe0e738, size 0x58, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorBoostBeatmapEventData(ColorBoostBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorBoostBeatmapEventData(ColorBoostBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBoostBeatmapEventData();

public:
  /// @brief Field boostColorsAreOn, offset: 0x30, size: 0x1, def value: None
  bool ___boostColorsAreOn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorBoostBeatmapEventData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorBoostBeatmapEventData, ___boostColorsAreOn) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorBoostBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorBoostBeatmapEventData*, "", "ColorBoostBeatmapEventData");
