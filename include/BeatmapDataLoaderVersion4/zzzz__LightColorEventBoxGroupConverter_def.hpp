#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/LightColorEventBoxGroupConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapDataLoaderVersion4/zzzz__EventBoxGroupConverter_def.hpp"
CORDL_MODULE_EXPORT(LightColorEventBoxGroupConverter)
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
class IEnvironmentLightGroups;
}
namespace GlobalNamespace {
class IndexFilter;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class LightColorEventBoxGroupConverter;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::LightColorEventBoxGroupConverter);
// Dependencies BeatmapDataLoaderVersion4.EventBoxGroupConverter
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.LightColorEventBoxGroupConverter
class CORDL_TYPE LightColorEventBoxGroupConverter : public ::BeatmapDataLoaderVersion4::EventBoxGroupConverter {
public:
  // Declarations
  /// @brief Method ConvertEvents, addr 0x270e8d0, size 0x24c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventDataBox* ConvertEvents(::BeatmapSaveDataVersion4::EventBox eventBox, ::GlobalNamespace::IndexFilter* indexFilter);

  static inline ::BeatmapDataLoaderVersion4::LightColorEventBoxGroupConverter* New_ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                        ::GlobalNamespace::IEnvironmentLightGroups* lightGroups);

  /// @brief Method .ctor, addr 0x270e060, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData, ::GlobalNamespace::IEnvironmentLightGroups* lightGroups);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEventBoxGroupConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventBoxGroupConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorEventBoxGroupConverter(LightColorEventBoxGroupConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventBoxGroupConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorEventBoxGroupConverter(LightColorEventBoxGroupConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13489 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::LightColorEventBoxGroupConverter, 0x20>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::LightColorEventBoxGroupConverter);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::LightColorEventBoxGroupConverter*, "BeatmapDataLoaderVersion4", "LightColorEventBoxGroupConverter");
