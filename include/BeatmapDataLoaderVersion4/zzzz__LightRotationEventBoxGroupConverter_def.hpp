#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\LightRotationEventBoxGroupConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
CORDL_MODULE_EXPORT(LightRotationEventBoxGroupConverter)
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
class LightRotationEventBoxGroupConverter;
}
// Write type traits
MARK_REF_T(::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter*);
DEFINE_IL2CPP_CLASS(::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter*, "BeatmapDataLoaderVersion4", "LightRotationEventBoxGroupConverter");
// Dependencies BeatmapDataLoaderVersion4.EventBoxGroupConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.LightRotationEventBoxGroupConverter
class CORDL_TYPE LightRotationEventBoxGroupConverter : public ::BeatmapDataLoaderVersion4::EventBoxGroupConverter {
public:
  // Declarations
  /// @brief Method ConvertEvents, addr 0x3764c04, size 0x2d4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox, ::GlobalNamespace::IndexFilter* indexFilter);

  static inline ::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter*
  New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups, ::GlobalNamespace::IBeatmapBoxConverter* boxConverter);

  /// @brief Method .ctor, addr 0x3763f00, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups, ::GlobalNamespace::IBeatmapBoxConverter* boxConverter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationEventBoxGroupConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventBoxGroupConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationEventBoxGroupConverter(LightRotationEventBoxGroupConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationEventBoxGroupConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationEventBoxGroupConverter(LightRotationEventBoxGroupConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15444 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatmapDataLoaderVersion4::LightRotationEventBoxGroupConverter) == 0x28, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
