#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorBoostBeatmapEventDataProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(ColorBoostBeatmapEventDataProcessor)
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorBoostBeatmapEventDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorBoostBeatmapEventDataProcessor);
// Dependencies BeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorBoostBeatmapEventDataProcessor
class CORDL_TYPE ColorBoostBeatmapEventDataProcessor : public ::GlobalNamespace::BeatmapEventDataProcessor_1<::GlobalNamespace::ColorBoostBeatmapEventData*> {
public:
  // Declarations
  static inline ::GlobalNamespace::ColorBoostBeatmapEventDataProcessor* New_ctor();

  /// @brief Method .ctor, addr 0x3164ed8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorBoostBeatmapEventDataProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorBoostBeatmapEventDataProcessor(ColorBoostBeatmapEventDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorBoostBeatmapEventDataProcessor(ColorBoostBeatmapEventDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20980 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorBoostBeatmapEventDataProcessor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorBoostBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorBoostBeatmapEventDataProcessor*, "", "ColorBoostBeatmapEventDataProcessor");
