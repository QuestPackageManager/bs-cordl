#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4/BeatmapLevelSaveDataUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelSaveDataUtils)
namespace BeatmapLevelSaveDataVersion4 {
class BeatmapLevelSaveData;
}
// Forward declare root types
namespace BeatmapDataLoaderVersion4 {
class BeatmapLevelSaveDataUtils;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils);
// Dependencies System.Object
namespace BeatmapDataLoaderVersion4 {
// Is value type: false
// CS Name: BeatmapDataLoaderVersion4.BeatmapLevelSaveDataUtils
class CORDL_TYPE BeatmapLevelSaveDataUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method MigrateBeatmapLevelSaveData, addr 0x270f3b8, size 0xf4, virtual false, abstract: false, final false
  static inline void MigrateBeatmapLevelSaveData(::BeatmapLevelSaveDataVersion4::BeatmapLevelSaveData* beatmapLevelSaveData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelSaveDataUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveDataUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelSaveDataUtils(BeatmapLevelSaveDataUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelSaveDataUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelSaveDataUtils(BeatmapLevelSaveDataUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13497 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils, 0x10>, "Size mismatch!");

} // namespace BeatmapDataLoaderVersion4
NEED_NO_BOX(::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapDataLoaderVersion4::BeatmapLevelSaveDataUtils*, "BeatmapDataLoaderVersion4", "BeatmapLevelSaveDataUtils");
