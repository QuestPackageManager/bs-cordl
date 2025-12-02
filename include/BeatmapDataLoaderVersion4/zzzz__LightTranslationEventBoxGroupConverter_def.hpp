#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightTranslationEventBoxGroupConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
CORDL_MODULE_EXPORT(LightTranslationEventBoxGroupConverter)
namespace BeatmapSaveDataVersion4 {
struct EventBox;
}
namespace BeatmapSaveDataVersion4 {
class LightshowSaveData;
}
namespace GlobalNamespace {
class BeatmapEventDataBox;
}
namespace GlobalNamespace {
class IBeatmapBoxConverter;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class LightTranslationEventBoxGroupConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter);
// Dependencies BeatmapDataLoaderVersion4.EventBoxGroupConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.LightTranslationEventBoxGroupConverter
class CORDL_TYPE LightTranslationEventBoxGroupConverter : public ::BeatmapDataLoaderVersion4::EventBoxGroupConverter {
public:
  // Declarations
  /// @brief Method ConvertEvents, addr 0x363a428, size 0x21c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox, ::GlobalNamespace::IndexFilter* indexFilter);

  static inline ::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*
  New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups, ::GlobalNamespace::IBeatmapBoxConverter* boxConverter);

  /// @brief Method .ctor, addr 0x3639464, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups, ::GlobalNamespace::IBeatmapBoxConverter* boxConverter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEventBoxGroupConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventBoxGroupConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationEventBoxGroupConverter(LightTranslationEventBoxGroupConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventBoxGroupConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationEventBoxGroupConverter(LightTranslationEventBoxGroupConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter, 0x28>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::LightTranslationEventBoxGroupConverter*, "BeatmapDataLoaderVersion4", "LightTranslationEventBoxGroupConverter");
