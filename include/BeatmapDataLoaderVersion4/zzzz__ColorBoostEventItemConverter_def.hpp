#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/ColorBoostEventItemConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatToTimeConverterProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ColorBoostEventItemConverter)
namespace BeatmapSaveDataVersion4 {
class BeatIndex;
}
namespace BeatmapSaveDataVersion4 {
struct ColorBoostEvent;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BpmTimeProcessor;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class ColorBoostEventItemConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter);
// Type: BeatmapDataLoaderVersion4::ColorBoostEventItemConverter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*
class CORDL_TYPE ColorBoostEventItemConverter : public ::GlobalNamespace::BeatToTimeConverterProvider {
public:
  // Declarations
  /// @brief Field _colorBoostEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBoostEvents,
                      put = __cordl_internal_set__colorBoostEvents))::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> _colorBoostEvents;

  /// @brief Method Convert, addr 0x14f70d4, size 0xb4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* Convert(::BeatmapSaveDataVersion4::BeatIndex* index);

  static inline ::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*
  New_ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEvents, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> const& __cordl_internal_get__colorBoostEvents() const;

  constexpr ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*>& __cordl_internal_get__colorBoostEvents();

  constexpr void __cordl_internal_set__colorBoostEvents(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> value);

  /// @brief Method .ctor, addr 0x14f6fb0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> colorBoostEvents, ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBoostEventItemConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventItemConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorBoostEventItemConverter(ColorBoostEventItemConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostEventItemConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorBoostEventItemConverter(ColorBoostEventItemConverter const&) = delete;

  /// @brief Field _colorBoostEvents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::BeatmapSaveDataVersion4::ColorBoostEvent, ::Array<::BeatmapSaveDataVersion4::ColorBoostEvent>*> ____colorBoostEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter, ____colorBoostEvents) == 0x18, "Offset mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::ColorBoostEventItemConverter*, "BeatmapDataLoaderVersion4", "ColorBoostEventItemConverter");
